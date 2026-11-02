// rea decompile_all
// name: FUN_00412daa
// address: 0x412daa
// body: available
// range: 0x412daa-0x412dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00412daa(void)

{
  undefined4 *puVar1;
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  int local_8;
  
  *unaff_EDI = 0;
  puVar1 = (undefined4 *)FUN_00411912(*unaff_ESI,&local_8);
  if (local_8 == 0) {
    *puVar1 = unaff_EBX;
    puVar1[1] = unaff_ESI;
    puVar1[2] = unaff_ESI[1];
    *unaff_EDI = (int)puVar1;
  }
  return local_8;
}

