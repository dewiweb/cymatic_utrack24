// rea decompile_all
// name: FUN_0014aea4
// address: 0x14aea4
// body: available
// range: 0x14aea4-0x14b24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0014aea4(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  char **ppcVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 *puVar15;
  char *local_54 [2];
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char *local_40 [4];
  undefined4 *local_30;
  char **local_2c;
  char *local_28;
  
  uVar4 = DAT_0014b24c;
  *param_1 = DAT_0014b24c;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(char *)((int)param_1 + 0x21) = (char)uVar4;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  piVar6 = (int *)FUN_0010f82c(0xc,0);
  iVar7 = FUN_0010f82c(0x18,0);
  piVar6[2] = iVar7;
  *piVar6 = param_1[2];
  piVar6[1] = 1;
  param_1[2] = piVar6;
  puVar8 = (undefined1 *)piVar6[2];
  uVar14 = 0;
  param_1[4] = puVar8;
  param_1[5] = puVar8 + 0x18;
  param_1[4] = puVar8 + 0x18;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)(puVar8 + 0xc) = 0;
  *puVar8 = 0;
  param_1[6] = puVar8;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(undefined4 *)(param_1[6] + 8) = param_1[6];
  *(undefined4 *)(param_1[6] + 0xc) = param_1[6];
  iVar7 = param_1[1];
  uVar9 = 0;
  uVar11 = (uint)*(ushort *)(iVar7 + 0x30);
  if (uVar11 != 0) {
    do {
      iVar10 = 0;
      if (*(int *)(iVar7 + 0x20) != 0 && uVar9 < uVar11) {
        iVar10 = uVar9 * *(ushort *)(iVar7 + 0x2e) + iVar7 + *(int *)(iVar7 + 0x20);
      }
      if (*(int *)(iVar10 + 4) == 2) goto LAB_0014af9c;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar11);
  }
  iVar10 = 0;
LAB_0014af9c:
  if (*(uint *)(iVar10 + 0x14) >> 4 != 0) {
    do {
      iVar7 = param_1[1];
      uVar9 = 0;
      uVar11 = (uint)*(ushort *)(iVar7 + 0x30);
      if (uVar11 != 0) {
        do {
          iVar10 = 0;
          if (*(int *)(iVar7 + 0x20) != 0 && uVar9 < uVar11) {
            iVar10 = uVar9 * *(ushort *)(iVar7 + 0x2e) + iVar7 + *(int *)(iVar7 + 0x20);
          }
          if (*(int *)(iVar10 + 4) == 2) goto LAB_0014b000;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar11);
      }
      iVar10 = 0;
LAB_0014b000:
      iVar7 = *(int *)(iVar10 + 0x10) + iVar7 + uVar14 * 0x10;
      bVar1 = *(byte *)(iVar7 + 0xc);
      if ((((bVar1 & 0xf) == 1 || (bVar1 & 0xf) == 2) || (bVar1 & 0xf) == 0) && bVar1 >> 4 == 1) {
        local_48 = FUN_0016038c(param_1,uVar14);
        local_30 = &local_48;
        local_44 = 0;
        puVar15 = param_1 + 2;
        iVar10 = 1;
        ppcVar2 = local_40;
        pcVar3 = (char *)param_1[6];
        pcVar12 = *(char **)((char *)param_1[6] + 4);
        while (local_2c = ppcVar2, pcVar12 != (char *)0x0) {
          iVar10 = FUN_00003960(local_48,*(undefined4 *)(pcVar12 + 0x10));
          iVar10 = -(iVar10 >> 0x1f);
          ppcVar2 = local_2c;
          pcVar3 = pcVar12;
          if (iVar10 == 0) {
            pcVar12 = *(char **)(pcVar12 + 0xc);
          }
          else {
            pcVar12 = *(char **)(pcVar12 + 8);
          }
        }
        if (*(char *)(param_1 + 8) == '\0') {
          pcVar12 = pcVar3;
          if (iVar10 != 0) {
            if (pcVar3 == *(char **)(param_1[6] + 8)) {
              FUN_001c18e4(&local_4c,puVar15,0,pcVar3,local_30);
              local_40[0] = local_4c;
              *(undefined1 *)(ppcVar2 + 1) = 1;
              goto LAB_0014b1d0;
            }
            if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
              pcVar12 = *(char **)(pcVar3 + 0xc);
            }
            else {
              pcVar5 = *(char **)(pcVar3 + 8);
              if (*(char **)(pcVar3 + 8) == (char *)0x0) {
                pcVar5 = *(char **)(pcVar3 + 4);
                pcVar13 = pcVar3;
                while (pcVar12 = pcVar5, pcVar13 == *(char **)(pcVar12 + 8)) {
                  pcVar13 = pcVar12;
                  pcVar5 = *(char **)(pcVar12 + 4);
                }
              }
              else {
                do {
                  pcVar12 = pcVar5;
                  pcVar5 = *(char **)(pcVar12 + 0xc);
                } while (*(char **)(pcVar12 + 0xc) != (char *)0x0);
              }
            }
          }
          iVar10 = FUN_00003960(*(undefined4 *)(pcVar12 + 0x10),local_48);
          ppcVar2 = local_2c;
          if (iVar10 < 0) {
            FUN_001c18e4(&local_28,puVar15,0,pcVar3,local_30);
            local_40[0] = local_28;
            *(undefined1 *)(ppcVar2 + 1) = 1;
          }
          else {
            *(undefined1 *)(local_2c + 1) = 0;
            local_40[0] = pcVar12;
          }
        }
        else {
          FUN_001c18e4(local_54,puVar15,0,pcVar3,local_30);
          local_40[0] = local_54[0];
          *(undefined1 *)(ppcVar2 + 1) = 1;
        }
LAB_0014b1d0:
        *(undefined4 *)(local_40[0] + 0x14) = *(undefined4 *)(iVar7 + 4);
      }
      iVar7 = param_1[1];
      uVar14 = uVar14 + 1;
      uVar11 = (uint)*(ushort *)(iVar7 + 0x30);
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar10 = 0;
          if (*(int *)(iVar7 + 0x20) != 0 && uVar9 < uVar11) {
            iVar10 = uVar9 * *(ushort *)(iVar7 + 0x2e) + iVar7 + *(int *)(iVar7 + 0x20);
          }
          if (*(int *)(iVar10 + 4) == 2) goto LAB_0014b230;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar11);
      }
      iVar10 = 0;
LAB_0014b230:
    } while (uVar14 < *(uint *)(iVar10 + 0x14) >> 4);
  }
  return param_1;
}

