// rea decompile_all
// name: FUN_004f16c8
// address: 0x4f16c8
// body: available
// range: 0x4f16c8-0x4f17e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f16c8(char param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *in_ECX;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dea8e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  (**(code **)(*in_ECX + 0x30))();
  cVar3 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar3 != param_1) {
    *(char *)(in_ECX + 0x16) = param_1;
    FUN_004f5fb6();
    puStack_10 = (undefined1 *)0x0;
    if ((char)in_ECX[0x16] == '\0') {
      iVar1 = in_ECX[5];
      iVar2 = in_ECX[6];
      if (((uint)in_ECX[2] >> 3 & 1) != 0) {
        ShowWindow((HWND)in_ECX[0xe],1);
      }
      if ((0 < iVar1) && (0 < iVar2)) {
        FUN_004f8d79();
        (**(code **)(*in_ECX + 0x18))();
      }
    }
    else if (((uint)in_ECX[2] >> 3 & 1) == 0) {
      SendMessageW((HWND)in_ECX[0xe],0x1a,0,0);
    }
    else {
      ShowWindow((HWND)in_ECX[0xe],3);
    }
    cVar3 = FUN_004f5fe9();
    if (cVar3 != '\0') {
      FUN_004eda42();
    }
    FUN_00474d0f();
  }
  ExceptionList = pvStack_18;
  return;
}

