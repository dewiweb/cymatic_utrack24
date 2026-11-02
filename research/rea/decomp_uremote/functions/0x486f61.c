// rea decompile_all
// name: FUN_00486f61
// address: 0x486f61
// body: available
// range: 0x486f61-0x48708f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00486f61(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int unaff_EDI;
  int local_24;
  int *local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  
  iVar1 = *(int *)(unaff_EDI + 0x118);
  local_10 = 0;
  iVar2 = *(int *)(unaff_EDI + 0x184);
  if (0 < *(int *)(unaff_EDI + 0x24)) {
    piVar8 = (int *)(*(int *)(unaff_EDI + 0xc4) + 0xc);
    local_18 = (int *)(iVar2 + 8);
    do {
      iVar6 = (piVar8[6] * *piVar8) / *(int *)(unaff_EDI + 0x118);
      puVar3 = *(undefined4 **)(local_10 * 4 + *(int *)(iVar2 + 0x38));
      puVar9 = *(undefined4 **)(local_10 * 4 + *(int *)(iVar2 + 0x3c));
      iVar4 = *local_18;
      local_14 = (iVar1 + 2) * iVar6;
      if (0 < local_14) {
        puVar7 = puVar9;
        do {
          uVar5 = *(undefined4 *)((iVar4 - (int)puVar9) + (int)puVar7);
          *puVar7 = uVar5;
          *(undefined4 *)(((int)puVar3 - (int)puVar9) + (int)puVar7) = uVar5;
          puVar7 = puVar7 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      if (0 < iVar6 * 2) {
        puVar7 = (undefined4 *)(iVar4 + (iVar1 + -2) * iVar6 * 4);
        local_24 = iVar6 * 2;
        local_c = puVar9 + iVar6 * iVar1;
        do {
          *(undefined4 *)(((int)puVar9 - iVar4) + (int)puVar7) =
               *(undefined4 *)((int)local_c + (iVar4 - (int)puVar9));
          uVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          local_24 = local_24 + -1;
          *local_c = uVar5;
          local_c = local_c + 1;
        } while (local_24 != 0);
      }
      if (0 < iVar6) {
        puVar9 = puVar3 + -iVar6;
        do {
          *puVar9 = *puVar3;
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + 1;
      piVar8 = piVar8 + 0x15;
    } while (local_10 < *(int *)(unaff_EDI + 0x24));
  }
  return;
}

