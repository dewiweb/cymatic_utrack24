// rea decompile_all
// name: CMDIFrameWndEx::ControlBarToTabbedDocument
// address: 0x10024335
// body: available
// range: 0x10024335-0x10024417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CMDIChildWndEx * __thiscall
   CMDIFrameWndEx::ControlBarToTabbedDocument(class CDockablePane *)
   
   Library: Visual Studio 2010 Release */

CMDIChildWndEx * __thiscall
CMDIFrameWndEx::ControlBarToTabbedDocument(CMDIFrameWndEx *this,CDockablePane *param_1)

{
  CMDIChildWndEx *this_00;
  CWnd *this_01;
  undefined4 uVar1;
  undefined **ppuVar2;
  HICON pHVar3;
  _AFX_THREAD_STATE *p_Var4;
  int iVar5;
  wchar_t *pwVar6;
  undefined *puVar7;
  undefined4 uVar8;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10024341;
  this_00 = FUN_1000858a(0x4bc);
  local_8 = 0;
  if (this_00 == (CMDIChildWndEx *)0x0) {
    this_01 = (CWnd *)0x0;
  }
  else {
    this_01 = (CWnd *)CMDIChildWndEx::CMDIChildWndEx(this_00);
  }
  local_8 = 0xffffffff;
  uVar1 = (**(code **)(*(int *)param_1 + 0x16c))();
  *(undefined4 *)(param_1 + 0x2a0) = uVar1;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar2);
  local_8 = 1;
  CWnd::GetWindowTextW
            ((CWnd *)param_1,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  pwVar6 = local_14[0];
  pHVar3 = (HICON)SendMessageW(*(HWND *)(param_1 + 0x20),0x7f,0,0);
  iVar5 = *(int *)this_01;
  uVar8 = 0;
  puVar7 = &DAT_10160d98;
  uVar1 = 0x50cf8000;
  p_Var4 = AfxRegisterWndClass(8,(HCURSOR)0x0,(HBRUSH)0x10,pHVar3);
  iVar5 = (**(code **)(iVar5 + 0x1b8))(p_Var4,pwVar6,uVar1,puVar7,this,uVar8);
  if (iVar5 == 0) {
    this_01 = (CWnd *)0x0;
  }
  else {
    FUN_100022b0(this_01 + 0xe4,local_14[0]);
    CWnd::SetWindowTextW(this_01,local_14[0]);
    CMDIChildWndEx::AddTabbedPane((CMDIChildWndEx *)this_01,param_1);
  }
  FUN_10001030((undefined4 *)(local_14[0] + -8));
  return (CMDIChildWndEx *)this_01;
}

