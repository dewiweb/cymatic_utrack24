// rea decompile_all
// name: FUN_004014f7
// address: 0x4014f7
// body: available
// range: 0x4014f7-0x401576 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004014f7(void)

{
  int *piVar1;
  int *unaff_EDI;
  int local_c;
  
  if ((unaff_EDI != (int *)0x0) && (*unaff_EDI != 0)) {
    piVar1 = unaff_EDI + 0xd;
    local_c = 2;
    do {
      piVar1[-2] = 0;
      piVar1[-1] = 0;
      FUN_00411a5c(*piVar1);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      FUN_00411a5c(piVar1[3]);
      piVar1[3] = 0;
      piVar1 = piVar1 + 7;
      local_c = local_c + -1;
    } while (local_c != 0);
    FUN_00411a5c(unaff_EDI[10]);
    unaff_EDI[10] = 0;
    unaff_EDI[8] = 0;
    unaff_EDI[9] = 0;
    FUN_00411a5c(unaff_EDI[7]);
    unaff_EDI[7] = 0;
    unaff_EDI[6] = 0;
    unaff_EDI[5] = 0;
    *unaff_EDI = 0;
  }
  return;
}

