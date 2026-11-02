// rea decompile_all
// name: FUN_0046cf3b
// address: 0x46cf3b
// body: available
// range: 0x46cf3b-0x46cfb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0046cf3b(undefined4 param_1)

{
  int iVar1;
  char *unaff_ESI;
  int unaff_EDI;
  
  if (((unaff_ESI[3] != '\0') && (*(int *)(unaff_ESI + 0x3c) != 0)) && (*unaff_ESI == '\0')) {
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 0x3c);
    *(undefined4 *)(unaff_ESI + 0x10) = param_1;
    *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(unaff_ESI + 0x40);
    *(int *)(unaff_ESI + 0x14) = unaff_EDI;
    iVar1 = FUN_0046a107(unaff_ESI + 4,1);
    if (-5 < iVar1) {
      if (-3 < iVar1) {
        if (iVar1 != 0) {
          if (iVar1 != 1) {
            if (iVar1 != 2) {
              return 0;
            }
            *(int *)(unaff_ESI + 0x3c) =
                 *(int *)(unaff_ESI + 0x3c) + (*(int *)(unaff_ESI + 0x40) - *(int *)(unaff_ESI + 8))
            ;
            unaff_ESI[1] = '\x01';
            *(int *)(unaff_ESI + 0x40) = *(int *)(unaff_ESI + 8);
            return 0;
          }
          *unaff_ESI = '\x01';
        }
        *(int *)(unaff_ESI + 0x3c) =
             *(int *)(unaff_ESI + 0x3c) + (*(int *)(unaff_ESI + 0x40) - *(int *)(unaff_ESI + 8));
        *(int *)(unaff_ESI + 0x40) = *(int *)(unaff_ESI + 8);
        return unaff_EDI - *(int *)(unaff_ESI + 0x14);
      }
      unaff_ESI[2] = '\x01';
    }
  }
  return 0;
}

