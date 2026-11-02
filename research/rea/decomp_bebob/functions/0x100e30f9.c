// rea decompile_all
// name: COleDropTarget::XDropTarget::Drop
// address: 0x100e30f9
// body: available
// range: 0x100e30f9-0x100e320d inclusive
// range: 0x100e321c-0x100e3234 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleDropTarget::XDropTarget::Drop(struct IDataObject *,unsigned
   long,struct _POINTL,unsigned long *)
   
   Library: Visual Studio 2010 Release */

long COleDropTarget::XDropTarget::Drop
               (IDataObject *param_1,ulong param_2,_POINTL param_3,ulong *param_4)

{
  CWnd *This;
  ulong uVar1;
  void **ppvObject;
  void **ppvVar2;
  HRESULT HVar3;
  long lVar4;
  IDataObject *pIVar5;
  ulong *in_stack_00000018;
  IID local_38;
  AFX_MAINTAIN_STATE2 local_28 [8];
  tagPOINT local_20 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100e3105;
  pIVar5 = param_1 + -0xd;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_28,(AFX_MODULE_STATE *)param_1[-6].lpVtbl);
  if ((param_2 == 0) || (in_stack_00000018 == (ulong *)0x0)) {
    local_8 = 0xffffffff;
    FUN_1000a3b1((ULONG_PTR *)local_28);
    lVar4 = -0x7ff8ffa9;
  }
  else {
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    param_1[-3].lpVtbl = (IDataObjectVtbl *)0xffff;
    This = CWnd::FromHandle((HWND__ *)param_1[-5].lpVtbl);
    COleDataObject::COleDataObject((COleDataObject *)&local_38);
    local_8 = CONCAT31(local_8._1_3_,2);
    COleDataObject::Attach((COleDataObject *)&local_38,(IDataObject *)param_2,0);
    local_20[0].x = param_3.y;
    local_20[0].y = (LONG)param_4;
    ScreenToClient(*(HWND *)(This + 0x20),local_20);
    uVar1 = (*pIVar5->lpVtbl[1].DUnadvise)((IDataObject *)This,(DWORD)&local_38);
    ppvObject = (void **)_AfxFilterDropEffect(uVar1,*in_stack_00000018);
    ppvVar2 = (void **)(*pIVar5->lpVtbl[2].QueryInterface)((IDataObject *)This,&local_38,ppvObject);
    if (ppvVar2 == (void **)0xffffffff) {
      ppvVar2 = ppvObject;
      if (ppvObject == (void **)0x0) {
        (*pIVar5->lpVtbl[2].AddRef)((IDataObject *)This);
      }
      else {
        HVar3 = (*pIVar5->lpVtbl[1].EnumDAdvise)((IDataObject *)This,(IEnumSTATDATA **)&local_38);
        if (HVar3 == 0) {
          ppvVar2 = (void **)0x0;
        }
      }
    }
    _AfxRelease((IUnknown **)(param_1 + -4));
    *in_stack_00000018 = (ulong)ppvVar2;
    local_8 = CONCAT31(local_8._1_3_,1);
    COleDataObject::Release((COleDataObject *)&local_38);
    local_8 = 0xffffffff;
    FUN_1000a3b1((ULONG_PTR *)local_28);
    lVar4 = 0;
  }
  return lVar4;
}

