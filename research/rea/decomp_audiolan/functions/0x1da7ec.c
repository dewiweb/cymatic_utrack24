// rea decompile_all
// name: FUN_001da7ec
// address: 0x1da7ec
// body: available
// range: 0x1da7ec-0x1da957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001da7ec(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_28;
  uint local_24;
  
  uVar4 = *(uint *)(*param_1 + -4);
  if (0xffffffef < uVar4) {
    local_28 = 0xfffffff0;
    FUN_0010f7cc(8,&DAT_001da958,&DAT_001da958,uVar4);
  }
  iVar3 = *param_1;
  uVar1 = *(uint *)(iVar3 + -4);
  uVar5 = uVar1 + 1;
  if (uVar5 == 0) {
    FUN_001da314(param_1);
    iVar3 = DAT_001da95c;
  }
  else {
    iVar6 = uVar1 - uVar4;
    if ((*(int *)(iVar3 + -0xc) + 1U < 2) && (uVar5 <= *(uint *)(iVar3 + -8))) {
      if (iVar6 != 0) {
        FUN_000036fc(uVar4 + 1 + iVar3,iVar3 + uVar4,iVar6);
      }
      FUN_00003850(*param_1 + uVar4,1,param_2);
      *(uint *)(*param_1 + -4) = uVar5;
      *(undefined1 *)(*param_1 + uVar5) = 0;
      return param_1;
    }
    local_28 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (local_28 < uVar1 + 0x80) {
      local_28 = uVar1 + 0x80;
    }
    local_24 = uVar5;
    puVar2 = &local_28;
    if (local_28 < uVar5) {
      puVar2 = &local_24;
    }
    iVar3 = FUN_001da28c(param_1,*puVar2,uVar5);
    if (uVar4 != 0) {
      FUN_00003628(iVar3 + 0xc,*param_1,uVar4);
    }
    FUN_00003850(iVar3 + uVar4 + 0xc,1,param_2);
    if (iVar6 != 0) {
      FUN_00003628(iVar3 + uVar4 + 0xd,*param_1 + uVar4,iVar6);
    }
    FUN_001da314(param_1);
    iVar3 = iVar3 + 0xc;
  }
  *param_1 = iVar3;
  return param_1;
}

