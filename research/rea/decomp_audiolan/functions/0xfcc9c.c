// rea decompile_all
// name: FUN_000fcc9c
// address: 0xfcc9c
// body: available
// range: 0xfcc9c-0xfcfdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000fcc9c(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  code *extraout_r1;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  byte unaff_r10;
  undefined4 uVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  uint auStack_b4 [33];
  uint local_30;
  uint local_2c;
  
  FUN_001a0700(*(int *)(param_1 + 0x1c) + 4);
  uVar9 = 0;
  uVar14 = DAT_000fcfdc;
  if ((*(char *)(param_1 + 0x10) == '\0') || (uVar14 = DAT_000fcfe0, param_2 == 0))
  goto LAB_000fcd28;
  pcVar11 = *(code **)(param_1 + 0x14);
  pcVar15 = pcVar11 + 1;
  pcVar5 = extraout_r1;
  if (pcVar11 == (code *)0xfffffffe) {
    pcVar15 = entry;
  }
  while (uVar4 = *(uint *)(param_1 + 8), *(uint *)(param_1 + 8) != 0) {
    while( true ) {
      pcVar5 = *(code **)(uVar4 + 0x9c);
      bVar17 = pcVar15 < pcVar5;
      bVar16 = pcVar15 == pcVar5;
      if (!bVar17 && !bVar16) {
        pcVar5 = (code *)0x1;
      }
      if (bVar17) {
        pcVar5 = entry;
      }
      if (bVar16) break;
      uVar7 = *(uint *)(uVar4 + (int)pcVar5 * 4 + 4);
      if (uVar7 == 0) goto LAB_000fcd64;
      if (pcVar5 != entry) {
        uVar4 = (uint)*(byte *)(uVar4 + 0xc);
      }
      uVar3 = uVar4 & 0x80;
      uVar4 = uVar7;
      if (pcVar5 != entry && uVar3 != 0) goto LAB_000fcd64;
    }
    if (uVar4 == 0) break;
    uVar14 = DAT_000fcfe4;
    if (pcVar11 == pcVar15) goto LAB_000fcd28;
    pcVar15 = pcVar15 + 1;
  }
LAB_000fcd64:
  *(undefined4 *)(param_2 + 8) = 0;
  *(code **)(param_2 + 0x9c) = pcVar15;
  *(undefined4 *)(param_2 + 4) = 0;
  piVar10 = (int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) == 0) {
    *piVar10 = *piVar10 + 1;
    *(undefined1 *)(param_2 + 0xc) = 1;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(int *)(param_1 + 8) = param_2;
LAB_000fcfa0:
    if (param_2 == 0) goto LAB_000fcfa8;
  }
  else {
    iVar13 = *(int *)(param_1 + 8);
    iVar8 = 0;
    do {
      auStack_b4[iVar8 + 1] = iVar13;
      pcVar11 = *(code **)(iVar13 + 0x9c);
      iVar6 = iVar8 + 1;
      bVar17 = pcVar15 < pcVar11;
      bVar16 = pcVar15 == pcVar11;
      if (!bVar17 && !bVar16) {
        pcVar11 = (code *)0x1;
      }
      if (bVar17) {
        pcVar11 = entry;
      }
      pcVar5 = (code *)(auStack_b4 + 1);
      if (bVar16) break;
      iVar12 = *(int *)(iVar13 + (int)pcVar11 * 4 + 4);
      if (iVar12 == 0) {
LAB_000fcdc8:
        *piVar10 = *piVar10 + 1;
        *(undefined1 *)(param_2 + 0xc) = 0x81;
        *(undefined4 *)(param_2 + 4) = 0;
        if (pcVar11 == entry) {
          *(int *)(param_2 + 8) = iVar13;
        }
        else {
          *(byte *)(iVar13 + 0xc) = *(byte *)(iVar13 + 0xc) & 0x7f;
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar13 + (int)pcVar11 * 4 + 4);
        }
        uVar4 = iVar13 + (int)pcVar11 * 4;
        iVar6 = iVar8 + 2;
        iVar13 = 1;
        *(int *)(uVar4 + 4) = param_2;
        pcVar5 = (code *)(auStack_b4 + 1);
        if (1 < iVar6) {
          do {
            if (iVar8 != 0) {
              uVar4 = *(uint *)(auStack_b4[iVar8] + 8);
              if (uVar4 == auStack_b4[iVar8 + 1]) {
                pcVar11 = (code *)0x1;
              }
              else {
                pcVar11 = entry;
              }
            }
            uVar7 = auStack_b4[iVar8 + 1];
            if (uVar7 != 0) {
              uVar4 = *(uint *)(uVar7 + 4);
            }
            if (uVar7 != 0 && uVar4 != 0) {
              bVar1 = *(byte *)(uVar4 + 0xc);
              local_2c = (uint)bVar1;
              bVar2 = *(byte *)(uVar7 + 0xc);
              local_30 = (uint)bVar2;
              if (((uint)bVar1 * 0x2000000 == (uint)bVar2 * 0x2000000) && ((bVar2 & 0x7f) != 0)) {
                if ((bVar1 & 0x80) == 0) {
                  uVar14 = *(undefined4 *)(uVar4 + 8);
                }
                else {
                  uVar14 = 0;
                }
                *(undefined4 *)(uVar7 + 4) = uVar14;
                *(uint *)(uVar4 + 8) = uVar7;
                *(byte *)(uVar4 + 0xc) = *(byte *)(uVar4 + 0xc) & 0x7f;
                uVar7 = uVar4;
              }
            }
            auStack_b4[iVar8 + 1] = uVar7;
            if ((uVar7 != 0) && (bVar1 = *(byte *)(uVar7 + 0xc), (bVar1 & 0x80) == 0)) {
              local_30 = *(uint *)(uVar7 + 8);
              if (((local_30 != 0) &&
                  ((((*(byte *)(local_30 + 0xc) & 0x80) == 0 && (*(int *)(local_30 + 8) != 0)) &&
                   ((*(byte *)(*(int *)(local_30 + 8) + 0xc) & 0x7f) == (bVar1 & 0x7f))))) &&
                 ((bVar1 & 0x7f) != 0)) {
                if (*(int *)(local_30 + 4) == 0) {
                  *(byte *)(uVar7 + 0xc) = bVar1 | 0x80;
                }
                else {
                  *(int *)(uVar7 + 8) = *(int *)(local_30 + 4);
                }
                *(uint *)(local_30 + 4) = uVar7;
                *(char *)(local_30 + 0xc) = *(char *)(local_30 + 0xc) + '\x01';
                uVar7 = local_30;
              }
            }
            auStack_b4[iVar8 + 1] = uVar7;
            if (iVar8 == 0) {
              *(uint *)(param_1 + 8) = auStack_b4[1];
              uVar4 = auStack_b4[1];
            }
            else {
              uVar4 = (int)pcVar11 * 4 + 4;
              *(uint *)(auStack_b4[iVar8] + uVar4) = uVar7;
            }
            iVar13 = iVar13 + 1;
            iVar8 = iVar8 + -1;
            pcVar5 = (code *)(auStack_b4 + 1);
          } while (iVar13 < iVar6);
        }
        goto LAB_000fcfa0;
      }
      if (pcVar11 != entry) {
        unaff_r10 = *(byte *)(iVar13 + 0xc);
      }
      if (pcVar11 != entry && (unaff_r10 & 0x80) != 0) goto LAB_000fcdc8;
      iVar13 = iVar12;
      pcVar5 = (code *)(auStack_b4 + 1);
      iVar8 = iVar6;
    } while (iVar6 < 0x20);
LAB_000fcfa8:
    uVar9 = DAT_000fcfe4;
    pcVar11 = *(code **)(param_1 + 8);
    if (pcVar11 != entry) {
      pcVar5 = *(code **)(pcVar11 + 4);
    }
    if (pcVar11 != entry && pcVar5 != entry) {
      do {
        pcVar11 = pcVar5;
        pcVar5 = *(code **)(pcVar11 + 4);
      } while (*(code **)(pcVar11 + 4) != entry);
    }
    *(code **)(param_1 + 0xc) = pcVar11;
  }
  *(code **)(param_1 + 0x14) = pcVar15;
  uVar14 = uVar9;
LAB_000fcd28:
  FUN_001a0d18(*(int *)(param_1 + 0x1c) + 4);
  return uVar14;
}

