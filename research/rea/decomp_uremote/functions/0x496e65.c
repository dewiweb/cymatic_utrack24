// rea decompile_all
// name: FUN_00496e65
// address: 0x496e65
// body: available
// range: 0x496e65-0x497017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x496e7e to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00496e65(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int unaff_ESI;
  int unaff_EDI;
  byte local_10 [8];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar2 = *(uint *)(unaff_ESI + 0x28);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if (((uVar2 & 4) == 0) &&
     ((bVar1 = *(byte *)(unaff_ESI + 0x10b), bVar1 != 3 || ((uVar2 & 2) != 0)))) {
    if ((unaff_EDI == 0) || ((*(byte *)(unaff_EDI + 8) & 0x20) == 0)) {
      if (bVar1 == 3) {
        iVar3 = 1;
      }
      else {
        iVar3 = (bVar1 & 2 | 1) * 2;
      }
      if (in_ECX == iVar3) {
        FUN_00495a35(local_10,iVar3);
        iVar3 = FUN_00495a5d();
        if (iVar3 != 0) goto LAB_0049700c;
        if ((((*(char *)(unaff_ESI + 0x10b) != '\x03') || (unaff_EDI == 0)) ||
            (*(ushort *)(unaff_EDI + 0x14) == 0)) ||
           ((ushort)local_10[0] < *(ushort *)(unaff_EDI + 0x14))) {
          FUN_00498cc7();
          goto LAB_0049700c;
        }
      }
      else {
        FUN_00495a5d();
      }
    }
    else {
      FUN_00495a5d();
    }
  }
  else {
    FUN_00495a5d();
  }
  FUN_004914ad();
LAB_0049700c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

