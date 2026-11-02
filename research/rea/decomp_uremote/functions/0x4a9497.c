// rea decompile_all
// name: FUN_004a9497
// address: 0x4a9497
// body: available
// range: 0x4a9497-0x4a953e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9497(void)

{
  undefined4 in_EDX;
  int unaff_ESI;
  int local_8c;
  undefined1 local_88 [104];
  void *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005da121;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004aaebf(local_88,in_EDX,0xff);
  local_c = 0;
  local_8c = 0;
  if (0 < *(int *)(unaff_ESI + 0x18)) {
    do {
      FUN_004a9a39(unaff_ESI + 8,*(undefined4 *)(unaff_ESI + 0xc),
                   *(int *)(unaff_ESI + 0x10) + local_8c);
      local_8c = local_8c + 1;
    } while (local_8c < *(int *)(unaff_ESI + 0x18));
  }
  local_c = 0xffffffff;
  _free(local_20);
  ExceptionList = local_14;
  return;
}

