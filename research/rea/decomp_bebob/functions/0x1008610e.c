// rea decompile_all
// name: CMFCToolBarButton::IsLastInGroup
// address: 0x1008610e
// body: available
// range: 0x1008610e-0x10086193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarButton::IsLastInGroup(void)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarButton::IsLastInGroup(CMFCToolBarButton *this)

{
  bool bVar1;
  CObject *this_00;
  int iVar2;
  CMFCToolBarButton *pCVar3;
  int iVar4;
  
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,
                               *(CObject **)(this + 0x6c));
  if ((this_00 != (CObject *)0x0) &&
     (pCVar3 = *(CMFCToolBarButton **)(this_00 + 0xca0), this != pCVar3)) {
    bVar1 = true;
    iVar2 = FUN_100268b9((int)this_00);
    if (pCVar3 != (CMFCToolBarButton *)0x0) {
      iVar2 = iVar2 + -1;
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      pCVar3 = (CMFCToolBarButton *)FUN_100261ef(this_00,iVar2);
      if (pCVar3 == this) {
        if ((!bVar1) && (*(int *)(pCVar3 + 0x10) == 0)) {
          return 0;
        }
        return 1;
      }
      if (*(int *)(pCVar3 + 0x50) != 0) {
        if ((((byte)pCVar3[0x24] & 1) == 0) &&
           (iVar4 = (**(code **)(*(int *)pCVar3 + 0x38))(), iVar4 == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
  }
  return 0;
}

