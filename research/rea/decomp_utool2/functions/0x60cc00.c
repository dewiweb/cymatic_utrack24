// rea decompile_all
// name: FUN_0060cc00
// address: 0x60cc00
// body: available
// range: 0x60cc00-0x60d0b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060cc00(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  int *in_ECX;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 local_58;
  void *local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  float local_24;
  undefined4 local_20;
  char cStack_1d;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c5d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006e8e70();
  FUN_00684a80();
  FUN_006e8e70();
  FUN_006e8e70();
  local_28 = 0;
  do {
    iVar5 = 0;
    iVar6 = local_28;
    do {
      uVar7 = (uint)(byte)(&DAT_00bfe018)[iVar5] + iVar6;
      if ((in_ECX[0x48] <= (int)uVar7) && ((int)uVar7 <= in_ECX[0x49])) {
        FUN_0060d3f0();
        puVar4 = (uint *)in_ECX[0x31];
        puVar2 = puVar4 + in_ECX[0x33];
        for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
          if (uVar7 == *puVar4) {
            local_18 = (undefined4 *)CONCAT31(local_18._1_3_,1);
            goto LAB_0060ccd3;
          }
        }
        local_18 = (undefined4 *)((uint)local_18._1_3_ << 8);
LAB_0060ccd3:
        if (uVar7 < 0x80) {
          local_24 = (float)CONCAT31(local_24._1_3_,1);
          if ((in_ECX[0x2f] & (uint)*(ushort *)(in_ECX[0x29] + 0x18 + uVar7 * 2)) == 0)
          goto LAB_0060ccf4;
        }
        else {
LAB_0060ccf4:
          local_24 = (float)((uint)local_24 & 0xffffff00);
        }
        puStack_c8 = (undefined4 *)0x60cd20;
        puStack_c4 = (undefined4 *)uVar7;
        (**(code **)(*in_ECX + 0xb0))();
        iVar6 = local_28;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 7);
    local_28 = iVar6 + 0xc;
  } while (local_28 < 0x80);
  local_40 = in_ECX[7];
  local_2c = in_ECX[6];
  local_3c = 0;
  local_24 = 0.0;
  local_18 = (undefined4 *)0x0;
  local_28._1_3_ = 0;
  if (in_ECX[0x2d] == 1) {
    local_24 = (float)local_2c - 1.0;
    local_18 = (undefined4 *)((float)local_2c - 5.0);
  }
  else if (in_ECX[0x2d] == 2) {
    local_18 = (undefined4 *)0x40a00000;
  }
  else {
    local_28._1_3_ = 0x40a000;
  }
  local_28._0_1_ = 0;
  (**(code **)(*in_ECX + 0xcc))();
  (**(code **)(*in_ECX + 0xcc))();
  local_14 = local_14 + ((local_34 - in_ECX[0x2b]) - local_38);
  puStack_c8 = &local_1c;
  puStack_c4 = (undefined4 *)0x1005008;
  iStack_cc = 0x60ce22;
  FUN_006e8e70();
  if (local_1c._3_1_ != '\0') {
    puStack_c4._0_1_ = (undefined1)local_28;
    puStack_c4._1_3_ = local_28._1_3_;
    puStack_c8 = local_18;
    FUN_006842b0(&iStack_cc);
    FUN_006840c0(local_1c);
    local_8 = 0;
    puStack_c4 = (undefined4 *)0x60ce85;
    FUN_0067e860();
    local_8 = CONCAT31(local_8._1_3_,1);
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    puStack_c4 = (undefined4 *)0x60ceab;
    (**(code **)(*(int *)*param_1 + 0x44))();
    if (local_84 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_84 + 1;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        puStack_c4 = (undefined4 *)0x60cec8;
        (**(code **)*local_84)();
      }
    }
    if (local_88 != (undefined4 *)0x0) {
      puStack_c4 = (undefined4 *)0x60ceda;
      FID_conflict__free((void *)local_88[5]);
      puStack_c4 = (undefined4 *)0x20;
      puStack_c8 = local_88;
      iStack_cc = 0x60cee2;
      FUN_004bfe14();
    }
    local_8 = 0xffffffff;
    puStack_c4 = (undefined4 *)0x60cef4;
    FID_conflict__free(local_54);
    iVar6 = in_ECX[0x2d];
    if (iVar6 == 0) {
      puStack_c4 = (undefined4 *)0x5;
      puStack_c8 = (undefined4 *)local_14;
    }
    else {
      if ((iVar6 != 1) && (iVar6 != 2)) goto LAB_0060cf44;
      puStack_c4 = (undefined4 *)local_14;
      puStack_c8 = (undefined4 *)0x5;
    }
    iStack_cc = 0;
    iVar6 = *(int *)*param_1;
    puStack_c4 = (undefined4 *)FUN_00472d90();
    puStack_c8 = (undefined4 *)0x60cf34;
    (**(code **)(iVar6 + 0x54))();
  }
LAB_0060cf44:
  if (cStack_1d != '\0') {
    puStack_c4 = (undefined4 *)0x60cf59;
    FUN_00684c50();
    iVar6 = in_ECX[0x2d];
    if (iVar6 == 0) {
      puStack_c4 = (undefined4 *)0x1;
      puStack_c8 = (undefined4 *)local_14;
      iVar6 = *(int *)*param_1;
      iStack_cc = local_40 + -1;
    }
    else if (iVar6 == 1) {
      puStack_c4 = (undefined4 *)local_14;
      iVar6 = *(int *)*param_1;
      puStack_c8 = (undefined4 *)0x1;
      iStack_cc = 0;
    }
    else {
      if (iVar6 != 2) goto LAB_0060cfb5;
      puStack_c4 = (undefined4 *)local_14;
      iVar6 = *(int *)*param_1;
      puStack_c8 = (undefined4 *)0x1;
      iStack_cc = 0;
    }
    puStack_c4 = (undefined4 *)FUN_00472d90();
    puStack_c8 = (undefined4 *)0x60cfb5;
    (**(code **)(iVar6 + 0x54))();
  }
LAB_0060cfb5:
  puStack_c4 = (undefined4 *)0x1005001;
  puStack_c8 = (undefined4 *)local_44;
  iStack_cc = 0x60cfc7;
  FUN_006e8e70();
  local_24 = 0.0;
  do {
    iVar6 = 0;
    fVar3 = local_24;
    do {
      uVar7 = (uint)(byte)(&DAT_00bfe010)[iVar6] + (int)fVar3;
      if ((in_ECX[0x48] <= (int)uVar7) && ((int)uVar7 <= in_ECX[0x49])) {
        puStack_c4 = &local_58;
        puStack_c8 = (undefined4 *)0x60d00d;
        FUN_0060d3f0();
        puVar4 = (uint *)in_ECX[0x31];
        puVar2 = puVar4 + in_ECX[0x33];
        for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
          if (uVar7 == *puVar4) {
            local_2c = CONCAT31(local_2c._1_3_,1);
            goto LAB_0060d033;
          }
        }
        local_2c = (uint)local_2c._1_3_ << 8;
LAB_0060d033:
        if ((0x7f < uVar7) ||
           (local_28._0_1_ = 1,
           (in_ECX[0x2f] & (uint)*(ushort *)(in_ECX[0x29] + 0x18 + uVar7 * 2)) == 0)) {
          local_28._0_1_ = 0;
        }
        puStack_c4 = (undefined4 *)local_2c;
        puStack_c8._0_1_ = (undefined1)local_28;
        puStack_c8._1_3_ = local_28._1_3_;
        iStack_cc = local_4c;
        (**(code **)(*in_ECX + 0xb4))(uVar7,param_1,local_58,local_54,local_50);
        fVar3 = local_24;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
    local_24 = (float)((int)fVar3 + 0xc);
    if (0x7f < (int)local_24) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

