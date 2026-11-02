// rea decompile_all
// name: CFrameWndEx::OnUpdateFrameTitle
// address: 0x100257fb
// body: available
// range: 0x100257fb-0x100258ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CFrameWndEx::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWndEx::OnUpdateFrameTitle(CFrameWndEx *this,int param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined **ppuVar4;
  int local_18;
  ushort *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10025807;
  bVar1 = false;
  if ((*(int *)(this + 0x220) != 0) &&
     (((BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0x220) + 0x20)), BVar2 != 0 ||
       (BVar2 = IsWindowVisible(*(HWND *)(this + 0x20)), BVar2 == 0)) &&
      (*(int *)(*(int *)(this + 0x220) + 0x314) != 0)))) {
    bVar1 = true;
  }
  iVar3 = CFrameImpl::IsOwnerDrawCaption((CFrameImpl *)(this + 0x124));
  if (((iVar3 != 0) && (BVar2 = IsWindowVisible(*(HWND *)(this + 0x20)), BVar2 != 0)) && (!bVar1)) {
    ppuVar4 = FUN_1000ad47();
    FUN_10005e00(&local_18,(int *)ppuVar4);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18);
    CFrameWnd::OnUpdateFrameTitle((CFrameWnd *)this,param_1);
    ppuVar4 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar4);
    local_8 = CONCAT31(local_8._1_3_,1);
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    iVar3 = FUN_10005720(&local_18,local_14[0]);
    if (iVar3 != 0) {
      SendMessageW(*(HWND *)(this + 0x20),0x85,0,0);
    }
    FUN_10001030((undefined4 *)(local_14[0] + -8));
    FUN_10001030((undefined4 *)(local_18 + -0x10));
    return;
  }
  CFrameWnd::OnUpdateFrameTitle((CFrameWnd *)this,param_1);
  return;
}

