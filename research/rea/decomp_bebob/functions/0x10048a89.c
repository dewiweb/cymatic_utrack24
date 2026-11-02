// rea decompile_all
// name: CMFCPropertyGridCtrl::GetTotalItems
// address: 0x10048a89
// body: available
// range: 0x10048a89-0x10048ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCPropertyGridCtrl::GetTotalItems(int)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPropertyGridCtrl::GetTotalItems(CMFCPropertyGridCtrl *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(this + 0x2c4) == 0) {
    iVar3 = *(int *)(this + 0x364);
    while (iVar3 != 0) {
      iVar3 = CMFCPropertyGridProperty::GetExpandedSubItems
                        (*(CMFCPropertyGridProperty **)(iVar3 + 8),param_1);
      iVar4 = iVar4 + 1 + iVar3;
      iVar3 = extraout_EDX;
    }
  }
  else if (param_1 == 0) {
    puVar2 = *(undefined4 **)(this + 0x380);
    while (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      if (*(int *)(*piVar1 + 0x78) != 0) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  else {
    iVar4 = *(int *)(this + 0x388);
  }
  return iVar4;
}

