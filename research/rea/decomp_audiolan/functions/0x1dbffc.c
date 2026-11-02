// rea decompile_all
// name: FUN_001dbffc
// address: 0x1dbffc
// body: available
// range: 0x1dbffc-0x1dc103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001dbffc(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = *(int *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)FUN_0010f82c(0xc,0);
  iVar2 = FUN_0010f82c(0x14,0);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 1;
  *param_1 = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[2] = (int)puVar3;
  param_1[3] = (int)(puVar3 + 0x14);
  param_1[2] = (int)(puVar3 + 0x14);
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  param_1[4] = (int)puVar3;
  *puVar3 = 0;
  iVar2 = FUN_001d1450(param_1,*(undefined4 *)(*(int *)(param_2 + 0x10) + 4),param_1[4]);
  *(int *)(param_1[4] + 4) = iVar2;
  iVar5 = param_1[4];
  if (iVar2 == 0) {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(param_1[4] + 0xc) = param_1[4];
  }
  else {
    do {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar4 + 8);
    } while (iVar2 != 0);
    *(int *)(iVar5 + 8) = iVar4;
    iVar2 = *(int *)(param_1[4] + 4);
    do {
      iVar5 = iVar2;
      iVar2 = *(int *)(iVar5 + 0xc);
    } while (iVar2 != 0);
    *(int *)(param_1[4] + 0xc) = iVar5;
  }
  return param_1;
}

