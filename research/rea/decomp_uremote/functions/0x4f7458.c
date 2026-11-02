// rea decompile_all
// name: FUN_004f7458
// address: 0x4f7458
// body: available
// range: 0x4f7458-0x4f7478 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004f7458(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = DAT_0095da90;
  if ((DAT_0095da90 != in_ECX) && (puVar1 = in_ECX, DAT_0095da90 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)*DAT_0095da90;
    DAT_0095da90 = in_ECX;
    (*(code *)*puVar1)(1);
    puVar1 = DAT_0095da90;
  }
  DAT_0095da90 = puVar1;
  return &DAT_0095da90;
}

