// rea decompile_all
// name: FUN_004c1f59
// address: 0x4c1f59
// body: available
// range: 0x4c1f59-0x4c2023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1f59(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005da0d3;
  local_14 = ExceptionList;
  uStack_34 = DAT_00955fd4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_14;
  bVar1 = false;
  uStack_38 = 0x4c1f96;
  iVar3 = FUN_004d021d();
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    do {
      uStack_38 = 0x4c1fa8;
      FUN_00460c94();
      local_c = 0;
      local_1c = (undefined1 *)&uStack_38;
      FUN_004c751a();
      cVar2 = FUN_00466360(local_20);
      if (cVar2 != '\0') {
        uStack_38 = 0x4c1fd3;
        uStack_38 = FUN_00460b70();
        cVar2 = FUN_00460bc4(param_1 + 0x16,local_20);
        if (cVar2 != '\0') {
          bVar1 = true;
        }
      }
      local_c = 0xffffffff;
      uStack_38 = 0x4c1ffa;
      thunk_FUN_004652d6();
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (bVar1) {
      uStack_38 = 0x4c200f;
      (**(code **)(*param_1 + 0xa4))();
    }
  }
  ExceptionList = local_14;
  return;
}

