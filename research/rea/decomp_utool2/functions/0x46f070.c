// rea decompile_all
// name: FUN_0046f070
// address: 0x46f070
// body: available
// range: 0x46f070-0x46f15b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0046f070(int *param_1)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined1 local_5;
  
  uVar3 = in_EAX & 0xffffff00;
  local_5 = 0;
  if ((param_1[2] < 1) || (param_1[3] < 1)) {
    in_ECX[2] = 0;
    return uVar3;
  }
  uVar8 = in_ECX[2] - 1;
  if (-1 < (int)uVar8) {
    iVar4 = uVar8 * 0x10;
    do {
      iVar1 = *param_1;
      piVar9 = (int *)(*in_ECX + iVar4);
      iVar2 = *piVar9;
      iVar5 = iVar2;
      if (iVar2 < iVar1) {
        iVar5 = iVar1;
      }
      iVar6 = piVar9[2] + iVar2;
      if (param_1[2] + iVar1 < piVar9[2] + iVar2) {
        iVar6 = param_1[2] + iVar1;
      }
      piVar9[2] = iVar6 - iVar5;
      if (iVar6 - iVar5 < 1) {
LAB_0046f11e:
        if (uVar8 < (uint)in_ECX[2]) {
          FUN_00472850(uVar8);
        }
      }
      else {
        iVar1 = piVar9[1];
        iVar2 = param_1[1];
        iVar6 = iVar1;
        if (iVar1 < iVar2) {
          iVar6 = iVar2;
        }
        iVar7 = piVar9[3] + iVar1;
        if (param_1[3] + iVar2 < piVar9[3] + iVar1) {
          iVar7 = param_1[3] + iVar2;
        }
        piVar9[3] = iVar7 - iVar6;
        if (iVar7 - iVar6 < 1) goto LAB_0046f11e;
        *piVar9 = iVar5;
        piVar9[1] = iVar6;
        local_5 = 1;
      }
      iVar4 = iVar4 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
    uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),local_5);
  }
  return uVar3;
}

