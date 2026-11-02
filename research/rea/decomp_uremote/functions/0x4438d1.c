// rea decompile_all
// name: FUN_004438d1
// address: 0x4438d1
// body: available
// range: 0x4438d1-0x443b34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004438d1(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iStack_44;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e0d01;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047d23a();
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  piVar1 = (int *)(in_ECX + 0x88);
  FUN_0044bfc5();
  FUN_0043bc2d();
  FUN_0047d575();
  iVar4 = FUN_005b3fb0();
  FUN_0044bfc5();
  FUN_0047620f();
  FUN_0047cda7();
  iVar2 = *(int *)(in_ECX + 0x1c);
  iVar3 = *piVar1;
  FUN_0044bfc5();
  FUN_0047d535((float)((iVar3 - iVar4) / 2),(float)((iVar2 - iVar4) / 2));
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0044bfc5();
  FUN_0049f81a();
  local_c = 0;
  FUN_0047ceaa();
  puStack_10 = (undefined1 *)0xffffffff;
  FUN_004c4d7a();
  uVar5 = FUN_00465858();
  puStack_10 = (undefined1 *)0x1;
  FUN_0047d02d(param_1,uVar5,0,0,*piVar1,*(undefined4 *)(in_ECX + 0x94));
  puStack_10 = (undefined1 *)0xffffffff;
  FUN_004652d6();
  iVar2 = *(int *)(in_ECX + 0x1c);
  iVar3 = *piVar1;
  FUN_0044bfc5();
  FUN_0047d5bd(param_1,(float)((iVar3 - iStack_44) / 2),(float)((iVar2 - iStack_44) / 2),iVar4,iVar4
              );
  ExceptionList = pvStack_18;
  return;
}

