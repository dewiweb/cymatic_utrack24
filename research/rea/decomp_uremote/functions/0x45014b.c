// rea decompile_all
// name: FUN_0045014b
// address: 0x45014b
// body: available
// range: 0x45014b-0x4506c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_0045014b(char *param_1)

{
  uint uVar1;
  int in_ECX;
  undefined4 *extraout_ECX;
  undefined4 *puVar2;
  undefined4 *puStack_c4;
  undefined1 **ppuStack_c0;
  undefined4 *local_bc [5];
  undefined1 *local_a8;
  undefined4 *local_a4;
  undefined1 local_a0 [8];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  void *local_84;
  uint local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_78 = 0x24;
  local_7c = 0x45015b;
  local_bc[0] = (undefined4 *)0x450165;
  FUN_0040954d();
  local_14 = (undefined1 *)local_bc;
  local_7c = 0;
  ppuStack_c0 = (undefined1 **)0x45017c;
  FUN_004d076d();
  local_14 = (undefined1 *)&ppuStack_c0;
  puStack_c4 = (undefined4 *)0x45018c;
  FUN_004c751a();
  local_14 = (undefined1 *)&puStack_c4;
  puStack_c4 = extraout_ECX;
  FUN_004d076d();
  FUN_00467248(local_a0);
  local_bc[0] = (undefined4 *)(in_ECX + 0x6100);
  ppuStack_c0 = (undefined1 **)0x4501b4;
  local_a4 = local_bc[0];
  FUN_00465317();
  if (local_98 == 0) {
    local_bc[0] = (undefined4 *)0x0;
    ppuStack_c0 = (undefined1 **)0x4501c5;
    (**(code **)(*(int *)(in_ECX + 0x5020) + 0x28))();
  }
  else {
    local_bc[0] = (undefined4 *)0x4501d7;
    FUN_0043d26e();
    local_8 = 0;
    if (0 < local_98) {
      do {
        local_bc[0] = (undefined4 *)0x4501f2;
        local_bc[0] = (undefined4 *)FUN_00467165();
        ppuStack_c0 = (undefined1 **)0x4501fb;
        FUN_004652e4();
        local_bc[0] = (undefined4 *)0x2;
        local_7c = CONCAT31(local_7c._1_3_,1);
        ppuStack_c0 = (undefined1 **)0x45020c;
        FUN_004664c4();
        local_a8 = (undefined1 *)local_bc;
        local_bc[0] = local_74;
        ppuStack_c0 = (undefined1 **)0x45021c;
        uVar1 = FUN_00450e23();
        if (local_8 == 0) {
          local_bc[0] = local_a4;
          ppuStack_c0 = (undefined1 **)0x45022f;
          FUN_00465317();
        }
        local_bc[0] = (undefined4 *)0x450237;
        FUN_004652cd();
        local_bc[0] = (undefined4 *)0x45023f;
        FUN_004652cd();
        puVar2 = (undefined4 *)0x1;
        local_7c = CONCAT31(local_7c._1_3_,4);
        switch(uVar1 & 0xfffffff) {
        case 0:
          goto switchD_00450256_caseD_0;
        case 1:
          local_bc[0] = &local_50;
          ppuStack_c0 = (undefined1 **)0x45026b;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450277;
          FUN_00465317();
          break;
        case 2:
          local_bc[0] = &local_90;
          ppuStack_c0 = (undefined1 **)0x45028d;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450299;
          FUN_00465317();
          break;
        case 3:
          local_bc[0] = &local_20;
          ppuStack_c0 = (undefined1 **)0x4502af;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4502bb;
          FUN_00465317();
          break;
        case 4:
          ppuStack_c0 = (undefined1 **)0x4502d1;
          local_bc[0] = &local_78;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4502dd;
          FUN_00465317();
          break;
        case 5:
          local_bc[0] = &local_28;
          ppuStack_c0 = (undefined1 **)0x4502f3;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4502ff;
          FUN_00465317();
          break;
        case 6:
          local_bc[0] = &local_60;
          ppuStack_c0 = (undefined1 **)0x450315;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450321;
          FUN_00465317();
          break;
        case 7:
          local_bc[0] = &local_30;
          ppuStack_c0 = (undefined1 **)0x450337;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450343;
          FUN_00465317();
          break;
        case 8:
          local_bc[0] = &local_88;
          ppuStack_c0 = (undefined1 **)0x450359;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450365;
          FUN_00465317();
          break;
        case 9:
          local_bc[0] = &local_38;
          ppuStack_c0 = (undefined1 **)0x45037b;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450387;
          FUN_00465317();
          break;
        case 10:
          local_bc[0] = &local_68;
          ppuStack_c0 = (undefined1 **)0x45039d;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4503a9;
          FUN_00465317();
          break;
        case 0xb:
          local_bc[0] = &local_40;
          ppuStack_c0 = (undefined1 **)0x4503bf;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4503cb;
          FUN_00465317();
          break;
        case 0xc:
          local_bc[0] = &local_94;
          ppuStack_c0 = (undefined1 **)0x4503e1;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4503ed;
          FUN_00465317();
          break;
        case 0xd:
          local_bc[0] = &local_48;
          ppuStack_c0 = (undefined1 **)0x450403;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x45040f;
          FUN_00465317();
          break;
        case 0xe:
          local_bc[0] = &local_70;
          ppuStack_c0 = (undefined1 **)0x450425;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450431;
          FUN_00465317();
          break;
        case 0xf:
          local_bc[0] = &local_18;
          ppuStack_c0 = (undefined1 **)0x450447;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450453;
          FUN_00465317();
          break;
        case 0x10:
          local_bc[0] = &local_8c;
          ppuStack_c0 = (undefined1 **)0x450469;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450475;
          FUN_00465317();
          break;
        case 0x11:
          local_bc[0] = &local_58;
          ppuStack_c0 = (undefined1 **)0x45048b;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450497;
          FUN_00465317();
          break;
        case 0x12:
          local_bc[0] = &local_1c;
          ppuStack_c0 = (undefined1 **)0x4504ad;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4504b9;
          FUN_00465317();
          break;
        case 0x13:
          local_bc[0] = &local_24;
          ppuStack_c0 = (undefined1 **)0x4504cf;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4504db;
          FUN_00465317();
          break;
        case 0x14:
          local_bc[0] = &local_2c;
          ppuStack_c0 = (undefined1 **)0x4504f1;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4504fd;
          FUN_00465317();
          break;
        case 0x15:
          local_bc[0] = &local_34;
          ppuStack_c0 = (undefined1 **)0x450513;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x45051f;
          FUN_00465317();
          break;
        case 0x16:
          local_bc[0] = &local_3c;
          ppuStack_c0 = (undefined1 **)0x450535;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450541;
          FUN_00465317();
          break;
        case 0x17:
          local_bc[0] = &local_44;
          ppuStack_c0 = (undefined1 **)0x450554;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x450560;
          FUN_00465317();
          break;
        case 0x18:
          local_bc[0] = &local_4c;
          ppuStack_c0 = (undefined1 **)0x450573;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x45057f;
          FUN_00465317();
          break;
        case 0x19:
          local_bc[0] = &local_54;
          ppuStack_c0 = (undefined1 **)0x450592;
          FUN_0046537e();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x45059e;
          FUN_00465317();
          break;
        default:
          local_bc[0] = &local_10;
          ppuStack_c0 = &local_14;
          puStack_c4 = (undefined4 *)0x4505b5;
          FUN_00465bec();
          local_bc[0] = &param_1;
          ppuStack_c0 = (undefined1 **)0x4505c0;
          FUN_00465317();
        }
        local_bc[0] = (undefined4 *)0x4505c8;
        FUN_004652d6();
switchD_00450256_caseD_0:
        if (*param_1 != '\0') {
          uVar1 = uVar1 & 0xf0000000;
          if (uVar1 == 0) {
            local_bc[0] = &local_6c;
            ppuStack_c0 = (undefined1 **)0x450640;
            FUN_0046537e();
            local_bc[0] = &local_c;
            ppuStack_c0 = (undefined1 **)0x45064c;
            FUN_00465317();
LAB_0045064f:
            local_bc[0] = (undefined4 *)0x450654;
            FUN_004652d6();
            puVar2 = (undefined4 *)0x1;
          }
          else if (uVar1 == 0x40000000) {
            local_bc[0] = &local_64;
            ppuStack_c0 = (undefined1 **)0x450619;
            FUN_0046537e();
            local_bc[0] = &local_c;
            ppuStack_c0 = (undefined1 **)0x450625;
            FUN_00465317();
            local_bc[0] = (undefined4 *)0x45062d;
            FUN_004652d6();
            puVar2 = (undefined4 *)0x3;
          }
          else if (uVar1 == 0x80000000) {
            local_bc[0] = &local_5c;
            ppuStack_c0 = (undefined1 **)0x4505fa;
            FUN_0046537e();
            local_bc[0] = &local_c;
            ppuStack_c0 = (undefined1 **)0x450606;
            FUN_00465317();
            goto LAB_0045064f;
          }
          ppuStack_c0 = &param_1;
          puStack_c4 = &local_c;
          local_bc[0] = puVar2;
          FUN_0043d144();
          local_bc[0] = (undefined4 *)0x1;
          ppuStack_c0 = (undefined1 **)0x450670;
          (**(code **)(*(int *)(in_ECX + 0x5020) + 0x28))();
          local_bc[0] = (undefined4 *)0x1;
          ppuStack_c0 = (undefined1 **)0x450677;
          FUN_004c052f();
        }
        local_bc[0] = (undefined4 *)0x45067f;
        FUN_004652d6();
        local_bc[0] = (undefined4 *)0x450687;
        FUN_004652d6();
        local_bc[0] = (undefined4 *)0x45068f;
        FUN_004652d6();
        local_7c = local_7c & 0xffffff00;
        local_bc[0] = (undefined4 *)0x45069b;
        FUN_004652d6();
        local_8 = local_8 + 1;
      } while (local_8 < local_98);
    }
  }
  local_bc[0] = (undefined4 *)0x4506b2;
  FUN_004670ed();
  ExceptionList = local_84;
  return;
}

