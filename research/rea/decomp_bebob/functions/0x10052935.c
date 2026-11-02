// rea decompile_all
// name: CMFCButton::SelectFont
// address: 0x10052935
// body: available
// range: 0x10052935-0x10052984 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005297c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CFont * __thiscall CMFCButton::SelectFont(class CDC *)
   
   Library: Visual Studio 2010 Release */

CFont * __thiscall CMFCButton::SelectFont(CMFCButton *this,CDC *param_1)

{
  CMFCButton *pCVar1;
  DWORD DVar2;
  CFont *pCVar3;
  CGdiObject *pCVar4;
  
  pCVar1 = this + 0x73c;
  if (*(HGDIOBJ *)pCVar1 != (HGDIOBJ)0x0) {
    DVar2 = GetObjectType(*(HGDIOBJ *)pCVar1);
    if (DVar2 != 6) {
      *(undefined4 *)pCVar1 = 0;
    }
  }
  if (*(void **)pCVar1 == (void *)0x0) {
    pCVar3 = (CFont *)(**(code **)(*(int *)param_1 + 0x24))(0x11);
  }
  else {
    pCVar4 = CGdiObject::FromHandle(*(void **)pCVar1);
    pCVar3 = (CFont *)(**(code **)(*(int *)param_1 + 0x28))(pCVar4);
  }
  if (pCVar3 == (CFont *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  return pCVar3;
}

