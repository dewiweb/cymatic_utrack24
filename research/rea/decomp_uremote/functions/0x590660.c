// rea decompile_all
// name: FUN_00590660
// address: 0x590660
// body: available
// range: 0x590660-0x59095f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00590660(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  undefined4 *local_48;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d64e8;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::CMIDITranslator::vftable;
  in_ECX[1] = CPCHAI::CMIDITranslator::vftable;
  in_ECX[2] = CPCHAI::CMIDITranslator::vftable;
  in_ECX[3] = CPCHAI::CMIDITranslator::vftable;
  in_ECX[4] = CPCHAI::CMIDITranslator::vftable;
  in_ECX[5] = CPCHAI::CMIDITranslator::vftable;
  local_8 = 6;
  if (in_ECX == (undefined4 *)0x0) {
    local_48 = (undefined4 *)0x0;
  }
  else {
    local_48 = in_ECX + 5;
  }
  (**(code **)(*(int *)(**(int **)(in_ECX[6] + 0x88) + 0xc +
                       *(int *)(*(int *)(**(int **)(in_ECX[6] + 0x88) + 0xc) + 4)) + 0x110))
            (local_48,uVar1);
  if (in_ECX[9] != 0) {
    (**(code **)(*(int *)(**(int **)(in_ECX[6] + 0x88) + 0xc +
                         *(int *)(*(int *)(**(int **)(in_ECX[6] + 0x88) + 0xc) + 4)) + 0x118))
              (in_ECX[9]);
    iVar2 = (**(code **)(*(int *)(in_ECX[9] + 4 + *(int *)(*(int *)(in_ECX[9] + 4) + 4)) + 0x24))();
    (**(code **)(*(int *)(iVar2 + 0x28 + *(int *)(*(int *)(iVar2 + 0x28) + 8)) + 4))();
  }
  in_ECX[9] = 0;
  piVar3 = in_ECX + 0xc;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  if (*piVar3 != 0) {
    FUN_005b13e8(*piVar3);
  }
  *piVar3 = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  FUN_00560d70();
  if (in_ECX[10] != 0) {
    (**(code **)(*(int *)(in_ECX[10] + 0x28 + *(int *)(*(int *)(in_ECX[10] + 0x28) + 8)) + 4))();
  }
  in_ECX[10] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x17] = 0;
  in_ECX[7] = 0;
  in_ECX[6] = 0;
  in_ECX[8] = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar3 = in_ECX + 0xc;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  if (*piVar3 != 0) {
    FUN_005b13e8(*piVar3);
  }
  *piVar3 = 0;
  in_ECX[5] = CPNS::ICHAI_GlobalTimer_NotificationHandler::vftable;
  in_ECX[4] = CPNS::ICHAI_Timer_NotificationHandler::vftable;
  in_ECX[3] = CPNS::IInput_ClockListenerControlNotificationHandler::vftable;
  in_ECX[2] = CPNS::IOutput_ClockGeneratorNotificationHandler::vftable;
  in_ECX[1] = CPNS::IBaseLocalDevice_SignalNotificationHandler::vftable;
  *in_ECX = CPNS::IInput_NotificationHandler::vftable;
  ExceptionList = local_10;
  return;
}

