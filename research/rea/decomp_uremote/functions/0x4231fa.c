// rea decompile_all
// name: FUN_004231fa
// address: 0x4231fa
// body: available
// range: 0x4231fa-0x4234c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004231fa(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  uint3 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint local_10;
  undefined1 *local_c;
  uint local_8;
  
  iVar8 = *(int *)(param_1 + 0x10);
  puVar7 = (undefined1 *)FUN_00422d4b(param_3);
  if (puVar7 == (undefined1 *)0x0) {
    return 0;
  }
  iVar14 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
  iVar9 = CONCAT31(CONCAT21(CONCAT11(puVar7[4],puVar7[5]),puVar7[6]),puVar7[7]);
  if (iVar14 == 0) {
    if (iVar9 != 0) {
LAB_00423309:
      iVar8 = FUN_00423158(param_2);
      return iVar8;
    }
LAB_0042332a:
    iVar8 = 0;
  }
  else {
    if (iVar9 != 0) {
      puVar7 = (undefined1 *)(iVar8 + iVar14);
      puVar12 = (undefined1 *)(iVar8 + 4 + iVar9);
      uVar16 = CONCAT31(CONCAT21(CONCAT11(puVar12[-4],puVar12[-3]),puVar12[-2]),puVar12[-1]);
      iVar8 = FUN_00423096();
      uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
      if (uVar16 != 0) {
        if (iVar8 == 0) goto LAB_00423309;
        iVar8 = FUN_004228d4();
        if (iVar8 == 0) {
          iVar8 = *(int *)(param_1 + 0x20);
          uVar11 = (uint)CONCAT21(CONCAT11(puVar7[4],puVar7[5]),puVar7[6]);
          local_c = (undefined1 *)(uint)(byte)puVar7[7];
          puVar7 = puVar7 + 8;
          uVar6 = CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]);
          local_8 = 1;
          param_1 = 1;
          iVar9 = 0;
          do {
            uVar15 = (uint)uVar6;
            while ((int)local_c + uVar11 < uVar15) {
              local_10 = 0;
              do {
                iVar14 = iVar9;
                *(uint *)(iVar8 + iVar14 * 4) = local_10 + uVar11;
                iVar9 = iVar14 + 1;
                local_10 = local_10 + 1;
              } while (local_10 <= local_c);
              local_8 = local_8 + 1;
              if (uVar10 < local_8) {
                if (uVar16 < param_1) goto LAB_00423465;
                *(uint *)(iVar8 + iVar9 * 4) = uVar15;
                iVar9 = iVar14 + 2;
                if (param_1 < uVar16) {
                  local_c = puVar12 + 4;
                  puVar7 = puVar12 + 3;
                  puVar12 = puVar12 + 2;
                  param_1 = uVar16 - param_1;
                  do {
                    puVar1 = local_c + 3;
                    local_c = local_c + 5;
                    *(uint *)(iVar8 + iVar9 * 4) =
                         (uint)CONCAT21(CONCAT11(puVar12[3],puVar7[3]),*puVar1);
                    iVar9 = iVar9 + 1;
                    puVar12 = puVar12 + 5;
                    puVar7 = puVar7 + 5;
                    param_1 = param_1 + -1;
                  } while (param_1 != 0);
                }
                goto LAB_004234bd;
              }
              pbVar13 = puVar7 + 3;
              uVar11 = (uint)CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]);
              puVar7 = puVar7 + 4;
              local_c = (undefined1 *)(uint)*pbVar13;
            }
            if (uVar15 < uVar11) {
              *(uint *)(iVar8 + iVar9 * 4) = uVar15;
              iVar9 = iVar9 + 1;
            }
            param_1 = param_1 + 1;
            if (uVar16 < param_1) {
LAB_00423465:
              if (local_8 <= uVar10) {
                uVar16 = 0;
                do {
                  *(uint *)(iVar8 + iVar9 * 4) = uVar16 + uVar11;
                  iVar9 = iVar9 + 1;
                  uVar16 = uVar16 + 1;
                } while (uVar16 <= local_c);
                if (local_8 < uVar10) {
                  param_1 = uVar10 - local_8;
                  do {
                    uVar2 = *puVar7;
                    uVar3 = puVar7[1];
                    uVar4 = puVar7[2];
                    bVar5 = puVar7[3];
                    puVar7 = puVar7 + 4;
                    uVar10 = 0;
                    do {
                      *(uint *)(iVar8 + iVar9 * 4) = uVar10 + CONCAT21(CONCAT11(uVar2,uVar3),uVar4);
                      iVar9 = iVar9 + 1;
                      uVar10 = uVar10 + 1;
                    } while (uVar10 <= bVar5);
                    param_1 = param_1 + -1;
                  } while (param_1 != 0);
                }
              }
LAB_004234bd:
              *(undefined4 *)(iVar8 + iVar9 * 4) = 0;
              return iVar8;
            }
            uVar6 = CONCAT21(CONCAT11(puVar12[5],puVar12[6]),puVar12[7]);
            puVar12 = puVar12 + 5;
          } while( true );
        }
        goto LAB_0042332a;
      }
    }
    iVar8 = FUN_004230d0(param_2);
  }
  return iVar8;
}

