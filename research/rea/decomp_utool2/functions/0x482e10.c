// rea decompile_all
// name: FUN_00482e10
// address: 0x482e10
// body: available
// range: 0x482e10-0x482eba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482e10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  undefined1 *_Dst;
  int iVar8;
  int iVar9;
  size_t sVar10;
  undefined1 uStack_11;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(in_ECX + 8);
  for (piVar6 = *(int **)(in_ECX + 8); piVar6 != (int *)(iVar1 * 0x10 + iVar2); piVar6 = piVar6 + 4)
  {
    iVar3 = *piVar6;
    iVar9 = piVar6[1];
    _Size = piVar6[2];
    iVar7 = piVar6[3] + iVar9;
    for (; iVar9 < iVar7; iVar9 = iVar9 + 1) {
      piVar4 = (int *)*param_1;
      iVar8 = piVar4[2] * iVar9 + *piVar4;
      param_1[1] = iVar8;
      iVar5 = piVar4[3];
      _Dst = (undefined1 *)(iVar5 * iVar3 + iVar8);
      if (iVar5 == 1) {
        _memset(_Dst,(uint)param_1[2] >> 0x18,_Size);
      }
      else {
        uStack_11 = (undefined1)((uint)param_1[2] >> 0x18);
        sVar10 = _Size;
        do {
          *_Dst = uStack_11;
          sVar10 = sVar10 - 1;
          _Dst = _Dst + iVar5;
        } while (0 < (int)sVar10);
      }
    }
  }
  return;
}

