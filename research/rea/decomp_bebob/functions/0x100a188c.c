// rea decompile_all
// name: CMFCPopupMenuBar::OnKey
// address: 0x100a188c
// body: available
// range: 0x100a188c-0x100a1d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a1a47 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPopupMenuBar::OnKey(unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPopupMenuBar::OnKey(CMFCPopupMenuBar *this,uint param_1)

{
  int *piVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  CWnd *pCVar7;
  CObject *pCVar8;
  __POSITION *p_Var9;
  int iVar10;
  CMFCToolBarButton *pCVar11;
  __POSITION *local_3c;
  CObject *local_38;
  CObject *local_34;
  CMFCToolBarButton *local_30;
  int local_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar8 = (CObject *)0x0;
  if (*(int *)(this + 0xb7c) < 0) {
    local_30 = (CMFCToolBarButton *)0x0;
  }
  else {
    local_30 = (CMFCToolBarButton *)
               CObList::FindIndex((CObList *)(this + 0xbc8),*(int *)(this + 0xb7c));
    if (local_30 != (CMFCToolBarButton *)0x0) {
      pCVar8 = *(CObject **)(local_30 + 8);
    }
  }
  local_2c = *(int *)(this + 0xb7c);
  bVar2 = false;
  local_38 = pCVar8;
  local_34 = pCVar8;
  if (param_1 == 9) {
    uVar3 = GetKeyState(0x10);
    param_1 = (uint)((uVar3 & 0x80) == 0) * 2 + 0x26;
  }
  pCVar11 = local_30;
  if (param_1 == 0xd) {
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,pCVar8);
    if ((pCVar8 == (CObject *)0x0) ||
       ((iVar4 = (**(code **)(*(int *)pCVar8 + 0xec))(), iVar4 == 0 &&
        (iVar4 = (**(code **)(*(int *)pCVar8 + 200))(0), iVar4 != 0)))) goto LAB_100a1d8b;
    pCVar7 = CWnd::GetOwner((CWnd *)this);
    SendMessageW(*(HWND *)(pCVar7 + 0x20),0x362,0xe001,0);
    (**(code **)(*(int *)this + 0x3e4))(pCVar8);
    goto LAB_100a1ccc;
  }
  if (0x20 < param_1) {
    if (param_1 < 0x23) {
      if ((*(int *)(this + 0xd08) != 0) && (0 < *(int *)(this + 0xd0c))) {
        iVar4 = *(int *)(this + 0xb7c);
        iVar10 = 0;
        *(undefined4 *)(this + 0xd10) = 1;
        if (0 < *(int *)(this + 0xd0c)) {
          local_38 = (CObject *)((uint)(param_1 != 0x21) * 2 + 0x26);
          do {
            (**(code **)(*(int *)this + 0x3fc))(local_38);
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(this + 0xd0c));
        }
        *(undefined4 *)(this + 0xd10) = 0;
        if (iVar4 != *(int *)(this + 0xb7c)) {
          (**(code **)(*(int *)this + 600))(*(int *)(this + 0xb7c));
        }
      }
      goto LAB_100a1d8b;
    }
    if (param_1 == 0x23) {
      local_30 = (CMFCToolBarButton *)0x0;
LAB_100a1a51:
      if ((((*(int *)(this + 0xd08) != 0) &&
           (pCVar11 == (CMFCToolBarButton *)*(__POSITION **)(this + 0xbcc))) && (param_1 != 0x23))
         || (*(int *)(this + 0xbd4) == 0)) goto LAB_100a1d8b;
      if ((local_30 == (CMFCToolBarButton *)0x0) ||
         (p_Var9 = *(__POSITION **)(local_30 + 4), p_Var9 == (__POSITION *)0x0)) {
        p_Var9 = *(__POSITION **)(this + 0xbd0);
        local_2c = *(int *)(this + 0xbd4);
      }
      local_2c = local_2c + -1;
      if (p_Var9 == (__POSITION *)local_30) goto LAB_100a1d8b;
      do {
        local_3c = p_Var9;
        if (local_3c == (__POSITION *)0x0) goto LAB_100a1a47;
        iVar4 = *(int *)(local_3c + 8);
        p_Var9 = *(__POSITION **)(local_3c + 4);
        if ((((*(byte *)(iVar4 + 0x24) & 1) == 0) &&
            (BVar5 = IsRectEmpty((RECT *)(iVar4 + 0x54)), BVar5 == 0)) &&
           (*(int *)(iVar4 + 0x20) != -2)) break;
        local_2c = local_2c + -1;
        if (p_Var9 == (__POSITION *)0x0) {
          if (*(int *)(this + 0xd08) != 0) goto LAB_100a1d8b;
          p_Var9 = *(__POSITION **)(this + 0xbd0);
          local_2c = *(int *)(this + 0xbd4) + -1;
        }
      } while (p_Var9 != (__POSITION *)local_30);
    }
    else {
      if (param_1 == 0x24) {
        local_30 = (CMFCToolBarButton *)0x0;
      }
      else {
        if (param_1 == 0x26) goto LAB_100a1a51;
        if (param_1 != 0x28) goto LAB_100a193a;
      }
      if ((((*(int *)(this + 0xd08) != 0) &&
           (pCVar11 == (CMFCToolBarButton *)*(__POSITION **)(this + 0xbd0))) && (param_1 != 0x24))
         || (*(int *)(this + 0xbd4) == 0)) goto LAB_100a1d8b;
      if ((local_30 == (CMFCToolBarButton *)0x0) ||
         (p_Var9 = *(__POSITION **)local_30, p_Var9 == (__POSITION *)0x0)) {
        p_Var9 = *(__POSITION **)(this + 0xbcc);
        local_2c = 0;
      }
      else {
        local_2c = local_2c + 1;
      }
      if (p_Var9 == (__POSITION *)local_30) goto LAB_100a1d8b;
      do {
        local_3c = p_Var9;
        if (local_3c == (__POSITION *)0x0) {
LAB_100a1a47:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar4 = *(int *)(local_3c + 8);
        p_Var9 = *(__POSITION **)local_3c;
        if ((((*(byte *)(iVar4 + 0x24) & 1) == 0) &&
            (BVar5 = IsRectEmpty((RECT *)(iVar4 + 0x54)), BVar5 == 0)) &&
           (*(int *)(iVar4 + 0x20) != -2)) break;
        local_2c = local_2c + 1;
        if (p_Var9 == (__POSITION *)0x0) {
          if (*(int *)(this + 0xd08) != 0) goto LAB_100a1d8b;
          p_Var9 = *(__POSITION **)(this + 0xbcc);
          local_2c = 0;
        }
      } while (p_Var9 != (__POSITION *)local_30);
    }
    if (local_3c == (__POSITION *)0x0) goto LAB_100a1d8b;
    local_34 = *(CObject **)(local_3c + 8);
    bVar2 = true;
    goto LAB_100a1ccc;
  }
LAB_100a193a:
  if ((DAT_10166e54 != 0) || (uVar3 = GetAsyncKeyState(0x11), (uVar3 & 0x8000) != 0))
  goto LAB_100a1d8b;
  iVar4 = CKeyboardManager::IsKeyPrintable(param_1);
  if (iVar4 == 0) {
LAB_100a1c2a:
    if ((DAT_101611ec == 0) || (*(int *)(this + 0xcf0) != 0)) goto LAB_100a1d8b;
    local_38 = (CObject *)0x0;
    iVar4 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                      ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0xd3c),param_1,
                       (int *)&local_38);
    if (iVar4 == 0) goto LAB_100a1d8b;
    pCVar11 = (CMFCToolBarButton *)0x0;
    pCVar8 = local_38;
  }
  else {
    param_1 = CKeyboardManager::TranslateCharToUpper(param_1);
    local_34 = (CObject *)param_1;
    iVar4 = CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>::Lookup
                      ((CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&> *)
                       (this + 0xcac),(uint *)&local_34,&local_30);
    pCVar11 = local_30;
    if (iVar4 == 0) goto LAB_100a1c2a;
    puVar6 = *(undefined4 **)(this + 0xbcc);
    local_34 = (CObject *)local_30;
    iVar4 = 0;
    while (iVar10 = local_2c, puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) goto LAB_100a1a47;
      piVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      if ((CObject *)*piVar1 == (CObject *)0x0) goto LAB_100a1a47;
      iVar10 = iVar4;
      if ((CObject *)*piVar1 == (CObject *)local_30) break;
      iVar4 = iVar4 + 1;
    }
    local_2c = iVar10;
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,
                                (CObject *)local_30);
    if (pCVar8 == (CObject *)0x0) {
LAB_100a1ccc:
      if (local_34 != local_38) {
        if ((bVar2) && (*(int *)(this + 0xd10) == 0)) {
          (**(code **)(*(int *)this + 600))(local_2c);
        }
        if (DAT_10166e54 != 0) {
          *(int *)(this + 0xb80) = local_2c;
        }
        *(int *)(this + 0xb7c) = local_2c;
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_18);
        local_28.left = *(LONG *)(local_34 + 0x54);
        local_28.top = *(LONG *)(local_34 + 0x58);
        local_28.right = *(LONG *)(local_34 + 0x5c);
        local_28.bottom = *(LONG *)(local_34 + 0x60);
        if ((local_18.top <= local_28.top) && (local_28.bottom <= local_18.bottom)) {
          if (local_38 != (CObject *)0x0) {
            InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(local_38 + 0x54),1);
          }
          InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
          UpdateWindow(*(HWND *)(this + 0x20));
        }
        if (*(int *)(local_34 + 0x20) != -1) {
          (**(code **)(*(int *)this + 0x414))(*(int *)(local_34 + 0x20));
        }
      }
      goto LAB_100a1d8b;
    }
    iVar4 = (**(code **)(*(int *)pCVar8 + 200))(0);
    if (iVar4 != 0) {
      if (*(int *)(pCVar8 + 0x8c) != 0) {
        SendMessageW(*(HWND *)(*(int *)(pCVar8 + 0x8c) + 0x20),0x100,0x24,0);
      }
      goto LAB_100a1ccc;
    }
    if ((*(uint *)(pCVar11 + 0x24) & 0x40000) == 0) {
      iVar4 = (**(code **)(*(int *)this + 0x3e4))(pCVar8);
      if (iVar4 != 0) goto LAB_100a1d8b;
      goto LAB_100a1ccc;
    }
    pCVar8 = (CObject *)0x0;
  }
  InvokeMenuCommand(this,(uint)pCVar8,pCVar11);
LAB_100a1d8b:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

