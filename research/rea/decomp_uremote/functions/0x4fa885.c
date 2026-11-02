// rea decompile_all
// name: FUN_004fa885
// address: 0x4fa885
// body: available
// range: 0x4fa885-0x4fa91a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa885(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 unaff_EBX;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  builtin_strncpy(local_18,"CachedImages",0xd);
  iVar1 = FUN_004fe2f3(local_18);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_005af82d(0x24);
    if (puVar2 == (undefined4 *)0x0) {
      iVar1 = 0;
    }
    else {
      *puVar2 = juce::ReferenceCountedObject::vftable;
      puVar2[1] = 0;
      puVar2[2] = juce::ImagePixelData::Listener::vftable;
      *puVar2 = juce::OpenGLRendering::CachedImageList::vftable;
      puVar2[2] = juce::OpenGLRendering::CachedImageList::vftable;
      puVar2[3] = unaff_EBX;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      uVar3 = FUN_004fe452();
      *(undefined4 *)(extraout_ECX + 0x20) = uVar3;
      iVar1 = extraout_ECX;
    }
    FUN_004fe36f(unaff_EBX,local_18,iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

