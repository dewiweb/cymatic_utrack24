// rea decompile_all
// name: FUN_0045e709
// address: 0x45e709
// body: available
// range: 0x45e709-0x45eca4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0045e709(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint in_ECX;
  undefined4 *puVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x45e715;
  puVar4 = (undefined4 *)auStack_20;
  if (*(int *)(in_ECX + 0x10c) == param_1) {
    if (param_2 == 2) {
      if ((short)param_5 != -1) {
        puStack_24 = (undefined4 *)0x45e82e;
        FUN_00466c04();
        local_8 = 1;
        puStack_24 = (undefined4 *)0x45e83a;
        param_5 = FUN_0046694e();
        puStack_24 = &param_5;
        uStack_28 = 0x45e84c;
        FUN_0043e86a();
        puStack_24 = (undefined4 *)0x45e854;
        FUN_004652d6();
      }
      goto LAB_0045ec9d;
    }
    if (param_2 != 0x80) {
      if (param_2 != 0x81) {
        if (param_2 == 0x83) {
          if ((short)param_5 != -1) {
            puStack_24 = (undefined4 *)0x45e76d;
            FUN_00466c04();
            local_8 = 2;
            puStack_24 = (undefined4 *)0x45e775;
            param_5 = FUN_0046694e();
            puStack_24 = &param_5;
            uStack_28 = 0x45e787;
            FUN_0043e86a();
            local_8 = 0xffffffff;
            puStack_24 = (undefined4 *)0x45e793;
            FUN_004652d6();
          }
          puStack_24 = (undefined4 *)0x0;
          uStack_28 = -(uint)(in_ECX != 0x30) & in_ECX;
          iStack_2c = 1;
          iStack_30 = param_4 + 1;
          uStack_34 = *(undefined4 *)(in_ECX + 0x124);
          puVar4 = &uStack_38;
          uStack_38 = 0x45e7ba;
          uVar1 = (**(code **)(**(int **)(in_ECX + 0x100) + 0xb4))();
          *(undefined4 *)(in_ECX + 0x10c) = uVar1;
        }
        else {
          *(undefined4 *)(in_ECX + 0x10c) = 0;
        }
        goto LAB_0045ec9d;
      }
      if ((short)param_5 != -1) {
        puStack_24 = (undefined4 *)0x45e7de;
        FUN_00466c04();
        local_8 = 0;
        puStack_24 = (undefined4 *)0x45e7e7;
        param_5 = FUN_0046694e();
        puStack_24 = &param_5;
        uStack_28 = 0x45e7f9;
        FUN_0043e86a();
        puStack_24 = (undefined4 *)0x45e801;
        FUN_004652d6();
      }
    }
    *(undefined4 *)(in_ECX + 0x10c) = 0;
LAB_0045e808:
    *(undefined1 *)(in_ECX + 0x79) = 1;
  }
  else if (*(int *)(in_ECX + 0x110) == param_1) {
    if (param_2 == 2) {
      puStack_24 = (undefined4 *)0x14;
      uStack_28 = 0x45e942;
      iVar2 = FUN_005af82d();
      local_8 = 4;
      if (iVar2 != 0) {
        puStack_24 = (undefined4 *)param_6;
        uStack_28 = param_5;
        iStack_30 = 0x45e95d;
        iStack_2c = iVar2;
        FUN_0045f814();
      }
      puStack_24 = (undefined4 *)0x45e96e;
      FUN_004481ad();
      goto LAB_0045ec9d;
    }
    if (param_2 != 0x80) {
      if (param_2 != 0x81) {
        if (param_2 == 0x83) {
          puStack_24 = (undefined4 *)0x14;
          uStack_28 = 0x45e896;
          iVar2 = FUN_005af82d();
          local_8 = 5;
          if (iVar2 != 0) {
            puStack_24 = (undefined4 *)param_6;
            uStack_28 = param_5;
            iStack_30 = 0x45e8b1;
            iStack_2c = iVar2;
            FUN_0045f814();
          }
          local_8 = 0xffffffff;
          puStack_24 = (undefined4 *)0x45e8c6;
          FUN_004481ad();
          puStack_24 = (undefined4 *)0x0;
          uStack_28 = -(uint)(in_ECX != 0x30) & in_ECX;
          iStack_2c = 1;
          iStack_30 = param_4 + 1;
          uStack_34 = *(undefined4 *)(in_ECX + 300);
          puVar4 = &uStack_38;
          uStack_38 = 0x45e8ed;
          uVar1 = (**(code **)(**(int **)(in_ECX + 0x100) + 0xb4))();
          *(undefined4 *)(in_ECX + 0x110) = uVar1;
        }
        else {
          *(undefined4 *)(in_ECX + 0x110) = 0;
        }
        goto LAB_0045ec9d;
      }
      puStack_24 = (undefined4 *)0x14;
      uStack_28 = 0x45e8ff;
      iVar2 = FUN_005af82d();
      local_8 = 3;
      if (iVar2 != 0) {
        puStack_24 = (undefined4 *)param_6;
        uStack_28 = param_5;
        iStack_30 = 0x45e91a;
        iStack_2c = iVar2;
        FUN_0045f814();
      }
      puStack_24 = (undefined4 *)0x45e92b;
      FUN_004481ad();
    }
    *(undefined4 *)(in_ECX + 0x110) = 0;
    *(undefined1 *)(in_ECX + 0x7d) = 1;
  }
  else {
    if (*(int *)(in_ECX + 0x114) == param_1) {
      if (param_2 == 2) {
        param_5 = param_5 & 0xffff;
        puStack_24 = &param_5;
        uStack_28 = 0x45ea5d;
        FUN_0043e86a();
        goto LAB_0045ec9d;
      }
      if (param_2 == 0x80) {
        iVar2 = 0;
        *(undefined4 *)(in_ECX + 0x114) = 0;
        if (*(int *)(in_ECX + 0x21c) != 0) {
          if (*(int *)(in_ECX + 0x21c) != 0) {
            iVar2 = **(int **)(in_ECX + 0x214);
          }
          if (iVar2 == 0xffff) {
            puStack_24 = (undefined4 *)0x45ea42;
            FUN_0043f3c8();
          }
        }
      }
      else {
        if (param_2 != 0x81) {
          if (param_2 == 0x83) {
            param_5 = param_5 & 0xffff;
            puStack_24 = &param_5;
            uStack_28 = 0x45e9bb;
            FUN_0043e86a();
            puStack_24 = (undefined4 *)0x0;
            uStack_28 = -(uint)(in_ECX != 0x30) & in_ECX;
            iStack_2c = 1;
            iStack_30 = param_4 + 1;
            uStack_34 = *(undefined4 *)(in_ECX + 0x128);
            puVar4 = &uStack_38;
            uStack_38 = 0x45e9e2;
            uVar1 = (**(code **)(**(int **)(in_ECX + 0x100) + 0xb4))();
            *(undefined4 *)(in_ECX + 0x114) = uVar1;
          }
          else {
            *(undefined4 *)(in_ECX + 0x114) = 0;
          }
          goto LAB_0045ec9d;
        }
        param_5 = param_5 & 0xffff;
        puStack_24 = &param_5;
        uStack_28 = 0x45ea03;
        FUN_0043e86a();
        *(undefined4 *)(in_ECX + 0x114) = 0;
      }
      goto LAB_0045e808;
    }
    if (*(int *)(in_ECX + 0x118) == param_1) {
      if (param_2 == 2) {
        puStack_24 = (undefined4 *)0x10;
        uStack_28 = 0x45eb46;
        iVar2 = FUN_005af82d();
        local_8 = 7;
        if (iVar2 != 0) {
          puStack_24 = (undefined4 *)param_6;
          iStack_2c = 0x45eb62;
          uStack_28 = iVar2;
          FUN_0045f76a();
        }
        puStack_24 = (undefined4 *)0x45eb73;
        FUN_004481ad();
        goto LAB_0045ec9d;
      }
      if (param_2 != 0x80) {
        if (param_2 != 0x81) {
          if (param_2 == 0x83) {
            puStack_24 = (undefined4 *)0x10;
            uStack_28 = 0x45ea9f;
            iVar2 = FUN_005af82d();
            local_8 = 8;
            if (iVar2 != 0) {
              puStack_24 = (undefined4 *)param_6;
              iStack_2c = 0x45eabb;
              uStack_28 = iVar2;
              FUN_0045f76a();
            }
            local_8 = 0xffffffff;
            puStack_24 = (undefined4 *)0x45ead0;
            FUN_004481ad();
            puStack_24 = (undefined4 *)0x0;
            uStack_28 = -(uint)(in_ECX != 0x30) & in_ECX;
            iStack_2c = 1;
            iStack_30 = param_4 + 1;
            uStack_34 = param_3;
            puVar4 = &uStack_38;
            uStack_38 = 0x45eaf4;
            uVar1 = (**(code **)(**(int **)(in_ECX + 0x100) + 0xb4))();
            *(undefined4 *)(in_ECX + 0x118) = uVar1;
          }
          else {
            *(undefined4 *)(in_ECX + 0x118) = 0;
          }
          goto LAB_0045ec9d;
        }
        puStack_24 = (undefined4 *)0x10;
        uStack_28 = 0x45eb06;
        uVar3 = FUN_005af82d();
        local_8 = 6;
        if (uVar3 != 0) {
          puStack_24 = (undefined4 *)param_6;
          iStack_2c = 0x45eb22;
          uStack_28 = uVar3;
          FUN_0045f76a();
        }
        puStack_24 = (undefined4 *)0x45eb33;
        FUN_004481ad();
      }
      *(undefined4 *)(in_ECX + 0x118) = 0;
    }
    else {
      if (*(int *)(in_ECX + 0x11c) != param_1) goto LAB_0045ec9d;
      if (param_2 == 2) {
        uVar3 = param_5 & 0xfff;
        if ((param_5 & 0xf000) != 0) {
          uVar3 = uVar3 + 2;
        }
        if ((int)uVar3 < *(int *)(in_ECX + 0x26c)) {
          puStack_24 = (undefined4 *)0x45ec9d;
          FUN_0045f7ea();
        }
        goto LAB_0045ec9d;
      }
      if (param_2 != 0x80) {
        if (param_2 != 0x81) {
          if (param_2 == 0x83) {
            uVar3 = param_5 & 0xfff;
            if ((param_5 & 0xf000) != 0) {
              uVar3 = uVar3 + 2;
            }
            if ((int)uVar3 < *(int *)(in_ECX + 0x26c)) {
              puStack_24 = (undefined4 *)0x45ebe5;
              FUN_0045f7ea();
            }
            puStack_24 = (undefined4 *)0x0;
            uStack_28 = -(uint)(in_ECX != 0x30) & in_ECX;
            iStack_2c = 1;
            iStack_30 = param_4 + 1;
            uStack_34 = *(undefined4 *)(in_ECX + 0x138);
            puVar4 = &uStack_38;
            uStack_38 = 0x45ec0c;
            uVar1 = (**(code **)(**(int **)(in_ECX + 0x100) + 0xb4))();
            *(undefined4 *)(in_ECX + 0x11c) = uVar1;
          }
          else {
            *(undefined4 *)(in_ECX + 0x11c) = 0;
          }
          goto LAB_0045ec9d;
        }
        uVar3 = param_5 & 0xfff;
        if ((param_5 & 0xf000) != 0) {
          uVar3 = uVar3 + 2;
        }
        if ((int)uVar3 < *(int *)(in_ECX + 0x26c)) {
          puStack_24 = (undefined4 *)0x45ec4e;
          FUN_0045f7ea();
        }
      }
      *(undefined4 *)(in_ECX + 0x11c) = 0;
    }
    *(undefined1 *)(in_ECX + 0xe0) = 1;
  }
  puStack_24 = (undefined4 *)0x45ec64;
  FUN_0047433f();
LAB_0045ec9d:
  *(undefined4 *)((int)puVar4 + -4) = 0x45eca2;
  return;
}

