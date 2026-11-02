// rea decompile_all
// name: FUN_00072bb0
// address: 0x72bb0
// body: available
// range: 0x72bb0-0x72d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00072bb0(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_30 [8];
  int *local_28;
  
  *param_1 = DAT_00072d3c;
  uVar1 = (**(code **)(*param_3 + 0x14))(param_3);
  param_1[1] = uVar1;
  uVar1 = (**(code **)(*param_4 + 0x14))(param_4);
  param_1[2] = uVar1;
  iVar2 = FUN_00063b78(param_1 + 3,param_2);
  iVar5 = iVar2 + -0xc;
  *(undefined4 *)(iVar2 + 8) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  FUN_001f0168(iVar2 + 0xc,param_2);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  uVar1 = FUN_000b4964();
  FUN_000b472c(uVar1,iVar5);
  puVar3 = (undefined4 *)FUN_000b1210(auStack_30);
  *puVar3 = _DAT_00072d40;
  uVar1 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar1,s___StreamControlService_00072d42 + 2,auStack_30);
  if (iVar4 != 0) {
    (**(code **)(*local_28 + 0x28))(local_28,iVar5,iVar2 + 8);
  }
  iVar4 = *(int *)(iVar2 + -8);
  uVar1 = *(undefined4 *)(iVar2 + 8);
  FUN_001f00bc(iVar4 + 4);
  *(undefined4 *)(iVar4 + 0x28) = uVar1;
  FUN_001f06d4();
  iVar6 = *(int *)(iVar2 + -4);
  iVar4 = iVar6 + 4;
  uVar1 = *(undefined4 *)(iVar2 + 8);
  FUN_001f00bc(iVar4);
  *(undefined4 *)(iVar6 + 0x28) = uVar1;
  FUN_001f06d4(iVar4);
  iVar4 = FUN_001b6c4c(auStack_30);
  if (iVar4 != 0) {
    (**(code **)(*local_28 + 0x30))(local_28,*(undefined4 *)(iVar2 + -8));
    (**(code **)(*local_28 + 0x30))(local_28,*(undefined4 *)(iVar2 + -4));
  }
  FUN_000b1228(auStack_30);
  return iVar5;
}

