// rea decompile_all
// name: FUN_004e5cb9
// address: 0x4e5cb9
// body: available
// range: 0x4e5cb9-0x4e5ded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e5cb9(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 local_28;
  float afStack_24 [2];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dfb59;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = thunk_FUN_004c1d58(DAT_00955fd4 ^ (uint)&stack0xffffffc8);
  (**(code **)(*(int *)(iVar1 + 0x28) + 8))(&local_28,in_ECX + -0x7c);
  local_14 = (void *)0x0;
  if (*(char *)(in_ECX + 0x53) == '\0') {
    iVar1 = *(int *)(in_ECX + 0x38);
    fVar5 = (float10)FUN_0049fa3d();
    afStack_24[0] = (float)(fVar5 + (float10)0.5);
    iVar4 = FUN_004a8e4a(afStack_24[0]);
    FUN_004c0be5(iVar4 + *(int *)(in_ECX + 0x40) + 6 + iVar1);
    FUN_004c0bf7(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x14) - *(int *)(in_ECX + -0x60)
                );
  }
  else {
    uVar2 = FUN_004718c0(in_ECX + 8,afStack_24);
    local_14._0_1_ = 1;
    local_28 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    iVar1 = *(int *)(in_ECX + 0x3c);
    iVar4 = *(int *)(in_ECX + 0x44);
    fVar5 = (float10)FUN_0049fa7b(uVar2);
    iVar3 = FUN_004a8e4a((float)(fVar5 + (float10)0.5),uVar6);
    FUN_00440367(iVar3 + iVar4 + iVar1);
    FUN_004c0be5(uVar6);
    local_14 = (void *)((uint)local_14._1_3_ << 8);
    FUN_004652d6();
    FUN_004c0c0f(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_004c4d7a();
  ExceptionList = pvStack_1c;
  return;
}

