// rea decompile_all
// name: FUN_004974d5
// address: 0x4974d5
// body: available
// range: 0x4974d5-0x497657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4974eb to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004975f0) */
/* WARNING: Removing unreachable block (ram,0x0049760a) */
/* WARNING: Removing unreachable block (ram,0x0049763f) */
/* WARNING: Removing unreachable block (ram,0x0049760f) */
/* WARNING: Removing unreachable block (ram,0x0049761e) */
/* WARNING: Removing unreachable block (ram,0x00497625) */

void FUN_004974d5(int param_1,int param_2)

{
  uint in_EAX;
  char *pcVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((*(uint *)(param_1 + 0x28) & 4) == 0) {
    if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x4000) == 0)) {
      if (3 < in_EAX) {
        pcVar1 = (char *)FUN_00495b75(2);
        if (pcVar1 == (char *)0x0) {
          FUN_004914ad();
          FUN_00495a5d();
          return;
        }
        FUN_00495a35(pcVar1);
        pcVar1[in_EAX] = '\0';
        iVar2 = FUN_00495a5d();
        if (iVar2 != 0) {
          return;
        }
        if ((*pcVar1 == '\x01') || (*pcVar1 == '\x02')) {
          FUN_00490830(pcVar1);
        }
        FUN_004914ad();
        return;
      }
      FUN_00495a5d();
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

