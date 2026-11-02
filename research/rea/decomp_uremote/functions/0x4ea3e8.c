// rea decompile_all
// name: FUN_004ea3e8
// address: 0x4ea3e8
// body: available
// range: 0x4ea3e8-0x4ea581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea3e8(char **param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  char **ppcVar5;
  char **ppcStack_48;
  int iStack_44;
  char **ppcStack_40;
  uint uStack_3c;
  char *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *puStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e10db;
  local_14 = ExceptionList;
  uStack_3c = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  local_24 = (undefined1 *)0x0;
  piVar1 = *(int **)(in_ECX + 0xa4);
  if (piVar1 != (int *)0x0) {
    ppcStack_40 = param_1;
    iStack_44 = in_ECX + -0x70;
    ppcStack_48 = &local_20;
    param_1 = (char **)(**(code **)(*piVar1 + 4))();
  }
  local_24 = (undefined1 *)(uint)(piVar1 != (int *)0x0);
  iStack_44 = 0x4ea44c;
  ppcStack_40 = param_1;
  FUN_004652e4();
  uStack_c = 0;
  if (((uint)local_24 & 1) != 0) {
    ppcStack_40 = (char **)0x4ea460;
    FUN_004652d6();
  }
  ppcStack_40 = (char **)0x4ea46a;
  cVar2 = FUN_004e97e8();
  puStack_1c = (undefined1 *)&ppcStack_40;
  if (cVar2 == '\0') {
    iStack_44 = 0x4ea4af;
    FUN_004c751a();
    puStack_1c = (undefined1 *)&iStack_44;
    ppcStack_48 = (char **)0x4ea4c0;
    FUN_004c751a();
    ppcStack_48 = &local_24;
    FUN_004662e4();
  }
  else {
    iStack_44 = 0x4ea47f;
    local_24 = (undefined1 *)&ppcStack_40;
    FUN_004c751a();
    puStack_1c = (undefined1 *)&iStack_44;
    ppcStack_48 = (char **)0x4ea490;
    FUN_004c751a();
    ppcStack_48 = &local_24;
    FUN_0046613c(&local_28);
  }
  ppcStack_40 = &local_28;
  iStack_44 = 0x4ea4da;
  FUN_00465317();
  ppcStack_40 = (char **)0x4ea4e3;
  FUN_004652d6();
  local_24 = *(undefined1 **)(in_ECX + 0x6c);
  ppcStack_40 = (char **)0x4ea4f3;
  iVar3 = thunk_FUN_0046087d();
  ppcVar5 = (char **)(local_24 + iVar3);
  ppcStack_48 = (char **)((int)ppcVar5 + -1);
  if (*local_28 == '\0') {
    ppcStack_48 = ppcVar5;
  }
  iStack_44 = *(int *)(in_ECX + 0x6c);
  puStack_1c = (undefined1 *)&iStack_44;
  ppcStack_40 = *(char ***)(in_ECX + 0x70);
  uVar4 = FUN_004eb933();
  FUN_004ebd49(uVar4);
  iStack_44 = 0x4ea532;
  ppcStack_40 = ppcVar5;
  iStack_44 = FUN_004eb933();
  puStack_1c = (undefined1 *)&ppcStack_48;
  FUN_004c1e29(&ppcStack_48,0x1000201,0);
  FUN_004eb97d(&local_28,local_24,in_ECX + 0x80);
  ppcStack_40 = (char **)0x4ea564;
  FUN_004e9c5e();
  ppcStack_40 = (char **)0x4ea56d;
  FUN_004652d6();
  ExceptionList = local_14;
  return;
}

