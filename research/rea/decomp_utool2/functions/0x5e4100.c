// rea decompile_all
// name: FUN_005e4100
// address: 0x5e4100
// body: available
// range: 0x5e4100-0x5e4716 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5e4716 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_005e4100(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int in_EDX;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int **ppiVar15;
  undefined1 *puVar16;
  undefined1 auStack_1384 [4];
  uint local_1380;
  int *local_137c;
  int local_1378;
  int local_1374;
  int *local_1370;
  int *local_136c;
  int *local_1368;
  int local_1364;
  int *local_1360;
  int **local_135c;
  int local_1358;
  undefined4 local_1354;
  int local_1350;
  int *local_134c;
  int local_1348;
  undefined4 local_1344;
  int **local_1340;
  int local_133c;
  int *local_1338 [66];
  int *local_1230 [66];
  int local_1128 [66];
  int local_1020 [66];
  int local_f18 [66];
  undefined1 local_e10 [3588];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_1384;
  iVar9 = *(int *)(in_EDX + 0x504);
  iVar13 = *(int *)(in_EDX + 0x510);
  piVar12 = (int *)0x0;
  local_1354 = param_2;
  if (0 < iVar9) {
    ppiVar15 = local_1230;
    for (iVar10 = iVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppiVar15 = (int *)0xffffff38;
      ppiVar15 = ppiVar15 + 1;
    }
    ppiVar15 = local_1338;
    for (iVar10 = iVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppiVar15 = (int *)0xffffff38;
      ppiVar15 = ppiVar15 + 1;
    }
    piVar11 = local_1020;
    for (iVar10 = iVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    if (0 < iVar9) {
      piVar11 = local_1128;
      for (iVar10 = iVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar11 = 1;
        piVar11 = piVar11 + 1;
      }
      piVar11 = local_f18;
      for (iVar10 = iVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar11 = -1;
        piVar11 = piVar11 + 1;
      }
    }
  }
  local_1378 = iVar13;
  local_1374 = in_EDX;
  local_1348 = iVar9;
  if (iVar9 == 0) {
    uVar6 = FUN_005e4c30(0,*(undefined4 *)(in_EDX + 0x508),local_e10,*(undefined4 *)(in_EDX + 0x508)
                         ,iVar13);
    uVar5 = local_1380;
  }
  else {
    local_1380 = iVar9 - 1;
    iVar10 = 0;
    if ((int)local_1380 < 1) goto LAB_005e46f8;
    puVar16 = local_e10;
    uVar6 = 0;
    do {
      iVar9 = FUN_005e4c30(*(undefined4 *)(local_1374 + iVar10 * 4),
                           *(undefined4 *)(local_1374 + 4 + iVar10 * 4),puVar16,
                           *(undefined4 *)(local_1374 + 0x508),local_1378);
      iVar10 = iVar10 + 1;
      uVar6 = uVar6 + iVar9;
      puVar16 = puVar16 + 0x38;
      iVar9 = local_1348;
      iVar13 = local_1378;
      uVar5 = uVar6;
    } while (iVar10 < (int)local_1380);
  }
  local_1380 = uVar5;
  if (uVar6 == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    local_137c = (int *)0xffffff38;
    local_1370 = (int *)0xffffff38;
    FUN_005e4970(&local_137c,&local_1370,iVar13);
    iVar13 = 2;
    local_1230[0] = local_137c;
    local_1338[0] = local_137c;
    local_1338[1] = local_1370;
    local_1230[1] = local_1370;
    if (2 < iVar9) {
      local_1370 = (int *)(local_1374 + 0x210);
      iVar10 = local_1374;
      do {
        local_1380 = local_1020[*local_1370];
        local_133c = local_1128[*local_1370];
        if (local_f18[local_1380] != local_133c) {
          local_1344 = *(undefined4 *)(iVar10 + 0x208 + local_1380 * 4);
          local_1350 = *(int *)(iVar10 + 0x208 + local_133c * 4);
          local_f18[local_1380] = local_133c;
          local_1368 = *(int **)(local_1378 + 0x344 + local_1380 * 4);
          local_1364 = *(int *)(local_1378 + 0x344 + local_133c * 4);
          piVar12 = local_1230[local_1380];
          if ((int)piVar12 < 0) {
            piVar12 = local_1338[local_1380];
            local_135c = local_1338 + local_1380;
          }
          else {
            local_135c = local_1338 + local_1380;
            if (-1 < (int)*local_135c) {
              piVar12 = (int *)((int)piVar12 + (int)*local_135c >> 1);
            }
          }
          local_1340 = local_1230 + local_133c;
          local_137c = *local_1340;
          if ((int)local_137c < 0) {
            local_137c = local_1338[local_133c];
          }
          else if (-1 < (int)local_1338[local_133c]) {
            local_137c = (int *)((int)local_137c + (int)local_1338[local_133c] >> 1);
          }
          if ((piVar12 == (int *)0xffffffff) || (local_137c == (int *)0xffffffff)) {
            _exit(1);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = FUN_005e4750(piVar12,local_137c,local_1354,param_1,local_1378);
          if (iVar10 != 0) {
            local_134c = (int *)0xffffff38;
            local_136c = (int *)0xffffff38;
            local_1360 = (int *)0xffffff38;
            local_1368 = (int *)0xffffff38;
            local_1364 = FUN_005e4970(&local_134c,&local_136c,local_1378);
            local_1350 = FUN_005e4970(&local_1360,&local_1368,local_1378);
            piVar11 = local_134c;
            if (local_1364 != 0) {
              local_136c = local_1360;
              piVar11 = piVar12;
            }
            piVar12 = local_1368;
            if (local_1350 != 0) {
              piVar12 = local_137c;
              local_1360 = local_136c;
            }
            if ((local_1364 == 0) || (local_1350 == 0)) {
              *local_135c = piVar11;
              if (local_1380 == 0) {
                local_1230[0] = piVar11;
              }
              local_1230[iVar13] = local_136c;
              local_1338[iVar13] = local_1360;
              *local_1340 = piVar12;
              if (local_133c == 1) {
                local_1338[1] = piVar12;
              }
              iVar10 = local_1374;
              if ((-1 < (int)local_136c) || (-1 < (int)local_1360)) {
                iVar1 = *local_1370;
                iVar3 = iVar1;
                while ((iVar3 = iVar3 + -1, -1 < iVar3 && (local_1128[iVar3] == local_133c))) {
                  local_1128[iVar3] = iVar13;
                }
                while ((iVar1 = iVar1 + 1, iVar1 < iVar9 && (local_1020[iVar1] == local_1380))) {
                  local_1020[iVar1] = iVar13;
                }
              }
              goto LAB_005e4505;
            }
          }
          local_1338[iVar13] = (int *)0xffffff38;
          local_1230[iVar13] = (int *)0xffffff38;
          iVar10 = local_1374;
        }
LAB_005e4505:
        iVar13 = iVar13 + 1;
        local_1370 = local_1370 + 1;
      } while (iVar13 < iVar9);
    }
    piVar4 = local_1230[1];
    piVar11 = local_1338[0];
    local_1380 = iVar9 * 4 + 7U & 0xfffffff8;
    if (*(int *)(local_1358 + 0x4c) < (int)(*(int *)(local_1358 + 0x48) + local_1380)) {
      if (*(int *)(local_1358 + 0x44) != 0) {
        puVar7 = (undefined4 *)FUN_004c554b(8);
        *(int *)(local_1358 + 0x50) = *(int *)(local_1358 + 0x50) + *(int *)(local_1358 + 0x48);
        puVar7[1] = *(undefined4 *)(local_1358 + 0x54);
        *puVar7 = *(undefined4 *)(local_1358 + 0x44);
        *(undefined4 **)(local_1358 + 0x54) = puVar7;
      }
      *(uint *)(local_1358 + 0x4c) = local_1380;
      uVar8 = FUN_004c554b(local_1380);
      *(undefined4 *)(local_1358 + 0x44) = uVar8;
      *(undefined4 *)(local_1358 + 0x48) = 0;
    }
    piVar12 = (int *)(*(int *)(local_1358 + 0x44) + *(int *)(local_1358 + 0x48));
    *(uint *)(local_1358 + 0x48) = *(int *)(local_1358 + 0x48) + local_1380;
    piVar14 = piVar11;
    if ((-1 < (int)local_1230[0]) && (piVar14 = local_1230[0], -1 < (int)piVar11)) {
      piVar14 = (int *)((int)piVar11 + (int)local_1230[0] >> 1);
    }
    *piVar12 = (int)piVar14;
    piVar11 = local_1338[1];
    if ((-1 < (int)piVar4) && (piVar11 = piVar4, -1 < (int)local_1338[1])) {
      piVar11 = (int *)((int)piVar4 + (int)local_1338[1] >> 1);
    }
    piVar12[1] = (int)piVar11;
    local_1364 = 2;
    local_136c = piVar12;
    if (2 < iVar9) {
      local_1368 = (int *)(local_1374 + 0x30c);
      local_137c = (int *)(local_1378 + 0x34c);
      local_135c = (int **)(piVar12 + 2);
      do {
        iVar9 = *(int *)(local_1378 + 0x344 + local_1368[0x3f] * 4);
        local_1380 = piVar12[local_1368[0x3f]] & 0x7fff;
        uVar6 = (piVar12[*local_1368] & 0x7fffU) - local_1380;
        iVar9 = (int)(((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) * (*local_137c - iVar9))
                / (*(int *)(local_1378 + 0x344 + *local_1368 * 4) - iVar9);
        if ((int)uVar6 < 0) {
          iVar9 = -iVar9;
        }
        piVar11 = local_1230[local_1364];
        if ((int)piVar11 < 0) {
          piVar11 = local_1338[local_1364];
        }
        else if (-1 < (int)local_1338[local_1364]) {
          piVar11 = (int *)((int)piVar11 + (int)local_1338[local_1364] >> 1);
        }
        if (((int)piVar11 < 0) || ((int *)(local_1380 + iVar9) == piVar11)) {
          piVar12[local_1364] = local_1380 + iVar9 | 0x8000;
        }
        else {
          piVar12[local_1364] = (int)piVar11;
        }
        local_1364 = local_1364 + 1;
        local_137c = local_137c + 1;
        local_1368 = local_1368 + 1;
      } while (local_1364 < local_1348);
      __security_check_cookie(local_c ^ (uint)auStack_1384);
      return;
    }
  }
LAB_005e46f8:
  __security_check_cookie(local_c ^ (uint)auStack_1384,piVar12);
  return;
}

