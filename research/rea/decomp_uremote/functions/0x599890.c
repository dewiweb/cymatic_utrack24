// rea decompile_all
// name: FUN_00599890
// address: 0x599890
// body: available
// range: 0x599890-0x5999cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00599890(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8,
            undefined2 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d6c67;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::BaseQueuedNotification::vftable;
  in_ECX[1] = 0;
  *in_ECX = CPCHAI::TypedQueuedNotification<CPNS::IRemoteDevice_GetParameterInfo_AsyncReturnHandler>
            ::vftable;
  in_ECX[2] = param_1;
  local_8 = 0;
  *in_ECX = CPCHAI::NotificationManager_RemoteDevice_GetParameterInfo::
            RemoteDevice_GetParameterInfo_Text_Return::vftable;
  in_ECX[3] = param_2;
  in_ECX[4] = *param_3;
  in_ECX[5] = param_3[1];
  in_ECX[6] = param_3[2];
  in_ECX[7] = param_3[3];
  uVar1 = param_4[1];
  in_ECX[8] = *param_4;
  in_ECX[9] = uVar1;
  FUN_00501870(param_5);
  local_8 = CONCAT31(local_8._1_3_,1);
  in_ECX[0xc] = param_6;
  *(undefined2 *)(in_ECX + 0xd) = param_7;
  *(undefined2 *)((int)in_ECX + 0x36) = param_8;
  *(undefined2 *)(in_ECX + 0xe) = param_9;
  FUN_00544600(uVar2);
  if (in_ECX[0xc] != 0) {
    (*(code *)**(undefined4 **)(in_ECX[0xc] + 4 + *(int *)(*(int *)(in_ECX[0xc] + 4) + 8)))();
  }
  ExceptionList = local_10;
  return in_ECX;
}

