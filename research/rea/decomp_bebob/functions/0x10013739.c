// rea decompile_all
// name: FUN_10013739
// address: 0x10013739
// body: available
// range: 0x10013739-0x10013d75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall
FUN_10013739(void *this,uint param_1,CDC *param_2,AFX_MSGMAP_ENTRY *param_3,int *param_4)

{
  int iVar1;
  CWnd *pCVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  CWnd *pCVar7;
  AFX_MSGMAP_ENTRY *pAVar8;
  uint uVar9;
  uint uVar10;
  CMenu *pCVar11;
  AFX_MSGMAP_ENTRY *pAVar12;
  code *pcVar13;
  short sVar14;
  short sVar15;
  CWnd local_9c [32];
  HWND__ *local_7c;
  void *local_30;
  CDC local_28 [4];
  undefined4 local_24;
  undefined1 local_20 [4];
  uint *local_1c;
  undefined4 local_18;
  int local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  pAVar8 = param_3;
  uStack_4 = 0x8c;
  local_14[0] = 0;
  local_18 = 0x7fffffff;
  local_8 = 0;
  if (param_1 == 0x111) {
    iVar1 = (**(code **)(*(int *)this + 0xf4))(param_2,param_3);
    if (iVar1 == 0) goto LAB_100139bb;
    goto LAB_1001377a;
  }
  if (param_1 == 0x4e) {
    if (*(int *)param_3 == 0) goto LAB_100139bb;
    iVar1 = (**(code **)(*(int *)this + 0xf8))(param_2,param_3,local_14);
LAB_100137a8:
    if (iVar1 == 0) {
LAB_100139bb:
      local_8 = 0xffffffff;
      CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
      return 0;
    }
    goto switchD_1001395e_caseD_39;
  }
  if (param_1 == 6) {
    pCVar2 = CWnd::FromHandle((HWND__ *)param_3);
    _AfxHandleActivate(this,(uint)param_2,pCVar2);
  }
  sVar14 = (short)param_3;
  if ((param_1 == 0x20) &&
     (iVar1 = _AfxHandleSetCursor(this,(int)sVar14,(uint)param_3 >> 0x10), iVar1 != 0))
  goto LAB_1001377a;
  if ((((*(int *)((int)this + 0x68) != 0) && (0 < *(int *)(*(int *)((int)this + 0x68) + 0x74))) &&
      ((((0x1ff < param_1 && (param_1 < 0x20a)) || ((0xff < param_1 && (param_1 < 0x110)))) ||
       (param_1 - 0x281 < 0x11)))) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x94))(param_1,param_2,param_3,local_14),
     iVar1 != 0)) goto switchD_1001395e_caseD_39;
  if (param_1 == 5) {
    pvVar4 = (void *)FUN_100128ef((uint)this);
    if ((pvVar4 != (void *)0x0) && (*(int *)((int)pvVar4 + 4) != 0)) {
      uVar5 = FUN_1001831c(local_20,(uint)param_3 & 0xffff,(uint)param_3 >> 0x10);
      FUN_10018404(pvVar4,uVar5);
      RedrawWindow(*(HWND *)((int)this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
  }
  else {
    if (param_1 == 0xf) {
      iVar1 = FUN_1001292c((uint)this);
    }
    else {
      if ((param_1 != 0x14) || (uVar3 = FUN_100128ef((uint)this), uVar3 == 0)) goto LAB_100138a9;
      iVar1 = *(int *)(uVar3 + 4);
    }
    if (iVar1 != 0) goto LAB_1001377a;
  }
LAB_100138a9:
  piVar6 = (int *)(**(code **)(*(int *)this + 0x28))();
  CInternalGlobalLock::Lock((CInternalGlobalLock *)&local_18,7);
  iVar1 = (((uint)piVar6 ^ param_1) & 0x1ff) * 0xc;
  local_1c = (uint *)(&DAT_10164db8 + iVar1);
  if ((param_1 != *local_1c) || (piVar6 != *(int **)(&DAT_10164dc0 + iVar1))) {
    *local_1c = param_1;
    *(int **)(&DAT_10164dc0 + iVar1) = piVar6;
    for (; *piVar6 != 0; piVar6 = (int *)(*(code *)*piVar6)()) {
      if (param_1 < 0xc000) {
        param_3 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar6[1],param_1,0,0);
        if (param_3 != (AFX_MSGMAP_ENTRY *)0x0) {
          local_1c[1] = (uint)param_3;
          CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
          goto LAB_10013949;
        }
      }
      else {
        pAVar12 = (AFX_MSGMAP_ENTRY *)piVar6[1];
        while (param_3 = AfxFindMessageEntry(pAVar12,0xc000,0,0), param_3 != (AFX_MSGMAP_ENTRY *)0x0
              ) {
          if (**(uint **)(param_3 + 0x10) == param_1) {
            local_1c[1] = (uint)param_3;
            CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
            goto LAB_10013d48;
          }
          pAVar12 = param_3 + 0x18;
        }
      }
    }
    local_1c[1] = 0;
    CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
    goto LAB_100139bb;
  }
  param_3 = *(AFX_MSGMAP_ENTRY **)(&DAT_10164dbc + iVar1);
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
  if (param_3 == (AFX_MSGMAP_ENTRY *)0x0) goto LAB_100139bb;
  if (0xbfff < param_1) {
LAB_10013d48:
    pcVar13 = *(code **)(param_3 + 0x14);
switchD_1001395e_caseD_e:
    goto LAB_10013d4f;
  }
LAB_10013949:
  pcVar13 = *(code **)(param_3 + 0x14);
  sVar15 = (short)((uint)pAVar8 >> 0x10);
  pCVar2 = (CWnd *)pAVar8;
  switch(*(int *)(param_3 + 0x10)) {
  case 1:
    param_2 = CDC::FromHandle((HDC__ *)param_2);
    goto LAB_100139ea;
  case 2:
  case 3:
  case 4:
  case 0x1b:
  case 0x1c:
    goto LAB_100139ea;
  case 5:
  case 0xc:
    pCVar11 = (CMenu *)((uint)pAVar8 >> 0x10);
    pCVar2 = (CWnd *)((uint)pAVar8 & 0xffff);
    pCVar7 = CWnd::FromHandle((HWND__ *)param_2);
    goto LAB_10013a1f;
  case 6:
  case 0x47:
    param_2 = (CDC *)CWnd::FromHandle((HWND__ *)param_2);
    goto LAB_10013d4f;
  case 7:
  case 0xd:
  case 0x4a:
    param_2 = (CDC *)pAVar8;
LAB_100139ea:
    local_14[0] = (*pcVar13)(param_2);
    break;
  case 8:
    FUN_1001714b((undefined4 *)local_28);
    local_24 = *(undefined4 *)(pAVar8 + 4);
    local_8._0_1_ = 1;
    CWnd::CWnd(local_9c);
    local_7c = *(HWND__ **)pAVar8;
    uVar5 = *(undefined4 *)(pAVar8 + 8);
    local_8 = CONCAT31(local_8._1_3_,2);
    pCVar2 = CWnd::FromHandlePermanent(local_7c);
    if (pCVar2 == (CWnd *)0x0) {
      if ((*(int *)((int)this + 0x68) != 0) &&
         (pvVar4 = CMapPtrToPtr::GetValueAt
                             ((CMapPtrToPtr *)(*(int *)((int)this + 0x68) + 0x24),local_7c),
         pvVar4 != (void *)0x0)) {
        local_30 = pvVar4;
      }
      pCVar2 = local_9c;
    }
    local_14[0] = (*pcVar13)(local_28,pCVar2,uVar5);
    local_24 = 0;
    local_7c = (HWND__ *)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    CWnd::~CWnd(local_9c);
    goto LAB_10013aad;
  case 9:
    FUN_1001714b((undefined4 *)local_28);
    local_24 = *(undefined4 *)(pAVar8 + 4);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_14[0] = (*pcVar13)(local_28,*(undefined4 *)(pAVar8 + 8));
    local_24 = 0;
LAB_10013aad:
    local_8 = local_8 & 0xffffff00;
    CDC::~CDC(local_28);
    break;
  case 10:
    pCVar11 = (CMenu *)((uint)param_2 >> 0x10);
    pCVar2 = CWnd::FromHandle((HWND__ *)pAVar8);
    goto LAB_10013af1;
  case 0xb:
    pAVar8 = (AFX_MSGMAP_ENTRY *)((uint)param_2 >> 0x10);
    param_2 = (CDC *)((uint)param_2 & 0xffff);
    goto LAB_10013d4f;
  case 0xe:
  case 0x2f:
  case 0x4f:
    goto switchD_1001395e_caseD_e;
  case 0xf:
    pCVar11 = CMenu::FromHandle((HMENU__ *)pAVar8);
    pCVar2 = (CWnd *)((uint)param_2 >> 0x10);
LAB_10013af1:
    pCVar7 = (CWnd *)((uint)param_2 & 0xffff);
LAB_10013a1f:
    local_14[0] = (*pcVar13)(pCVar7,pCVar2,pCVar11);
    break;
  case 0x10:
  case 0x12:
  case 0x15:
  case 0x1e:
  case 0x2d:
  case 0x32:
  case 0x4c:
  case 0x53:
  case 0x54:
    goto LAB_10013d34;
  case 0x11:
  case 0x14:
    goto LAB_10013b1d;
  case 0x13:
    (*pcVar13)();
    break;
  case 0x16:
    pCVar2 = (CWnd *)((uint)param_2 >> 0x10);
    param_2 = (CDC *)((uint)param_2 & 0xffff);
    goto LAB_10013d34;
  case 0x17:
    param_2 = (CDC *)(int)sVar14;
    pCVar2 = (CWnd *)(int)sVar15;
    goto LAB_10013d34;
  case 0x18:
  case 0x19:
    pAVar12 = (AFX_MSGMAP_ENTRY *)((uint)pAVar8 >> 0x10);
    pCVar2 = (CWnd *)((uint)pAVar8 & 0xffff);
    goto LAB_10013b59;
  case 0x1a:
    pCVar2 = CWnd::FromHandle((HWND__ *)pAVar8);
    goto LAB_10013d34;
  case 0x1d:
  case 0x28:
  case 0x31:
    local_14[0] = (*pcVar13)();
    break;
  case 0x1f:
    pAVar12 = (AFX_MSGMAP_ENTRY *)CWnd::FromHandle((HWND__ *)param_2);
    pCVar2 = CWnd::FromHandle((HWND__ *)pAVar8);
    param_2 = (CDC *)(uint)(*(AFX_MSGMAP_ENTRY **)((int)this + 0x20) == pAVar8);
    goto LAB_10013b59;
  case 0x20:
    param_2 = CDC::FromHandle((HDC__ *)param_2);
    goto LAB_10013b1d;
  case 0x21:
    param_2 = (CDC *)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_10013b1d;
  case 0x22:
    pAVar12 = (AFX_MSGMAP_ENTRY *)(int)sVar15;
    pCVar2 = (CWnd *)(int)sVar14;
    param_2 = (CDC *)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_10013b59;
  case 0x23:
    goto LAB_10013baa;
  case 0x24:
    param_2 = (CDC *)pAVar8;
LAB_10013baa:
    param_2 = (CDC *)CWnd::FromHandle((HWND__ *)param_2);
    goto LAB_10013b1d;
  case 0x25:
    pAVar12 = (AFX_MSGMAP_ENTRY *)((uint)pAVar8 >> 0x10);
    pCVar2 = (CWnd *)((uint)pAVar8 & 0xffff);
    goto LAB_10013bbd;
  case 0x26:
    pCVar2 = (CWnd *)(int)sVar14;
    pAVar12 = (AFX_MSGMAP_ENTRY *)(int)sVar15;
LAB_10013bbd:
    param_2 = (CDC *)CWnd::FromHandle((HWND__ *)param_2);
    goto LAB_10013b59;
  case 0x27:
    param_2 = (CDC *)CWnd::FromHandle((HWND__ *)param_2);
    pCVar2 = (CWnd *)pAVar8;
    goto LAB_10013d34;
  case 0x29:
    pAVar12 = (AFX_MSGMAP_ENTRY *)((uint)param_2 >> 0x10);
    pCVar2 = CWnd::FromHandle((HWND__ *)pAVar8);
    goto LAB_10013bef;
  case 0x2a:
  case 0x2b:
    pCVar11 = (CMenu *)(int)(short)param_2;
    pCVar2 = (CWnd *)(int)(short)((uint)param_2 >> 0x10);
    param_2 = (CDC *)pCVar11;
    if (*(int *)(param_3 + 0x10) == 0x2a) {
      pAVar12 = (AFX_MSGMAP_ENTRY *)CWnd::FromHandle((HWND__ *)pAVar8);
      goto LAB_10013b59;
    }
    goto LAB_10013d34;
  case 0x2c:
  case 0x33:
    param_2 = (CDC *)pAVar8;
LAB_10013b1d:
    (*pcVar13)(param_2);
    break;
  case 0x2e:
  case 0x36:
  case 0x52:
    (*pcVar13)(param_2,pAVar8);
    goto LAB_1001377a;
  case 0x30:
  case 0x46:
    param_2 = (CDC *)(int)sVar14;
    pAVar8 = (AFX_MSGMAP_ENTRY *)(int)sVar15;
    goto LAB_10013d4f;
  case 0x34:
    pCVar2 = (CWnd *)((uint)param_2 >> 0x10);
    pAVar12 = pAVar8;
LAB_10013bef:
    param_2 = (CDC *)((uint)param_2 & 0xffff);
    goto LAB_10013b59;
  case 0x35:
    pCVar2 = (CWnd *)(int)sVar14;
    pAVar12 = (AFX_MSGMAP_ENTRY *)(int)sVar15;
LAB_10013b59:
    (*pcVar13)(param_2,pCVar2,pAVar12);
    break;
  case 0x37:
    iVar1 = (*pcVar13)((uint)param_2 & 0xffff,(uint)param_2 >> 0x10,(int)sVar14,(int)sVar15);
    local_14[0] = iVar1;
    goto LAB_100137a8;
  case 0x38:
    (*pcVar13)((uint)param_2 & 0xffff,(uint)param_2 >> 0x10,(int)sVar14,(int)sVar15);
    break;
  case 0x45:
    local_14[0] = (*pcVar13)();
    if (local_14[0] != 0) goto LAB_100139bb;
    break;
  case 0x48:
    pCVar2 = (CWnd *)CMenu::FromHandle((HMENU__ *)pAVar8);
    goto LAB_10013d34;
  case 0x49:
    pAVar8 = (AFX_MSGMAP_ENTRY *)CMenu::FromHandle((HMENU__ *)pAVar8);
LAB_10013d4f:
    local_14[0] = (*pcVar13)(param_2,pAVar8);
    break;
  case 0x4b:
    param_2 = (CDC *)CMenu::FromHandle((HMENU__ *)param_2);
    pCVar2 = (CWnd *)pAVar8;
    goto LAB_10013d34;
  case 0x4d:
    uVar10 = (uint)pAVar8 & 0xffff;
    uVar3 = (uint)pAVar8 >> 0x10 & 0xf000;
    uVar9 = (uint)pAVar8 >> 0x10 & 0xfff;
    param_2 = (CDC *)CWnd::FromHandle((HWND__ *)param_2);
    goto LAB_10013cee;
  case 0x4e:
    param_2 = (CDC *)((uint)param_2 & 0xff);
LAB_10013d34:
    (*pcVar13)(param_2,pCVar2);
    break;
  case 0x50:
    uVar3 = (uint)sVar14;
    uVar10 = (uint)sVar15;
    uVar9 = (uint)param_2 >> 0x10;
    param_2 = (CDC *)((uint)param_2 & 0xffff);
    goto LAB_10013cee;
  case 0x51:
    uVar3 = (uint)sVar14;
    uVar10 = (uint)sVar15;
    uVar9 = (uint)param_2 >> 0x10;
LAB_10013cee:
    (*pcVar13)(param_2,uVar9,uVar3,uVar10);
LAB_1001377a:
    local_14[0] = 1;
  }
switchD_1001395e_caseD_39:
  if (param_4 != (int *)0x0) {
    *param_4 = local_14[0];
  }
  local_8 = 0xffffffff;
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
  return 1;
}

