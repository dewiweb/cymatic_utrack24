// rea decompile_all
// name: FUN_00497658
// address: 0x497658
// body: available
// range: 0x497658-0x497720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x497671 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00497658(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int unaff_ESI;
  int unaff_EDI;
  byte local_10;
  byte local_f;
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar1 = *(uint *)(unaff_ESI + 0x28);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((unaff_EDI == 0) || ((*(uint *)(unaff_EDI + 8) & 0x200) == 0)) {
    if ((uVar1 & 4) != 0) {
      *(uint *)(unaff_ESI + 0x28) = uVar1 | 8;
    }
    if (in_ECX == 7) {
      FUN_00495a35(&local_10,7);
      iVar2 = FUN_00495a5d();
      if (iVar2 == 0) {
        FUN_00499471((ushort)local_10 * 0x100 + (ushort)local_f,local_c);
      }
      goto LAB_00497715;
    }
    FUN_00495a5d();
  }
  else {
    FUN_00495a5d();
  }
  FUN_004914ad();
LAB_00497715:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

