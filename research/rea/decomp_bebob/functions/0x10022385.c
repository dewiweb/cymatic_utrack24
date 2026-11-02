// rea decompile_all
// name: COleIPFrameWndEx::OnActivate
// address: 0x10022385
// body: available
// range: 0x10022385-0x10022428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall COleIPFrameWndEx::OnActivate(unsigned int,class CWnd *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
COleIPFrameWndEx::OnActivate(COleIPFrameWndEx *this,uint param_1,CWnd *param_2,int param_3)

{
  undefined4 uVar1;
  CWnd *pCVar2;
  
  CFrameWnd::OnActivate((CFrameWnd *)this,param_1,param_2,param_3);
  if (param_1 == 0) {
    if (DAT_10166e54 == 0) {
      CFrameImpl::DeactivateMenu((CFrameImpl *)(this + 0x198));
    }
    if (DAT_1016843c != 0) {
      SendMessageW(*(HWND *)(DAT_1016843c + 0x20),0x10,0,0);
      goto LAB_100223e8;
    }
LAB_100223ed:
    if (DAT_10168578 == this) {
      pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x194));
      DAT_10168578 = (COleIPFrameWndEx *)
                     AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar2
                                       );
    }
  }
  else {
    if (param_1 == 2) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
    else {
LAB_100223e8:
      if (param_1 == 0) goto LAB_100223ed;
    }
    if (DAT_10168578 == (COleIPFrameWndEx *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(DAT_10168578 + 0x20);
    }
    *(undefined4 *)(this + 0x194) = uVar1;
    DAT_10168578 = this;
  }
  return;
}

