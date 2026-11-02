// rea decompile_all
// name: FUN_00490541
// address: 0x490541
// body: available
// range: 0x490541-0x49065a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x490640 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490541(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x215) != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x2ce) & 2) == 0) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x2c4);
  uVar2 = *(uint *)(param_1 + 0x2b8);
  uVar3 = *(uint *)(param_1 + 0x2ac);
  iVar4 = uVar5 + uVar2 + uVar3;
  if ((((((iVar4 < 1) || ((int)uVar3 < 0)) || (iVar1 = FUN_00490972(uVar3,0x8000,iVar4), iVar1 == 0)
        ) || ((0x8000 < uVar3 || ((int)uVar2 < 0)))) ||
      ((iVar1 = FUN_00490972(uVar2,0x8000,iVar4), iVar1 == 0 ||
       ((0x8000 < uVar2 || ((int)uVar5 < 0)))))) ||
     ((iVar4 = FUN_00490972(uVar5,0x8000,iVar4), iVar4 == 0 ||
      ((0x8000 < uVar5 || (iVar4 = uVar5 + uVar2 + uVar3, 0x8001 < iVar4)))))) goto LAB_00490640;
  if (iVar4 < 0x8001) {
    if (iVar4 < 0x8000) {
      iVar4 = 1;
      goto LAB_0049061b;
    }
  }
  else {
    iVar4 = -1;
LAB_0049061b:
    if ((int)uVar2 < (int)uVar3) {
LAB_0049062b:
      if ((int)uVar3 < (int)uVar5) {
LAB_00490633:
        uVar5 = uVar5 + iVar4;
      }
      else {
        uVar3 = uVar3 + iVar4;
      }
    }
    else {
      if ((int)uVar2 < (int)uVar5) {
        if ((int)uVar2 <= (int)uVar3) goto LAB_0049062b;
        goto LAB_00490633;
      }
      uVar2 = uVar2 + iVar4;
    }
  }
  if (uVar5 + uVar2 + uVar3 == 0x8000) {
    *(short *)(param_1 + 0x216) = (short)uVar3;
    *(short *)(param_1 + 0x218) = (short)uVar2;
    return;
  }
LAB_00490640:
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

