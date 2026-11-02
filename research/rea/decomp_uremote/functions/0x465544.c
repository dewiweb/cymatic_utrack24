// rea decompile_all
// name: FUN_00465544
// address: 0x465544
// body: available
// range: 0x465544-0x465586 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465544(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint unaff_EBX;
  undefined4 *unaff_EDI;
  
  uVar1 = FUN_0046089e(0);
  FUN_00465344(uVar1);
  puVar2 = (undefined1 *)*unaff_EDI;
  if (unaff_EBX < 0x80) {
    *puVar2 = (char)unaff_EBX;
    puVar2 = puVar2 + 1;
  }
  else {
    FUN_004608c3(unaff_EBX);
  }
  *puVar2 = 0;
  return;
}

