// rea decompile_all
// name: FUN_0053ca30
// address: 0x53ca30
// body: available
// range: 0x53ca30-0x53cd60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0053cadc) */
/* WARNING: Removing unreachable block (ram,0x0053cb39) */

undefined4 * FUN_0053ca30(undefined4 param_1,int param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d1e21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    in_ECX[10] = &DAT_005ebd88;
    in_ECX[0x7f] = &DAT_005efda0;
    in_ECX[0x82] = &DAT_005ea7d8;
    in_ECX[0x85] = &DAT_005ea7cc;
    in_ECX[0x88] = &DAT_005ec254;
    in_ECX[0x7c] = CPNS::IObject::vftable;
    in_ECX[0x7e] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x7f] + 4) + 0x1fc) =
         CPNS::IHookedObject::vftable;
    in_ECX[0x81] = CPNS::IBaseLocalDevice::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x82] + 4) + 0x208) =
         CPNS::IBaseLocalDevice::vftable;
    local_8 = 2;
    FUN_0053a350(0);
    local_8 = 3;
    FUN_0053eb90(0);
    local_8 = 4;
  }
  FUN_0055bb80(0x107,param_1,0);
  in_ECX[0x5d] = CPNS::IOutput_NotificationHandler::vftable;
  local_8 = 6;
  *in_ECX = CPCHAI::CVMIDILinkOutLocalDevice::vftable;
  in_ECX[0x5d] = CPCHAI::CVMIDILinkOutLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CVMIDILinkOutLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CVMIDILinkOutLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CVMIDILinkOutLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x28) =
       CPCHAI::CVMIDILinkOutLocalDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x14) + 0x28) =
       CPCHAI::CVMIDILinkOutLocalDevice::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x1c8;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x1d0;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x1dc;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x24) = *(int *)(in_ECX[10] + 0x10) + -0x1e8;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x14) + 0x24) = *(int *)(in_ECX[10] + 0x14) + -500;
  FUN_0058fbb0(in_ECX);
  *(undefined2 *)(in_ECX + 0x79) = 0;
  in_ECX[0x78] = 0;
  *(undefined1 *)(in_ECX + 0x7a) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

