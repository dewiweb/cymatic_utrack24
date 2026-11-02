// rea decompile_all
// name: FUN_004e0c56
// address: 0x4e0c56
// body: available
// range: 0x4e0c56-0x4e0d5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e0c56(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dfd39;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004f5fb6();
  local_c = 0;
  iVar2 = *(int *)(in_ECX + 0xf8);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xf0) + iVar2 * 4) + 4))();
    cVar1 = FUN_004f5fce();
    if (cVar1 != '\0') {
LAB_004e0d43:
      FUN_00474d0f();
      ExceptionList = local_14;
      return;
    }
  }
  if (*(int *)(in_ECX + 0x70) == 0) {
    cVar1 = FUN_004e0f47();
  }
  else {
    cVar1 = FUN_004e0f2f();
  }
  if (cVar1 != '\0') goto LAB_004e0d43;
  cVar1 = FUN_004f5fe9();
  if (cVar1 != '\0') {
    FUN_004c3360();
    cVar1 = FUN_004c0ee2(1);
    if (cVar1 != '\0') {
      FUN_004c2154();
      goto LAB_004e0d43;
    }
  }
  FUN_004e0a5f();
  goto LAB_004e0d43;
}

