// rea decompile_all
// name: CVSListBox::PreTranslateMessage
// address: 0x100453a5
// body: available
// range: 0x100453a5-0x1004558f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CVSListBox::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CVSListBox::PreTranslateMessage(CVSListBox *this,tagMSG *param_1)

{
  bool bVar1;
  tagMSG *ptVar2;
  CEdit *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int iVar6;
  WPARAM wParam;
  LRESULT LVar7;
  int iVar8;
  tagPOINT local_14;
  tagPOINT local_c;
  
  ptVar2 = param_1;
  if ((param_1->message == 0x201) && (*(CListCtrl **)(this + 0x104) != (CListCtrl *)0x0)) {
    pCVar3 = CListCtrl::GetEditControl(*(CListCtrl **)(this + 0x104));
    if (pCVar3 != (CEdit *)0x0) goto LAB_100454ab;
    if (*(int *)(this + 0x104) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(this + 0x104) + 0x20);
    }
    pHVar4 = GetFocus();
    pCVar5 = CWnd::FromHandle(pHVar4);
    iVar6 = 0;
    if (pCVar5 != (CWnd *)0x0) {
      iVar6 = *(int *)(pCVar5 + 0x20);
    }
    if (iVar8 != iVar6) goto LAB_100454ab;
    *(undefined4 *)(this + 0x108) = 0xffffffff;
    *(undefined4 *)(this + 0x10c) = 0xffffffff;
    local_c.x = (ptVar2->pt).x;
    local_c.y = (ptVar2->pt).y;
    ScreenToClient(*(HWND *)(*(int *)(this + 0x104) + 0x20),&local_c);
    wParam = CListCtrl::HitTest(*(CListCtrl **)(this + 0x104),local_c.x,local_c.y,&param_1);
    if (((int)wParam < 0) || (((uint)param_1 & 4) == 0)) goto LAB_10045581;
    LVar7 = SendMessageW(*(HWND *)(*(int *)(this + 0x104) + 0x20),0x102c,wParam,3);
    if (((byte)LVar7 & 3) != 3) goto LAB_10045581;
    *(LONG *)(this + 0x108) = local_c.x;
    *(LONG *)(this + 0x10c) = local_c.y;
    pHVar4 = SetCapture(*(HWND *)(this + 0x20));
    CWnd::FromHandle(pHVar4);
LAB_100454a3:
    iVar8 = 1;
  }
  else {
LAB_100454ab:
    if (ptVar2->message == 0x202) {
      iVar8 = CSize::operator!=((CSize *)(this + 0x108),(tagSIZE)0xffffffffffffffff);
      if (iVar8 != 0) {
        ReleaseCapture();
        local_14.x = (ptVar2->pt).x;
        local_14.y = (ptVar2->pt).y;
        ScreenToClient(*(HWND *)(*(int *)(this + 0x104) + 0x20),&local_14);
        local_c.y = CListCtrl::HitTest(*(CListCtrl **)(this + 0x104),local_14.x,local_14.y,0);
        if (local_c.y < 0) {
LAB_10045554:
          bVar1 = false;
        }
        else {
          param_1 = (tagMSG *)_labs(local_14.x - *(int *)(this + 0x108));
          iVar8 = GetSystemMetrics(0x44);
          if (iVar8 <= (int)param_1) goto LAB_10045554;
          param_1 = (tagMSG *)_labs(local_14.y - *(int *)(this + 0x10c));
          iVar8 = GetSystemMetrics(0x45);
          if (iVar8 <= (int)param_1) goto LAB_10045554;
          bVar1 = true;
        }
        *(undefined4 *)(this + 0x108) = 0xffffffff;
        *(undefined4 *)(this + 0x10c) = 0xffffffff;
        if (bVar1) {
          (**(code **)(*(int *)this + 0x18c))(local_c.y);
        }
        goto LAB_100454a3;
      }
    }
LAB_10045581:
    iVar8 = CWnd::PreTranslateMessage((CWnd *)this,ptVar2);
  }
  return iVar8;
}

