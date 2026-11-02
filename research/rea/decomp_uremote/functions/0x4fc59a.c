// rea decompile_all
// name: FUN_004fc59a
// address: 0x4fc59a
// body: available
// range: 0x4fc59a-0x4fc64f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004fc59a(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4fc5a6;
  cVar1 = FUN_004fe2da();
  if (cVar1 == '\0') {
    FUN_0047e028();
    local_8 = 1;
    FUN_0047e33c(local_14,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
    local_8._0_1_ = 3;
    FUN_0047e050();
    puVar3 = (undefined4 *)FUN_005af82d(0x30);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_0047db13(local_14);
      *puVar3 = juce::OpenGLRendering::NonShaderContext::vftable;
      FUN_004faccc();
      FUN_0049f50b();
    }
    FUN_004c4d7a();
  }
  else {
    iVar2 = FUN_005af82d(0x2ca4);
    local_8 = 0;
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_004fc3e9(iVar2);
    }
  }
  return puVar3;
}

