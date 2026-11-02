// rea decompile_all
// name: FUN_00553d60
// address: 0x553d60
// body: available
// range: 0x553d60-0x553f64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00553d60(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d372e;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::CTaskDeviceInfoGetPerfMsgInfo::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0xa0) =
       CPCHAI::CTaskDeviceInfoGetPerfMsgInfo::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0x9c) = *(int *)(in_ECX[0x28] + 4) + -0xac;
  local_8 = 5;
  iVar2 = FUN_005447c0(uVar1);
  if (iVar2 != 0) {
    FUN_0051ead0(in_ECX[0x16],in_ECX[0x17]);
  }
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  puVar3 = in_ECX + 0x3e;
  *puVar3 = CPCHAI::TypedAsyncReturnManager<CPNS::IRemoteDevice_GetIndexListItem_AsyncReturnHandler>
            ::vftable;
  local_8._0_1_ = 6;
  if (in_ECX[0x3f] != 0) {
    FUN_00508530(puVar3);
  }
  *puVar3 = CPCHAI::BaseNotificationManager::vftable;
  puVar3 = in_ECX + 0x39;
  *puVar3 = CPCHAI::
            TypedAsyncReturnManager<CPNS::IRemoteDevice_GetSelectorParameterValueText_AsyncReturnHandler>
            ::vftable;
  local_8._0_1_ = 7;
  if (in_ECX[0x3a] != 0) {
    FUN_00508530(puVar3);
  }
  *puVar3 = CPCHAI::BaseNotificationManager::vftable;
  puVar3 = in_ECX + 0x34;
  *puVar3 = CPCHAI::
            TypedAsyncReturnManager<CPNS::IRemoteDevice_GetModifierDataTypeInfo_AsyncReturnHandler>
            ::vftable;
  local_8._0_1_ = 8;
  if (in_ECX[0x35] != 0) {
    FUN_00508530(puVar3);
  }
  *puVar3 = CPCHAI::BaseNotificationManager::vftable;
  puVar3 = in_ECX + 0x2f;
  *puVar3 = CPCHAI::TypedAsyncReturnManager<CPNS::IRemoteDevice_GetParameterPath_AsyncReturnHandler>
            ::vftable;
  local_8._0_1_ = 9;
  if (in_ECX[0x30] != 0) {
    FUN_00508530(puVar3);
  }
  *puVar3 = CPCHAI::BaseNotificationManager::vftable;
  puVar3 = in_ECX + 0x2a;
  *puVar3 = CPCHAI::TypedAsyncReturnManager<CPNS::IRemoteDevice_GetParameterInfo_AsyncReturnHandler>
            ::vftable;
  local_8 = CONCAT31(local_8._1_3_,10);
  if (in_ECX[0x2b] != 0) {
    FUN_00508530(puVar3);
  }
  *puVar3 = CPCHAI::BaseNotificationManager::vftable;
  local_8 = 0xffffffff;
  FUN_00598280();
  ExceptionList = local_10;
  return;
}

