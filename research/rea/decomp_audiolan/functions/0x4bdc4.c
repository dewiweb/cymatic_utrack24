// rea decompile_all
// name: FUN_0004bdc4
// address: 0x4bdc4
// body: available
// range: 0x4bdc4-0x4beb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0004bdc4(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint local_20 [2];
  
  *(int *)param_1 = param_1;
  uVar1 = FUN_000034d0(&DAT_0004beb4);
  iVar4 = DAT_0004beb8;
  iVar2 = DAT_0004beb8;
  if (uVar1 != 0) {
    puVar5 = local_20 + 1;
    if (0x80 < uVar1) {
      puVar5 = local_20;
    }
    local_20[0] = uVar1;
    local_20[1] = 0x80;
    iVar2 = FUN_001da28c((int *)(param_1 + 4),*puVar5,uVar1);
    iVar2 = iVar2 + 0xc;
  }
  *(int *)(param_1 + 4) = iVar2;
  FUN_00003628(iVar2,&DAT_0004beb4,uVar1);
  *(int *)(param_1 + 8) = iVar4;
  piVar6 = (int *)(param_1 + 0xc);
  *piVar6 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x2c,0);
  piVar3[2] = iVar4;
  *piVar3 = *piVar6;
  piVar3[1] = 1;
  *piVar6 = (int)piVar3;
  iVar4 = piVar3[2];
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0x18) = iVar4 + 0x2c;
  *(int *)(param_1 + 0x1c) = iVar4;
  *(int *)(param_1 + 0x14) = iVar4 + 0x2c;
  *(int *)iVar4 = iVar4;
  *(int *)(*(int *)(param_1 + 0x1c) + 4) = *(int *)(param_1 + 0x1c);
  return param_1;
}

