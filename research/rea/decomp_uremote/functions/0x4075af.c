// rea decompile_all
// name: FUN_004075af
// address: 0x4075af
// body: available
// range: 0x4075af-0x407626 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040760b) */

short FUN_004075af(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar5 = *param_2 + 1;
  uVar8 = 0;
  uVar9 = uVar3;
  if (uVar3 != 0) {
    do {
      uVar7 = uVar9 + uVar8 >> 1;
      uVar4 = *(uint *)(iVar2 + uVar7 * 8);
      if (uVar5 == uVar4) {
        sVar6 = *(short *)(iVar2 + 4 + uVar7 * 8);
        goto LAB_00407601;
      }
      if (uVar4 <= uVar5) {
        uVar8 = uVar7 + 1;
        uVar7 = uVar9;
      }
      uVar9 = uVar7;
    } while (uVar8 < uVar7);
  }
  sVar6 = 0;
  uVar5 = 0;
  if (uVar8 < uVar3) {
    puVar1 = (uint *)(iVar2 + uVar8 * 8);
    uVar5 = *puVar1;
    sVar6 = (short)puVar1[1];
LAB_00407601:
    sVar6 = sVar6 + 1;
  }
  *param_2 = uVar5;
  return sVar6;
}

