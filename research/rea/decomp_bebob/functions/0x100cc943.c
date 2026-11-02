// rea decompile_all
// name: CMFCListCtrl::Sort
// address: 0x100cc943
// body: available
// range: 0x100cc943-0x100cc9b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCListCtrl::Sort(int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCListCtrl::Sort(CMFCListCtrl *this,int param_1,int param_2,int param_3)

{
  AFX_MODULE_STATE *pAVar1;
  CMFCHeaderCtrl *this_00;
  UINT *pUVar2;
  UINT *pUVar3;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x100cc94f;
  iStack_24 = 0x100cc956;
  pAVar1 = AfxGetModuleState();
  iStack_24 = 0x100cc95e;
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  iStack_24 = param_3;
  local_8 = 0;
  iStack_28 = param_2;
  iStack_2c = param_1;
  pUVar2 = &uStack_30;
  uStack_30 = 0x100cc977;
  this_00 = (CMFCHeaderCtrl *)(**(code **)(*(int *)this + 0x164))();
  pUVar2[-1] = 0x100cc97e;
  CMFCHeaderCtrl::SetSortColumn(this_00,*pUVar2,pUVar2[1],pUVar2[2]);
  pUVar2[2] = (UINT)CompareProc;
  pUVar2[1] = (UINT)this;
  *pUVar2 = 0x1030;
  pUVar2[-1] = *(undefined4 *)(this + 0x20);
  *(int *)(this + 0x124) = param_1;
  *(int *)(this + 0x128) = param_2;
  pUVar3 = pUVar2 + -2;
  pUVar2[-2] = 0x100cc99e;
  SendMessageW((HWND)pUVar2[-1],*pUVar2,pUVar2[1],pUVar2[2]);
  local_8 = 0xffffffff;
  *(undefined4 *)((int)pUVar3 + -4) = 0x100cc9aa;
  CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&param_3 + 3));
  *(undefined4 *)((int)pUVar3 + -4) = 0x100cc9af;
  return;
}

