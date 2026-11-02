// rea decompile_all
// name: FUN_004d9c1c
// address: 0x4d9c1c
// body: available
// range: 0x4d9c1c-0x4d9d28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d9c1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void **ppvStack_80;
  float fStack_7c;
  void **ppvStack_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  void *apvStack_48 [13];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de620;
  local_14 = ExceptionList;
  puStack_64 = (undefined1 *)(DAT_00955fd4 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_14;
  uStack_68 = 0x4d9c53;
  FUN_0047888f();
  uStack_68 = param_4;
  local_c = 0;
  uStack_6c = param_3;
  uStack_74 = param_1;
  ppvStack_78 = (void **)0x4d9c6a;
  (**(code **)(*in_ECX + 0x24))();
  ppvStack_78 = (void **)0x4d9c75;
  FUN_004d1edf();
  ppvStack_78 = (void **)(float)unaff_ESI;
  fStack_7c = (float)unaff_EDI;
  ppvStack_80 = (void **)0x4d9c8f;
  ppvStack_78 = (void **)FUN_00477188();
  fStack_7c = 7.127514e-39;
  FUN_0047a42b();
  ppvStack_78 = apvStack_48;
  fStack_7c = (float)param_2;
  uStack_84 = 0;
  uStack_88 = 2;
  puStack_64 = (undefined1 *)&uStack_8c;
  ppvStack_80 = (void **)0x1;
  FUN_0047620f(&uStack_8c,0x3f000000);
  FUN_004a22e1();
  ppvStack_80 = (void **)0x4d9ce4;
  FUN_004a2302();
  ppvStack_78 = (void **)param_4;
  fStack_7c = (float)param_3;
  ppvStack_80 = apvStack_48;
  uStack_84 = param_2;
  uStack_88 = param_1;
  uStack_8c = 0x4d9cfa;
  (**(code **)(*in_ECX + 0x28))();
  uStack_8c = param_4;
  (**(code **)(*in_ECX + 0x18))(param_1,param_2,param_3);
  FUN_004f7994();
  ExceptionList = apvStack_48[0];
  return;
}

