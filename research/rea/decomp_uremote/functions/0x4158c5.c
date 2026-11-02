// rea decompile_all
// name: FUN_004158c5
// address: 0x4158c5
// body: available
// range: 0x4158c5-0x415933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0041591b) */

int FUN_004158c5(uint param_1,uint *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = *(int *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar7 = *param_2 + 1;
  iVar6 = 0;
  uVar9 = 0;
  param_1 = uVar4;
  if (uVar4 != 0) {
    do {
      uVar8 = param_1 + uVar9 >> 1;
      uVar5 = *(uint *)(iVar3 + uVar8 * 8);
      if (uVar7 == uVar5) {
        uVar2 = *(ushort *)(iVar3 + 4 + uVar8 * 8);
        goto LAB_00415915;
      }
      if (uVar5 <= uVar7) {
        uVar9 = uVar8 + 1;
        uVar8 = param_1;
      }
      param_1 = uVar8;
    } while (uVar9 < param_1);
  }
  uVar7 = 0;
  if (uVar9 < uVar4) {
    puVar1 = (uint *)(iVar3 + uVar9 * 8);
    uVar7 = *puVar1;
    uVar2 = (ushort)puVar1[1];
LAB_00415915:
    iVar6 = uVar2 + 1;
  }
  *param_2 = uVar7;
  return iVar6;
}

