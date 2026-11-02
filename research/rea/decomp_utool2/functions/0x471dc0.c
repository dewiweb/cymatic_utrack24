// rea decompile_all
// name: FUN_00471dc0
// address: 0x471dc0
// body: available
// range: 0x471dc0-0x471e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00471dc0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *in_ECX;
  iVar6 = *param_1;
  if (iVar7 == iVar6) {
    if (in_ECX[2] + iVar7 == param_1[2] + *param_1) {
      iVar6 = param_1[1];
      iVar1 = param_1[3] + iVar6;
      iVar4 = in_ECX[1];
      if ((iVar4 <= iVar1) && (iVar2 = in_ECX[3] + iVar4, iVar6 <= iVar2)) {
        if (iVar6 < iVar4) {
          iVar4 = iVar6;
        }
        in_ECX[1] = iVar4;
        if (iVar2 < iVar1) {
          iVar2 = iVar1;
        }
        in_ECX[3] = iVar2 - iVar4;
        return CONCAT31((int3)((uint)(iVar2 - iVar4) >> 8),1);
      }
    }
    iVar6 = *param_1;
  }
  uVar3 = in_ECX[1];
  if ((uVar3 == param_1[1]) &&
     (uVar5 = in_ECX[3] + uVar3, uVar3 = param_1[3] + param_1[1], uVar5 == uVar3)) {
    uVar3 = param_1[2];
    uVar5 = uVar3 + iVar6;
    if ((iVar7 <= (int)uVar5) && (uVar3 = in_ECX[2] + iVar7, iVar6 <= (int)uVar3)) {
      if (iVar6 < iVar7) {
        iVar7 = iVar6;
      }
      *in_ECX = iVar7;
      if ((int)uVar3 < (int)uVar5) {
        uVar3 = uVar5;
      }
      in_ECX[2] = uVar3 - iVar7;
      return CONCAT31((int3)(uVar3 - iVar7 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

