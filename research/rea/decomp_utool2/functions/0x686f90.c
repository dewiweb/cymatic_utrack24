// rea decompile_all
// name: FUN_00686f90
// address: 0x686f90
// body: available
// range: 0x686f90-0x6870a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00686f90(void)

{
  uint uVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int iVar4;
  HWND pHVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720e8d;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pHVar2 = GetForegroundWindow();
  if (pHVar2 != (HWND)0x0) {
    pHVar2 = GetAncestor(pHVar2,2);
    local_8 = 0;
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      DAT_00c8a67c = FUN_006cb960(uVar1);
    }
    uVar1 = *(uint *)(DAT_00c8a67c + 0x50);
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        ExceptionList = local_10;
        return 0;
      }
      local_8 = 1;
      if (DAT_00c8a67c == 0) {
        operator_new(0xd0);
        DAT_00c8a67c = FUN_006cb960();
      }
      if (uVar1 < *(uint *)(DAT_00c8a67c + 0x50)) {
        uVar3 = *(undefined4 *)(*(int *)(DAT_00c8a67c + 0x48) + uVar1 * 4);
      }
      else {
        uVar3 = 0;
      }
      local_8 = 0xffffffff;
      iVar4 = FUN_006f6dd6(uVar3,0,&juce::ComponentPeer::RTTI_Type_Descriptor,
                           &juce::HWNDComponentPeer::RTTI_Type_Descriptor,0);
    } while ((iVar4 == 0) || (pHVar5 = GetAncestor(*(HWND *)(iVar4 + 0x38),2), pHVar5 != pHVar2));
  }
  ExceptionList = local_10;
  return 1;
}

