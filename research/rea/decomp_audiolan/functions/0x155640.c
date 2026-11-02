// rea decompile_all
// name: FUN_00155640
// address: 0x155640
// body: available
// range: 0x155640-0x155a4f inclusive
// range: 0x155a54-0x155afb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x155af8 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00155640(uint param_1,int *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  uint local_50 [2];
  uint local_48;
  uint local_3c;
  uint local_38;
  undefined4 *local_34;
  int local_30;
  
  local_30 = param_1 + 0x124;
  FUN_001a0700();
  local_38 = param_1 & 0xffffff00 | 1;
  local_50[0] = *(uint *)(param_1 + 0x188);
  if (0xfffffff < local_50[0]) {
    FUN_0010f7cc(8,&DAT_00155a50,&DAT_00155a50,local_50[0],0xfffffff);
  }
  if ((uint)(param_2[2] - *param_2 >> 4) < local_50[0]) {
    uVar13 = param_2[1] - *param_2 >> 4;
    uVar8 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    local_3c = uVar13 + 1;
    if (uVar13 + 1 <= uVar8) {
      local_3c = uVar8;
    }
    puVar9 = &local_3c;
    if (local_3c <= local_50[0]) {
      puVar9 = local_50;
    }
    uVar13 = *puVar9;
    puVar3 = (undefined4 *)FUN_0010f82c(uVar13 << 4,0);
    puVar15 = (undefined4 *)param_2[1];
    puVar14 = puVar3;
    for (puVar10 = (undefined4 *)*param_2; puVar10 != puVar15; puVar10 = puVar10 + 4) {
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *puVar10;
        iVar4 = FUN_001da408(puVar14 + 1,puVar10 + 1);
        iVar4 = FUN_001da408(iVar4 + 4,puVar10 + 2);
        *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(puVar10 + 3);
      }
      puVar14 = puVar14 + 4;
    }
    iVar11 = param_2[1];
    for (iVar4 = *param_2; iVar4 != iVar11; iVar4 = iVar4 + 0x10) {
      iVar5 = FUN_001da44c(iVar4 + 8);
      FUN_001da44c(iVar5 + -4);
    }
    FUN_0010fa20(*param_2,param_2[2] - *param_2 >> 4,0);
    iVar4 = *param_2;
    *param_2 = (int)puVar3;
    param_2[1] = (param_2[1] - iVar4 & 0xfffffff0U) + (int)puVar3;
    param_2[2] = (int)(puVar3 + uVar13 * 4);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x184) + 8);
  if (iVar4 != *(int *)(param_1 + 0x184)) {
    do {
      bVar16 = *(int *)(*(int *)(iVar4 + 0x1c) + -4) != 0;
      sVar1 = 0;
      if (bVar16) {
        sVar1 = *(short *)(iVar4 + 0x20);
      }
      if (bVar16 && sVar1 != 0) {
        puVar10 = (undefined4 *)param_2[1];
        puVar14 = (undefined4 *)(iVar4 + 0x14);
        if (puVar10 == (undefined4 *)param_2[2]) {
          uVar13 = (int)puVar10 - *param_2 >> 4;
          local_34 = puVar14;
          if (uVar13 < (uint)(param_2[2] - *param_2 >> 4)) {
            param_2[1] = (int)(puVar10 + 4);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = puVar10[-4];
              iVar11 = FUN_001da408(puVar10 + 1,puVar10 + -3);
              iVar11 = FUN_001da408(iVar11 + 4,puVar10 + -2);
              *(undefined2 *)(iVar11 + 4) = *(undefined2 *)(puVar10 + -1);
            }
            puVar3 = puVar10;
            puVar15 = puVar10 + -4;
            puVar14 = local_34;
            while (puVar2 = puVar15, puVar6 = puVar3, local_34 = puVar14, puVar10 != puVar2) {
              puVar3 = puVar6 + -4;
              puVar15 = puVar2 + -4;
              if (puVar3 != puVar15) {
                *puVar3 = *puVar15;
                FUN_001da4a8(puVar6 + -3,puVar2 + -3);
                FUN_001da4a8(puVar6 + -2,puVar2 + -2);
                *(undefined2 *)(puVar6 + -1) = *(undefined2 *)(puVar2 + -1);
                puVar14 = local_34;
              }
            }
            if (puVar10 != puVar14) {
              *puVar10 = *puVar14;
              FUN_001da4a8(puVar10 + 1,puVar14 + 1);
              FUN_001da4a8(puVar10 + 2,puVar14 + 2);
              *(undefined2 *)(puVar10 + 3) = *(undefined2 *)(puVar14 + 3);
            }
          }
          else {
            local_48 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
            if (local_48 < uVar13 + 1) {
              local_48 = uVar13 + 1;
            }
            puVar6 = (undefined4 *)FUN_0010f82c(local_48 << 4,0);
            puVar3 = puVar6;
            puVar15 = local_34;
            for (puVar14 = (undefined4 *)*param_2; local_34 = puVar15, puVar14 != puVar10;
                puVar14 = puVar14 + 4) {
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = *puVar14;
                iVar11 = FUN_001da408(puVar3 + 1,puVar14 + 1);
                iVar11 = FUN_001da408(iVar11 + 4,puVar14 + 2);
                *(undefined2 *)(iVar11 + 4) = *(undefined2 *)(puVar14 + 3);
              }
              puVar3 = puVar3 + 4;
              puVar15 = local_34;
            }
            puVar14 = (undefined4 *)(((int)puVar10 - *param_2 & 0xfffffff0U) + (int)puVar6);
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = *puVar15;
              iVar11 = FUN_001da408(puVar14 + 1,puVar15 + 1);
              iVar11 = FUN_001da408(iVar11 + 4,puVar15 + 2);
              *(undefined2 *)(iVar11 + 4) = *(undefined2 *)(puVar15 + 3);
            }
            puVar3 = (undefined4 *)param_2[1];
            puVar14 = (undefined4 *)(((int)puVar10 - *param_2 & 0xfffffff0U) + (int)puVar6);
            for (; puVar10 != puVar3; puVar10 = puVar10 + 4) {
              puVar15 = puVar14 + 4;
              if (puVar15 != (undefined4 *)0x0) {
                *puVar15 = *puVar10;
                iVar11 = FUN_001da408(puVar14 + 5,puVar10 + 1);
                iVar11 = FUN_001da408(iVar11 + 4,puVar10 + 2);
                *(undefined2 *)(iVar11 + 4) = *(undefined2 *)(puVar10 + 3);
              }
              puVar14 = puVar15;
            }
            iVar11 = *param_2;
            iVar12 = param_2[1];
            iVar5 = iVar12 - iVar11;
            for (; iVar11 != iVar12; iVar11 = iVar11 + 0x10) {
              iVar7 = FUN_001da44c(iVar11 + 8);
              FUN_001da44c(iVar7 + -4);
            }
            FUN_0010fa20(*param_2,param_2[2] - *param_2 >> 4,0);
            param_2[2] = (int)(puVar6 + local_48 * 4);
            param_2[1] = (int)(puVar6 + (iVar5 >> 4) * 4 + 4);
            *param_2 = (int)puVar6;
          }
        }
        else {
          param_2[1] = (int)(puVar10 + 4);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar14;
            iVar11 = FUN_001da408(puVar10 + 1,iVar4 + 0x18);
            iVar11 = FUN_001da408(iVar11 + 4,iVar4 + 0x1c);
            *(undefined2 *)(iVar11 + 4) = *(undefined2 *)(iVar4 + 0x20);
          }
        }
      }
      iVar11 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar11 = *(int *)(iVar4 + 4);
        while (iVar5 = iVar11, iVar4 == *(int *)(iVar5 + 0xc)) {
          iVar4 = iVar5;
          iVar11 = *(int *)(iVar5 + 4);
        }
        if (*(int *)(iVar4 + 0xc) != iVar5) {
          iVar4 = iVar5;
        }
      }
      else {
        do {
          iVar4 = iVar11;
          iVar11 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    } while (iVar4 != *(int *)(param_1 + 0x184));
  }
  if ((local_38 & 0xff) != 0) {
    FUN_001a0d18(local_30);
    return;
  }
  return;
}

