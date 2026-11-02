// rea decompile_all
// name: FUN_00411b3c
// address: 0x411b3c
// body: available
// range: 0x411b3c-0x411b61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411b3c(void)

{
  int iVar1;
  int *piVar2;
  int *in_EAX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  piVar2 = (int *)in_EAX[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar2;
    if (piVar2 == (int *)0x0) {
      unaff_ESI[1] = iVar1;
    }
    else {
      *piVar2 = iVar1;
    }
    *in_EAX = 0;
    in_EAX[1] = *unaff_ESI;
    *(int **)*unaff_ESI = in_EAX;
    *unaff_ESI = (int)in_EAX;
  }
  return;
}

