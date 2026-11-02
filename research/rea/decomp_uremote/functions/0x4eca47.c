// rea decompile_all
// name: FUN_004eca47
// address: 0x4eca47
// body: available
// range: 0x4eca47-0x4ecbfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eca47(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvStack_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e149b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = thunk_FUN_004c1d58();
  iVar1 = in_ECX + 0x80;
  (**(code **)(*(int *)(iVar2 + 0x1c) + 8))();
  FUN_004c1e29();
  FUN_0047cda7();
  iVar2 = thunk_FUN_004c1d58();
  (**(code **)(*(int *)(iVar2 + 0x1c) + 0x1c))();
  FUN_0047ceaa();
  FUN_004c4d7a();
  iVar2 = *(int *)(in_ECX + 0x100);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0xf8) + iVar2 * 4);
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    uVar6 = 0xe;
    iVar3 = *(int *)(iVar3 + 0x14) + -0xe;
    FUN_00467165(uVar4,iVar3,uVar5,0xe);
    FUN_0047d12a(uVar4,iVar3,uVar5,uVar6);
    in_ECX = iVar1;
  }
  iVar2 = *(int *)(in_ECX + 0x154);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x104) + iVar2 * 4);
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    uVar6 = 0xe;
    iVar3 = *(int *)(iVar3 + 0x14) + -0xe;
    FUN_00467165(uVar4,iVar3,uVar5,0xe);
    FUN_0047d12a(uVar4,iVar3,uVar5,uVar6);
    in_ECX = iVar1;
  }
  iVar2 = *(int *)(in_ECX + 0x124);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x11c) + iVar2 * 4);
    FUN_0047d12a(*(undefined4 *)(iVar3 + 0x10),*(int *)(iVar3 + 0x14) + -0xe,
                 *(undefined4 *)(iVar3 + 0x18),0xe);
    in_ECX = iVar1;
  }
  ExceptionList = pvStack_2c;
  return;
}

