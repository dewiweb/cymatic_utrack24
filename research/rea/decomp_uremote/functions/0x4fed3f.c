// rea decompile_all
// name: FUN_004fed3f
// address: 0x4fed3f
// body: available
// range: 0x4fed3f-0x4fee04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_004fed3f(uint *param_1)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  uint in_ECX;
  void *pvVar4;
  void *local_24 [2];
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9d00;
  local_14 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  FUN_004a5633(local_24,in_ECX + 0xc);
  local_c = 0;
  cVar2 = FUN_004a70ae(local_24);
  if (cVar2 != '\0') {
    pvVar4 = (void *)(local_1c * 0x10 + (int)local_24[0]);
    for (pvVar1 = local_24[0]; pvVar1 != pvVar4; pvVar1 = (void *)((int)pvVar1 + 0x10)) {
      FUN_004784cf(uVar3);
    }
  }
  cVar2 = FUN_004786d2();
  uVar3 = ~-(uint)(cVar2 != '\0') & in_ECX;
  *param_1 = uVar3;
  if (uVar3 != 0) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  local_c = 0xffffffff;
  _free(local_24[0]);
  ExceptionList = local_14;
  return param_1;
}

