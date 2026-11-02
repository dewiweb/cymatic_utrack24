// rea decompile_all
// name: FUN_006ad390
// address: 0x6ad390
// body: available
// range: 0x6ad390-0x6ada81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ad390(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  int local_6c [3];
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  double local_4c;
  undefined8 local_44;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  uint local_2c;
  int *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int *local_8;
  
  local_8 = (int *)0xffffffff;
  puStack_c = &LAB_007236a4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = in_ECX;
  iVar2 = FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_14 = *(int *)(in_ECX + 0x18);
  iVar3 = *(int *)(in_ECX + 0x1c);
  local_2c = iVar3;
  if ((*(int *)(in_ECX + 0x8c) != 2) && (*(int *)(in_ECX + 0x8c) != 3)) {
    local_2c = local_14;
    local_14 = iVar3;
  }
  piVar11 = (int *)(iVar2 + 0x3c);
  local_28 = piVar11;
  iVar3 = (**(code **)(*(int *)(iVar2 + 0x3c) + 8))(local_14);
  iVar2 = (**(code **)(*piVar11 + 4))();
  local_20 = iVar3 + iVar2 * 2;
  local_30 = (int *)0;
  if (0 < local_20) {
    local_30 = (int *)local_20;
  }
  iVar3 = 0;
  local_34 = *(int *)(in_ECX + 0x98);
  if (0 < local_34) {
    local_38 = 0;
    if (0 < local_20 / 2) {
      local_38 = local_20 / 2;
    }
    do {
      piVar11 = (int *)**(int **)(*(int *)(in_ECX + 0x90) + iVar3 * 4);
      if ((undefined **)*piVar11 == juce::TabBarButton::vftable) {
        iVar2 = FUN_006e9580();
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x3c) + 0xc))(piVar11,local_14);
      }
      else {
        iVar2 = (*(code *)((undefined **)*piVar11)[0x32])(local_14);
      }
      iVar3 = iVar3 + 1;
      local_30 = (int *)((int)local_30 + (iVar2 - local_20));
      piVar11[0x39] = local_38;
      piVar11 = local_28;
    } while (iVar3 < *(int *)(in_ECX + 0x98));
  }
  local_4c = 1.0;
  if ((int)local_2c < (int)local_30) {
    local_4c = (double)(int)local_2c / (double)(int)local_30;
    if ((double)(int)local_2c / (double)(int)local_30 <= *(double *)(in_ECX + 0xa0)) {
      local_4c = *(double *)(in_ECX + 0xa0);
    }
  }
  if ((int)local_2c < (int)((double)(int)local_30 * local_4c)) {
    if (*(int *)(in_ECX + 0xb0) == 0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar11 + 0x2c))();
      puVar6 = *(undefined4 **)(in_ECX + 0xb0);
      if ((puVar6 != puVar4) &&
         (*(undefined4 **)(in_ECX + 0xb0) = puVar4, puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      piVar11 = *(int **)(in_ECX + 0xb0);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0x28))(1);
        FUN_006e5050(piVar11,0xffffffff);
      }
      uVar7 = -(uint)(*(int *)(in_ECX + 0xac) != 0) & *(int *)(in_ECX + 0xac) + 0x70U;
      if (uVar7 != 0) {
        FUN_004097d0(uVar7);
      }
      FUN_006d1c90(1);
      *(undefined1 *)(*(int *)(in_ECX + 0xb0) + 0xdd) = 1;
    }
    local_44 = (double)((float)*(int *)(in_ECX + 0x1c) * 0.7) + 6755399441055744.0;
    local_4c = (double)((float)*(int *)(in_ECX + 0x18) * 0.7) + 6755399441055744.0;
    iVar3 = local_4c._0_4_;
    if ((int)local_44 < local_4c._0_4_) {
      iVar3 = (int)local_44;
    }
    FUN_006e9790(*(undefined4 *)(*(int *)(in_ECX + 0xb0) + 0x10),
                 *(undefined4 *)(*(int *)(in_ECX + 0xb0) + 0x14),iVar3,iVar3);
    if ((*(int *)(in_ECX + 0x8c) == 2) || (*(int *)(in_ECX + 0x8c) == 3)) {
      iVar2 = *(int *)(*(int *)(in_ECX + 0xb0) + 0x18);
      iVar8 = *(int *)(*(int *)(in_ECX + 0xb0) + 0x1c);
      local_1c = (*(int *)(in_ECX + 0x1c) - iVar3 / 2) + -1;
      iVar3 = local_1c - iVar8 / 2;
      iVar9 = *(int *)(local_18 + 0x18) / 2 - iVar2 / 2;
    }
    else {
      iVar2 = *(int *)(*(int *)(in_ECX + 0xb0) + 0x18);
      iVar8 = *(int *)(*(int *)(in_ECX + 0xb0) + 0x1c);
      local_1c = (*(int *)(in_ECX + 0x18) - iVar3 / 2) + -1;
      iVar3 = *(int *)(local_18 + 0x1c) / 2 - iVar8 / 2;
      iVar9 = local_1c - iVar2 / 2;
    }
    FUN_006e9790(iVar9,iVar3,iVar2,iVar8);
    in_ECX = local_18;
    iVar2 = 0;
    iVar3 = 0;
    local_30 = (int *)0x0;
    if (0 < *(int *)(local_18 + 0x98)) {
      do {
        piVar11 = (int *)**(undefined4 **)(*(int *)(in_ECX + 0x90) + iVar3 * 4);
        piVar10 = piVar11;
        if ((undefined **)*piVar11 == juce::TabBarButton::vftable) {
          do {
            if (piVar10[0xd] != 0) {
              iVar2 = (**(code **)(*(int *)(piVar10[0xd] + 0x3c) + 0xc))(piVar11,local_14);
              goto LAB_006ad709;
            }
            piVar10 = (int *)piVar10[3];
          } while (piVar10 != (int *)0x0);
          local_8 = piVar10;
          if (DAT_00c8a67c == 0) {
            pvVar5 = operator_new(0xd0);
            local_44 = (double)CONCAT44(pvVar5,(int)local_44);
            DAT_00c8a67c = FUN_006cb960();
          }
          iVar2 = FUN_006cb680();
          local_8 = (int *)0xffffffff;
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x3c) + 0xc))(piVar11,local_14);
        }
        else {
          iVar2 = (*(code *)((undefined **)*piVar11)[0x32])(local_14);
        }
LAB_006ad709:
        if ((0 < iVar3) &&
           ((double)local_1c < (double)(iVar2 + (int)local_30) * *(double *)(in_ECX + 0xa0))) {
          iVar2 = (int)local_30 + local_20;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar2 = (iVar2 + (int)local_30) - local_20;
        local_34 = iVar3;
        local_30 = (int *)iVar2;
      } while (iVar3 < *(int *)(in_ECX + 0x98));
    }
    local_4c = (double)local_1c / (double)iVar2;
    if ((double)local_1c / (double)iVar2 <= *(double *)(in_ECX + 0xa0)) {
      local_4c = *(double *)(in_ECX + 0xa0);
    }
  }
  else {
    puVar6 = *(undefined4 **)(in_ECX + 0xb0);
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xb0) = 0;
      (**(code **)*puVar6)(1);
    }
  }
  local_1c = 0;
  local_30 = (int *)0x0;
  if (DAT_00c8a67c == 0) {
    pvVar5 = operator_new(0xd0);
    local_44 = (double)CONCAT44(pvVar5,(int)local_44);
    local_8 = (int *)0x1;
    DAT_00c8a67c = FUN_006cb960();
    local_8 = (int *)0xffffffff;
  }
  local_3c = DAT_00c8a67c + 0x90;
  local_2c = 0;
  if (*(int *)(in_ECX + 0x98) < 1) {
LAB_006ada2c:
    puVar6 = (undefined4 *)FUN_006e6400(local_6c);
    FUN_006e9790(*puVar6,puVar6[1],puVar6[2],puVar6[3]);
    piVar11 = local_30;
    if (local_30 != (int *)0x0) {
      FUN_006e9910(0);
      FUN_006cfc30(piVar11);
    }
    ExceptionList = local_10;
    return;
  }
  bVar13 = *(int *)(in_ECX + 0x98) != 0;
  iVar3 = DAT_00c8a67c;
LAB_006ad7f5:
  uVar7 = local_2c;
  if (((bVar13) &&
      (piVar11 = *(int **)(*(int *)(in_ECX + 0x90) + local_2c * 4), piVar11 != (int *)0x0)) &&
     (piVar11 = (int *)*piVar11, piVar11 != (int *)0x0)) {
    piVar10 = piVar11;
    if ((undefined **)*piVar11 == juce::TabBarButton::vftable) {
      do {
        if (piVar10[0xd] != 0) {
          iVar3 = (**(code **)(*(int *)(piVar10[0xd] + 0x3c) + 0xc))(piVar11,local_14);
          goto LAB_006ad890;
        }
        piVar12 = piVar10 + 3;
        piVar10 = (int *)*piVar12;
      } while ((int *)*piVar12 != (int *)0x0);
      local_8 = (int *)0x2;
      if (iVar3 == 0) {
        pvVar5 = operator_new(0xd0);
        local_44 = (double)CONCAT44(pvVar5,(int)local_44);
        DAT_00c8a67c = FUN_006cb960();
      }
      iVar3 = FUN_006cb680();
      local_8 = (int *)0xffffffff;
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x3c) + 0xc))(piVar11,local_14);
    }
    else {
      iVar3 = (*(code *)((undefined **)*piVar11)[0x32])(local_14);
    }
LAB_006ad890:
    local_44._0_4_ = SUB84((double)iVar3 * local_4c + 6755399441055744.0,0);
    iVar3 = (int)local_44;
    local_44 = (double)CONCAT44((int)local_44,(int)local_44);
    if ((int)uVar7 < local_34) {
      cVar1 = FUN_0048c810();
      if (cVar1 == '\0') {
        local_6c[0] = local_1c;
        local_24 = local_24 | 2;
        local_60 = *(undefined4 *)(in_ECX + 0x1c);
        local_6c[2] = iVar3;
        piVar10 = local_6c;
        local_6c[1] = 0;
      }
      else {
        local_58 = local_1c;
        local_24 = local_24 | 1;
        local_54 = *(undefined4 *)(in_ECX + 0x18);
        local_50 = iVar3;
        piVar10 = &local_5c;
        local_5c = 0;
      }
      uVar7 = local_24 & 0xfffffffd;
      if ((local_24 & 2) == 0) {
        uVar7 = local_24;
      }
      local_24 = uVar7 & 0xfffffffe;
      if ((uVar7 & 1) == 0) {
        local_24 = uVar7;
      }
      FUN_006e5fd0(piVar11,0);
      FUN_006e9790(*piVar10,piVar10[1],piVar10[2],piVar10[3]);
      if (((*(byte *)(piVar11 + 0x1a) & 1) == 0) &&
         (local_28 = (int *)piVar11[3], local_28 != (int *)0x0)) {
        iVar3 = local_28[0xc];
        if (iVar3 < 1) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = *(int **)local_28[10];
          iVar3 = local_28[0xc];
        }
        if (piVar10 != piVar11) {
          piVar10 = (int *)local_28[10];
          for (piVar12 = piVar10; piVar12 != piVar10 + iVar3; piVar12 = piVar12 + 1) {
            if (piVar11 == (int *)*piVar12) {
              iVar2 = (int)piVar12 - (int)piVar10 >> 2;
              if (0 < iVar2) {
                iVar8 = 0;
                local_38 = 0;
                if (((*(byte *)((int)piVar11 + 0x69) & 1) == 0) || (iVar3 < 1)) goto LAB_006ad9b7;
                goto LAB_006ad9a0;
              }
              break;
            }
          }
        }
      }
      goto LAB_006ad9e4;
    }
    (**(code **)(*piVar11 + 0x28))(0);
    goto LAB_006ada0d;
  }
  goto LAB_006ada1c;
  while( true ) {
    iVar8 = iVar8 + 1;
    piVar10 = piVar10 + 1;
    local_38 = iVar8;
    if (local_28[0xc] <= iVar8) break;
LAB_006ad9a0:
    in_ECX = local_18;
    local_38 = iVar8;
    if ((*(byte *)(*piVar10 + 0x69) & 1) != 0) break;
  }
LAB_006ad9b7:
  if (iVar2 != local_38) {
    FUN_006ceba0();
    FUN_004af320(iVar2,local_38);
    FUN_006ccc80();
    FUN_006cef00();
    in_ECX = local_18;
  }
LAB_006ad9e4:
  if (local_2c == *(uint *)(in_ECX + 0xa8)) {
    local_30 = piVar11;
  }
  (**(code **)(*piVar11 + 0x28))(1);
  iVar3 = local_44._4_4_;
LAB_006ada0d:
  local_1c = local_1c + (iVar3 - local_20);
  iVar3 = DAT_00c8a67c;
LAB_006ada1c:
  local_2c = local_2c + 1;
  bVar13 = local_2c < *(uint *)(in_ECX + 0x98);
  if ((int)*(uint *)(in_ECX + 0x98) <= (int)local_2c) goto LAB_006ada2c;
  goto LAB_006ad7f5;
}

