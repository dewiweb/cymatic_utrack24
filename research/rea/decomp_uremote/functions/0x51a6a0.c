// rea decompile_all
// name: FUN_0051a6a0
// address: 0x51a6a0
// body: available
// range: 0x51a6a0-0x51aac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0051a730) */

undefined4 * FUN_0051a6a0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf8ba;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[10] = &DAT_005e9d4c;
    in_ECX[0x3e] = &DAT_005efda0;
    in_ECX[0x41] = &DAT_005efa98;
    in_ECX[0x3b] = CPNS::IObject::vftable;
    in_ECX[0x3d] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x3e] + 4) + 0xf8) = CPNS::IHookedObject::vftable
    ;
    local_8 = 1;
    FUN_00520760(0);
    local_8 = 2;
  }
  FUN_0054f350(0x8001,param_1,in_ECX,0);
  local_8 = 3;
  *in_ECX = CPCHAI::CRemoteDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CRemoteDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CRemoteDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::CRemoteDevice::vftable
  ;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0xc4;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0xcc;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0xd8;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  FUN_00520950(param_1 + 0xb08,"IRemoteDevice_WatcherNotificationHandler");
  in_ECX[0x14] = CPCHAI::RemoteDeviceWatcherNotificationManager::vftable;
  local_8._0_1_ = 4;
  *(undefined2 *)(in_ECX + 0x1a) = 0;
  FUN_00503bc0(uVar1);
  FUN_00503380();
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  FUN_00506310();
  local_8._0_1_ = 5;
  FUN_005017d0();
  local_8._0_1_ = 6;
  FUN_005017d0();
  local_8 = CONCAT31(local_8._1_3_,7);
  in_ECX[0x38] = param_2;
  in_ECX[0x28] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x29] = 0;
  *(undefined1 *)(in_ECX + 0x36) = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x32] = 0;
  FUN_0051f710(in_ECX);
  ExceptionList = local_10;
  return in_ECX;
}

