// rea decompile_all
// name: FUN_005a7750
// address: 0x5a7750
// body: available
// range: 0x5a7750-0x5a7818 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005a7750(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7a4f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_005af82d(0x118,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    local_24 = (int *)0x0;
  }
  else {
    local_24 = (int *)FUN_005a7500(param_1,1,1);
  }
  local_8 = 0xffffffff;
  if (local_24 != (int *)0x0) {
    uVar2 = (**(code **)(*local_24 + 0x1c))();
    if ((int)(uVar2 & 0xffff) <= param_3 - (int)param_2) {
      *(bool *)(local_24 + 0x3c) = *param_2 != '\0';
    }
  }
  ExceptionList = local_10;
  return local_24;
}

