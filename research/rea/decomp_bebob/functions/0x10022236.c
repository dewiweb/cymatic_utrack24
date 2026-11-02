// rea decompile_all
// name: PreTranslateMessage
// address: 0x10022236
// body: available
// range: 0x10022236-0x10022384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall COleDocIPFrameWndEx::PreTranslateMessage(struct tagMSG *)
    public: virtual int __thiscall COleIPFrameWndEx::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall PreTranslateMessage(void *this,tagMSG *param_1)

{
  uint uVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  int iVar5;
  CWnd *pCVar6;
  BOOL BVar7;
  tagPOINT local_c;
  
  uVar1 = param_1->message;
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      iVar5 = CFrameImpl::IsHelpKey(param_1);
      if (iVar5 == 0) {
        iVar5 = CFrameImpl::ProcessKeyboard
                          ((CFrameImpl *)((int)this + 0x198),param_1->wParam,(int *)0x0);
        goto LAB_100222bd;
      }
    }
    else if ((0xa0 < uVar1) &&
            ((uVar1 < 0xa3 || ((0xa3 < uVar1 && ((uVar1 < 0xa6 || (uVar1 - 0xa7 < 2)))))))) {
      tVar2.y = (int)*(short *)((int)&param_1->lParam + 2);
      tVar2.x = (int)(short)param_1->lParam;
      iVar5 = CFrameImpl::ProcessMouseClick
                        ((CFrameImpl *)((int)this + 0x198),uVar1,tVar2,param_1->hwnd);
LAB_100222bd:
      if (iVar5 != 0) goto LAB_100222c1;
    }
LAB_1002233a:
    iVar5 = CFrameWnd::PreTranslateMessage(this,param_1);
  }
  else {
    if (uVar1 == 0x200) {
      local_c.x = (LONG)(short)param_1->lParam;
      local_c.y = (LONG)*(short *)((int)&param_1->lParam + 2);
      pCVar6 = CWnd::FromHandle(param_1->hwnd);
      if (pCVar6 != (CWnd *)0x0) {
        ClientToScreen(*(HWND *)(pCVar6 + 0x20),&local_c);
      }
      tVar4.y = local_c.y;
      tVar4.x = local_c.x;
      iVar5 = CFrameImpl::ProcessMouseMove((CFrameImpl *)((int)this + 0x198),tVar4);
      goto LAB_100222bd;
    }
    if ((uVar1 != 0x201) && (6 < uVar1 - 0x203)) goto LAB_1002233a;
    local_c.x = (LONG)(short)param_1->lParam;
    local_c.y = (LONG)*(short *)((int)&param_1->lParam + 2);
    pCVar6 = CWnd::FromHandle(param_1->hwnd);
    if (pCVar6 != (CWnd *)0x0) {
      BVar7 = IsWindow(param_1->hwnd);
      if (BVar7 != 0) {
        ClientToScreen(*(HWND *)(pCVar6 + 0x20),&local_c);
      }
    }
    tVar3.y = local_c.y;
    tVar3.x = local_c.x;
    iVar5 = CFrameImpl::ProcessMouseClick
                      ((CFrameImpl *)((int)this + 0x198),param_1->message,tVar3,param_1->hwnd);
    if (iVar5 == 0) {
      BVar7 = IsWindow(param_1->hwnd);
      if (BVar7 != 0) goto LAB_1002233a;
    }
LAB_100222c1:
    iVar5 = 1;
  }
  return iVar5;
}

