// rea decompile_all
// name: FUN_004b7025
// address: 0x4b7025
// body: available
// range: 0x4b7025-0x4b75b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7025(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *in_EAX;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  size_t _Size;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *unaff_EDI;
  size_t local_48;
  undefined1 uStack_3d;
  int local_38;
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
  
  FUN_00475194();
  piVar14 = *(int **)*in_EAX;
  piVar15 = piVar14 + ((int *)*in_EAX)[2] * 4;
  for (; piVar14 != piVar15; piVar14 = piVar14 + 4) {
    iVar12 = *piVar14;
    iVar7 = piVar14[2];
    iVar16 = piVar14[1];
    iVar5 = piVar14[3] + iVar16;
    if ((((iVar16 < local_20) && (local_28 < iVar5)) && (*piVar14 < local_1c)) &&
       (local_24 < iVar7 + iVar12)) {
      cVar4 = FUN_004752d2();
      if (cVar4 == '\0') {
        iVar8 = FUN_00439b5a(local_38);
        iVar9 = FUN_00440367(local_30);
        _Size = iVar9 - iVar8;
        if ((local_14 == 0) || (bVar2 = true, local_24 < *piVar14)) {
          bVar2 = false;
        }
        if ((local_c == 0) || (bVar3 = true, iVar7 + iVar12 <= local_30)) {
          bVar3 = false;
        }
        if ((local_18 != 0) && (iVar16 <= local_28)) {
          piVar1 = (int *)*unaff_EDI;
          iVar12 = piVar1[2] * local_28 + *piVar1;
          unaff_EDI[1] = iVar12;
          if (bVar2) {
            pbVar6 = (byte *)(piVar1[3] * local_24 + iVar12);
            uVar13 = ((local_14 * local_18 >> 8) + 1) * (uint)*(byte *)((int)unaff_EDI + 0xb);
            *pbVar6 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar13 >> 8);
          }
          if (0 < (int)_Size) {
            uVar13 = unaff_EDI[2];
            iVar7 = local_18 + 1;
            uVar10 = (uVar13 >> 8 & 0xff00ff) * iVar7;
            iVar12 = *(int *)(*unaff_EDI + 0xc);
            puVar11 = (undefined1 *)(iVar12 * iVar8 + unaff_EDI[1]);
            if ((char)(uVar10 >> 0x18) == -1) {
              local_48 = _Size;
              if (iVar12 == 1) {
                _memset(puVar11,uVar10 >> 0x18,_Size);
              }
              else {
                do {
                  *puVar11 = 0xff;
                  puVar11 = puVar11 + iVar12;
                  local_48 = local_48 - 1;
                } while (0 < (int)local_48);
              }
            }
            else {
              FUN_004be407(((uVar13 & 0xff00ff) * iVar7 >> 8 ^ (uVar13 >> 8 & 0xffff00ff) * iVar7) &
                           0xff00ff ^ uVar10,_Size);
            }
          }
          if (bVar3) {
            pbVar6 = (byte *)(*(int *)(*unaff_EDI + 0xc) * local_30 + unaff_EDI[1]);
            uVar13 = ((local_c * local_18 >> 8) + 1) * (uint)*(byte *)((int)unaff_EDI + 0xb);
            *pbVar6 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar13 >> 8);
          }
        }
        iVar7 = FUN_00440367(local_2c);
        for (iVar12 = FUN_00439b5a(iVar16); iVar12 < iVar7; iVar12 = iVar12 + 1) {
          piVar1 = (int *)*unaff_EDI;
          iVar16 = piVar1[2] * iVar12 + *piVar1;
          unaff_EDI[1] = iVar16;
          if (bVar2) {
            pbVar6 = (byte *)(piVar1[3] * local_24 + iVar16);
            uVar13 = (uint)*(byte *)((int)unaff_EDI + 0xb) * (local_14 + 1);
            *pbVar6 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar13 >> 8);
          }
          if (0 < (int)_Size) {
            iVar16 = *(int *)(*unaff_EDI + 0xc);
            puVar11 = (undefined1 *)(iVar16 * iVar8 + unaff_EDI[1]);
            if (*(char *)((int)unaff_EDI + 0xb) == -1) {
              uVar13 = unaff_EDI[2];
              local_48 = _Size;
              if (iVar16 == 1) {
                _memset(puVar11,uVar13 >> 0x18,_Size);
              }
              else {
                do {
                  uStack_3d = (undefined1)(uVar13 >> 0x18);
                  *puVar11 = uStack_3d;
                  puVar11 = puVar11 + iVar16;
                  local_48 = local_48 - 1;
                } while (0 < (int)local_48);
              }
            }
            else {
              FUN_004be407(unaff_EDI[2],_Size);
            }
          }
          if (bVar3) {
            pbVar6 = (byte *)(*(int *)(*unaff_EDI + 0xc) * local_30 + unaff_EDI[1]);
            uVar13 = (uint)*(byte *)((int)unaff_EDI + 0xb) * (local_c + 1);
            *pbVar6 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar13 >> 8);
          }
        }
        if ((local_10 != 0) && (local_2c < iVar5)) {
          piVar1 = (int *)*unaff_EDI;
          iVar12 = piVar1[2] * local_2c + *piVar1;
          unaff_EDI[1] = iVar12;
          if (bVar2) {
            pbVar6 = (byte *)(piVar1[3] * local_24 + iVar12);
            uVar13 = ((local_14 * local_10 >> 8) + 1) * (uint)*(byte *)((int)unaff_EDI + 0xb);
            *pbVar6 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar13 >> 8);
          }
          if (0 < (int)_Size) {
            uVar13 = unaff_EDI[2];
            iVar7 = local_10 + 1;
            uVar10 = (uVar13 >> 8 & 0xff00ff) * iVar7;
            iVar12 = *(int *)(*unaff_EDI + 0xc);
            puVar11 = (undefined1 *)(iVar12 * iVar8 + unaff_EDI[1]);
            if ((char)(uVar10 >> 0x18) == -1) {
              local_48 = _Size;
              if (iVar12 == 1) {
                _memset(puVar11,uVar10 >> 0x18,_Size);
              }
              else {
                do {
                  *puVar11 = 0xff;
                  puVar11 = puVar11 + iVar12;
                  local_48 = local_48 - 1;
                } while (0 < (int)local_48);
              }
            }
            else {
              FUN_004be407(((uVar13 & 0xff00ff) * iVar7 >> 8 ^ (uVar13 >> 8 & 0xffff00ff) * iVar7) &
                           0xff00ff ^ uVar10,_Size);
            }
          }
          if (bVar3) {
            pbVar6 = (byte *)(*(int *)(*unaff_EDI + 0xc) * local_30 + unaff_EDI[1]);
            uVar13 = ((local_c * local_10 >> 8) + 1) * (uint)*(byte *)((int)unaff_EDI + 0xb);
            *pbVar6 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar13 >> 8);
          }
        }
      }
      else {
        if ((local_18 != 0) && (iVar16 <= local_28)) {
          piVar1 = (int *)*unaff_EDI;
          iVar12 = *piVar1 + piVar1[2] * local_28;
          unaff_EDI[1] = iVar12;
          pbVar6 = (byte *)(piVar1[3] * local_38 + iVar12);
          uVar13 = (uint)*(byte *)((int)unaff_EDI + 0xb) * (local_18 + 1);
          *pbVar6 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar13 >> 8);
        }
        iVar12 = FUN_00440367(local_2c);
        for (iVar7 = FUN_00439b5a(iVar16); iVar7 < iVar12; iVar7 = iVar7 + 1) {
          piVar1 = (int *)*unaff_EDI;
          iVar16 = *piVar1 + piVar1[2] * iVar7;
          unaff_EDI[1] = iVar16;
          pbVar6 = (byte *)(piVar1[3] * local_38 + iVar16);
          *pbVar6 = (char)((0x100 - (uint)*(byte *)((int)unaff_EDI + 0xb)) * (uint)*pbVar6 >> 8) +
                    *(char *)((int)unaff_EDI + 0xb);
        }
        if ((local_10 != 0) && (local_2c < iVar5)) {
          piVar1 = (int *)*unaff_EDI;
          iVar12 = *piVar1 + piVar1[2] * local_2c;
          unaff_EDI[1] = iVar12;
          pbVar6 = (byte *)(piVar1[3] * local_38 + iVar12);
          uVar13 = (uint)*(byte *)((int)unaff_EDI + 0xb) * (local_10 + 1);
          *pbVar6 = (char)((0x100 - (uVar13 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar13 >> 8);
        }
      }
    }
  }
  return;
}

