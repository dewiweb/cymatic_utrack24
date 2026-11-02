// rea decompile_all
// name: FUN_001d642c
// address: 0x1d642c
// body: available
// range: 0x1d642c-0x1d67a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d642c(int *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  FUN_001d6238(*param_1,0x22,param_3,param_4,param_4);
  iVar10 = 1;
  if (1 < param_3 + 1) {
    do {
      iVar9 = DAT_001d67a4;
      bVar1 = *param_2;
      iVar8 = *param_1;
      if (*(char *)(DAT_001d67a4 + (uint)bVar1) == '\0') {
        if (*(uint *)(iVar8 + 0x10) <= *(int *)(iVar8 + 0xc) + 1U) {
          iVar9 = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8);
          uVar11 = *(int *)(iVar8 + 0x14) << 1;
          uVar5 = iVar9 + 1;
          if (uVar11 < uVar5) {
            uVar11 = uVar5;
          }
          iVar7 = FUN_001ab47c(*(int *)(iVar8 + 8),uVar11);
          *(uint *)(iVar8 + 0x14) = uVar11;
          *(int *)(iVar8 + 8) = iVar7;
          *(int *)(iVar8 + 0xc) = iVar7 + iVar9;
          *(uint *)(iVar8 + 0x10) = iVar7 + uVar11;
        }
        pbVar6 = *(byte **)(iVar8 + 0xc);
        *(byte **)(iVar8 + 0xc) = pbVar6 + 1;
        *pbVar6 = bVar1;
      }
      else {
        if (*(uint *)(iVar8 + 0x10) <= *(int *)(iVar8 + 0xc) + 1U) {
          iVar7 = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8);
          uVar11 = *(int *)(iVar8 + 0x14) << 1;
          if (uVar11 < iVar7 + 1U) {
            uVar11 = iVar7 + 1U;
          }
          iVar3 = FUN_001ab47c(*(int *)(iVar8 + 8),uVar11);
          *(uint *)(iVar8 + 0x14) = uVar11;
          *(int *)(iVar8 + 8) = iVar3;
          *(int *)(iVar8 + 0xc) = iVar7 + iVar3;
          *(uint *)(iVar8 + 0x10) = iVar3 + uVar11;
        }
        puVar4 = *(undefined1 **)(iVar8 + 0xc);
        *(undefined1 **)(iVar8 + 0xc) = puVar4 + 1;
        *puVar4 = 0x5c;
        iVar8 = *param_1;
        uVar2 = *(undefined1 *)(iVar9 + (uint)*param_2);
        if (*(uint *)(iVar8 + 0x10) <= *(int *)(iVar8 + 0xc) + 1U) {
          iVar7 = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8);
          uVar11 = *(int *)(iVar8 + 0x14) << 1;
          if (uVar11 < iVar7 + 1U) {
            uVar11 = iVar7 + 1U;
          }
          iVar3 = FUN_001ab47c(*(int *)(iVar8 + 8),uVar11);
          *(uint *)(iVar8 + 0x14) = uVar11;
          *(int *)(iVar8 + 8) = iVar3;
          *(int *)(iVar8 + 0xc) = iVar7 + iVar3;
          *(uint *)(iVar8 + 0x10) = iVar3 + uVar11;
        }
        puVar4 = *(undefined1 **)(iVar8 + 0xc);
        *(undefined1 **)(iVar8 + 0xc) = puVar4 + 1;
        *puVar4 = uVar2;
        if (*(char *)(iVar9 + (uint)*param_2) == 'u') {
          iVar9 = *param_1;
          if (*(uint *)(iVar9 + 0x10) <= *(int *)(iVar9 + 0xc) + 1U) {
            iVar8 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 8);
            uVar11 = *(int *)(iVar9 + 0x14) << 1;
            uVar5 = iVar8 + 1;
            if (uVar11 < uVar5) {
              uVar11 = uVar5;
            }
            iVar7 = FUN_001ab47c(*(int *)(iVar9 + 8),uVar11);
            *(uint *)(iVar9 + 0x14) = uVar11;
            *(int *)(iVar9 + 8) = iVar7;
            *(int *)(iVar9 + 0xc) = iVar7 + iVar8;
            *(uint *)(iVar9 + 0x10) = iVar7 + uVar11;
          }
          puVar4 = *(undefined1 **)(iVar9 + 0xc);
          *(undefined1 **)(iVar9 + 0xc) = puVar4 + 1;
          *puVar4 = 0x30;
          iVar9 = *param_1;
          if (*(uint *)(iVar9 + 0x10) <= *(int *)(iVar9 + 0xc) + 1U) {
            iVar8 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 8);
            uVar11 = *(int *)(iVar9 + 0x14) << 1;
            uVar5 = iVar8 + 1;
            if (uVar11 < uVar5) {
              uVar11 = uVar5;
            }
            iVar7 = FUN_001ab47c(*(int *)(iVar9 + 8),uVar11);
            *(uint *)(iVar9 + 0x14) = uVar11;
            *(int *)(iVar9 + 8) = iVar7;
            *(int *)(iVar9 + 0xc) = iVar7 + iVar8;
            *(uint *)(iVar9 + 0x10) = iVar7 + uVar11;
          }
          iVar8 = DAT_001d67a8;
          puVar4 = *(undefined1 **)(iVar9 + 0xc);
          *(undefined1 **)(iVar9 + 0xc) = puVar4 + 1;
          *puVar4 = 0x30;
          iVar9 = *param_1;
          uVar2 = *(undefined1 *)(iVar8 + (uint)(*param_2 >> 4));
          if (*(uint *)(iVar9 + 0x10) <= *(int *)(iVar9 + 0xc) + 1U) {
            iVar7 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 8);
            uVar11 = *(int *)(iVar9 + 0x14) << 1;
            if (uVar11 < iVar7 + 1U) {
              uVar11 = iVar7 + 1U;
            }
            iVar3 = FUN_001ab47c(*(int *)(iVar9 + 8),uVar11);
            *(uint *)(iVar9 + 0x14) = uVar11;
            *(int *)(iVar9 + 8) = iVar3;
            *(int *)(iVar9 + 0xc) = iVar7 + iVar3;
            *(uint *)(iVar9 + 0x10) = iVar3 + uVar11;
          }
          puVar4 = *(undefined1 **)(iVar9 + 0xc);
          *(undefined1 **)(iVar9 + 0xc) = puVar4 + 1;
          *puVar4 = uVar2;
          iVar9 = *param_1;
          uVar2 = *(undefined1 *)(iVar8 + (*param_2 & 0xf));
          if (*(uint *)(iVar9 + 0x10) <= *(int *)(iVar9 + 0xc) + 1U) {
            iVar8 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 8);
            uVar11 = *(int *)(iVar9 + 0x14) << 1;
            uVar5 = iVar8 + 1;
            if (uVar11 < uVar5) {
              uVar11 = uVar5;
            }
            iVar7 = FUN_001ab47c(*(int *)(iVar9 + 8),uVar11);
            *(uint *)(iVar9 + 0x14) = uVar11;
            *(int *)(iVar9 + 8) = iVar7;
            *(int *)(iVar9 + 0xc) = iVar7 + iVar8;
            *(uint *)(iVar9 + 0x10) = iVar7 + uVar11;
          }
          puVar4 = *(undefined1 **)(iVar9 + 0xc);
          *(undefined1 **)(iVar9 + 0xc) = puVar4 + 1;
          *puVar4 = uVar2;
        }
      }
      iVar10 = iVar10 + 1;
      param_2 = param_2 + 1;
    } while (iVar10 < param_3 + 1);
  }
  FUN_001d6238(*param_1,0x22);
  return;
}

