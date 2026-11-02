// rea decompile_all
// name: FUN_004fa753
// address: 0x4fa753
// body: available
// range: 0x4fa753-0x4fa884 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004fa753(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  int *in_EDX;
  int iStack_38;
  void *pvStack_34;
  undefined1 local_28 [12];
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dc8a5;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar1 = *(undefined4 *)*in_EDX;
  uVar3 = FUN_004fa6a6(DAT_00955fd4 ^ (uint)&stack0xffffffa0);
  glGetIntegerv(0xba2,local_28);
  local_14 = (void *)0x0;
  cVar2 = FUN_004fa680();
  if (cVar2 != '\0') {
    glDisable(0xb71);
    glDisable(0xbe2);
    FUN_004e22ca();
    uStack_1c = 1;
    FUN_004fd017(param_1,*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
    glViewport(0,0,*(undefined4 *)(*in_EDX + 4),*(undefined4 *)(*in_EDX + 8));
    FUN_004fe459(&stack0xffffffa8,*(undefined4 *)(*in_EDX + 4),*(undefined4 *)(*in_EDX + 8),1);
    thunk_FUN_004fd02d();
  }
  local_14 = (void *)0xffffffff;
  (**(code **)(iStack_38 + 0x34))(0x8d40,pvStack_34);
  glViewport(iStack_38,pvStack_34,uVar1,uVar3);
  ExceptionList = pvStack_34;
  return cVar2 != '\0';
}

