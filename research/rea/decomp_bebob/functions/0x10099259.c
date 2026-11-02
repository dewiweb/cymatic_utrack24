// rea decompile_all
// name: CWnd::FilterToolTipMessage
// address: 0x10099259
// body: available
// range: 0x10099259-0x1009968c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CWnd::FilterToolTipMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CWnd::FilterToolTipMessage(CWnd *this,tagMSG *param_1)

{
  uint uVar1;
  SHORT SVar2;
  AFX_MODULE_THREAD_STATE *pAVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CWnd *pCVar6;
  int iVar7;
  void *_Dst;
  uint *puVar8;
  uint *puVar9;
  tagPOINT local_94;
  tagPOINT local_8c;
  AFX_MODULE_THREAD_STATE *local_84;
  tagMSG *local_80;
  CWnd *local_7c;
  CWnd *local_78;
  uint local_74 [8];
  int local_54;
  void *local_50;
  uint local_44 [15];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x10099268;
  uVar1 = param_1->message;
  local_80 = param_1;
  local_78 = this;
  if (((((uVar1 != 0x200) && (uVar1 != 0xa0)) && (uVar1 != 0x202)) &&
      ((uVar1 != 0x205 && (uVar1 != 0x208)))) ||
     ((SVar2 = GetKeyState(1), SVar2 < 0 ||
      ((SVar2 = GetKeyState(2), SVar2 < 0 || (SVar2 = GetKeyState(4), SVar2 < 0)))))) {
    if ((*(uint *)(local_78 + 0x58) & 0x401) != 0) {
      pHVar4 = param_1->hwnd;
      while (pCVar5 = FromHandle(pHVar4), pCVar5 != (CWnd *)0x0) {
        if (pCVar5 == local_78) goto LAB_100995ed;
        if ((*(uint *)(pCVar5 + 0x58) & 0x401) != 0) break;
        pHVar4 = GetParent(*(HWND *)(pCVar5 + 0x20));
      }
      if (pCVar5 == local_78) {
LAB_100995ed:
        if (((uVar1 < 0x100) || (0x109 < uVar1)) && (3 < uVar1 - 0x104)) {
          iVar7 = 0;
        }
        else {
          iVar7 = 1;
        }
        if (((*(uint *)(local_78 + 0x58) & 0x400) == 0) &&
           (((((iVar7 != 0 || (uVar1 == 0x201)) ||
              ((uVar1 == 0x203 || ((uVar1 == 0x204 || (uVar1 == 0x206)))))) || (uVar1 == 0x207)) ||
            (((((uVar1 == 0x209 || (uVar1 == 0xa1)) || (uVar1 == 0xa3)) ||
              ((uVar1 == 0xa4 || (uVar1 == 0xa6)))) || ((uVar1 == 0xa7 || (uVar1 == 0xa9)))))))) {
          CancelToolTips(iVar7);
        }
      }
    }
    goto LAB_10099685;
  }
  pAVar3 = AfxGetModuleThreadState();
  pHVar4 = param_1->hwnd;
  local_84 = pAVar3;
  while ((pCVar5 = FromHandle(pHVar4), pCVar5 != (CWnd *)0x0 &&
         ((*(uint *)(pCVar5 + 0x58) & 0x401) == 0))) {
    pHVar4 = GetParent(*(HWND *)(pCVar5 + 0x20));
  }
  if (pCVar5 != local_78) {
    if (pCVar5 == (CWnd *)0x0) {
      *(undefined4 *)(pAVar3 + 0x40) = 0;
      *(undefined4 *)(pAVar3 + 0x44) = 0xffffffff;
    }
    goto LAB_10099685;
  }
  pCVar5 = *(CWnd **)(pAVar3 + 0x3c);
  local_7c = GetParentOwner(local_78);
  if (pCVar5 == (CWnd *)0x0) {
LAB_10099347:
    local_8c.y = (LONG)FUN_1000858a(0x90);
    pCVar5 = (CWnd *)0x0;
    local_8 = 0;
    if ((CToolTipCtrl *)local_8c.y != (CToolTipCtrl *)0x0) {
      pCVar5 = (CWnd *)CToolTipCtrl::CToolTipCtrl((CToolTipCtrl *)local_8c.y);
    }
    local_8 = 0xffffffff;
    iVar7 = (**(code **)(*(int *)pCVar5 + 0x160))(local_7c,1);
    if (iVar7 == 0) {
      (**(code **)(*(int *)pCVar5 + 4))(1);
      goto LAB_10099685;
    }
    SendMessageW(*(HWND *)(pCVar5 + 0x20),0x401,0,0);
    *(CWnd **)(pAVar3 + 0x3c) = pCVar5;
    param_1 = local_80;
  }
  else {
    pCVar6 = GetOwner(pCVar5);
    if (pCVar6 != local_7c) {
      (**(code **)(*(int *)pCVar5 + 0x60))();
      (**(code **)(*(int *)pCVar5 + 4))(1);
      pCVar5 = (CWnd *)0x0;
      *(undefined4 *)(pAVar3 + 0x3c) = 0;
    }
    if (pCVar5 == (CWnd *)0x0) goto LAB_10099347;
  }
  _memset(local_44,0,0x30);
  local_94.x = (param_1->pt).x;
  local_94.y = (param_1->pt).y;
  ::ScreenToClient(*(HWND *)(local_78 + 0x20),&local_94);
  _memset(local_74,0,0x30);
  local_74[0] = 0x2c;
  local_8c.y = (**(code **)(*(int *)local_78 + 0x74))(local_94.x,local_94.y,local_74);
  local_7c = (CWnd *)(-(uint)((CToolTipCtrl *)local_8c.y != (CToolTipCtrl *)0xffffffff) &
                     (uint)local_78);
  if ((*(CToolTipCtrl **)(pAVar3 + 0x44) == (CToolTipCtrl *)local_8c.y) &&
     (*(CWnd **)(pAVar3 + 0x40) == local_7c)) {
    if ((*(uint *)(local_78 + 0x58) & 0x400) == 0) {
      if ((CToolTipCtrl *)local_8c.y != (CToolTipCtrl *)0xffffffff) {
        _AfxRelayToolTipMessage((CToolTipCtrl *)pCVar5,param_1);
      }
    }
    else {
      GetCursorPos(&local_8c);
      SendMessageW(*(HWND *)(pCVar5 + 0x20),0x412,0,
                   CONCAT22((undefined2)local_8c.y,(undefined2)local_8c.x));
    }
  }
  else {
    if ((CToolTipCtrl *)local_8c.y == (CToolTipCtrl *)0xffffffff) {
      SendMessageW(*(HWND *)(pCVar5 + 0x20),0x401,0,0);
    }
    else {
      puVar8 = local_74;
      puVar9 = local_44;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      local_44[1] = local_74[1] & 0x3fffffff;
      if ((*(uint *)(local_78 + 0x58) & 0x400) != 0) {
        local_44[1] = local_44[1] | 0x20;
      }
      SendMessageW(*(HWND *)(pCVar5 + 0x20),0x432,0,(LPARAM)local_44);
      if (((local_74[1] & 0x40000000) != 0) ||
         (iVar7 = IsTopParentActive(local_78), param_1 = local_80, pAVar3 = local_84, iVar7 != 0)) {
        SendMessageW(*(HWND *)(pCVar5 + 0x20),0x401,1,0);
        if ((*(uint *)(local_78 + 0x58) & 0x400) != 0) {
          SendMessageW(*(HWND *)(pCVar5 + 0x20),0x411,1,(LPARAM)local_44);
        }
        ::SetWindowPos(*(HWND *)(pCVar5 + 0x20),(HWND)0x0,0,0,0,0,0x213);
        param_1 = local_80;
        pAVar3 = local_84;
      }
    }
    _AfxRelayToolTipMessage((CToolTipCtrl *)pCVar5,param_1);
    puVar8 = *(uint **)(pAVar3 + 0x48);
    if ((puVar8 != (uint *)0x0) && (0x2b < *puVar8)) {
      SendMessageW(*(HWND *)(pCVar5 + 0x20),0x433,0,(LPARAM)puVar8);
    }
    *(CWnd **)(pAVar3 + 0x40) = local_7c;
    *(LONG *)(pAVar3 + 0x44) = local_8c.y;
    if (*(int *)(pAVar3 + 0x48) == 0) {
      _Dst = FUN_1000858a(0x30);
      *(void **)(pAVar3 + 0x48) = _Dst;
      _memset(_Dst,0,0x30);
    }
    puVar8 = local_74;
    puVar9 = *(uint **)(pAVar3 + 0x48);
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  if ((local_50 != (void *)0xffffffff) && (local_54 == 0)) {
    _free(local_50);
  }
LAB_10099685:
  FUN_100f90cf();
  return;
}

