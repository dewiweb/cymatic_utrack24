// rea decompile_all
// name: FUN_00442e0d
// address: 0x442e0d
// body: available
// range: 0x442e0d-0x443103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442e0d(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  int local_34;
  int local_30;
  int *local_2c;
  int *local_24;
  undefined1 local_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e28ba;
  local_14 = ExceptionList;
  uVar5 = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  bVar3 = false;
  bVar9 = false;
  local_2c = param_1 + 0x20;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_004f682b(uVar5);
  FUN_0045ef8e();
  local_34 = 0;
  if (0 < *(int *)(*(int *)(param_1[0x1e] + 0x7c) + 0x1c8)) {
    do {
      piVar6 = (int *)FUN_0045b356(local_34);
      local_24 = piVar6;
      if (piVar6 != (int *)0x0) {
        local_30 = FUN_005af82d(0x180);
        local_c = 0;
        if (local_30 == 0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*piVar6 + 0x2c))(local_20);
          local_c = CONCAT31(local_c._1_3_,1);
          FUN_00501d60();
          uVar7 = FUN_00466c04();
          local_c = 2;
          bVar3 = true;
          bVar9 = true;
          local_30 = FUN_00443164(local_30,uVar7,param_1,piVar6);
        }
        if (bVar9) {
          bVar9 = false;
          FUN_004652d6();
        }
        local_c = 0xffffffff;
        if (bVar3) {
          bVar3 = false;
          FUN_00501900();
        }
        iVar4 = local_30;
        FUN_004481ad();
        FUN_004c1064(0xffffffff);
        piVar6 = param_1 + 0x1d;
        if (piVar6 != (int *)0x0) {
          piVar8 = *(int **)(iVar4 + 0x84);
          piVar1 = piVar8 + *(int *)(iVar4 + 0x8c);
          for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
            if (piVar6 == (int *)*piVar8) goto LAB_00442f9a;
          }
          if (*(int *)(iVar4 + 0x88) < *(int *)(iVar4 + 0x8c) + 1) {
            FUN_004f8197();
          }
          iVar2 = *(int *)(iVar4 + 0x8c);
          *(int *)(iVar4 + 0x8c) = iVar2 + 1;
          piVar1 = (int *)(*(int *)(iVar4 + 0x84) + iVar2 * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = (int)piVar6;
          }
        }
LAB_00442f9a:
        piVar6 = local_24;
        FUN_0043ffa6();
        (**(code **)(*(int *)(*(int *)(piVar6[1] + 8) + 4 + (int)piVar6) + 4))();
      }
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)(*(int *)(param_1[0x1e] + 0x7c) + 0x1c8));
  }
  FUN_0045efa9();
  local_24 = (int *)FUN_005af82d(0x180);
  local_c = 5;
  bVar9 = local_24 == (int *)0x0;
  if (bVar9) {
    local_30 = 0;
  }
  else {
    FUN_0046537e(&local_34);
    local_c = CONCAT31(local_c._1_3_,6);
    local_30 = FUN_00443164(local_24,&local_34,param_1,0);
  }
  local_c = 0xffffffff;
  if (!bVar9) {
    FUN_004652d6();
  }
  iVar4 = local_30;
  FUN_004481ad();
  piVar6 = param_1 + 0x1d;
  if (piVar6 != (int *)0x0) {
    piVar8 = *(int **)(iVar4 + 0x84);
    piVar1 = piVar8 + *(int *)(iVar4 + 0x8c);
    for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
      if (piVar6 == (int *)*piVar8) goto LAB_004430ba;
    }
    if (*(int *)(iVar4 + 0x88) < *(int *)(iVar4 + 0x8c) + 1) {
      FUN_004f8197();
    }
    iVar2 = *(int *)(iVar4 + 0x8c);
    *(int *)(iVar4 + 0x8c) = iVar2 + 1;
    piVar1 = (int *)(*(int *)(iVar4 + 0x84) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = (int)piVar6;
    }
  }
LAB_004430ba:
  FUN_0043ffa6();
  FUN_004c1064(0xffffffff);
  (**(code **)(*param_1 + 0x84))();
  FUN_004c1613(param_1);
  ExceptionList = local_14;
  return;
}

