// rea decompile_all
// name: FUN_00402955
// address: 0x402955
// body: available
// range: 0x402955-0x402be1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00402955(int param_1)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  bool bVar4;
  undefined2 *puVar5;
  undefined4 *in_EAX;
  short *psVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int iVar14;
  byte *pbVar15;
  undefined2 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = *in_EAX;
  piVar2 = in_EAX + param_1 * 7 + 0xb;
  iVar14 = *piVar2;
  local_14 = param_1 * 0x18c + 0x28 + in_EAX[0x1b];
  pcVar3 = (char *)piVar2[2];
  local_18 = 0;
  piVar2[3] = 0;
  if (param_1 == 0) {
    param_1 = in_EAX[1];
    local_8 = FUN_0040d2d8();
  }
  else {
    param_1 = in_EAX[3];
    local_8 = 0;
  }
  FUN_00401000(*(undefined4 *)(local_14 + 0xcc),param_1);
  local_14 = FUN_0040d2d8();
  if (pcVar3 < pcVar3 + iVar14 * 0x30) {
    pcVar13 = pcVar3 + 1;
    do {
      if ((local_8 <= *(short *)(pcVar13 + 7)) &&
         ((*(int *)(pcVar13 + 0x17) == 0 || (local_8 * 3 <= *(short *)(pcVar13 + 7) * 2)))) {
        local_c = 0;
        if (0 < piVar2[3]) {
          psVar6 = (short *)piVar2[5];
          do {
            iVar9 = (int)*(short *)(pcVar13 + 1) - (int)*psVar6;
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
            if ((iVar9 < local_14) && (*(char *)((int)psVar6 + 0xd) == *pcVar13)) {
              *(undefined4 *)(pcVar13 + 0xf) = *(undefined4 *)(psVar6 + 0x14);
              *(char **)(*(int *)(psVar6 + 0x16) + 0x10) = pcVar13 + -1;
              *(char **)(psVar6 + 0x16) = pcVar13 + -1;
              goto LAB_00402ab6;
            }
            local_c = local_c + 1;
            psVar6 = psVar6 + 0x18;
          } while (local_c < piVar2[3]);
        }
        local_18 = FUN_004013cf(piVar2,(int)*(short *)(pcVar13 + 1),(int)*pcVar13,local_10,&local_1c
                               );
        puVar5 = local_1c;
        if (local_18 != 0) {
          return local_18;
        }
        _memset(local_1c,0,0x30);
        *(char **)(puVar5 + 0x14) = pcVar13 + -1;
        *(char **)(puVar5 + 0x16) = pcVar13 + -1;
        *(char *)((int)puVar5 + 0xd) = *pcVar13;
        *puVar5 = *(undefined2 *)(pcVar13 + 1);
        uVar7 = FUN_00401000((int)*(short *)(pcVar13 + 1),param_1);
        *(undefined4 *)(puVar5 + 2) = uVar7;
        *(undefined4 *)(puVar5 + 4) = uVar7;
        *(char **)(pcVar13 + 0xf) = pcVar13 + -1;
      }
LAB_00402ab6:
      pcVar1 = pcVar13 + 0x2f;
      pcVar13 = pcVar13 + 0x30;
    } while (pcVar1 < pcVar3 + iVar14 * 0x30);
  }
  puVar8 = (undefined1 *)piVar2[5];
  puVar12 = puVar8 + piVar2[3] * 0x30;
  puVar10 = puVar8;
  if (puVar8 < puVar12) {
    do {
      iVar14 = *(int *)(puVar10 + 0x28);
      if (iVar14 != 0) {
        do {
          *(undefined1 **)(iVar14 + 0xc) = puVar10;
          iVar14 = *(int *)(iVar14 + 0x10);
        } while (iVar14 != *(int *)(puVar10 + 0x28));
      }
      puVar10 = puVar10 + 0x30;
    } while (puVar10 < puVar12);
    if (puVar8 < puVar12) {
      puVar8 = puVar8 + 0xc;
      do {
        local_c = 0;
        local_8 = 0;
        pbVar15 = *(byte **)(puVar8 + 0x1c);
        do {
          if ((*pbVar15 & 1) == 0) {
            local_8 = local_8 + 1;
          }
          else {
            local_c = local_c + 1;
          }
          iVar14 = *(int *)(pbVar15 + 0x18);
          if (((iVar14 == 0) || (*(undefined1 **)(iVar14 + 0xc) == (undefined1 *)0x0)) ||
             (bVar4 = true, *(undefined1 **)(iVar14 + 0xc) == puVar8 + -0xc)) {
            bVar4 = false;
          }
          iVar9 = *(int *)(pbVar15 + 0x14);
          if (((iVar9 != 0) && (*(int *)(iVar9 + 0xc) != 0)) || (bVar4)) {
            psVar6 = *(short **)(puVar8 + 0xc);
            if (bVar4) {
              psVar6 = *(short **)(puVar8 + 0x10);
              iVar9 = iVar14;
            }
            if (psVar6 == (short *)0x0) {
              psVar6 = *(short **)(iVar9 + 0xc);
            }
            else {
              iVar14 = (int)*(short *)(puVar8 + -0xc) - (int)*psVar6;
              if (iVar14 < 0) {
                iVar14 = -iVar14;
              }
              iVar11 = (int)*(short *)(pbVar15 + 2) - (int)*(short *)(iVar9 + 2);
              if (iVar11 < 0) {
                iVar11 = -iVar11;
              }
              if (iVar11 < iVar14) {
                psVar6 = *(short **)(iVar9 + 0xc);
              }
            }
            if (bVar4) {
              *(short **)(puVar8 + 0x10) = psVar6;
              *(byte *)(psVar6 + 6) = *(byte *)(psVar6 + 6) | 2;
            }
            else {
              *(short **)(puVar8 + 0xc) = psVar6;
            }
          }
          pbVar15 = *(byte **)(pbVar15 + 0x10);
        } while (pbVar15 != *(byte **)(puVar8 + 0x1c));
        *puVar8 = 0;
        if ((0 < local_c) && (local_8 <= local_c)) {
          *puVar8 = 1;
        }
        if ((*(int *)(puVar8 + 0x10) != 0) && (*(int *)(puVar8 + 0xc) != 0)) {
          *(undefined4 *)(puVar8 + 0x10) = 0;
        }
        puVar10 = puVar8 + 0x24;
        puVar8 = puVar8 + 0x30;
      } while (puVar10 < puVar12);
    }
  }
  return local_18;
}

