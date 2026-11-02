// rea decompile_all
// name: FUN_00411e9e
// address: 0x411e9e
// body: available
// range: 0x411e9e-0x411f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00411e9e(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_004120f5(*unaff_ESI,&local_c);
  if ((iVar1 == 0) && (iVar1 = FUN_0040f0de(&local_8), iVar1 == 0)) {
    FUN_0040fb13();
    if (unaff_ESI[3] == 0) {
      iVar1 = FUN_0040f67d(local_c,unaff_ESI[5]);
    }
    else {
      iVar1 = FUN_0040f6da(local_c);
    }
    if (iVar1 != 0) {
      FUN_0040f18e(local_8);
      local_8 = 0;
    }
  }
  *param_1 = local_8;
  return iVar1;
}

