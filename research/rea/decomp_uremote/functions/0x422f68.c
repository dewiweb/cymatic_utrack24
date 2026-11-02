// rea decompile_all
// name: FUN_00422f68
// address: 0x422f68
// body: available
// range: 0x422f68-0x423095 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00422f68(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int local_18;
  uint *local_10;
  
  local_18 = *(int *)(param_1 + 0x18);
  iVar12 = *(int *)(param_1 + 0x10);
  iVar8 = FUN_004228d4();
  if (iVar8 == 0) {
    local_10 = *(uint **)(param_1 + 0x20);
    if (local_18 != 0) {
      puVar17 = (undefined1 *)(iVar12 + 9);
      puVar11 = (undefined1 *)(iVar12 + 8);
      puVar15 = (undefined1 *)(iVar12 + 7);
      puVar13 = (undefined1 *)(iVar12 + 6);
      do {
        uVar1 = puVar15[3];
        uVar2 = puVar11[3];
        uVar3 = puVar17[3];
        puVar18 = puVar17 + 7;
        puVar14 = puVar13 + 7;
        puVar13 = puVar13 + 0xb;
        puVar16 = puVar15 + 7;
        puVar10 = puVar11 + 7;
        puVar17 = puVar17 + 0xb;
        puVar11 = puVar11 + 0xb;
        puVar15 = puVar15 + 0xb;
        uVar4 = *puVar13;
        uVar5 = *puVar15;
        uVar6 = *puVar11;
        uVar7 = *puVar17;
        if (((CONCAT31(CONCAT21(CONCAT11(*puVar14,*puVar16),*puVar10),*puVar18) != 0) &&
            (iVar12 = FUN_00422c48(param_3), iVar12 != 0)) ||
           ((CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7) != 0 &&
            (iVar12 = FUN_00422cc4(param_3), iVar12 != 0)))) {
          *local_10 = (uint)CONCAT21(CONCAT11(uVar1,uVar2),uVar3);
          local_10 = local_10 + 1;
        }
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    *local_10 = 0;
    uVar9 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

