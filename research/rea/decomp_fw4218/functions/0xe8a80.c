// rea decompile_all
// name: FUN_000e8a80
// address: 0xe8a80
// body: available
// range: 0xe8a80-0xe8b6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe8b6a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000e8a80(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  
  uVar5 = DAT_000e8b70;
  param_1[1] = 0;
  *param_1 = uVar5;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  iVar1 = FUN_0007983e(param_1 + 2);
  iVar1 = FUN_0007983e(iVar1 + 4);
  iVar1 = FUN_0007983e(iVar1 + 4);
  puVar2 = _DAT_000e8b74;
  iVar1 = FUN_000e8878(iVar1 + 4,iVar1 + -0x10,*_DAT_000e8b74,_DAT_000e8b74[1]);
  iVar1 = FUN_000e8878(iVar1 + 0x10,iVar1 + -0x14,puVar2[2],puVar2[3]);
  iVar1 = FUN_00063858(iVar1 + 0x10,s___USBCmdSequenceTimer_000e8b76 + 2);
  local_20 = iVar1 + -0x34;
  iVar1 = FUN_00202184(iVar1 + 0x54,&local_20,puVar2[4],puVar2[5]);
  *(undefined4 *)(iVar1 + 0x10) = 3;
  *(int *)(iVar1 + 0x14) = iVar1;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  FUN_001f0168(iVar1 + 0x1c,s_USB_Command_Sequence_Lock_000e8b8c);
  local_1c = iVar1 + -0x88;
  iVar1 = FUN_00202184(iVar1 + 0x40,&local_1c,puVar2[6],puVar2[7]);
  *(undefined4 *)(iVar1 + 0x10) = 3;
  *(int *)(iVar1 + 0x14) = iVar1;
  puVar2 = (undefined4 *)FUN_000b1210(iVar1 + 0x18);
  *puVar2 = _DAT_000e8ba8;
  uVar6 = _DAT_000e8b74[9];
  uVar5 = _DAT_000e8b74[8];
  iVar1 = FUN_001f01c4(0x10,1);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    local_18 = puVar2 + -0x38;
    piVar3 = (int *)FUN_00202184(iVar1,&local_18,uVar5,uVar6);
  }
  piVar4 = (int *)puVar2[-0x22];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    puVar2[-0x22] = piVar3;
  }
  if (puVar2[-0x22] != 0) {
    uVar5 = FUN_000b4964();
    FUN_000b4840(uVar5,s___USBBusDriverService_000e8baa + 2,puVar2);
    return CONCAT44(local_20,puVar2 + -0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

