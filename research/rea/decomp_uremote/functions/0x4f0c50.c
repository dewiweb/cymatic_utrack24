// rea decompile_all
// name: FUN_004f0c50
// address: 0x4f0c50
// body: available
// range: 0x4f0c50-0x4f0ca0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_004f0c50(void)

{
  LONG LVar1;
  longlong lVar2;
  
  LVar1 = GetMessageTime();
  lVar2 = CONCAT44(DAT_0095dbdc,DAT_0095dbd8);
  if ((LVar1 < DAT_0095dbe0) || (DAT_0095dbe0 == 0)) {
    DAT_0095dbe0 = LVar1;
    lVar2 = FUN_00467e7a();
    lVar2 = lVar2 - LVar1;
  }
  DAT_0095dbdc = (undefined4)((ulonglong)lVar2 >> 0x20);
  DAT_0095dbd8 = (undefined4)lVar2;
  return lVar2 + LVar1;
}

