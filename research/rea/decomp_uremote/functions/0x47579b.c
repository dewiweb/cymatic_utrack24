// rea decompile_all
// name: FUN_0047579b
// address: 0x47579b
// body: available
// range: 0x47579b-0x475889 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0047579b(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005db4ce;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_005af82d();
  local_c = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_0047571b();
  }
  local_c = 0xffffffff;
  if ((int *)*in_ECX != (int *)0x0) {
    (**(code **)(*(int *)*in_ECX + 0x2c))();
    FUN_0047e303(&stack0xffffffcc,2,uStack_24);
    FUN_0049f5e8();
    FUN_004c4d7a();
    puVar2[0x14] = param_1;
    FUN_004750fa();
    FUN_004feb50();
    (**(code **)(*(int *)*puVar2 + 0x24))();
  }
  ExceptionList = local_14;
  return puVar2;
}

