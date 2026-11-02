// rea decompile_all
// name: FUN_004a9095
// address: 0x4a9095
// body: available
// range: 0x4a9095-0x4a919f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004a9095(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int local_3c;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_005d8c20;
  local_14 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_14;
  if (*(int *)(param_1 + 8) == 0) {
    bVar5 = false;
  }
  else {
    local_c = 0;
    local_3c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = *param_2;
        iVar4 = param_2[2] * 0x10 + iVar1;
        for (; iVar1 != iVar4; iVar1 = iVar1 + 0x10) {
          FUN_004a9be2(uVar3);
          cVar2 = FUN_004a8781(local_28,local_24,local_1c);
          if (cVar2 != '\0') {
            FUN_004a7151();
          }
        }
        local_3c = local_3c + 1;
      } while (local_3c < *(int *)(param_1 + 8));
    }
    FUN_00470ddb();
    bVar5 = *(int *)(param_1 + 8) != 0;
    local_c = 0xffffffff;
    _free((void *)0x0);
  }
  ExceptionList = local_14;
  return bVar5;
}

