// rea decompile_all
// name: FUN_00495923
// address: 0x495923
// body: available
// range: 0x495923-0x4959a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49598b to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00495923(int param_1)

{
  int unaff_EBX;
  uint uVar1;
  int iVar2;
  
  if (*(byte *)(unaff_EBX + 0x111) < 8) {
    uVar1 = (uint)*(byte *)(unaff_EBX + 0x111);
    iVar2 = -uVar1 + 8;
    *(undefined4 *)(unaff_EBX + 0x26c) = 0x11;
    FUN_00492117(uVar1 + 0x20 + param_1,iVar2);
    *(undefined1 *)(unaff_EBX + 0x111) = 8;
    iVar2 = FUN_0048edf0(iVar2);
    if (iVar2 != 0) {
      if (uVar1 < 4) {
        FUN_0048edf0(-uVar1 + 4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
    if (uVar1 < 3) {
      *(uint *)(unaff_EBX + 0x28) = *(uint *)(unaff_EBX + 0x28) | 0x1000;
    }
  }
  return;
}

