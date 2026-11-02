// rea decompile_all
// name: CDialogImpl::PreTranslateMessage
// address: 0x100e0715
// body: available
// range: 0x100e0715-0x100e0905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDialogImpl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDialogImpl::PreTranslateMessage(CDialogImpl *this,tagMSG *param_1)

{
  uint uVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  int iVar5;
  BOOL BVar6;
  CWnd *pCVar7;
  UINT Msg;
  WPARAM wParam;
  tagPOINT local_10;
  CDialogImpl *local_8;
  
  uVar1 = param_1->message;
  local_8 = this;
  if (0x105 < uVar1) {
    if (uVar1 != 0x200) {
      if (uVar1 != 0x201) {
        if (uVar1 < 0x204) {
          return 0;
        }
        if (0x205 < uVar1) {
          if (uVar1 < 0x207) {
            return 0;
          }
          if (0x208 < uVar1) {
            if (uVar1 != 0x20a) {
              return 0;
            }
            if (DAT_1016843c == 0) {
              return 0;
            }
            BVar6 = IsWindow(*(HWND *)(DAT_1016843c + 0x20));
            if (BVar6 == 0) {
              return 0;
            }
            if (*(int *)(DAT_1016843c + 0xef0) == 0) {
              return 0;
            }
            SendMessageW(*(HWND *)(DAT_1016843c + 0x20),0x20a,param_1->wParam,param_1->lParam);
            return 0;
          }
        }
      }
      local_10.x = (LONG)(short)param_1->lParam;
      local_10.y = (LONG)*(short *)((int)&param_1->lParam + 2);
      pCVar7 = CWnd::FromHandle(param_1->hwnd);
      if ((pCVar7 != (CWnd *)0x0) && (BVar6 = IsWindow(param_1->hwnd), BVar6 != 0)) {
        ClientToScreen(*(HWND *)(pCVar7 + 0x20),&local_10);
      }
      tVar2.y = local_10.y;
      tVar2.x = local_10.x;
      iVar5 = ProcessMouseClick(local_8,tVar2);
      if (iVar5 == 0) {
        BVar6 = IsWindow(param_1->hwnd);
        if (BVar6 != 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    local_10.x = (LONG)(short)param_1->lParam;
    local_10.y = (LONG)*(short *)((int)&param_1->lParam + 2);
    pCVar7 = CWnd::FromHandle(param_1->hwnd);
    if (pCVar7 != (CWnd *)0x0) {
      ClientToScreen(*(HWND *)(pCVar7 + 0x20),&local_10);
    }
    tVar4.y = local_10.y;
    tVar4.x = local_10.x;
    iVar5 = ProcessMouseMove(local_8,tVar4);
    goto LAB_100e07f5;
  }
  if (uVar1 == 0x105) {
    if (DAT_1016843c == 0) {
      return 0;
    }
    iVar5 = IsWindow(*(HWND *)(DAT_1016843c + 0x20));
    goto LAB_100e07f5;
  }
  if (uVar1 < 0xa9) {
    if (uVar1 < 0xa7) {
      if (uVar1 == 0x7b) goto LAB_100e0790;
      if (uVar1 < 0xa1) {
        return 0;
      }
      if ((0xa2 < uVar1) && (1 < uVar1 - 0xa4)) {
        return 0;
      }
    }
    tVar3.y = (int)*(short *)((int)&param_1->lParam + 2);
    tVar3.x = (int)(short)param_1->lParam;
    iVar5 = ProcessMouseClick(this,tVar3);
LAB_100e07f5:
    if (iVar5 != 0) {
      return 1;
    }
    return 0;
  }
  if (uVar1 == 0x100) {
    if (DAT_1016843c == 0) {
      return 0;
    }
    BVar6 = IsWindow(*(HWND *)(DAT_1016843c + 0x20));
    if (BVar6 == 0) {
      return 0;
    }
    wParam = param_1->wParam;
    Msg = 0x100;
    goto LAB_100e07b2;
  }
  if (uVar1 != 0x104) {
    return 0;
  }
LAB_100e0790:
  if (DAT_1016843c == 0) {
    return 0;
  }
  BVar6 = IsWindow(*(HWND *)(DAT_1016843c + 0x20));
  if (BVar6 == 0) {
    return 0;
  }
  if (param_1->wParam != 0x12) {
    return 0;
  }
  wParam = 0;
  Msg = 0x10;
LAB_100e07b2:
  SendMessageW(*(HWND *)(DAT_1016843c + 0x20),Msg,wParam,0);
  return 1;
}

