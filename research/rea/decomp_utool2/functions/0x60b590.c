// rea decompile_all
// name: FUN_0060b590
// address: 0x60b590
// body: available
// range: 0x60b590-0x60b8af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060b590(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  char cVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_84;
  undefined4 local_80;
  int *local_7c;
  undefined1 local_64 [24];
  double local_4c;
  double local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int *local_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c54e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  if (*(char *)(in_ECX + 0x8c) != '\0') {
    uVar9 = *(uint *)(in_ECX + 0x90);
    *(undefined1 *)(in_ECX + 0x8c) = 0;
    if ((int)uVar9 <= *(int *)(in_ECX + 0x94)) {
      local_20 = (int *)(in_ECX + 0x6c);
      local_18 = uVar9 * 2 + 0x18;
      do {
        if ((local_20[6] < (int)uVar9) || ((int)uVar9 < 0)) {
LAB_0060b622:
          cVar5 = '\0';
        }
        else {
          piVar7 = (int *)*local_20;
          if (piVar7 == (int *)0x0) {
            piVar7 = local_20 + 1;
          }
          in_ECX = local_14;
          if ((piVar7[(int)uVar9 >> 5] & 1 << ((byte)uVar9 & 0x1f)) == 0) goto LAB_0060b622;
          cVar5 = '\x01';
        }
        if ((uVar9 < 0x80) &&
           ((*(uint *)(in_ECX + 0x2c) & (uint)*(ushort *)(local_18 + *(int *)(in_ECX + 0x14))) != 0)
           ) {
          cVar1 = '\x01';
        }
        else {
          cVar1 = '\0';
        }
        if (cVar5 != cVar1) {
          if (uVar9 < 0x80) {
            local_1c = (undefined4 *)CONCAT31(local_1c._1_3_,1);
            if ((*(uint *)(in_ECX + 0x2c) & (uint)*(ushort *)(local_18 + *(int *)(in_ECX + 0x14)))
                == 0) goto LAB_0060b65b;
          }
          else {
LAB_0060b65b:
            local_1c = (undefined4 *)((uint)local_1c & 0xffffff00);
          }
          local_80 = 0x60b66b;
          local_7c = (int *)uVar9;
          FUN_00637400();
          if ((*(int *)(in_ECX + 0x90) <= (int)uVar9) && ((int)uVar9 <= *(int *)(in_ECX + 0x94))) {
            local_7c = (int *)local_64;
            local_80 = 0x60b68d;
            puVar2 = (undefined4 *)FUN_0060d3f0();
            local_84 = *puVar2;
            local_80 = puVar2[1];
            local_7c = (int *)puVar2[2];
            FUN_006ceb30();
            in_ECX = local_14;
          }
        }
        local_18 = local_18 + 2;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 <= *(int *)(in_ECX + 0x94));
    }
  }
  if (*(char *)(in_ECX + 0x9e) != '\0') {
    if (DAT_00c8a67c == 0) {
      local_7c = (int *)0x60b6e9;
      local_24 = operator_new(0xd0);
      local_8 = 0;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 0xffffffff;
    }
    piVar7 = *(int **)(*(int *)(DAT_00c8a67c + 0x20) + 0x20);
    local_24 = piVar7 + *(int *)(*(int *)(DAT_00c8a67c + 0x20) + 0x28);
    if (piVar7 != local_24) {
      iVar6 = in_ECX + -0x90;
      local_18 = iVar6;
      do {
        if (*(int *)(*piVar7 + 0x2c) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(*piVar7 + 0x2c) + 8);
        }
        iVar8 = in_ECX;
        if (iVar3 != iVar6) {
          if (*(int *)(*piVar7 + 0x2c) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(*piVar7 + 0x2c) + 8);
          }
          do {
            if (iVar3 == 0) goto LAB_0060b892;
            iVar3 = *(int *)(iVar3 + 0xc);
          } while (iVar3 != iVar6);
        }
        local_20 = (int *)CONCAT31(local_20._1_3_,(*(byte *)(*piVar7 + 0x20) & 0x70) != 0);
        local_7c = local_20;
        local_1c = &local_84;
        FUN_0048e190(&local_3c);
        iVar6 = in_ECX + -0x90;
        local_2c = local_3c;
        local_28 = local_38;
        if (iVar6 == 0) {
          local_34 = local_3c;
          local_30 = local_38;
          fVar11 = local_34;
          fVar13 = local_30;
        }
        else {
          iVar3 = iVar6;
          for (iVar8 = *(int *)(in_ECX + -0x84); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xc)) {
            iVar3 = iVar8;
          }
          fVar10 = local_3c;
          fVar12 = local_38;
          pfVar4 = (float *)FUN_004b2b30(local_3c,local_38);
          fVar11 = *pfVar4;
          fVar13 = pfVar4[1];
          iVar8 = local_14;
          local_2c = fVar11;
          local_28 = fVar13;
          if (iVar3 != iVar6) {
            if (*(int *)(in_ECX + -0x84) != iVar3) {
              FUN_004b2980(*(int *)(in_ECX + -0x84),&local_2c);
              fVar11 = fVar10;
              fVar13 = fVar12;
            }
            FUN_004b2b30(fVar11,fVar13);
            iVar8 = local_14;
            fVar11 = local_34;
            fVar13 = local_30;
          }
        }
        local_30 = fVar13;
        local_34 = fVar11;
        puVar2 = local_1c;
        local_4c = (double)local_30 + 6755399441055744.0;
        local_44 = (double)local_34 + 6755399441055744.0;
        *local_1c = local_44._0_4_;
        puVar2[1] = local_4c._0_4_;
        FUN_0060bb80();
        iVar6 = local_18;
LAB_0060b892:
        piVar7 = piVar7 + 1;
        in_ECX = iVar8;
      } while (piVar7 != local_24);
    }
  }
  ExceptionList = local_10;
  return;
}

