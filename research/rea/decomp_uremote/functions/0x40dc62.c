// rea decompile_all
// name: FUN_0040dc62
// address: 0x40dc62
// body: available
// range: 0x40dc62-0x40dcdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040dc62(int *param_1)

{
  int iVar1;
  int unaff_EDI;
  int local_8;
  
  if ((unaff_EDI != 0) && (*(int *)(unaff_EDI + 0x60) != 0)) {
    iVar1 = FUN_00411912(*(undefined4 *)(*(int *)(*(int *)(unaff_EDI + 0x60) + 0xc) + 0x2c),&local_8
                        );
    if (local_8 == 0) {
      *(int *)(iVar1 + 4) = unaff_EDI;
      local_8 = FUN_0040daa6();
      if (local_8 == 0) {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(unaff_EDI + 0x54);
        *(int *)(unaff_EDI + 0x54) = iVar1;
        if (param_1 != (int *)0x0) {
          *param_1 = iVar1;
        }
      }
      else {
        FUN_0040dc06();
        FUN_00411a5c(iVar1);
      }
    }
    else if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    return local_8;
  }
  return 6;
}

