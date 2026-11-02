// rea decompile_all
// name: FUN_004e034c
// address: 0x4e034c
// body: available
// range: 0x4e034c-0x4e04d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e034c(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puStack_50;
  uint uStack_4c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 *local_2c;
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de010;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  uVar9 = 0;
  if (*(int *)(in_ECX + 0x84) != 0) {
    return;
  }
  puStack_50 = (undefined1 *)(in_ECX + 0x74);
  ExceptionList = &local_14;
  FUN_004652e4();
  local_c = 0;
  puStack_50 = (undefined1 *)0x4e03a4;
  FUN_004652cd();
  local_2c = (undefined1 *)&puStack_50;
  local_c._0_1_ = 1;
  FUN_004c751a();
  puVar1 = (undefined1 *)FUN_00465d9e(local_38);
  if (-1 < (int)puVar1) {
    puStack_50 = puVar1 + 5;
    uVar2 = FUN_004664c4();
    puStack_50 = local_30;
    local_c._0_1_ = 2;
    FUN_00466678(uVar2);
    puStack_50 = local_34;
    FUN_00465317();
    puStack_50 = (undefined1 *)0x4e0400;
    FUN_004652d6();
    local_c._0_1_ = 1;
    puStack_50 = (undefined1 *)0x4e040e;
    FUN_004652d6();
    puStack_50 = puVar1;
    FUN_0046642b(local_38,&local_2c);
    puStack_50 = local_38;
    FUN_00465317();
    puStack_50 = (undefined1 *)0x4e0435;
    FUN_004652d6();
  }
  if (*(int *)(in_ECX + 0x88) != 0) {
    if (*(int *)(in_ECX + 0x70) != 0) {
      puStack_50 = (undefined1 *)0x4e0449;
      iVar3 = FUN_004e2830();
      if (iVar3 < 1) goto LAB_004e044f;
    }
    uVar9 = 1;
  }
LAB_004e044f:
  puStack_50 = (undefined1 *)0x4e0456;
  iVar3 = thunk_FUN_004c1d58();
  puStack_50 = (undefined1 *)(-(uint)(*(char *)(in_ECX + 0x7f) != '\0') & in_ECX + 0x78U);
  uVar2 = *(undefined4 *)(in_ECX + 0x80);
  puVar1 = local_34;
  puVar10 = local_38;
  uVar5 = (uint)*(byte *)(in_ECX + 0x7e);
  uVar6 = (uint)*(byte *)(in_ECX + 0x90);
  uVar7 = (uint)*(byte *)(in_ECX + 0x7c);
  uVar8 = (uint)*(byte *)(in_ECX + 0x7d);
  local_2c = *(undefined1 **)(iVar3 + 0x20);
  uVar4 = FUN_004c2047(local_28);
  (**(code **)(local_2c + 8))(param_1,uVar4,uVar8,uVar7,uVar6,uVar5,uVar9,puVar10,puVar1,uVar2);
  puStack_50 = (undefined1 *)0x4e04b7;
  FUN_004652d6();
  puStack_50 = (undefined1 *)0x4e04c0;
  FUN_004652d6();
  ExceptionList = local_14;
  return;
}

