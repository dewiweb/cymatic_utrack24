// rea decompile_all
// name: FUN_00540d80
// address: 0x540d80
// body: available
// range: 0x540d80-0x541075 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00540e1f) */
/* WARNING: Removing unreachable block (ram,0x00540e7b) */

undefined4 * FUN_00540d80(undefined4 param_1,int param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d20bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    in_ECX[10] = &DAT_005ec718;
    in_ECX[0x68] = &DAT_005efda0;
    in_ECX[0x6b] = &DAT_005ea7d8;
    in_ECX[0x6e] = &DAT_005ea7cc;
    in_ECX[0x65] = CPNS::IObject::vftable;
    in_ECX[0x67] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x68] + 4) + 0x1a0) =
         CPNS::IHookedObject::vftable;
    in_ECX[0x6a] = CPNS::IBaseLocalDevice::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x6b] + 4) + 0x1ac) =
         CPNS::IBaseLocalDevice::vftable;
    local_8 = 2;
    FUN_00541cd0(0);
    local_8 = 3;
  }
  FUN_0055bb80(0x104,param_1,0);
  in_ECX[0x5d] = CPNS::IPipe_NotificationHandler::vftable;
  in_ECX[0x5e] = CPNS::IBaseLocalDevice_SignalNotificationHandler::vftable;
  *in_ECX = CPCHAI::CSharedDisplayLocalDevice::vftable;
  in_ECX[0x5d] = CPCHAI::CSharedDisplayLocalDevice::vftable;
  in_ECX[0x5e] = CPCHAI::CSharedDisplayLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CSharedDisplayLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CSharedDisplayLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CSharedDisplayLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x28) =
       CPCHAI::CSharedDisplayLocalDevice::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x16c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x174;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x180;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x24) = *(int *)(in_ECX[10] + 0x10) + -0x18c;
  *(undefined2 *)(in_ECX + 0x60) = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x61] = 0;
  *(undefined2 *)(in_ECX + 0x62) = 0;
  *(undefined1 *)((int)in_ECX + 0x18e) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

