// rea decompile_all
// name: FUN_00652c70
// address: 0x652c70
// body: available
// range: 0x652c70-0x65306f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00652c70(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int in_ECX;
  int iVar12;
  int *in_EDX;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 uVar18;
  byte *pbVar19;
  int local_28;
  undefined4 local_c;
  
  bVar1 = *(byte *)(in_EDX + 2);
  uVar18 = 0;
  local_c = 0;
  if (((bVar1 & 1) == 0) && ((bVar1 & 2) != 0)) {
    uVar13 = (uint)*(ushort *)(in_ECX + 0x216);
    uVar16 = (uint)*(ushort *)(in_ECX + 0x218);
    iVar6 = (0x8000 - uVar16) - uVar13;
    iVar3 = *in_EDX;
    bVar1 = bVar1 >> 2;
    if (*(char *)((int)in_EDX + 9) == '\b') {
      iVar4 = *(int *)(in_ECX + 0x14c);
      local_c = uVar18;
      iVar12 = iVar3;
      pbVar19 = param_1;
      if ((iVar4 == 0) || (iVar5 = *(int *)(in_ECX + 0x150), iVar5 == 0)) {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          bVar2 = *param_1;
          pbVar14 = param_1 + 3;
          if ((bVar2 == param_1[1]) && (bVar2 == param_1[2])) {
            *pbVar19 = bVar2;
          }
          else {
            local_c = 1;
            *pbVar19 = (byte)((uint)param_1[2] * iVar6 + param_1[1] * uVar16 + bVar2 * uVar13 >> 0xf
                             );
          }
          pbVar17 = pbVar19 + 1;
          if ((bVar1 & 1) != 0) {
            *pbVar17 = *pbVar14;
            pbVar17 = pbVar19 + 2;
            pbVar14 = param_1 + 4;
          }
          param_1 = pbVar14;
          pbVar19 = pbVar17;
        }
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          bVar2 = *param_1;
          bVar8 = (byte)*(undefined2 *)param_1;
          pbVar14 = param_1 + 3;
          if ((bVar2 == param_1[1]) && (bVar2 == param_1[2])) {
            if (*(int *)(in_ECX + 0x144) != 0) {
              bVar8 = *(byte *)((uint)bVar2 + *(int *)(in_ECX + 0x144));
            }
            *pbVar19 = bVar8;
          }
          else {
            local_c = 1;
            *pbVar19 = *(byte *)((*(byte *)((uint)bVar2 + iVar5) * uVar13 +
                                  (uint)*(byte *)((uint)param_1[2] + iVar5) * iVar6 +
                                  *(byte *)((uint)param_1[1] + iVar5) * uVar16 + 0x4000 >> 0xf) +
                                iVar4);
          }
          pbVar17 = pbVar19 + 1;
          if ((bVar1 & 1) != 0) {
            *pbVar17 = *pbVar14;
            pbVar17 = pbVar19 + 2;
            pbVar14 = param_1 + 4;
          }
          param_1 = pbVar14;
          pbVar19 = pbVar17;
        }
      }
    }
    else {
      iVar4 = *(int *)(in_ECX + 0x158);
      iVar12 = iVar3;
      pbVar19 = param_1;
      if ((iVar4 == 0) || (iVar5 = *(int *)(in_ECX + 0x154), iVar5 == 0)) {
        for (; local_c = uVar18, iVar12 != 0; iVar12 = iVar12 + -1) {
          uVar9 = CONCAT11(*param_1,param_1[1]);
          pbVar14 = param_1 + 6;
          if ((uVar9 != CONCAT11(param_1[2],param_1[3])) ||
             (uVar9 != CONCAT11(param_1[4],param_1[5]))) {
            local_c = 1;
          }
          uVar15 = uVar9 * uVar13 +
                   (uint)CONCAT11(param_1[4],param_1[5]) * iVar6 +
                   CONCAT11(param_1[2],param_1[3]) * uVar16 + 0x4000 >> 0xf & 0xffff;
          *pbVar19 = (byte)(uVar15 >> 8);
          pbVar19[1] = (byte)uVar15;
          pbVar17 = pbVar19 + 2;
          if ((bVar1 & 1) != 0) {
            *pbVar17 = *pbVar14;
            pbVar19[3] = param_1[7];
            pbVar17 = pbVar19 + 4;
            pbVar14 = param_1 + 8;
          }
          uVar18 = local_c;
          param_1 = pbVar14;
          pbVar19 = pbVar17;
        }
      }
      else {
        local_28 = iVar3;
        if (iVar3 == 0) {
          local_c = 0;
        }
        else {
          do {
            bVar2 = *param_1;
            uVar9 = CONCAT11(bVar2,param_1[1]);
            uVar10 = CONCAT11(param_1[2],param_1[3]);
            pbVar14 = param_1 + 6;
            uVar11 = CONCAT11(param_1[4],param_1[5]);
            if ((uVar9 == uVar10) && (uVar9 == uVar11)) {
              if (*(int *)(in_ECX + 0x148) != 0) {
                uVar7 = (uVar9 & 0xff) >> (*(byte *)(in_ECX + 0x13c) & 0x1f);
                uVar15 = (uint)bVar2;
                iVar12 = *(int *)(in_ECX + 0x148);
                goto LAB_00652f2d;
              }
            }
            else {
              bVar8 = (byte)*(undefined2 *)(in_ECX + 0x13c);
              uVar15 = *(ushort *)
                        (*(int *)(iVar4 + ((uVar9 & 0xff) >> (bVar8 & 0x1f)) * 4) + (uint)bVar2 * 2)
                       * uVar13 + 0x4000 +
                       *(ushort *)
                        (*(int *)(iVar4 + ((uVar10 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)param_1[2] * 2) * uVar16 +
                       (uint)*(ushort *)
                              (*(int *)(iVar4 + ((uVar11 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                              (uint)param_1[4] * 2) * iVar6 >> 0xf;
              uVar7 = (uVar15 & 0xff) >> (bVar8 & 0x1f);
              uVar15 = (uVar15 & 0xffff) >> 8;
              local_c = 1;
              iVar12 = iVar5;
LAB_00652f2d:
              uVar9 = *(ushort *)(*(int *)(iVar12 + uVar7 * 4) + uVar15 * 2);
            }
            *pbVar19 = (byte)(uVar9 >> 8);
            pbVar19[1] = (byte)uVar9;
            pbVar17 = pbVar19 + 2;
            if ((bVar1 & 1) != 0) {
              *pbVar17 = *pbVar14;
              pbVar19[3] = param_1[7];
              pbVar17 = pbVar19 + 4;
              pbVar14 = param_1 + 8;
            }
            local_28 = local_28 + -1;
            param_1 = pbVar14;
            pbVar19 = pbVar17;
          } while (local_28 != 0);
        }
      }
    }
    *(char *)((int)in_EDX + 10) = *(char *)((int)in_EDX + 10) + -2;
    *(byte *)(in_EDX + 2) = *(byte *)(in_EDX + 2) & 0xfd;
    bVar1 = *(char *)((int)in_EDX + 9) * *(char *)((int)in_EDX + 10);
    *(byte *)((int)in_EDX + 0xb) = bVar1;
    if (7 < bVar1) {
      in_EDX[1] = (uint)(bVar1 >> 3) * iVar3;
      return local_c;
    }
    in_EDX[1] = (uint)bVar1 * iVar3 + 7 >> 3;
    uVar18 = local_c;
  }
  return uVar18;
}

