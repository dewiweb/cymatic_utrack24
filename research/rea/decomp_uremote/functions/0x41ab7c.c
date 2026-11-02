// rea decompile_all
// name: FUN_0041ab7c
// address: 0x41ab7c
// body: available
// range: 0x41ab7c-0x41abc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041ab7c(size_t param_1)

{
  int iVar1;
  int iVar2;
  char *unaff_EDI;
  
  iVar2 = 0;
  do {
    if (*(&PTR_s_Ascender_008fc3c0)[iVar2] == *unaff_EDI) {
      for (; iVar2 < 0x4a; iVar2 = iVar2 + 1) {
        if (*(&PTR_s_Ascender_008fc3c0)[iVar2] != *unaff_EDI) {
          return 0x4b;
        }
        iVar1 = _strncmp((&PTR_s_Ascender_008fc3c0)[iVar2],unaff_EDI,param_1);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
    }
    iVar2 = iVar2 + 1;
    if (0x49 < iVar2) {
      return 0x4b;
    }
  } while( true );
}

