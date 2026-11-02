// rea decompile_all
// name: FUN_00456bdf
// address: 0x456bdf
// body: available
// range: 0x456bdf-0x456d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00456bdf(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de93b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_00458ff7();
  *(int *)(param_1 + 0x10) = param_2 % 5;
  FUN_00476068(0xff,0xb3);
  local_c = 0;
  iVar2 = FUN_00456f8d();
  local_c._0_1_ = 1;
  uVar3 = FUN_00456f8d();
  local_c = CONCAT31(local_c._1_3_,4);
  FUN_0043f8a7(uVar3,iVar2 + 0x20);
  FUN_004f7994();
  FUN_004f7994();
  local_c = 0xffffffff;
  FUN_004f7994();
  FUN_004f7994();
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    FUN_004590c8();
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (iVar1 != 4) goto LAB_00456d64;
  }
  else {
    if (iVar2 < 1) goto LAB_00456d64;
    if (iVar2 < 3) {
      FUN_004590c8();
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4);
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4);
      }
      goto LAB_00456d64;
    }
    if (iVar2 == 3) {
      FUN_004590c8();
      goto LAB_00456d64;
    }
    if ((iVar2 != 4) || (FUN_004590c8(), iVar1 != 3)) goto LAB_00456d64;
  }
  FUN_0045d32f();
LAB_00456d64:
  FUN_00459001();
  ExceptionList = local_14;
  return;
}

