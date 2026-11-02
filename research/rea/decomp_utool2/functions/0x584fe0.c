// rea decompile_all
// name: FUN_00584fe0
// address: 0x584fe0
// body: available
// range: 0x584fe0-0x5850c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00584fe0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  
  iVar8 = 0;
  if (0 < param_3) {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 0x10);
    iVar9 = iVar8;
    do {
      iVar8 = *(int *)(in_EDX + iVar9 * 4);
      uVar3 = *(uint *)(iVar8 + 0x10);
      iVar8 = *(int *)(iVar8 + 0x14);
      if ((iVar8 <= iVar1) && ((iVar8 < iVar1 || (uVar3 <= uVar2)))) {
        if ((iVar1 < iVar8) || ((iVar1 <= iVar8 && (uVar2 <= uVar3)))) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_005850b6;
      }
      iVar10 = iVar9 + param_3 >> 1;
      iVar4 = *(int *)(in_EDX + iVar10 * 4);
      if (iVar10 == iVar9) {
        iVar8 = *(int *)(iVar4 + 0x14);
        if ((iVar8 <= iVar1) && ((iVar8 < iVar1 || (*(uint *)(iVar4 + 0x10) <= uVar2)))) {
          if ((iVar1 < iVar8) || ((iVar1 <= iVar8 && (uVar2 <= *(uint *)(iVar4 + 0x10))))) {
            bVar7 = 0;
          }
          else {
            bVar7 = 1;
          }
          if ((int)-(uint)bVar7 < 0) {
            return iVar9;
          }
        }
LAB_005850b6:
        return iVar9 + 1;
      }
      iVar5 = *(int *)(iVar4 + 0x14);
      iVar8 = iVar10;
      if ((iVar5 <= iVar1) && ((iVar5 < iVar1 || (*(uint *)(iVar4 + 0x10) <= uVar2)))) {
        if ((iVar1 < iVar5) || ((iVar1 <= iVar5 && (uVar2 <= *(uint *)(iVar4 + 0x10))))) {
          bVar7 = 0;
        }
        else {
          bVar7 = 1;
        }
        if ((int)-(uint)bVar7 < 0) {
          iVar8 = iVar9;
          param_3 = iVar10;
        }
      }
      iVar9 = iVar8;
    } while (iVar8 < param_3);
  }
  return iVar8;
}

