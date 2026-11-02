// rea decompile_all
// name: FUN_004c9876
// address: 0x4c9876
// body: available
// range: 0x4c9876-0x4c99e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c9876(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_38;
  int local_34;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_005dec7d;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pcVar1 = (char *)(param_1 + 0xc0);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    local_c = 0;
    local_38 = 0;
    local_34 = 0;
    iVar3 = FUN_004c121d();
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      FUN_004c1221();
      FUN_004c205a();
      piVar4 = (int *)FUN_004f5d2e();
      local_38 = *piVar4;
      local_34 = piVar4[1];
    }
    cVar2 = FUN_004f5c66();
    if (cVar2 != '\0') {
      if ((local_38 != 0) || (local_34 != 0)) {
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - local_34;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - local_38;
        iVar3 = FUN_004c121d();
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          iVar5 = FUN_004c1221();
          if (iVar5 != 0) {
            FUN_004a97cd();
            FUN_004c0c1f();
          }
        }
      }
      FUN_004c0c1f();
    }
    *pcVar1 = '\0';
  }
  ExceptionList = local_14;
  return;
}

