// rea decompile_all
// name: FUN_001e1b4c
// address: 0x1e1b4c
// body: available
// range: 0x1e1b4c-0x1e1faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001e1cd8) */
/* WARNING: Removing unreachable block (ram,0x001e1cf0) */
/* WARNING: Removing unreachable block (ram,0x001e1d24) */
/* WARNING: Removing unreachable block (ram,0x001e1d38) */
/* WARNING: Removing unreachable block (ram,0x001e1d3c) */
/* WARNING: Removing unreachable block (ram,0x001e1d54) */
/* WARNING: Removing unreachable block (ram,0x001e1d5c) */
/* WARNING: Removing unreachable block (ram,0x001e1d6c) */
/* WARNING: Removing unreachable block (ram,0x001e1d74) */
/* WARNING: Removing unreachable block (ram,0x001e1d88) */
/* WARNING: Removing unreachable block (ram,0x001e1d9c) */
/* WARNING: Removing unreachable block (ram,0x001e1dac) */
/* WARNING: Removing unreachable block (ram,0x001e1db0) */

void FUN_001e1b4c(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  
  if ((int)param_2 - (int)param_1 >> 2 < 0x11) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar1 = (int)param_2 - (int)param_1 >> 2;
      if (1 < iVar1) {
        iVar10 = (iVar1 + -2) / 2;
        do {
          uVar11 = param_1[iVar10];
          iVar4 = iVar10;
          while( true ) {
            iVar9 = iVar4 * 2;
            iVar7 = iVar9 + 2;
            if (iVar1 <= iVar7) break;
            iVar2 = (*param_4)(param_1[iVar7],param_1[iVar9 + 1]);
            if (iVar2 != 0) {
              iVar7 = iVar9 + 1;
            }
            param_1[iVar4] = param_1[iVar7];
            iVar4 = iVar7;
          }
          if (iVar7 == iVar1) {
            param_1[iVar4] = param_1[iVar9 + 1];
            iVar4 = iVar9 + 1;
          }
          while ((iVar9 = (iVar4 + -1) / 2, iVar10 < iVar4 &&
                 (iVar7 = (*param_4)(param_1[iVar9],uVar11), iVar7 != 0))) {
            param_1[iVar4] = param_1[iVar9];
            iVar4 = iVar9;
          }
          bVar12 = iVar10 != 0;
          if (bVar12) {
            iVar10 = iVar10 + -1;
          }
          param_1[iVar4] = uVar11;
        } while (bVar12);
      }
      if (1 < iVar1) {
        do {
          if (param_1 != param_2) {
            iVar1 = (int)param_2 + (-4 - (int)param_1) >> 2;
            uVar11 = param_2[-1];
            iVar10 = 0;
            param_2[-1] = *param_1;
            iVar9 = 2;
            iVar4 = iVar10;
            if (2 < iVar1) {
              do {
                iVar7 = (*param_4)(param_1[iVar9],param_1[iVar9 + -1]);
                iVar10 = iVar9;
                if (iVar7 != 0) {
                  iVar10 = iVar9 + -1;
                }
                param_1[iVar4] = param_1[iVar10];
                iVar9 = iVar10 * 2 + 2;
                iVar4 = iVar10;
              } while (iVar9 < iVar1);
            }
            if (iVar9 == iVar1) {
              param_1[iVar10] = param_1[iVar9 + -1];
              iVar10 = iVar9 + -1;
            }
            while ((iVar1 = (iVar10 + -1) / 2, 0 < iVar10 &&
                   (iVar4 = (*param_4)(param_1[iVar1],uVar11), iVar4 != 0))) {
              param_1[iVar10] = param_1[iVar1];
              iVar10 = iVar1;
            }
            param_1[iVar10] = uVar11;
          }
          param_2 = param_2 + -1;
        } while (1 < (int)param_2 - (int)param_1 >> 2);
        return;
      }
      return;
    }
    puVar5 = param_1 + ((int)param_2 - (int)param_1 >> 2) / 2;
    iVar1 = (*param_4)(*param_1,*puVar5);
    if (iVar1 == 0) {
      iVar1 = (*param_4)(*param_1,param_2[-1]);
      puVar8 = param_1;
      if (iVar1 == 0) {
        iVar1 = (*param_4)(*puVar5,param_2[-1]);
        goto joined_r0x001e1f0c;
      }
    }
    else {
      iVar1 = (*param_4)(*puVar5);
      puVar8 = puVar5;
      if (iVar1 == 0) {
        iVar1 = (*param_4)(*param_1,param_2[-1]);
        puVar5 = param_1;
joined_r0x001e1f0c:
        puVar8 = puVar5;
        if (iVar1 != 0) {
          puVar8 = param_2 + -1;
        }
      }
    }
    uVar11 = *puVar8;
    puVar5 = param_1;
    puVar8 = param_2;
    while( true ) {
      iVar1 = (*param_4)(*puVar5,uVar11);
      puVar6 = puVar5;
      while (iVar1 != 0) {
        puVar6 = puVar6 + 1;
        iVar1 = (*param_4)(*puVar6,uVar11);
      }
      do {
        puVar8 = puVar8 + -1;
        iVar1 = (*param_4)(uVar11,*puVar8);
      } while (iVar1 != 0);
      if (puVar8 <= puVar6) break;
      uVar3 = *puVar6;
      puVar5 = puVar6 + 1;
      *puVar6 = *puVar8;
      *puVar8 = uVar3;
    }
    param_3 = param_3 / 2;
    FUN_001e1b4c(puVar6,param_2,param_3,param_4);
    param_2 = puVar6;
    if ((int)puVar6 - (int)param_1 >> 2 < 0x11) {
      return;
    }
  } while( true );
}

