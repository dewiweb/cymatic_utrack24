// rea decompile_all
// name: COleDropTarget::XDropTarget::DragEnter
// address: 0x100e2e90
// body: available
// range: 0x100e2e90-0x100e2f7c inclusive
// range: 0x100e2f8b-0x100e2fa3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleDropTarget::XDropTarget::DragEnter(struct IDataObject
   *,unsigned long,struct _POINTL,unsigned long *)
   
   Library: Visual Studio 2010 Release */

long COleDropTarget::XDropTarget::DragEnter
               (IDataObject *param_1,ulong param_2,_POINTL param_3,ulong *param_4)

{
  CWnd *This;
  IDataObject *pIVar1;
  ulong uVar2;
  long lVar3;
  ulong *extraout_EDX;
  ulong *in_stack_00000018;
  undefined1 local_38 [16];
  ULONG_PTR local_28 [2];
  tagPOINT local_20 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100e2e9c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)(local_38 + 0x10),(AFX_MODULE_STATE *)param_1[-6].lpVtbl);
  if ((param_2 == 0) || (in_stack_00000018 == (ulong *)0x0)) {
    local_8 = 0xffffffff;
    FUN_1000a3b1((ULONG_PTR *)(local_38 + 0x10));
    lVar3 = -0x7ff8ffa9;
  }
  else {
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    (**(code **)(*(int *)param_2 + 4))(param_2);
    _AfxRelease((IUnknown **)(param_1 + -4));
    param_1[-4].lpVtbl = (IDataObjectVtbl *)param_2;
    This = CWnd::FromHandle((HWND__ *)param_1[-5].lpVtbl);
    local_20[0].x = param_3.y;
    local_20[0].y = (LONG)param_4;
    ScreenToClient(*(HWND *)(This + 0x20),local_20);
    pIVar1 = (IDataObject *)(*param_1[-0xd].lpVtbl[2].Release)((IDataObject *)This);
    if (-1 < (int)pIVar1) {
      COleDataObject::COleDataObject((COleDataObject *)local_38);
      local_8._0_1_ = 2;
      COleDataObject::Attach((COleDataObject *)local_38,(IDataObject *)param_2,0);
      pIVar1 = (IDataObject *)
               (*param_1[-0xd].lpVtbl[1].DAdvise)
                         ((IDataObject *)This,(FORMATETC *)local_38,param_3.x,
                          (IAdviseSink *)local_20[0].x,(DWORD *)local_20[0].y);
      local_8._0_1_ = 1;
      COleDataObject::Release((COleDataObject *)local_38);
    }
    param_1 = pIVar1;
    uVar2 = _AfxFilterDropEffect((ulong)param_1,*in_stack_00000018);
    *extraout_EDX = uVar2;
    local_8 = 0xffffffff;
    FUN_1000a3b1((ULONG_PTR *)(local_38 + 0x10));
    lVar3 = 0;
  }
  return lVar3;
}

