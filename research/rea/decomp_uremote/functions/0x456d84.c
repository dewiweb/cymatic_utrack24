// rea decompile_all
// name: FUN_00456d84
// address: 0x456d84
// body: available
// range: 0x456d84-0x456f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00456d84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  int unaff_EDI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de902;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = *(int *)(unaff_EDI + 0x10);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      *(undefined4 *)(unaff_EDI + 0x20) = 0;
      *(undefined4 *)(unaff_EDI + 0x24) = 0;
    }
    else if ((0 < *(int *)(param_1 + 0x30)) && (0 < *(int *)(param_1 + 0x38))) {
      *(int *)(unaff_EDI + 0x20) = *(int *)(param_1 + 0x30);
      *(undefined4 *)(unaff_EDI + 0x24) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(unaff_EDI + 0x10) = 4;
      FUN_00476068(0xff,0xb3);
      local_c = extraout_EDX;
      iVar1 = FUN_00456f8d();
      local_c._0_1_ = 1;
      uVar2 = FUN_00456f8d();
      local_c = CONCAT31(local_c._1_3_,4);
      FUN_0043f8a7(uVar2,iVar1 + 0x20);
      FUN_004f7994();
      FUN_004f7994();
      local_c = 0xffffffff;
      FUN_004f7994();
      FUN_004f7994();
    }
    goto LAB_00456eed;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x44) != 4) goto LAB_00456eed;
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(unaff_EDI + 0x20) = iVar1;
    if (iVar1 <= *(int *)(unaff_EDI + 0x24)) goto LAB_00456eed;
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x44) != 4) goto LAB_00456eed;
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    if (((iVar1 != 4) || (*(int *)(param_1 + 0x30) < 1)) || (*(int *)(param_1 + 0x38) < 1))
    goto LAB_00456eed;
    *(int *)(unaff_EDI + 0x20) = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x38);
  }
  *(int *)(unaff_EDI + 0x24) = iVar1;
LAB_00456eed:
  FUN_00459001();
  ExceptionList = local_14;
  return;
}

