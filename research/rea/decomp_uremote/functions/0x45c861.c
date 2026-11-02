// rea decompile_all
// name: FUN_0045c861
// address: 0x45c861
// body: available
// range: 0x45c861-0x45cf17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

int * FUN_0045c861(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 **param_4,
                  byte param_5)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  undefined1 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  undefined1 local_8c [16];
  undefined1 local_7c [8];
  void *local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [72];
  undefined1 local_10 [8];
  int local_8;
  
  local_68 = 0x20;
  local_6c = 0x45c871;
  if (*(int **)(in_ECX + 0x11c) == (int *)0x0) {
    ExceptionList = local_74;
    return (int *)&LAB_005dac51;
  }
  puStack_a8 = local_10;
  puStack_ac = (undefined4 *)0x45c88c;
  puStack_ac = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x11c) + 8))();
  puStack_b0 = param_2;
  uStack_b4 = 0x45c895;
  piVar2 = (int *)FUN_00503830();
  if ((char)piVar2 == '\0') {
    ExceptionList = local_74;
    return piVar2;
  }
  uVar1 = *(ushort *)(param_3 + 4);
  piVar2 = (int *)(uVar1 - 0xf000);
  if ((int *)0x60 < piVar2) {
    ExceptionList = local_74;
    return piVar2;
  }
  piVar2 = (int *)(uint)*(byte *)(uVar1 + 0x44df81);
  switch(uVar1) {
  case 0xf000:
    puStack_ac = (undefined4 *)0x45c8d0;
    FUN_00466c04();
    puStack_ac = (undefined4 *)(in_ECX + 0x1d0);
    puStack_b0 = (undefined1 *)0x45c8de;
    FUN_00465317();
    break;
  case 0xf001:
    puStack_ac = (undefined4 *)0x45c900;
    FUN_00466c04();
    puStack_ac = (undefined4 *)(in_ECX + 0x1d4);
    puStack_b0 = (undefined1 *)0x45c90e;
    FUN_00465317();
    break;
  case 0xf002:
    puStack_ac = (undefined4 *)0x45c921;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45c926;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x1d8) = uVar3;
    break;
  case 0xf003:
    puStack_ac = (undefined4 *)0x45c93f;
    FUN_00466c04();
    puStack_ac = (undefined4 *)(in_ECX + 0x1dc);
    puStack_b0 = (undefined1 *)0x45c94d;
    FUN_00465317();
    break;
  case 0xf004:
    puStack_ac = (undefined4 *)0x45c960;
    FUN_00466c04();
    puStack_ac = (undefined4 *)(in_ECX + 0x1e0);
    puStack_b0 = (undefined1 *)0x45c96e;
    FUN_00465317();
    break;
  case 0xf005:
    puStack_ac = (undefined4 *)0x45c984;
    FUN_00466c04();
    puStack_ac = (undefined4 *)(in_ECX + 0x1e8);
    puStack_b0 = (undefined1 *)0x45c992;
    FUN_00465317();
    puStack_ac = (undefined4 *)0x45c99a;
    FUN_004652d6();
    puStack_ac = &param_4;
    puStack_b0 = (undefined1 *)0x45c9a8;
    FUN_0046537e();
    puStack_ac = (undefined4 *)0x45c9b2;
    iVar7 = FUN_00465a33();
    puStack_ac = (undefined4 *)0x45c9c2;
    FUN_004652d6();
    if (iVar7 == 0) {
      *(undefined4 *)(in_ECX + 0x1e4) = 2;
    }
    else {
      puStack_ac = (undefined4 *)0x45c9dc;
      uVar3 = FUN_0046694e();
      *(undefined4 *)(in_ECX + 0x1e4) = uVar3;
    }
    goto LAB_0045c8e6;
  case 0xf006:
    puStack_ac = (undefined4 *)0x45c9f5;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45ca00;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x1ec) = uVar3;
    puStack_ac = (undefined4 *)0x45ca0a;
    FUN_004652d6();
    puStack_ac = *(undefined4 **)(in_ECX + 0x1ec);
    puStack_b0 = local_58;
    uStack_b4 = 0x45ca15;
    FUN_0044a500();
    puStack_ac = (undefined4 *)(in_ECX + 0x1f0);
    puStack_b0 = (undefined1 *)0x45ca25;
    FUN_00465317();
    goto LAB_0045ca28;
  case 0xf007:
    puStack_ac = (undefined4 *)0x45ca47;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45ca52;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 500) = uVar3;
    puStack_ac = (undefined4 *)0x45ca5c;
    FUN_004652d6();
    puStack_ac = *(undefined4 **)(in_ECX + 500);
    puStack_b0 = local_7c;
    uStack_b4 = 0x45ca67;
    FUN_0044a500();
    puStack_ac = (undefined4 *)(in_ECX + 0x1f8);
    puStack_b0 = (undefined1 *)0x45ca77;
    FUN_00465317();
    goto LAB_0045ca28;
  case 0xf008:
    puStack_ac = (undefined4 *)0x45ca8a;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45ca95;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x1fc) = uVar3;
    puStack_ac = (undefined4 *)0x45ca9f;
    FUN_004652d6();
    puStack_ac = *(undefined4 **)(in_ECX + 0x1fc);
    puStack_b0 = local_60;
    uStack_b4 = 0x45caaa;
    FUN_0044a500();
    puStack_ac = (undefined4 *)(in_ECX + 0x200);
    puStack_b0 = (undefined1 *)0x45caba;
    FUN_00465317();
    goto LAB_0045ca28;
  case 0xf009:
    puStack_ac = (undefined4 *)0x45cad0;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cadb;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x204) = uVar3;
    puStack_ac = (undefined4 *)0x45cae5;
    FUN_004652d6();
    puStack_ac = *(undefined4 **)(in_ECX + 0x204);
    puStack_b0 = local_8c;
    uStack_b4 = 0x45caf0;
    FUN_0044a500();
    puStack_ac = (undefined4 *)(in_ECX + 0x208);
    puStack_b0 = (undefined1 *)0x45cb00;
    FUN_00465317();
    goto LAB_0045ca28;
  default:
    goto switchD_0045c8bb_caseD_f00a;
  case 0xf010:
    puStack_ac = (undefined4 *)0x45cb16;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cb21;
    iVar7 = FUN_0046694e();
    *(int *)(in_ECX + 0x210) = iVar7;
    puStack_ac = (undefined4 *)0x45cb2b;
    FUN_004652d6();
    puStack_ac = (undefined4 *)0x45cb33;
    FUN_004652cd();
    local_6c = 0;
    iVar7 = *(int *)(in_ECX + 0x210);
    if ((((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 2)) ||
       (((iVar7 == 3 || (iVar7 == 4)) || ((iVar7 == 5 || (iVar7 == 6)))))) {
      puStack_ac = &param_2;
      puStack_b0 = (undefined1 *)0x45cb7f;
      FUN_0046537e();
      puStack_ac = &param_4;
      puStack_b0 = (undefined1 *)0x45cb8b;
      FUN_00465317();
      puStack_ac = (undefined4 *)0x45cb93;
      FUN_004652d6();
    }
    puStack_ac = (undefined4 *)(in_ECX + 0x214);
    goto LAB_0045cc50;
  case 0xf011:
    puStack_ac = (undefined4 *)0x45cbf3;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cbf8;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x21c) = uVar3;
    puStack_ac = (undefined4 *)0x45cc06;
    FUN_004652d6();
    puStack_ac = (undefined4 *)0x45cc0e;
    FUN_004652cd();
    local_6c = 1;
    if ((*(int *)(in_ECX + 0x21c) == 1) || (*(int *)(in_ECX + 0x21c) == 2)) {
      puStack_ac = &param_2;
      puStack_b0 = (undefined1 *)0x45cc36;
      FUN_0046537e();
      puStack_ac = &param_4;
      puStack_b0 = (undefined1 *)0x45cc42;
      FUN_00465317();
      puStack_ac = (undefined4 *)0x45cc4a;
      FUN_004652d6();
    }
    puStack_ac = (undefined4 *)(in_ECX + 0x220);
LAB_0045cc50:
    puStack_b0 = (undefined1 *)0x45cc59;
    FUN_00465317();
    *(undefined1 *)(in_ECX + 0x95) = 1;
    puStack_ac = (undefined4 *)0x45cc68;
    FUN_0047433f();
    puStack_ac = (undefined4 *)0x45cc70;
    piVar2 = (int *)FUN_004652d6();
    ExceptionList = local_74;
    return piVar2;
  case 0xf012:
    puStack_ac = (undefined4 *)0x45cbac;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cbb1;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x218) = uVar3;
    break;
  case 0xf013:
    puStack_ac = (undefined4 *)0x45cbcd;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cbd2;
    iVar7 = FUN_0046694e();
    *(bool *)(in_ECX + 0x20c) = iVar7 != 0;
LAB_0045ca28:
    puStack_ac = (undefined4 *)0x45ca2d;
    FUN_004652d6();
    *(undefined1 *)(in_ECX + 0x97) = 1;
    goto LAB_0045cefb;
  case 0xf020:
    puStack_ac = (undefined4 *)0x45cc83;
    FUN_00466c04();
    puStack_ac = (undefined4 *)(in_ECX + 0x26c);
    puStack_b0 = (undefined1 *)0x45cc91;
    FUN_00465317();
    break;
  case 0xf021:
    puStack_ac = (undefined4 *)0x45cca7;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45ccac;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x270) = uVar3;
    break;
  case 0xf022:
    puStack_ac = (undefined4 *)0x45ccc8;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cccd;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x274) = uVar3;
    break;
  case 0xf023:
    puStack_ac = (undefined4 *)0x45cce9;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45ccee;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x278) = uVar3;
    break;
  case 0xf024:
    puStack_ac = (undefined4 *)0x45cd0a;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cd0f;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x27c) = uVar3;
    break;
  case 0xf030:
    puStack_ac = (undefined4 *)0x45cd2b;
    FUN_00466c04();
    puStack_ac = (undefined4 *)(in_ECX + 0x23c);
    puStack_b0 = (undefined1 *)0x45cd39;
    FUN_00465317();
    goto LAB_0045cd3c;
  case 0xf032:
    puStack_ac = (undefined4 *)0x45cd5b;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cd60;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x240) = uVar3;
    goto LAB_0045cd3c;
  case 0xf033:
    puStack_ac = (undefined4 *)0x45cd79;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cd7e;
    uVar3 = FUN_0046694e();
    *(undefined4 *)(in_ECX + 0x244) = uVar3;
LAB_0045cd3c:
    puStack_ac = (undefined4 *)0x45cd41;
    FUN_004652d6();
    *(undefined1 *)(in_ECX + 0x98) = 1;
    goto LAB_0045cefb;
  case 0xf040:
    puStack_ac = (undefined4 *)0x45cd91;
    FUN_0040954d();
    local_6c = 2;
    puStack_ac = (undefined4 *)0x45cda5;
    FUN_00466c04();
    param_4 = &puStack_ac;
    local_6c = CONCAT31(local_6c._1_3_,3);
    puStack_b0 = (undefined1 *)0x45cdbb;
    FUN_004d076d();
    param_4 = (undefined4 **)&puStack_b0;
    uStack_b4 = 0x45cdcb;
    puStack_b0 = extraout_ECX;
    FUN_004c751a();
    param_4 = (undefined4 **)&uStack_b4;
    uStack_b4 = extraout_ECX_00;
    FUN_004d076d();
    FUN_00467248(local_10);
    puStack_ac = (undefined4 *)0x45cde9;
    FUN_004652d6();
    if (local_8 == 6) {
      puStack_ac = (undefined4 *)0x1;
      puStack_b0 = (undefined1 *)0x0;
      uStack_b4 = 0x45ce01;
      FUN_00467165();
      uStack_b4 = 0x45ce06;
      uStack_b4 = FUN_0046694e();
      FUN_00467165();
      uVar3 = FUN_0046694e();
      FUN_00467165(uVar3);
      uVar4 = FUN_0046694e();
      FUN_00467165(uVar4);
      uVar5 = FUN_0046694e();
      FUN_00467165(uVar5);
      iVar7 = FUN_0046694e();
      iVar7 = iVar7 + -1;
      FUN_00467165(iVar7);
      iVar6 = FUN_0046694e();
      FUN_00467cf8(iVar6 + 2000,iVar7,uVar5,uVar4,uVar3);
      puStack_ac = (undefined4 *)0x45ce77;
      FUN_00467e6f();
      *(undefined1 *)(in_ECX + 0x95) = 1;
      puStack_ac = (undefined4 *)0x45ce86;
      FUN_0047433f();
    }
    puStack_ac = (undefined4 *)0x45ce8e;
    piVar2 = (int *)FUN_004670ed();
    ExceptionList = local_74;
    return piVar2;
  case 0xf050:
    puStack_ac = (undefined4 *)0x45ce9e;
    FUN_00466c04();
    puStack_ac = (undefined4 *)0x45cea9;
    iVar7 = FUN_0046694e();
    *(int *)(in_ECX + 0x254) = iVar7;
    puStack_ac = (undefined4 *)0x45ceb3;
    FUN_004652d6();
    iVar7 = *(int *)(in_ECX + 0x254);
    piVar2 = (int *)(in_ECX + 600);
    if ((iVar7 == *piVar2) && ((param_5 & 0x80) == 0)) {
      ExceptionList = local_74;
      return piVar2;
    }
    *piVar2 = iVar7;
    *(undefined1 *)(in_ECX + 0x9a) = 1;
    goto LAB_0045cefb;
  case 0xf060:
    puStack_ac = (undefined4 *)0x45cede;
    FUN_00466c04();
    puStack_ac = (undefined4 *)(in_ECX + 0x25c);
    puStack_b0 = (undefined1 *)0x45ceec;
    FUN_00465317();
    puStack_ac = (undefined4 *)0x45cef4;
    FUN_004652d6();
    *(undefined1 *)(in_ECX + 0x96) = 1;
    goto LAB_0045cefb;
  }
  puStack_ac = (undefined4 *)0x45c8e6;
  FUN_004652d6();
LAB_0045c8e6:
  *(undefined1 *)(in_ECX + 0x95) = 1;
LAB_0045cefb:
  puStack_ac = (undefined4 *)0x45cf03;
  piVar2 = (int *)FUN_0047433f();
switchD_0045c8bb_caseD_f00a:
  ExceptionList = local_74;
  return piVar2;
}

