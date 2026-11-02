// rea decompile_all
// name: CMDIClientAreaWnd::CreateTabGroup
// address: 0x1006513f
// body: available
// range: 0x1006513f-0x1006528b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CMFCTabCtrl * __thiscall CMDIClientAreaWnd::CreateTabGroup(class
   CMFCTabCtrl *)
   
   Library: Visual Studio 2010 Release */

CMFCTabCtrl * __thiscall
CMDIClientAreaWnd::CreateTabGroup(CMDIClientAreaWnd *this,CMFCTabCtrl *param_1)

{
  CMFCTabCtrl *pCVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  CImageList *pCVar4;
  int *piVar5;
  CMDIClientAreaWnd *this_00;
  CImageList *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1006514b;
  if (param_1 == (CMFCTabCtrl *)0x0) {
    pCVar1 = FUN_1000858a(0x2804);
    local_8 = 0;
    if (pCVar1 == (CMFCTabCtrl *)0x0) {
      param_1 = (CMFCTabCtrl *)0x0;
    }
    else {
      param_1 = (CMFCTabCtrl *)CMFCTabCtrl::CMFCTabCtrl(pCVar1);
    }
    local_8 = 0xffffffff;
  }
  if (*(int *)(this + 0x28b4) != 0) {
    FUN_1009410d(param_1,1);
  }
  pCVar2 = (CFrameWnd *)this;
  if (*(int *)(this + 0x2908) == 0) {
    pCVar2 = CWnd::GetParentFrame((CWnd *)this);
  }
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  iVar3 = CMFCTabCtrl::Create(param_1,*(Style *)(this + 0x28a8),&local_24,(CWnd *)pCVar2,0xffffffff,
                              *(Location *)(this + 0x28a4),*(int *)(this + 0x28b0));
  if (iVar3 == 0) {
    if (param_1 != (CMFCTabCtrl *)0x0) {
      (**(code **)(*(int *)param_1 + 4))(1);
    }
  }
  else {
    ApplyParams(this,param_1);
    if (*(int *)(this + 0x2878) == 0) {
      CWnd::ShowWindow((CWnd *)param_1,0);
    }
    if (*(int *)(this + 0x2908) == 0) {
      this_00 = this + 0x2880;
    }
    else {
      local_28 = (CImageList *)0x0;
      iVar3 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                        ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0x28ec),(uint)param_1,
                         (int *)&local_28);
      if ((iVar3 == 0) || (local_28 == (CImageList *)0x0)) {
        local_28 = FUN_1000858a(8);
        local_8 = 1;
        if (local_28 == (CImageList *)0x0) {
          pCVar4 = (CImageList *)0x0;
        }
        else {
          pCVar4 = (CImageList *)CImageList::CImageList(local_28);
        }
        local_8 = 0xffffffff;
        local_28 = pCVar4;
        piVar5 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                           ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0x28ec),(uint)param_1
                           );
        *piVar5 = (int)pCVar4;
        this_00 = (CMDIClientAreaWnd *)local_28;
      }
      else {
        CImageList::DeleteImageList(local_28);
        this_00 = (CMDIClientAreaWnd *)local_28;
      }
    }
    CImageList::Create((CImageList *)this_00,DAT_10166bac,DAT_10166bb0,0x21,0,1);
  }
  pCVar1 = (CMFCTabCtrl *)FUN_100f90cf();
  return pCVar1;
}

