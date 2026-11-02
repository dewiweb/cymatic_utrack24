// rea decompile_all
// name: FUN_0043f42d
// address: 0x43f42d
// body: available
// range: 0x43f42d-0x43f564 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043f42d(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_58 [32];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9cdd;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0044bfc5();
  FUN_004c2047(local_58);
  uVar2 = FUN_0043bc2d();
  FUN_0047d575(uVar2);
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0047888f();
  local_c = 0;
  iVar3 = FUN_0044bfc5();
  fVar1 = (float)*(int *)(iVar3 + 0xc);
  FUN_004797e4(fVar1,fVar1,(float)*(int *)(in_ECX + 0x18) - (fVar1 + fVar1),
               (float)*(int *)(in_ECX + 0x1c) - (fVar1 + fVar1),0,
               *(float *)(in_ECX + 0x70) * 6.2831855);
  FUN_0047d2ae(local_38);
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

