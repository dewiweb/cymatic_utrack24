// rea decompile_all
// name: FUN_004eda42
// address: 0x4eda42
// body: available
// range: 0x4eda42-0x4edbe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eda42(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  int *unaff_EBX;
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de3fa;
  local_14 = ExceptionList;
  uStack_5c = DAT_00955fd4 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_14;
  uStack_60 = 0x4eda72;
  FUN_004f4b4e();
  uStack_60 = 0x4eda79;
  cVar4 = (**(code **)(*unaff_EBX + 0x34))();
  uStack_44 = CONCAT31(uStack_44._1_3_,cVar4);
  if (((*(byte *)(unaff_EBX[1] + 0x68) & 1) != 0) && (cVar4 == '\0')) {
    uStack_60 = 0x4eda9b;
    FUN_004f5fb6();
    uStack_c = 0;
    (**(code **)(*unaff_EBX + 0x1c))(auStack_6c);
    FUN_004f8db5(&uStack_38,unaff_EBX[1]);
    iVar1 = unaff_EBX[1];
    iVar2 = *(int *)(iVar1 + 0x18);
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
    iStack_1c = *(int *)(iVar1 + 0x1c);
    uStack_64 = uStack_38;
    uStack_60 = uStack_34;
    uStack_68 = 0x4edafa;
    cVar5 = FUN_004f5e38();
    uStack_40 = CONCAT31((int3)((uint)uVar3 >> 8),cVar5);
    if ((iVar2 != iStack_30) || (uStack_4c = uStack_4c & 0xffffff00, iStack_1c != iStack_2c)) {
      uStack_4c = CONCAT31(uStack_4c._1_3_,1);
    }
    if ((cVar5 != '\0') || ((char)uStack_4c != '\0')) {
      iVar1 = unaff_EBX[1];
      *(undefined4 *)(iVar1 + 0x10) = uStack_38;
      *(undefined4 *)(iVar1 + 0x14) = uStack_34;
      *(int *)(iVar1 + 0x18) = iStack_30;
      *(int *)(iVar1 + 0x1c) = iStack_2c;
      if ((char)uStack_4c != '\0') {
        uStack_60 = unaff_EBX[1];
        uStack_64 = 0x4edb52;
        FUN_004c1613();
      }
      uStack_60 = uStack_4c;
      uStack_64 = uStack_40;
      uStack_68 = 0x4edb62;
      FUN_004c0af3();
      uStack_60 = 0;
      uStack_64 = 0x4edb6d;
      cVar5 = FUN_004f5fce();
      if (cVar5 != '\0') {
        uStack_60 = 0x4edb7a;
        FUN_00474d0f();
        ExceptionList = local_14;
        return;
      }
    }
    uStack_c = 0xffffffff;
    uStack_60 = 0x4edb8a;
    FUN_00474d0f();
  }
  if ((char)unaff_EBX[0xc] != cVar4) {
    uStack_60 = uStack_44;
    *(char *)(unaff_EBX + 0xc) = cVar4;
    uStack_64 = 0x4edba2;
    (**(code **)(*(int *)unaff_EBX[1] + 0x38))();
    uStack_60 = 0x4edbaa;
    FUN_004c011e();
  }
  uStack_60 = 0x4edbb1;
  cVar4 = (**(code **)(*unaff_EBX + 0x3c))();
  if (cVar4 == '\0') {
    iVar1 = unaff_EBX[1];
    unaff_EBX[3] = *(int *)(iVar1 + 0x10);
    unaff_EBX[4] = *(int *)(iVar1 + 0x14);
    unaff_EBX[5] = *(int *)(iVar1 + 0x18);
    unaff_EBX[6] = *(int *)(iVar1 + 0x1c);
  }
  ExceptionList = local_14;
  return;
}

