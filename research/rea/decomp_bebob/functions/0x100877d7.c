// rea decompile_all
// name: CMFCToolBarButton::CMFCToolBarButton
// address: 0x100877d7
// body: available
// range: 0x100877d7-0x100878bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarButton::CMFCToolBarButton(unsigned int,int,wchar_t const
   *,int,int)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarButton * __thiscall
CMFCToolBarButton::CMFCToolBarButton
          (CMFCToolBarButton *this,uint param_1,int param_2,wchar_t *param_3,int param_4,int param_5
          )

{
  undefined **ppuVar1;
  CCommandManager *pCVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined ***)this = vftable;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x2c,(int *)ppuVar1);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x30,(int *)ppuVar1);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  Initialize(this);
  *(int *)(this + 0x3c) = param_5;
  *(uint *)(this + 0x20) = param_1;
  *(int *)(this + 4) = param_4;
  SetImage(this,param_2);
  if (param_3 == (wchar_t *)0x0) {
    param_3 = (wchar_t *)&PTR_1011d390;
  }
  FUN_100022b0(this + 0x2c,param_3);
  uVar4 = *(uint *)(this + 0x20);
  if ((uVar4 != 0) && (*(int *)(this + 0x3c) == 0)) {
    if (*(int *)(this + 4) == 0) {
      iVar3 = *(int *)(this + 0x34);
      iVar5 = 0;
      if (iVar3 == -1) {
        pCVar2 = (CCommandManager *)FUN_10037712();
        iVar3 = CCommandManager::GetCmdImage(pCVar2,uVar4,iVar5);
        *(int *)(this + 0x34) = iVar3;
        return this;
      }
    }
    else {
      iVar3 = *(int *)(this + 0x38);
      iVar5 = 1;
      if (iVar3 == -1) {
        pCVar2 = (CCommandManager *)FUN_10037712();
        iVar3 = CCommandManager::GetCmdImage(pCVar2,uVar4,iVar5);
        *(int *)(this + 0x38) = iVar3;
        return this;
      }
    }
    pCVar2 = (CCommandManager *)FUN_10037712();
    CCommandManager::SetCmdImage(pCVar2,uVar4,iVar3,iVar5);
  }
  return this;
}

