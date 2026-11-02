// rea decompile_all
// name: FUN_004b80e0
// address: 0x4b80e0
// body: available
// range: 0x4b80e0-0x4b8190 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b80e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined8 local_18;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  builtin_strncpy(local_10,"ages",5);
  local_18 = 0x6d49646568636143;
  iVar1 = FUN_006f3800(&local_18);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x24);
    *puVar2 = juce::ReferenceCountedObject::vftable;
    puVar2[1] = 0;
    puVar2[2] = juce::ImagePixelData::Listener::vftable;
    *puVar2 = juce::OpenGLRendering::CachedImageList::vftable;
    puVar2[2] = juce::OpenGLRendering::CachedImageList::vftable;
    puVar2[3] = in_ECX;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = *(undefined4 *)(in_ECX + 0x108);
    FUN_006f36b0(&local_18,puVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

