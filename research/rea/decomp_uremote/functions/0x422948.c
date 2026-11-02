// rea decompile_all
// name: FUN_00422948
// address: 0x422948
// body: available
// range: 0x422948-0x422c2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00422948(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puVar11 = (undefined1 *)(param_1 + 7);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                            *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5));
  local_10 = (undefined1 *)(param_1 + 6);
  local_8 = (undefined1 *)(param_1 + 8);
  local_c = (undefined1 *)(param_1 + 9);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*local_10,*puVar11),*local_8),*local_c);
  if ((uVar8 <= (uint)(*(int *)(param_2 + 4) - param_1)) && (uVar4 * 0xb + 10 <= uVar8)) {
    local_20 = 0;
    local_24 = 1;
    if (uVar4 != 0) {
      do {
        uVar9 = (uint)CONCAT21(CONCAT11(puVar11[3],local_8[3]),local_c[3]);
        puVar6 = local_10 + 7;
        puVar2 = local_8 + 7;
        puVar3 = local_c + 7;
        puVar10 = puVar11 + 7;
        local_10 = local_10 + 0xb;
        local_8 = local_8 + 0xb;
        local_c = local_c + 0xb;
        puVar11 = puVar11 + 0xb;
        uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar6,*puVar10),*puVar2),*puVar3);
        uVar7 = CONCAT31(CONCAT21(CONCAT11(*local_10,*puVar11),*local_8),*local_c);
        if (((uVar8 <= uVar5) || (uVar8 <= uVar7)) || (uVar9 < local_24)) goto LAB_00422c21;
        local_24 = uVar9 + 1;
        if (uVar5 != 0) {
          local_1c = 0;
          puVar6 = (undefined1 *)(uVar5 + 4 + param_1);
          uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar6[-4],puVar6[-3]),puVar6[-2]),puVar6[-1]);
          if (*(undefined1 **)(param_2 + 4) < puVar6 + uVar5 * 4) goto LAB_00422c21;
          local_18 = (undefined1 *)0x0;
          if (uVar5 != 0) {
            do {
              uVar12 = (uint)CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]);
              uVar9 = (byte)puVar6[3] + uVar12;
              puVar6 = puVar6 + 4;
              if ((0x10ffff < uVar9) || (uVar12 < local_1c)) goto LAB_00422c21;
              local_1c = uVar9 + 1;
              local_18 = (undefined1 *)((int)local_18 + 1);
            } while (local_18 < uVar5);
          }
        }
        if (uVar7 != 0) {
          iVar1 = uVar7 + 4 + param_1;
          puVar6 = (undefined1 *)(iVar1 + -2);
          local_14 = (undefined1 *)(iVar1 + -1);
          local_30 = 0;
          local_18 = (undefined1 *)(iVar1 + -3);
          uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + -4),*local_18),*puVar6),
                           *local_14);
          if ((uint)(*(int *)(param_2 + 4) - iVar1) < uVar5 << 2) goto LAB_00422c21;
          local_1c = 0;
          if (uVar5 != 0) {
            do {
              puVar2 = local_18 + 3;
              puVar3 = local_14 + 3;
              local_18 = local_18 + 5;
              local_14 = local_14 + 5;
              uVar7 = (uint)CONCAT21(CONCAT11(*puVar2,puVar6[3]),*puVar3);
              puVar6 = puVar6 + 5;
              if (((0x10ffff < uVar7) || (uVar7 < local_30)) ||
                 ((local_30 = uVar7 + 1, 0 < *(int *)(param_2 + 8) &&
                  (*(uint *)(param_2 + 0x50) <= (uint)CONCAT11(*puVar6,*local_14)))))
              goto LAB_00422c21;
              local_1c = local_1c + 1;
            } while (local_1c < uVar5);
          }
        }
        local_20 = local_20 + 1;
      } while (local_20 < uVar4);
    }
    return 0;
  }
LAB_00422c21:
  do {
    FUN_0040d9d1();
  } while( true );
}

