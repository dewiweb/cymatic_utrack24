// rea decompile_all
// name: FUN_00496302
// address: 0x496302
// body: available
// range: 0x496302-0x4963f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49631d to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00496302(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_ESI;
  uint unaff_EDI;
  undefined4 local_8;
  
  local_8 = 0;
  if ((*(uint *)(unaff_ESI + 0x28) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((*(uint *)(unaff_ESI + 0x28) & 6) == 0) {
    if ((unaff_EBX == 0) || ((*(byte *)(unaff_EBX + 8) & 2) == 0)) {
      uVar2 = 3;
      if (*(char *)(unaff_ESI + 0x10b) != '\x03') {
        uVar2 = (uint)*(byte *)(unaff_ESI + 0x10f);
      }
      if ((unaff_EDI == uVar2) && (unaff_EDI < 5)) {
        FUN_00495a35(&local_8,uVar2);
        iVar3 = FUN_00495a5d();
        if (iVar3 == 0) {
          *(undefined1 *)(unaff_ESI + 0x15c) = (undefined1)local_8;
          if ((*(byte *)(unaff_ESI + 0x10b) & 2) == 0) {
            *(undefined1 *)(unaff_ESI + 0x15f) = (undefined1)local_8;
            *(undefined1 *)(unaff_ESI + 0x15d) = (undefined1)local_8;
            *(undefined1 *)(unaff_ESI + 0x15e) = (undefined1)local_8;
            uVar1 = local_8._1_1_;
          }
          else {
            *(undefined1 *)(unaff_ESI + 0x15d) = local_8._1_1_;
            *(undefined1 *)(unaff_ESI + 0x15e) = local_8._2_1_;
            uVar1 = local_8._3_1_;
          }
          *(undefined1 *)(unaff_ESI + 0x160) = uVar1;
          FUN_004991f4();
          return;
        }
      }
      else {
        FUN_004914ad();
        FUN_00495a5d();
      }
      return;
    }
    FUN_00495a5d();
  }
  else {
    FUN_00495a5d();
  }
  FUN_004914ad();
  return;
}

