// rea decompile_all
// name: FUN_0044e3cf
// address: 0x44e3cf
// body: available
// range: 0x44e3cf-0x44e502 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044e3cf(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e5086;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00474839();
  FUN_0045ba5d();
  iVar2 = FUN_005af82d();
  uStack_c = 0;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_0044ec28();
  }
  uStack_c = 0xffffffff;
  puVar1 = *(undefined4 **)(in_ECX + 0xb4);
  if ((puVar1 != puVar3) && (*(undefined4 **)(in_ECX + 0xb4) = puVar3, puVar1 != (undefined4 *)0x0))
  {
    (**(code **)*puVar1)();
  }
  iVar2 = FUN_005af82d();
  uStack_c = 1;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_0043982e();
  }
  uStack_c = 0xffffffff;
  puVar1 = *(undefined4 **)(in_ECX + 0xb8);
  if ((puVar1 != puVar3) && (*(undefined4 **)(in_ECX + 0xb8) = puVar3, puVar1 != (undefined4 *)0x0))
  {
    (**(code **)*puVar1)();
  }
  iVar2 = FUN_0044bfc5();
  if (*(char *)(iVar2 + 0x2fc) == '\0') {
    (**(code **)(*(int *)(in_ECX + -0x1c) + 0x10))();
  }
  FUN_00467ac3(0x4000000000000000);
  FUN_004f9f4d();
  *(undefined4 *)(in_ECX + 0x4bc) = 0;
  ExceptionList = local_14;
  return;
}

