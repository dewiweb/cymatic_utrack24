// rea decompile_all
// name: FUN_006e6f80
// address: 0x6e6f80
// body: available
// range: 0x6e6f80-0x6e7298 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e6f80(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *_Memory;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728a41;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0068a830(param_1,1);
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  *in_ECX = juce::AlertWindow::vftable;
  in_ECX[0x1e] = juce::AlertWindow::vftable;
  in_ECX[0x1f] = &DAT_00bfe12c;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 9;
  in_ECX[0x26] = param_3;
  in_ECX[0x28] = juce::ComponentBoundsConstrainer::vftable;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0x3fffffff;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0x3fffffff;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  *(undefined8 *)(in_ECX + 0x32) = 0;
  in_ECX[0x34] = juce::ComponentDragger::vftable;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  local_8 = 0xe;
  in_ECX[0x56] = param_4;
  *(undefined1 *)(in_ECX + 0x57) = 1;
  param_1 = param_1 & 0xffffff00;
  EnumWindows(FUN_00686f00,(LPARAM)&param_1);
  FUN_006d1c90(param_1);
  puVar2 = param_2;
  if (*(char *)*param_2 == '\0') {
    FUN_0045c990(&DAT_00c05a6c,uVar3);
    iVar1 = in_ECX[0x1f];
    in_ECX[0x1f] = param_1;
    _Memory = (int *)(iVar1 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  FUN_006d0ed0(puVar2);
  FUN_006e66d0();
  in_ECX[0x2e] = 0x10000;
  in_ECX[0x2f] = 0x10000;
  in_ECX[0x30] = 0x10000;
  in_ECX[0x31] = 0x10000;
  ExceptionList = local_10;
  return;
}

