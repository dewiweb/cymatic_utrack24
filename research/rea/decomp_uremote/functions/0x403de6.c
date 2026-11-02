// rea decompile_all
// name: FUN_00403de6
// address: 0x403de6
// body: available
// range: 0x403de6-0x4040cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00403de6(int param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  bool bVar7;
  undefined4 *in_EAX;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  short *psVar12;
  short *psVar13;
  undefined1 *puVar14;
  int iVar15;
  short *psVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  int iVar19;
  short *local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20;
  short *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  piVar1 = in_EAX + param_1 * 7 + 0xb;
  local_28 = *in_EAX;
  iVar9 = param_1 * 0x154 + 0x28 + in_EAX[0x1b];
  local_1c = (short *)piVar1[2];
  psVar13 = local_1c + *piVar1 * 0x18;
  local_20 = 0;
  piVar1[3] = 0;
  if (param_1 == 0) {
    local_c = in_EAX[1];
  }
  else {
    local_c = in_EAX[3];
  }
  iVar8 = FUN_00401000(*(undefined4 *)(iVar9 + 0xcc),local_c);
  if (iVar8 < 0x11) {
    local_8 = *(int *)(iVar9 + 0xcc);
  }
  else {
    local_8 = FUN_0040d2d8();
  }
  if (local_1c < psVar13) {
    psVar16 = local_1c + 1;
    do {
      local_1c = (short *)0x0;
      local_14 = 0xffff;
      if (piVar1[3] < 1) {
LAB_00403f21:
        local_20 = FUN_004013cf(piVar1,(int)*psVar16,(int)*(char *)((int)psVar16 + -1),local_28,
                                &local_2c);
        psVar12 = local_2c;
        if (local_20 != 0) {
          return local_20;
        }
        _memset(local_2c,0,0x30);
        *(short **)(psVar12 + 0x14) = psVar16 + -1;
        *(short **)(psVar12 + 0x16) = psVar16 + -1;
        *psVar12 = *psVar16;
        uVar10 = FUN_00401000((int)*psVar16,local_c);
        *(undefined4 *)(psVar12 + 4) = uVar10;
        *(undefined4 *)(psVar12 + 2) = uVar10;
        *(short **)(psVar16 + 7) = psVar16 + -1;
        *(undefined1 *)((int)psVar12 + 0xd) = *(undefined1 *)((int)psVar16 + -1);
      }
      else {
        local_18 = piVar1[3];
        psVar12 = (short *)piVar1[5];
        do {
          if (*(char *)((int)psVar12 + 0xd) == *(char *)((int)psVar16 + -1)) {
            local_10 = (int)*psVar16 - (int)*psVar12;
            if (local_10 < 0) {
              local_10 = -local_10;
            }
            if ((local_10 < local_8) && (local_10 < local_14)) {
              if (*(int *)(psVar16 + 9) != 0) {
                param_1 = *(int *)(psVar12 + 0x14);
                iVar9 = 0;
                do {
                  if (*(int *)(param_1 + 0x14) != 0) {
                    uVar2 = *(ushort *)(*(int *)(psVar16 + 9) + 2);
                    local_24 = (uint)uVar2;
                    uVar3 = *(ushort *)(*(int *)(param_1 + 0x14) + 2);
                    uVar6 = uVar3;
                    if ((short)uVar3 < (short)uVar2) {
                      uVar6 = uVar2;
                      uVar2 = uVar3;
                    }
                    iVar9 = (int)(short)uVar6 - (int)(short)uVar2;
                    if (local_8 <= iVar9) goto LAB_00403f0e;
                  }
                  param_1 = *(int *)(param_1 + 0x10);
                } while (param_1 != *(int *)(psVar12 + 0x14));
                if (local_8 <= iVar9) goto LAB_00403f0e;
              }
              local_1c = psVar12;
              local_14 = local_10;
            }
          }
LAB_00403f0e:
          psVar12 = psVar12 + 0x18;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        local_18 = 0;
        if (local_1c == (short *)0x0) goto LAB_00403f21;
        *(undefined4 *)(psVar16 + 7) = *(undefined4 *)(local_1c + 0x14);
        *(short **)(*(int *)(local_1c + 0x16) + 0x10) = psVar16 + -1;
        *(short **)(local_1c + 0x16) = psVar16 + -1;
      }
      psVar12 = psVar16 + 0x17;
      psVar16 = psVar16 + 0x18;
    } while (psVar12 < psVar13);
  }
  puVar11 = (undefined1 *)piVar1[5];
  puVar18 = puVar11 + piVar1[3] * 0x30;
  puVar14 = puVar11;
  if (puVar11 < puVar18) {
    do {
      iVar9 = *(int *)(puVar14 + 0x28);
      if (iVar9 != 0) {
        do {
          *(undefined1 **)(iVar9 + 0xc) = puVar14;
          iVar9 = *(int *)(iVar9 + 0x10);
        } while (iVar9 != *(int *)(puVar14 + 0x28));
      }
      puVar14 = puVar14 + 0x30;
    } while (puVar14 < puVar18);
    if (puVar11 < puVar18) {
      puVar11 = puVar11 + 0xc;
      do {
        local_8 = 0;
        local_10 = 0;
        pbVar17 = *(byte **)(puVar11 + 0x1c);
        do {
          if ((*pbVar17 & 1) == 0) {
            local_10 = local_10 + 1;
          }
          else {
            local_8 = local_8 + 1;
          }
          if ((*(int *)(pbVar17 + 0x18) == 0) ||
             (bVar7 = true, *(undefined1 **)(*(int *)(pbVar17 + 0x18) + 0xc) == puVar11 + -0xc)) {
            bVar7 = false;
          }
          iVar9 = *(int *)(pbVar17 + 0x14);
          if ((iVar9 != 0) || (bVar7)) {
            psVar13 = *(short **)(puVar11 + 0xc);
            if (bVar7) {
              iVar9 = *(int *)(pbVar17 + 0x18);
              psVar13 = *(short **)(puVar11 + 0x10);
            }
            if (psVar13 == (short *)0x0) {
              psVar13 = *(short **)(iVar9 + 0xc);
            }
            else {
              iVar8 = (int)*(short *)(puVar11 + -0xc) - (int)*psVar13;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              sVar4 = *(short *)(iVar9 + 2);
              sVar5 = *(short *)(pbVar17 + 2);
              if (sVar4 < sVar5) {
                iVar15 = (int)sVar5;
                iVar19 = (int)sVar4;
              }
              else {
                iVar19 = (int)sVar5;
                iVar15 = (int)sVar4;
              }
              if (iVar15 - iVar19 < iVar8) {
                psVar13 = *(short **)(iVar9 + 0xc);
              }
            }
            if (bVar7) {
              *(short **)(puVar11 + 0x10) = psVar13;
              *(byte *)(psVar13 + 6) = *(byte *)(psVar13 + 6) | 2;
            }
            else {
              *(short **)(puVar11 + 0xc) = psVar13;
            }
          }
          pbVar17 = *(byte **)(pbVar17 + 0x10);
        } while (pbVar17 != *(byte **)(puVar11 + 0x1c));
        *puVar11 = 0;
        if ((0 < local_8) && (local_10 <= local_8)) {
          *puVar11 = 1;
        }
        if ((*(int *)(puVar11 + 0x10) != 0) && (*(int *)(puVar11 + 0xc) != 0)) {
          *(undefined4 *)(puVar11 + 0x10) = 0;
        }
        puVar14 = puVar11 + 0x24;
        puVar11 = puVar11 + 0x30;
      } while (puVar14 < puVar18);
    }
  }
  return local_20;
}

