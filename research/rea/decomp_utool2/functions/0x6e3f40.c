// rea decompile_all
// name: FUN_006e3f40
// address: 0x6e3f40
// body: available
// range: 0x6e3f40-0x6e4420 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e3f40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char param_4,
                 int *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  int *in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  undefined8 uVar13;
  longlong lVar14;
  double *pdVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  undefined8 local_3c;
  float local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  uint local_24;
  int *local_20;
  float local_1c;
  float local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0072855b;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_2c = in_ECX;
  if (in_ECX[1] == 0) {
    if (DAT_00c8a67c == 0) {
      local_20 = operator_new(0xd0);
      local_8 = 1;
      DAT_00c8a67c = FUN_006cb960();
    }
    local_8 = 0;
    iVar10 = 0;
    iVar9 = 0;
    iVar11 = *(int *)(*(int *)(DAT_00c8a67c + 0x20) + 0x1c);
    if (0 < iVar11) {
      do {
        piVar8 = (int *)(*(int *)(*(int *)(DAT_00c8a67c + 0x20) + 0x20) + iVar9 * 4);
        local_20 = piVar8;
        if ((*(byte *)(*piVar8 + 0x20) & 0x70) != 0) {
          if (iVar10 == 0) {
            if ((piVar8 != (int *)0x0) && ((*(byte *)(*piVar8 + 0x20) & 0x70) != 0)) {
              FUN_0048f150(&local_1c);
              local_54 = 6755399441055744.0;
              local_4c = (double)local_18 + 6755399441055744.0;
              local_44 = (double)local_1c + 6755399441055744.0;
              if (param_3 == (undefined4 *)0x0) {
                uVar17 = 0x3f800000;
                uVar16 = 1;
                uVar4 = FUN_006e6400(local_6c);
                FUN_006ce130(&local_14,uVar4,uVar16,uVar17);
                _local_8 = CONCAT31(uStack_7,2);
                puVar5 = (undefined4 *)FUN_006732e0(&param_5,2);
                puVar1 = (undefined4 *)*puVar5;
                *puVar5 = param_3;
                param_3 = puVar1;
                if (param_5 != (int *)0x0) {
                  LOCK();
                  piVar6 = param_5 + 1;
                  iVar11 = *piVar6;
                  *piVar6 = *piVar6 + -1;
                  UNLOCK();
                  if (iVar11 == 1) {
                    (**(code **)*param_5)(1);
                  }
                }
                local_8 = 0;
                if (local_14 != (undefined4 *)0x0) {
                  LOCK();
                  piVar6 = local_14 + 1;
                  iVar11 = *piVar6;
                  *piVar6 = *piVar6 + -1;
                  UNLOCK();
                  if (iVar11 == 1) {
                    (**(code **)*local_14)(1);
                  }
                }
                FUN_00672cb0();
                FUN_006e1ae0(&local_3c,0,local_44._0_4_,local_4c._0_4_);
                pfVar7 = &local_34;
                uVar4 = (undefined4)local_3c;
                uVar16 = local_3c._4_4_;
                FUN_00673860(local_7c);
                FUN_004af9d0(pfVar7,uVar4,uVar16);
                local_28 = 1;
                local_24 = 0;
                FUN_006247c0();
                if (param_3 == (undefined4 *)0x0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = param_3[4];
                }
                param_5 = (int *)(iVar11 + -1);
                local_18 = local_34;
                piVar6 = local_30;
                if (-1 < (int)param_5) {
                  local_14 = (undefined4 *)((int)param_5 - (int)local_30);
                  do {
                    dVar12 = (double)((int)local_14 * (int)local_14);
                    local_3c = dVar12;
                    uVar13 = FUN_006838c0();
                    iVar11 = (int)uVar13 + -1;
                    piVar8 = (int *)((ulonglong)uVar13 >> 0x20);
                    if (-1 < iVar11) {
                      iVar9 = iVar11 - (int)local_34;
                      do {
                        dVar12 = (double)(iVar9 * iVar9) + dVar12;
                        __libm_sse2_sqrt_precise();
                        local_5c = dVar12 + local_54;
                        if (0x96 < local_5c._0_4_) {
                          if (local_5c._0_4_ < 0x191) {
                            lVar14 = __allmul(local_28,local_24,0xdeece66d,5);
                            local_28 = (undefined4)(lVar14 + 0xb);
                            local_24 = (uint)((ulonglong)(lVar14 + 0xb) >> 0x20) & 0xffff;
                          }
                          FUN_00672d70(iVar11,param_5);
                        }
                        iVar9 = iVar9 + -1;
                        iVar11 = iVar11 + -1;
                        piVar8 = param_5;
                        dVar12 = local_3c;
                      } while (-1 < iVar11);
                    }
                    param_5 = (int *)((int)piVar8 + -1);
                    local_14 = (undefined4 *)((int)local_14 + -1);
                    in_ECX = local_2c;
                    piVar8 = local_20;
                    piVar6 = local_30;
                  } while (-1 < (int)param_5);
                }
              }
              else if (param_5 == (int *)0x0) {
                piVar6 = (int *)FUN_00673860(local_8c);
                param_5 = (int *)(piVar6[3] / 2 + piVar6[1]);
                local_18 = (float)(piVar6[2] / 2 + *piVar6);
                piVar6 = param_5;
              }
              else {
                iVar11 = -*param_5;
                iVar9 = -param_5[1];
                pdVar15 = &local_54;
                FUN_00673860(local_9c);
                pfVar7 = (float *)FUN_004af9d0(pdVar15,iVar11,iVar9);
                local_18 = *pfVar7;
                piVar6 = (int *)pfVar7[1];
              }
              local_2c = operator_new(0xd0);
              local_8 = 3;
              if (*(int *)(*piVar8 + 0x2c) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(*(int *)(*piVar8 + 0x2c) + 8);
              }
              puVar5 = (undefined4 *)
                       FUN_0048ffb0(&param_3,param_1,param_2,uVar4,in_ECX,local_18,piVar6);
              local_8 = 0;
              puVar1 = (undefined4 *)in_ECX[1];
              if ((puVar1 != puVar5) && (in_ECX[1] = (int)puVar5, puVar1 != (undefined4 *)0x0)) {
                (**(code **)*puVar1)(1);
              }
              if (param_4 == '\0') {
                iVar11 = FUN_006f6dd6(in_ECX,0,&juce::DragAndDropContainer::RTTI_Type_Descriptor,
                                      &juce::Component::RTTI_Type_Descriptor,0);
                if (iVar11 == 0) break;
                if (in_ECX[1] != 0) {
                  FUN_006e5050(in_ECX[1],0xffffffff);
                }
              }
              else {
                cVar2 = FUN_00687a20();
                if (cVar2 == '\0') {
                  FUN_006e9430(1);
                }
                (**(code **)(*(int *)in_ECX[1] + 0x30))(0x406,0);
              }
              FUN_004905f0(0,local_44._0_4_,local_4c._0_4_);
              piVar8 = (int *)in_ECX[1];
              cVar2 = FUN_006d1aa0(0);
              if (cVar2 == '\0') {
                FUN_0048c530();
                FUN_006ca6c0(piVar8,0);
                (**(code **)(*piVar8 + 0x28))(1);
                FUN_006cc500(2,1);
              }
              piVar8 = (int *)FUN_006d1d80();
              if (piVar8 != (int *)0x0) {
                (**(code **)(*piVar8 + 0x74))();
              }
              if (*(code **)(*in_ECX + 0xc) != FUN_006e4830) {
                (**(code **)(*in_ECX + 0xc))();
              }
            }
            break;
          }
          iVar10 = iVar10 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar11);
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = param_3 + 1;
    iVar11 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)*param_3)(1,uVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

