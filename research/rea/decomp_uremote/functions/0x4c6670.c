// rea decompile_all
// name: FUN_004c6670
// address: 0x4c6670
// body: available
// range: 0x4c6670-0x4c69c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c6670(undefined4 param_1,undefined4 param_2,int param_3,undefined8 *param_4,int *param_5
                 )

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int extraout_ECX;
  int *unaff_EBX;
  float10 fVar11;
  undefined8 local_70;
  undefined4 local_58 [6];
  undefined1 local_40 [8];
  double local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0;
  if (unaff_EBX[1] == 0) {
    local_70 = (double)CONCAT44(0x4c668f,(int)local_70);
    FUN_004c4e62();
    local_70 = (double)CONCAT44(0x4c6694,(int)local_70);
    local_24 = FUN_004c509b();
    if (local_24 != 0) {
      local_70 = (double)CONCAT44(0x4c66a6,(int)local_70);
      cVar2 = FUN_004c4916();
      if (cVar2 != '\0') {
        local_70 = (double)CONCAT44(local_58,0x4c66b9);
        puVar3 = (undefined4 *)FUN_004c497e();
        local_70 = (double)CONCAT44(puVar3[1],0x4c66c7);
        uVar4 = FUN_004a8e4a();
        local_70 = (double)CONCAT44(*puVar3,0x4c66d6);
        local_28 = uVar4;
        uVar5 = FUN_004a8e4a();
        local_58[0] = uVar5;
        if (param_3 == 0) {
          local_70 = 0.007812500000000002;
          uVar6 = FUN_004c2047(local_40);
          uVar6 = FUN_004c1bc3(param_2,&local_1c,uVar6);
          local_70 = (double)CONCAT44(2,&param_5);
          local_8._0_1_ = 1;
          FUN_0047e4fd(uVar6);
          local_70 = (double)CONCAT44(0x4c671f,(int)local_70);
          FUN_0049f5e8();
          local_70 = (double)CONCAT44(0x4c6727,(int)local_70);
          FUN_004c4d7a();
          local_8 = (uint)local_8._1_3_ << 8;
          local_70 = (double)CONCAT44(0x4c6733,(int)local_70);
          FUN_004c4d7a();
          local_70 = (double)CONCAT44(0x3f19999a,&param_3);
          FUN_0047ea16();
          param_5 = (int *)&local_70;
          local_70 = (double)CONCAT44(uVar4,uVar5);
          FUN_004c08d2(param_2,0);
          param_5 = (int *)&local_70;
          local_70._0_4_ = local_30;
          FUN_0047e37c();
          FUN_004f5cfc();
          local_70 = (double)CONCAT44(0x4c678e,(int)local_70);
          FUN_004642ea();
          local_70 = (double)CONCAT44(0x4c6796,(int)local_70);
          iVar7 = FUN_0047e371();
          iVar7 = iVar7 + -1;
          iVar9 = local_2c;
          iVar8 = local_30;
          if (-1 < iVar7) {
            local_1c = iVar7 - local_2c;
            do {
              param_5 = (int *)(local_1c * local_1c);
              local_38 = (double)(int)param_5;
              local_70 = (double)CONCAT44(0x4c67bd,(int)local_70);
              iVar8 = FUN_0047e366();
              iVar8 = iVar8 + -1;
              iVar9 = extraout_ECX;
              local_18 = iVar8;
              if (-1 < iVar8) {
                param_5 = (int *)(iVar8 - local_30);
                do {
                  local_20 = (undefined1 *)((int)param_5 * (int)param_5);
                  local_70 = (double)(int)local_20 + local_38;
                  local_18 = iVar8;
                  fVar11 = (float10)FUN_005afec4();
                  local_70 = (double)fVar11;
                  local_20 = (undefined1 *)FUN_00470221();
                  if (0x96 < (int)local_20) {
                    if ((int)local_20 < 0x191) {
                      local_70 = (double)CONCAT44(0x4c6815,(int)local_70);
                      fVar11 = (float10)FUN_00464417();
                      fVar11 = (float10)(400 - (int)local_20) / (float10)250.0 +
                               fVar11 * (float10)0.00800000037997961;
                      iVar8 = local_18;
                    }
                    else {
                      fVar11 = (float10)0;
                    }
                    local_20 = (undefined1 *)(float)fVar11;
                    local_70 = (double)CONCAT44(local_20,iVar7);
                    FUN_0047e951(iVar8);
                  }
                  iVar8 = iVar8 + -1;
                  param_5 = (int *)((int)param_5 + -1);
                  iVar9 = local_1c;
                  local_18 = iVar8;
                } while (-1 < iVar8);
              }
              iVar7 = iVar7 + -1;
              local_1c = iVar9 + -1;
              iVar9 = local_2c;
              iVar8 = local_30;
            } while (-1 < iVar7);
          }
        }
        else if (param_5 == (int *)0x0) {
          local_70 = (double)CONCAT44(0x4c687d,(int)local_70);
          piVar10 = (int *)FUN_0047e37c();
          iVar9 = piVar10[3] / 2 + piVar10[1];
          iVar8 = piVar10[2] / 2 + *piVar10;
        }
        else {
          piVar10 = param_5 + 1;
          iVar9 = *param_5;
          param_5 = (int *)&local_70;
          local_70 = (double)CONCAT44(-*piVar10,-iVar9);
          FUN_0047e37c();
          piVar10 = (int *)FUN_004f5cfc();
          iVar9 = piVar10[1];
          iVar8 = *piVar10;
        }
        local_70 = 4.41377598589577e-312;
        param_5 = (int *)FUN_005af82d();
        local_8._0_1_ = 2;
        if (param_5 == (int *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          local_20 = (undefined1 *)&local_70;
          local_70 = (double)CONCAT44(iVar9,iVar8);
          piVar10 = unaff_EBX;
          uVar4 = FUN_004c4949();
          puVar3 = (undefined4 *)FUN_004c5be6(param_5,&param_3,param_1,param_2,uVar4,piVar10);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        puVar1 = (undefined4 *)unaff_EBX[1];
        if ((puVar1 != puVar3) && (unaff_EBX[1] = (int)puVar3, puVar1 != (undefined4 *)0x0)) {
          local_70 = 2.12446989929073e-314;
          (**(code **)*puVar1)();
        }
        if ((char)param_4 == '\0') {
          local_70 = 4.83989868686218e-317;
          iVar9 = FUN_005cdbcf();
          if (iVar9 == 0) goto LAB_004c69b8;
          local_70 = (double)CONCAT44(unaff_EBX[1],0x4c6975);
          FUN_004c1055();
        }
        else {
          local_70 = (double)CONCAT44(0x4c692e,(int)local_70);
          cVar2 = FUN_004f0a6e();
          if (cVar2 == '\0') {
            local_70 = (double)CONCAT44(0x4c693c,(int)local_70);
            FUN_004c0483();
          }
          local_70 = 5.08887615216484e-321;
          (**(code **)(*(int *)unaff_EBX[1] + 0x30))();
        }
        param_4 = &local_70;
        local_70 = (double)CONCAT44(local_28,local_58[0]);
        FUN_004c5f97(0);
        local_70 = 0.0;
        FUN_004c1397(1);
        local_70 = (double)CONCAT44(0x4c69a6,(int)local_70);
        piVar10 = (int *)FUN_004c0453();
        if (piVar10 != (int *)0x0) {
          local_70 = (double)CONCAT44(0x4c69b1,(int)local_70);
          (**(code **)(*piVar10 + 0x74))();
        }
        local_70 = (double)CONCAT44(0x4c69b8,(int)local_70);
        (**(code **)(*unaff_EBX + 0xc))();
      }
    }
  }
LAB_004c69b8:
  local_70 = (double)CONCAT44(0x4c69c0,(int)local_70);
  FUN_004c4d7a();
  return;
}

