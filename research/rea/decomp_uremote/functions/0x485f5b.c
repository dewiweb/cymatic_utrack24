// rea decompile_all
// name: FUN_00485f5b
// address: 0x485f5b
// body: available
// range: 0x485f5b-0x485fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00485f5b(void)

{
  undefined4 *puVar1;
  void *_Dst;
  int unaff_ESI;
  int local_c;
  undefined4 *local_8;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_ESI + 4))();
  local_c = 0;
  *(undefined4 **)(unaff_ESI + 0x19c) = puVar1;
  *puVar1 = FUN_00485da4;
  if (0 < *(int *)(unaff_ESI + 0x24)) {
    local_8 = (undefined4 *)(*(int *)(unaff_ESI + 0xc4) + 0x50);
    puVar1 = puVar1 + 0xb;
    do {
      _Dst = (void *)(*(code *)**(undefined4 **)(unaff_ESI + 4))();
      *local_8 = _Dst;
      _memset(_Dst,0,0x100);
      *puVar1 = 0xffffffff;
      local_8 = local_8 + 0x15;
      local_c = local_c + 1;
      puVar1 = puVar1 + 1;
    } while (local_c < *(int *)(unaff_ESI + 0x24));
  }
  return;
}

