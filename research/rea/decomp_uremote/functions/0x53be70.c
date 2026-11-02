// rea decompile_all
// name: FUN_0053be70
// address: 0x53be70
// body: available
// range: 0x53be70-0x53c1c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0053bf1c) */
/* WARNING: Removing unreachable block (ram,0x0053bf79) */

undefined4 * FUN_0053be70(undefined4 param_1,int param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d1d2f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    in_ECX[10] = &DAT_005eb8b8;
    in_ECX[0x80] = &DAT_005efda0;
    in_ECX[0x83] = &DAT_005ea7d8;
    in_ECX[0x86] = &DAT_005ea7cc;
    in_ECX[0x89] = &DAT_005ec254;
    in_ECX[0x7d] = CPNS::IObject::vftable;
    in_ECX[0x7f] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x80] + 4) + 0x200) =
         CPNS::IHookedObject::vftable;
    in_ECX[0x82] = CPNS::IBaseLocalDevice::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x83] + 4) + 0x20c) =
         CPNS::IBaseLocalDevice::vftable;
    local_8 = 2;
    FUN_0053b2e0(0);
    local_8 = 3;
    FUN_0053e960(0);
    local_8 = 4;
  }
  FUN_0055bb80(0x106,param_1,0);
  in_ECX[0x5d] = CPNS::IInput_NotificationHandler::vftable;
  in_ECX[0x5e] = CPNS::IInput_ClockListenerControlNotificationHandler::vftable;
  local_8 = 7;
  *in_ECX = CPCHAI::CVMIDILinkInLocalDevice::vftable;
  in_ECX[0x5d] = CPCHAI::CVMIDILinkInLocalDevice::vftable;
  in_ECX[0x5e] = CPCHAI::CVMIDILinkInLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CVMIDILinkInLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CVMIDILinkInLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CVMIDILinkInLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x28) =
       CPCHAI::CVMIDILinkInLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x14) + 0x28) =
       CPCHAI::CVMIDILinkInLocalDevice::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x1cc;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x1d4;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x1e0;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x24) = *(int *)(in_ECX[10] + 0x10) + -0x1ec;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x14) + 0x24) = *(int *)(in_ECX[10] + 0x14) + -0x1f8;
  FUN_0058fbb0(in_ECX);
  *(undefined2 *)(in_ECX + 0x7a) = 0;
  in_ECX[0x79] = 0;
  *(undefined1 *)(in_ECX + 0x7b) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

