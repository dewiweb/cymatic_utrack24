// rea decompile_all
// name: CDockSite::DockPane
// address: 0x10091a77
// body: available
// range: 0x10091a77-0x10091ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10091be6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockSite::DockPane(class CPane *,enum AFX_DOCK_METHOD,struct
   tagRECT const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockSite::DockPane(CDockSite *this,CPane *param_1,AFX_DOCK_METHOD param_2,tagRECT *param_3)

{
  int iVar1;
  __POSITION *p_Var2;
  int iVar3;
  BOOL BVar4;
  RECT *pRVar5;
  CDockingPanesRow *pCVar6;
  CObject *pCVar7;
  CDockSite *pCVar8;
  CObject *pCStack_80;
  AFX_DOCK_METHOD AStack_7c;
  int local_58;
  int local_54;
  tagPOINT local_50;
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  CDockSite *local_38;
  CObject *local_34;
  RECT *local_30;
  char local_29;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_30 = param_3;
  local_34 = (CObject *)param_1;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_38 = this;
  SetRectEmpty(&local_28);
  if (local_30 != (RECT *)0x0) {
    CopyRect(&local_18,local_30);
    local_28.left = local_18.left;
    local_28.top = local_18.top;
    local_28.right = local_18.right;
    local_28.bottom = local_18.bottom;
    param_1 = (CPane *)local_34;
  }
  iVar1 = (**(code **)(*(int *)this + 0x160))();
  local_3c = (uint)(iVar1 == 0);
  local_48 = (uint)(local_3c == 0);
  (**(code **)(*(int *)param_1 + 0x25c))();
  AStack_7c = 0x10091b10;
  p_Var2 = CObList::Find((CObList *)(this + 0x100),(CObject *)param_1,(__POSITION *)0x0);
  pCVar7 = local_34;
  pCVar8 = local_38;
  if (p_Var2 != (__POSITION *)0x0) goto LAB_10091dcb;
  pCVar6 = (CDockingPanesRow *)0x0;
  local_29 = '\0';
  if (param_2 == 1) {
    local_50.x = 0;
    local_50.y = 0;
    GetCursorPos(&local_50);
    pCVar8 = local_38;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    AStack_7c = 0x10091b51;
    GetWindowRect(*(HWND *)(local_38 + 0x20),&local_18);
    AStack_7c = local_50.x;
    pCStack_80 = (CObject *)0x10091b62;
    pCVar6 = RowFromPoint(pCVar8);
  }
  else {
    if (param_2 == 2) {
      AStack_7c = 0x10091c04;
      p_Var2 = CObList::Find((CObList *)(local_38 + 0x11c),*(CObject **)(local_34 + 0x1f8),
                             (__POSITION *)0x0);
      if (p_Var2 == (__POSITION *)0x0) goto LAB_10091b7f;
      pCVar6 = *(CDockingPanesRow **)(pCVar7 + 0x1f8);
    }
    else {
      if (param_2 != 4) goto LAB_10091ce3;
LAB_10091b7f:
      iVar1 = *(int *)(pCVar8 + 0x128);
      iVar3 = *(int *)(pCVar7 + 0x1f0);
      if (DAT_101680ec == 0) {
        if (iVar3 < iVar1) {
          if (param_2 != 2) goto LAB_10091c71;
          p_Var2 = CObList::FindIndex((CObList *)(pCVar8 + 0x11c),iVar3);
          if (p_Var2 == (__POSITION *)0x0) goto LAB_10091be6;
          pCVar6 = *(CDockingPanesRow **)(p_Var2 + 8);
          local_29 = '\x01';
          goto LAB_10091c94;
        }
        if (param_2 == 2) {
          BVar4 = IsRectEmpty((RECT *)(pCVar7 + 0x208));
          if (BVar4 == 0) {
            pCStack_80 = (CObject *)((RECT *)(pCVar7 + 0x208))->left;
            AStack_7c = *(AFX_DOCK_METHOD *)(pCVar7 + 0x20c);
            pCVar6 = FindRowByRect(local_38);
            pCVar7 = local_34;
            pCVar8 = local_38;
            goto LAB_10091c94;
          }
        }
        else {
LAB_10091c71:
          if ((param_2 == 4) && (local_30 != (RECT *)0x0)) {
            CopyRect((LPRECT)&pCStack_80,local_30);
            pCVar6 = FindRowByRect(pCVar8);
            goto LAB_10091c94;
          }
        }
      }
      else {
        if ((iVar1 + -1 < iVar3) &&
           (local_30 = (RECT *)0x0, iVar3 - iVar1 != -1 && -1 < (iVar3 - iVar1) + 1)) {
          do {
            iVar3 = local_44;
            if (local_3c == 0) {
              iVar3 = local_40;
            }
            AStack_7c = 0x10091bc0;
            AddRow(pCVar8,(__POSITION *)0x0,iVar3);
            local_30 = (RECT *)((int)&local_30->left + 1);
          } while ((int)local_30 < (*(int *)(pCVar7 + 0x1f0) - iVar1) + 1);
        }
        p_Var2 = CObList::FindIndex((CObList *)(pCVar8 + 0x11c),*(int *)(pCVar7 + 0x1f0));
        if (p_Var2 == (__POSITION *)0x0) goto LAB_10091be6;
        pCVar6 = *(CDockingPanesRow **)(p_Var2 + 8);
LAB_10091c94:
        if (pCVar6 != (CDockingPanesRow *)0x0) goto LAB_10091cb7;
      }
      iVar1 = local_44;
      if (local_3c == 0) {
        iVar1 = local_40;
      }
      AStack_7c = 0x10091cae;
      AddRow(pCVar8,(__POSITION *)0x0,iVar1);
      pCVar6 = *(CDockingPanesRow **)(*(int *)(pCVar8 + 0x124) + 8);
    }
LAB_10091cb7:
    AStack_7c = 0x10091cc8;
    CopyRect(&local_18,(RECT *)(pCVar7 + 0x208));
    local_28.left = local_18.left;
    local_28.top = local_18.top;
    local_28.right = local_18.right;
    local_28.bottom = local_18.bottom;
    CWnd::ClientToScreen((CWnd *)local_38,&local_28);
    pCVar8 = local_38;
  }
LAB_10091ce3:
  local_30 = (RECT *)0x0;
  if (pCVar6 == (CDockingPanesRow *)0x0) {
LAB_10091d3d:
    if (local_29 == '\0') {
      pRVar5 = (RECT *)0x0;
    }
    else {
      pRVar5 = *(RECT **)(pCVar8 + 0x120);
    }
LAB_10091d4d:
    iVar1 = local_44;
    if (local_3c == 0) {
      iVar1 = local_40;
    }
    AStack_7c = 0x10091d61;
    pCVar6 = AddRow(pCVar8,(__POSITION *)pRVar5,iVar1);
  }
  else {
    iVar1 = (**(code **)(*(int *)pCVar6 + 0x60))();
    if ((iVar1 != 0) ||
       ((iVar1 = (**(code **)(*(int *)local_34 + 0x280))(), pRVar5 = local_30, iVar1 == 0 &&
        (iVar1 = (**(code **)(*(int *)pCVar6 + 0x40))(), pRVar5 = local_30, iVar1 == 0)))) {
      AStack_7c = 0x10091d1c;
      pRVar5 = (RECT *)CObList::Find((CObList *)(pCVar8 + 0x11c),(CObject *)pCVar6,(__POSITION *)0x0
                                    );
      if (pRVar5 == (RECT *)0x0) {
LAB_10091be6:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar6 = (CDockingPanesRow *)0x0;
    }
    if (pCVar6 == (CDockingPanesRow *)0x0) {
      if (pRVar5 == (RECT *)0x0) goto LAB_10091d3d;
      if (local_29 == '\0') {
        pRVar5 = (RECT *)pRVar5->left;
      }
      goto LAB_10091d4d;
    }
  }
  AStack_7c = param_2;
  pCStack_80 = local_34;
  (**(code **)(*(int *)pCVar6 + 0x1c))();
  (**(code **)(*(int *)local_34 + 0x25c))(&local_58,0,local_48);
  if ((local_58 != local_44) || (local_54 != local_40)) {
    if (local_3c == 0) {
      local_58 = local_54;
    }
    ResizeRow(pCVar8,pCVar6,local_58,1);
  }
  CObList::AddTail((CObList *)(pCVar8 + 0x100),local_34);
  (**(code **)(*(int *)pCVar8 + 0x2a4))();
  CWnd::ShowWindow((CWnd *)pCVar8,5);
LAB_10091dcb:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

