// rea decompile_all
// name: FUN_004846a0
// address: 0x4846a0
// body: available
// range: 0x4846a0-0x484c2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004846a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *in_ECX;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  size_t sVar15;
  size_t _Size;
  byte *pbVar17;
  char local_50;
  undefined1 uStack_3d;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int iVar16;
  
  FUN_00464890(in_ECX[1]);
  piVar9 = (int *)*in_ECX;
  iVar1 = piVar9[2];
  iVar2 = *piVar9;
  for (piVar9 = (int *)*piVar9; piVar9 != (int *)(iVar1 * 0x10 + iVar2); piVar9 = piVar9 + 4) {
    iVar8 = piVar9[1];
    iVar7 = *piVar9;
    iVar12 = piVar9[2] + iVar7;
    iVar6 = piVar9[3] + iVar8;
    if ((((iVar8 < local_20) && (local_28 < iVar6)) && (iVar7 < local_1c)) && (local_24 < iVar12)) {
      if ((local_30 - local_38 == 1) && (local_c + local_14 == 0)) {
        if ((local_18 != 0) && (iVar8 <= local_28)) {
          piVar3 = (int *)*param_1;
          iVar7 = *piVar3 + piVar3[2] * local_28;
          param_1[1] = iVar7;
          pbVar17 = (byte *)(piVar3[3] * local_38 + iVar7);
          uVar13 = (uint)*(byte *)((int)param_1 + 0xb) * (local_18 + 1);
          *pbVar17 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar17 >> 8) + (char)(uVar13 >> 8);
        }
        iVar7 = local_2c;
        if (iVar6 < local_2c) {
          iVar7 = iVar6;
        }
        if (iVar8 < local_34) {
          iVar8 = local_34;
        }
        for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
          piVar3 = (int *)*param_1;
          iVar12 = *piVar3 + piVar3[2] * iVar8;
          param_1[1] = iVar12;
          pbVar17 = (byte *)(piVar3[3] * local_38 + iVar12);
          *pbVar17 = (char)((0x100 - (uint)*(byte *)((int)param_1 + 0xb)) * (uint)*pbVar17 >> 8) +
                     *(byte *)((int)param_1 + 0xb);
        }
        if ((local_10 != 0) && (local_2c < iVar6)) {
          piVar3 = (int *)*param_1;
          iVar8 = *piVar3 + piVar3[2] * local_2c;
          param_1[1] = iVar8;
          pbVar17 = (byte *)(piVar3[3] * local_38 + iVar8);
          uVar13 = (uint)*(byte *)((int)param_1 + 0xb) * (local_10 + 1);
          *pbVar17 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar17 >> 8) + (char)(uVar13 >> 8);
        }
      }
      else {
        iVar10 = local_38;
        if (local_38 < iVar7) {
          iVar10 = iVar7;
        }
        iVar16 = local_30;
        if (iVar12 < local_30) {
          iVar16 = iVar12;
        }
        _Size = iVar16 - iVar10;
        if ((local_14 == 0) || (local_24 < iVar7)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((local_c == 0) || (bVar4 = true, iVar12 <= local_30)) {
          bVar4 = false;
        }
        if ((local_18 != 0) && (iVar8 <= local_28)) {
          piVar3 = (int *)*param_1;
          iVar7 = *piVar3 + piVar3[2] * local_28;
          param_1[1] = iVar7;
          if (bVar5) {
            pbVar17 = (byte *)(piVar3[3] * local_24 + iVar7);
            uVar13 = ((local_14 * local_18 >> 8) + 1) * (uint)*(byte *)((int)param_1 + 0xb);
            *pbVar17 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar17 >> 8) + (char)(uVar13 >> 8);
          }
          if (0 < (int)_Size) {
            uVar13 = param_1[2];
            iVar12 = local_18 + 1;
            uVar11 = (uVar13 >> 8 & 0xff00ff) * iVar12;
            iVar7 = *(int *)(*param_1 + 0xc);
            puVar14 = (undefined1 *)(iVar7 * iVar10 + param_1[1]);
            if ((char)(uVar11 >> 0x18) == -1) {
              sVar15 = _Size;
              if (iVar7 == 1) {
                _memset(puVar14,uVar11 >> 0x18,_Size);
              }
              else {
                do {
                  *puVar14 = 0xff;
                  sVar15 = sVar15 - 1;
                  puVar14 = puVar14 + iVar7;
                } while (0 < (int)sVar15);
              }
            }
            else {
              FUN_0048b3e0(puVar14,((uVar13 & 0xff00ff) * iVar12 >> 8 ^
                                   (uVar13 >> 8 & 0xffff00ff) * iVar12) & 0xff00ff ^ uVar11,_Size);
            }
          }
          if (bVar4) {
            uVar13 = ((local_c * local_18 >> 8) + 1) * (uint)*(byte *)((int)param_1 + 0xb);
            pbVar17 = (byte *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            *pbVar17 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar17 >> 8) + (char)(uVar13 >> 8);
          }
        }
        iVar7 = local_2c;
        if (iVar6 < local_2c) {
          iVar7 = iVar6;
        }
        if (iVar8 < local_34) {
          iVar8 = local_34;
        }
        for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
          piVar3 = (int *)*param_1;
          iVar12 = *piVar3 + piVar3[2] * iVar8;
          param_1[1] = iVar12;
          if (bVar5) {
            pbVar17 = (byte *)(piVar3[3] * local_24 + iVar12);
            uVar13 = (uint)*(byte *)((int)param_1 + 0xb) * (local_14 + 1);
            *pbVar17 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar17 >> 8) + (char)(uVar13 >> 8);
          }
          if (0 < (int)_Size) {
            iVar12 = *(int *)(*param_1 + 0xc);
            puVar14 = (undefined1 *)(iVar12 * iVar10 + param_1[1]);
            if (*(char *)((int)param_1 + 0xb) == -1) {
              if (iVar12 == 1) {
                _memset(puVar14,(uint)param_1[2] >> 0x18,_Size);
              }
              else {
                uStack_3d = (undefined1)((uint)param_1[2] >> 0x18);
                sVar15 = _Size;
                do {
                  *puVar14 = uStack_3d;
                  sVar15 = sVar15 - 1;
                  puVar14 = puVar14 + iVar12;
                } while (0 < (int)sVar15);
              }
            }
            else {
              FUN_0048b3e0(puVar14,param_1[2],_Size);
            }
          }
          if (bVar4) {
            uVar13 = (uint)*(byte *)((int)param_1 + 0xb) * (local_c + 1);
            pbVar17 = (byte *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            *pbVar17 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar17 >> 8) + (char)(uVar13 >> 8);
          }
        }
        if ((local_10 != 0) && (local_2c < iVar6)) {
          piVar3 = (int *)*param_1;
          iVar8 = *piVar3 + piVar3[2] * local_2c;
          param_1[1] = iVar8;
          if (bVar5) {
            pbVar17 = (byte *)(piVar3[3] * local_24 + iVar8);
            uVar13 = ((local_14 * local_10 >> 8) + 1) * (uint)*(byte *)((int)param_1 + 0xb);
            *pbVar17 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar17 >> 8) + (char)(uVar13 >> 8);
          }
          if (0 < (int)_Size) {
            uVar13 = param_1[2];
            iVar7 = local_10 + 1;
            uVar11 = (uVar13 >> 8 & 0xff00ff) * iVar7;
            iVar8 = *(int *)(*param_1 + 0xc);
            puVar14 = (undefined1 *)(iVar8 * iVar10 + param_1[1]);
            local_50 = (char)(uVar11 >> 0x18);
            if (local_50 == -1) {
              if (iVar8 == 1) {
                _memset(puVar14,uVar11 >> 0x18,_Size);
              }
              else {
                do {
                  *puVar14 = 0xff;
                  _Size = _Size - 1;
                  puVar14 = puVar14 + iVar8;
                } while (0 < (int)_Size);
              }
            }
            else {
              FUN_0048b3e0(puVar14,((uVar13 & 0xff00ff) * iVar7 >> 8 ^
                                   (uVar13 >> 8 & 0xffff00ff) * iVar7) & 0xff00ff ^ uVar11,_Size);
            }
          }
          if (bVar4) {
            uVar13 = ((local_c * local_10 >> 8) + 1) * (uint)*(byte *)((int)param_1 + 0xb);
            pbVar17 = (byte *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            *pbVar17 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar17 >> 8) + (char)(uVar13 >> 8);
          }
        }
      }
    }
  }
  return;
}

