// rea decompile_all
// name: FUN_004a6d80
// address: 0x4a6d80
// body: available
// range: 0x4a6d80-0x4a6e40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a6d80(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fca26;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::HWNDComponentPeer::WindowClassHolder::vftable;
  local_8 = 0;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  if (*(int *)(DAT_00c8a67c + 0x50) == 0) {
    if (DAT_00c8a64c == (HINSTANCE)0x0) {
      DAT_00c8a64c = GetModuleHandleA((LPCSTR)0x0);
    }
    UnregisterClassW((LPCWSTR)(uint)*(ushort *)(in_ECX + 1),DAT_00c8a64c);
  }
  *in_ECX = juce::DeletedAtShutdown::vftable;
  if (DAT_00c8a69c == in_ECX) {
    DAT_00c8a69c = (undefined4 *)0x0;
  }
  FUN_00637f30(uVar2);
  FUN_0063dc00();
  FUN_00415ff0(in_ECX);
  uVar1 = DAT_00c8a918;
  LOCK();
  DAT_00c8a918 = 0;
  UNLOCK();
  ExceptionList = local_10;
  return uVar1;
}

