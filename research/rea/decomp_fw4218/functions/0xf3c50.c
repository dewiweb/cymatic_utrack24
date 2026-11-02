// rea decompile_all
// name: FUN_000f3c50
// address: 0xf3c50
// body: available
// range: 0xf3c50-0xf3db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f3c50(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar3 = FUN_00077ce4(*(int *)(param_1 + 8) + 0x1c,*(undefined1 *)(param_1 + 4),
                       s_BCo_Configuration_000f3db4,1,0,0);
  iVar2 = DAT_000f3dcc;
  iVar4 = DAT_000f3dc8;
  uVar5 = _DAT_000f3dd0;
  if (iVar3 == 0) {
LAB_000f3d28:
    FUN_00002898(uVar5);
    return 0;
  }
  iVar3 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar3 + DAT_000f3dc8 + 0x14) != 0) ||
     (iVar6 = 0, *(int *)(iVar3 + DAT_000f3dcc + 0x14) != 0)) {
    iVar6 = 1;
  }
  iVar3 = FUN_000781f4(iVar3 + 0x1c,*(undefined1 *)(param_1 + 4),
                       s___Archwave_USB_Audio_2_0_000f3dd2 + 2,0,iVar6 + 4,1,0,0x20);
  uVar5 = DAT_000f3dec;
  if (iVar3 == 0) goto LAB_000f3d28;
  FUN_0006eddc(param_1 + 0x1c,param_1 + 0x94);
  iVar3 = FUN_000c688c(param_1,param_1 + 0x1c);
  if (iVar3 == 0) {
    FUN_00002898(DAT_000f3df0,*(undefined1 *)(param_1 + 4));
    return 0;
  }
  iVar3 = param_1 + 0x34;
  FUN_0006eddc(iVar3,param_1 + 0xac);
  FUN_0006eddc(iVar3,param_1 + 0xc4);
  iVar3 = FUN_000c688c(param_1,iVar3);
  if (iVar3 == 0) {
    FUN_00002898(DAT_000f3df4,*(undefined1 *)(param_1 + 4));
    return 0;
  }
  iVar3 = param_1 + 0x4c;
  FUN_0006eddc(iVar3,param_1 + 0xb8);
  FUN_0006eddc(iVar3,param_1 + 0xe8);
  iVar3 = FUN_000c688c(param_1,iVar3);
  if (iVar3 == 0) {
    FUN_00002898(DAT_000f3df8,*(undefined1 *)(param_1 + 4));
    return 0;
  }
  if ((*(int *)(*(int *)(param_1 + 8) + iVar4 + 0x14) == 0) &&
     (*(int *)(*(int *)(param_1 + 8) + iVar2 + 0x14) == 0)) {
    *(undefined1 *)(param_1 + 0x81) = 3;
    *(undefined1 *)(param_1 + 0x13a) = 3;
  }
  else {
    FUN_0006eddc(param_1 + 100,param_1 + 0x10c);
    iVar4 = FUN_000c688c(param_1,param_1 + 100);
    if (iVar4 == 0) {
      uVar1 = *(undefined1 *)(param_1 + 4);
      uVar5 = DAT_000f3dfc;
      goto LAB_000f3dae;
    }
  }
  FUN_0006eddc(param_1 + 0x7c,param_1 + 0x130);
  iVar4 = FUN_000c688c(param_1,param_1 + 0x7c);
  if (iVar4 != 0) {
    return 1;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  uVar5 = DAT_000f3e00;
LAB_000f3dae:
  FUN_00002898(uVar5,uVar1);
  return 0;
}

