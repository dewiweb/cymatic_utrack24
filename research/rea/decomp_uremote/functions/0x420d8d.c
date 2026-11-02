// rea decompile_all
// name: FUN_00420d8d
// address: 0x420d8d
// body: available
// range: 0x420d8d-0x4210c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00420d8d(uint param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint extraout_ECX;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint local_38;
  uint local_30;
  uint local_28;
  undefined1 *local_1c;
  undefined1 *local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  uVar8 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  iVar6 = param_2;
  uVar13 = param_1;
  uVar12 = param_1;
  local_30 = uVar8;
  if (0xf < uVar8) goto LAB_00420dc2;
LAB_00420dbd:
  iVar6 = FUN_0040d9d1();
  uVar8 = extraout_ECX;
  uVar12 = uVar13;
LAB_00420dc2:
  uVar13 = uVar12;
  if (*(uint *)(iVar6 + 4) < uVar8 + uVar12) goto code_r0x00420dcc;
  goto LAB_00420ddc;
code_r0x00420dcc:
  if (*(int *)(iVar6 + 8) < 1) {
    uVar8 = *(int *)(iVar6 + 4) - uVar12;
    local_30 = uVar8;
LAB_00420ddc:
    if (((*(int *)(iVar6 + 8) < 2) || ((*(byte *)(uVar12 + 7) & 1) == 0)) &&
       (uVar10 = (uint)(ushort)(CONCAT11(*(undefined1 *)(uVar12 + 6),*(byte *)(uVar12 + 7)) >> 1),
       uVar10 * 8 + 0x10 <= uVar8)) {
      if (1 < *(int *)(iVar6 + 8)) {
        uVar3 = CONCAT11(*(undefined1 *)(uVar12 + 8),*(undefined1 *)(uVar12 + 9));
        uVar4 = CONCAT11(*(undefined1 *)(uVar12 + 0xc),*(undefined1 *)(uVar12 + 0xd));
        if (((((uVar4 | uVar3) & 1) != 0) || (uVar8 = (uint)(uVar3 >> 1), uVar10 < uVar8)) ||
           ((uVar8 * 2 < uVar10 ||
            (((uVar4 >> 1) + uVar8 != uVar10 || (uVar8 != 1 << (*(byte *)(uVar12 + 0xb) & 0x1f))))))
           ) goto LAB_00420dbd;
      }
      iVar5 = uVar10 * 2;
      iVar6 = uVar12 + 0x10 + uVar10 * 2;
      uVar13 = iVar5 + iVar6;
      puVar1 = (undefined1 *)(iVar5 + uVar13);
      if ((*(int *)(param_2 + 8) < 2) ||
         (puVar11 = (undefined1 *)(iVar5 + -2 + uVar12 + 0xe), CONCAT11(*puVar11,puVar11[1]) == -1))
      {
        local_38 = 0;
        local_28 = 0;
        local_8 = 0;
        if (uVar10 == 0) {
          return local_c;
        }
        local_1c = (undefined1 *)(uVar13 - 2);
        iVar2 = uVar13 - iVar6;
        puVar11 = (undefined1 *)(uVar12 + 0xc);
        puVar7 = (undefined1 *)(iVar6 + -1);
        local_10 = puVar1;
        while( true ) {
          local_1c = local_1c + 2;
          puVar9 = puVar7 + 2;
          puVar11 = puVar11 + 2;
          uVar8 = (uint)CONCAT11(puVar7[1],*puVar9);
          uVar13 = (uint)CONCAT11(*puVar11,puVar9[(uVar12 + 0xe) - iVar6]);
          uVar14 = (uint)CONCAT11(*local_10,puVar9[(int)puVar1 - iVar6]);
          if (uVar13 < uVar8) break;
          if ((uVar8 <= local_28) && (local_8 != 0)) {
            if (0 < *(int *)(param_2 + 8)) break;
            if ((uVar8 < local_38) || (uVar13 < local_28)) {
              local_c = local_c | 1;
            }
            else {
              local_c = local_c | 2;
            }
          }
          if (uVar14 != 0) {
            if (uVar14 == 0xffff) {
              if ((((1 < *(int *)(param_2 + 8)) || (local_8 != uVar10 - 1)) || (uVar8 != 0xffff)) ||
                 (uVar13 != 0xffff)) break;
            }
            else {
              puVar7 = local_10 + uVar14;
              if (*(int *)(param_2 + 8) < 1) {
                if ((((local_8 != uVar10 - 1) || (uVar8 != 0xffff)) || (uVar13 != 0xffff)) &&
                   ((puVar7 < puVar1 + iVar5 ||
                    (*(undefined1 **)(param_2 + 4) < puVar7 + (uVar13 - uVar8) * 2 + 2)))) break;
              }
              else if ((puVar7 < puVar1 + iVar5) ||
                      ((undefined1 *)(local_30 + param_1) < puVar7 + (uVar13 - uVar8) * 2 + 2))
              break;
              if ((0 < *(int *)(param_2 + 8)) && (uVar8 < uVar13)) {
                puVar7 = puVar7 + -1;
                local_28 = uVar8;
                do {
                  puVar15 = puVar7 + 1;
                  puVar7 = puVar7 + 2;
                  if ((CONCAT11(*puVar15,*puVar7) != 0) &&
                     (*(uint *)(param_2 + 0x50) <=
                      (uint)(ushort)(CONCAT11(*puVar15,*puVar7) + CONCAT11(*local_1c,puVar9[iVar2]))
                     )) goto LAB_00420dbd;
                  local_28 = local_28 + 1;
                } while (local_28 < uVar13);
              }
            }
          }
          local_8 = local_8 + 1;
          puVar7 = puVar9;
          local_38 = uVar8;
          local_28 = uVar13;
          local_10 = local_10 + 2;
          if (uVar10 <= local_8) {
            return local_c;
          }
        }
      }
    }
  }
  goto LAB_00420dbd;
}

