// rea decompile_all
// name: FUN_00542740
// address: 0x542740
// body: available
// range: 0x542740-0x542a26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005427df) */
/* WARNING: Removing unreachable block (ram,0x0054283b) */

undefined4 * FUN_00542740(undefined4 param_1,int param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d21bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    in_ECX[10] = &DAT_005ecb84;
    in_ECX[0x67] = &DAT_005efda0;
    in_ECX[0x6a] = &DAT_005ea7d8;
    in_ECX[0x6d] = &DAT_005ea7cc;
    in_ECX[100] = CPNS::IObject::vftable;
    in_ECX[0x66] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x67] + 4) + 0x19c) =
         CPNS::IHookedObject::vftable;
    in_ECX[0x69] = CPNS::IBaseLocalDevice::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x6a] + 4) + 0x1a8) =
         CPNS::IBaseLocalDevice::vftable;
    local_8 = 2;
    FUN_00543480(0);
    local_8 = 3;
  }
  FUN_0055bb80(0x105,param_1,0);
  in_ECX[0x5d] = CPNS::IPipe_NotificationHandler::vftable;
  *in_ECX = CPCHAI::CSharedDisplayClientLocalDevice::vftable;
  in_ECX[0x5d] = CPCHAI::CSharedDisplayClientLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CSharedDisplayClientLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CSharedDisplayClientLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CSharedDisplayClientLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x28) =
       CPCHAI::CSharedDisplayClientLocalDevice::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x168;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x170;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x17c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x24) = *(int *)(in_ECX[10] + 0x10) + -0x188;
  *(undefined2 *)(in_ECX + 0x5f) = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x60] = 0;
  *(undefined2 *)(in_ECX + 0x61) = 0;
  *(undefined2 *)((int)in_ECX + 0x186) = 0;
  *(undefined2 *)(in_ECX + 0x62) = 0;
  *(undefined2 *)((int)in_ECX + 0x18a) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

