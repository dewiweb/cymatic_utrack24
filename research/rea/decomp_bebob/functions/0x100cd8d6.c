// rea decompile_all
// name: CShellManager::GetParentItem
// address: 0x100cd8d6
// body: available
// range: 0x100cd8d6-0x100cd958 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cd906 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CShellManager::GetParentItem(struct _ITEMIDLIST const *,struct
   _ITEMIDLIST * &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CShellManager::GetParentItem(CShellManager *this,_ITEMIDLIST *param_1,_ITEMIDLIST **param_2)

{
  uint uVar1;
  int iVar2;
  HRESULT HVar3;
  _ITEMIDLIST *p_Var4;
  uint uVar5;
  uint extraout_EDX;
  int iVar6;
  
  uVar1 = GetItemCount(this,param_1);
  uVar5 = 0;
  if (uVar1 == 0) {
    iVar2 = -1;
  }
  else if (uVar1 == 1) {
    HVar3 = SHGetSpecialFolderLocation((HWND)0x0,0,param_2);
    if (HVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 - 1;
    p_Var4 = param_1;
    for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
      p_Var4 = GetNextItem(this,p_Var4);
      uVar5 = extraout_EDX;
    }
    p_Var4 = CreateItem(this,(uVar5 & 0xffff) + 2);
    *param_2 = p_Var4;
    FID_conflict__memcpy(p_Var4,param_1,uVar5 & 0xffff);
  }
  return iVar2;
}

