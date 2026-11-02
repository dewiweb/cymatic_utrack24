// rea decompile_all
// name: CCheckListBox::CalcMinimumItemHeight
// address: 0x100e9cd6
// body: available
// range: 0x100e9cd6-0x100e9d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e9d00 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CCheckListBox::CalcMinimumItemHeight(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CCheckListBox::CalcMinimumItemHeight(CCheckListBox *this)

{
  CNoTrackObject *pCVar1;
  ulong uVar2;
  CFont *pCVar3;
  CPen *pCVar4;
  int iVar5;
  CClientDC local_64 [8];
  HDC local_5c;
  tagTEXTMETRICW local_50;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100e9ce2;
  pCVar1 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_10169dfc,(_func_CNoTrackObject_ptr *)&LAB_100e997a
                     );
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if (((byte)uVar2 & 0x50) == 0x50) {
    CClientDC::CClientDC(local_64,(CWnd *)this);
    local_8 = 0;
    pCVar3 = CWnd::GetFont((CWnd *)this);
    pCVar4 = CDC::SelectObject((CDC *)local_64,(CPen *)pCVar3);
    GetTextMetricsW(local_5c,&local_50);
    CDC::SelectObject((CDC *)local_64,pCVar4);
    *(LONG *)(this + 0x74) = local_50.tmHeight;
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_64);
  }
  iVar5 = FUN_100f90cf();
  return iVar5;
}

