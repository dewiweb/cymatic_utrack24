// rea decompile_all
// name: FUN_00422eef
// address: 0x422eef
// body: available
// range: 0x422eef-0x422f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00422eef(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_004228d4();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    uVar9 = 0;
    if (uVar1 != 0) {
      iVar6 = iVar7 + 9;
      iVar4 = iVar7 + 8;
      iVar7 = iVar7 + 7;
      do {
        puVar8 = (undefined1 *)(iVar7 + 3);
        puVar3 = (undefined1 *)(iVar4 + 3);
        puVar5 = (undefined1 *)(iVar6 + 3);
        iVar7 = iVar7 + 0xb;
        iVar4 = iVar4 + 0xb;
        iVar6 = iVar6 + 0xb;
        *(uint *)(iVar2 + uVar9 * 4) = (uint)CONCAT21(CONCAT11(*puVar8,*puVar3),*puVar5);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
    }
    *(undefined4 *)(iVar2 + uVar9 * 4) = 0;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

