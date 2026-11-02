// rea decompile_all
// name: FUN_0049654f
// address: 0x49654f
// body: available
// range: 0x49654f-0x4965f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49655e to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049654f(void)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  int unaff_ESI;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_ESI + 0x28) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((*(uint *)(unaff_ESI + 0x28) & 6) == 0) {
    if (in_ECX == 1) {
      uStack_8 = in_ECX;
      FUN_00495a35((int)&uStack_8 + 3,1);
      iVar2 = FUN_00495a5d();
      if (iVar2 != 0) {
        return;
      }
      uVar1 = *(ushort *)(unaff_ESI + 0x2ce);
      if ((uVar1 & 0x8000) != 0) {
        return;
      }
      if ((uVar1 & 4) == 0) {
        FUN_0048feef(uStack_8._3_1_);
        FUN_0048f707();
        return;
      }
      *(ushort *)(unaff_ESI + 0x2ce) = uVar1 | 0x8000;
      FUN_0048f707();
    }
    else {
      FUN_00495a5d();
    }
  }
  else {
    FUN_00495a5d();
  }
  FUN_004914ad();
  return;
}

