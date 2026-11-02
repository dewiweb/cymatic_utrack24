// rea decompile_all
// name: FUN_0059ae30
// address: 0x59ae30
// body: available
// range: 0x59ae30-0x59b01e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0059aec0) */

undefined4 * FUN_0059ae30(undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d6f9d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    in_ECX[10] = &DAT_005efb40;
    in_ECX[0x44] = &DAT_005efda0;
    in_ECX[0x47] = &DAT_005efa98;
    in_ECX[0x41] = CPNS::IObject::vftable;
    in_ECX[0x43] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x44] + 4) + 0x110) =
         CPNS::IHookedObject::vftable;
    local_8 = 1;
    FUN_005482a0(0);
    local_8 = 2;
  }
  FUN_0056af60(param_1,0,0x60,0);
  *in_ECX = CPCHAI::AppIntCtrlMsgPayload_SmartConnect_Source::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::AppIntCtrlMsgPayload_SmartConnect_Source::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::AppIntCtrlMsgPayload_SmartConnect_Source::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::AppIntCtrlMsgPayload_SmartConnect_Source::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0xdc;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0xe4;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0xf0;
  *(undefined2 *)(in_ECX + 0x3c) = param_2;
  in_ECX[0x3d] = param_3;
  *(undefined1 *)(in_ECX + 0x3e) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

