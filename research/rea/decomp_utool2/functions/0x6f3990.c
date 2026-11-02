// rea decompile_all
// name: FUN_006f3990
// address: 0x6f3990
// body: available
// range: 0x6f3990-0x6f3a0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006f3990(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007299c7;
  local_10 = ExceptionList;
  if ((*(int *)(in_ECX + 0xd0) == 0) || (iVar1 = *(int *)(*(int *)(in_ECX + 0xd0) + 4), iVar1 == 0))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  if (iVar1 != 0) {
    local_8 = 0;
    ExceptionList = &local_10;
    uVar2 = FUN_006f6dd6(*(undefined4 *)(iVar1 + 0x40),0,
                         &juce::CachedComponentImage::RTTI_Type_Descriptor,
                         &juce::OpenGLContext::CachedImage::RTTI_Type_Descriptor,0,
                         DAT_00c76070 ^ (uint)&stack0xfffffffc);
    ExceptionList = local_10;
    return uVar2;
  }
  return 0;
}

