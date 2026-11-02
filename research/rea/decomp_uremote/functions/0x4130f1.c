// rea decompile_all
// name: FUN_004130f1
// address: 0x4130f1
// body: available
// range: 0x4130f1-0x413152 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41312e to 0x5af06c FID_conflict:___longjmp_internal (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004130f1(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  
  iVar4 = *in_ECX;
  if (in_ECX[6] < *in_ECX) {
    iVar4 = in_ECX[6];
  }
  piVar3 = (int *)(in_ECX[0x14c] + in_ECX[1] * 4);
  while ((piVar2 = (int *)*piVar3, piVar2 != (int *)0x0 && (*piVar2 <= iVar4))) {
    if (*piVar2 == iVar4) {
      return;
    }
    piVar3 = piVar2 + 3;
  }
  iVar1 = in_ECX[0xd];
  if (iVar1 < in_ECX[0xc]) {
    piVar2 = (int *)(iVar1 * 0x10 + in_ECX[0xb]);
    in_ECX[0xd] = iVar1 + 1;
    piVar2[2] = 0;
    piVar2[1] = 0;
    *piVar2 = iVar4;
    piVar2[3] = *piVar3;
    *piVar3 = (int)piVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FID_conflict____longjmp_internal(in_ECX + 0x13a,1);
}

