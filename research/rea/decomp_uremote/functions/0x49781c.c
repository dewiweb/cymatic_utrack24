// rea decompile_all
// name: FUN_0049781c
// address: 0x49781c
// body: available
// range: 0x49781c-0x49797e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49786a to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049781c(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int unaff_ESI;
  int local_8;
  
  iVar1 = *(int *)(unaff_ESI + 0x240);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_00495a5d();
      return;
    }
    *(int *)(unaff_ESI + 0x240) = iVar1 + -1;
    if (iVar1 + -1 == 1) {
      FUN_00495a5d();
      FUN_004914ad();
      return;
    }
  }
  uVar4 = *(uint *)(unaff_ESI + 0x28);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((uVar4 & 4) != 0) {
    *(uint *)(unaff_ESI + 0x28) = uVar4 | 8;
  }
  iVar1 = FUN_00495b75(2);
  if (iVar1 == 0) {
    FUN_00495a5d();
    goto LAB_00497974;
  }
  FUN_00495a35(iVar1,param_2);
  iVar2 = FUN_00495a5d();
  if (iVar2 != 0) {
    return;
  }
  uVar4 = 0;
  if (param_2 == 0) {
LAB_0049796b:
    pcVar3 = "bad keyword";
  }
  else {
    do {
      if (*(char *)(uVar4 + iVar1) == '\0') break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
    if ((0x4f < uVar4) || (uVar4 == 0)) goto LAB_0049796b;
    if ((param_2 < uVar4 + 3) || (*(char *)(uVar4 + 1 + iVar1) != '\0')) goto LAB_00497974;
    local_8 = -1;
    iVar1 = FUN_00495d75(param_2,&local_8);
    if (iVar1 == 1) {
      *(undefined1 *)(local_8 + uVar4 + 2 + *(int *)(unaff_ESI + 0x260)) = 0;
      pcVar3 = (char *)FUN_00499216();
    }
    else {
      pcVar3 = *(char **)(unaff_ESI + 0x50);
    }
  }
  if (pcVar3 == (char *)0x0) {
    return;
  }
LAB_00497974:
  FUN_004914ad();
  return;
}

