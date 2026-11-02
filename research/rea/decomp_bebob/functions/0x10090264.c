// rea decompile_all
// name: CDockingPanesRow::RepositionPanes
// address: 0x10090264
// body: available
// range: 0x10090264-0x10090726 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10090476 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::RepositionPanes(class CRect &,unsigned
   int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockingPanesRow::RepositionPanes
          (CDockingPanesRow *this,CRect *param_1,uint param_2,int param_3,int param_4)

{
  CPane *pCVar1;
  int iVar2;
  BOOL BVar3;
  long lVar4;
  CPane *pCVar5;
  CPane *pCVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  undefined1 uVar13;
  void **ppvVar14;
  void *local_5c;
  CPane *local_58;
  char local_51;
  int *local_50;
  int *local_4c;
  RECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x30) == 0) || (iVar2 = (**(code **)(*(int *)this + 0x14))(), iVar2 == 0))
  goto LAB_10090717;
  local_28.left = *(LONG *)param_1;
  local_28.top = *(LONG *)(param_1 + 4);
  local_28.right = *(LONG *)(param_1 + 8);
  local_28.bottom = *(LONG *)(param_1 + 0xc);
  CWnd::ClientToScreen(*(CWnd **)(this + 0x44),&local_28);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(this,(CRect *)&local_18);
  BVar3 = IsRectEmpty(&local_18);
  if (BVar3 != 0) goto LAB_10090717;
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    piVar9 = (int *)(((local_28.bottom - local_18.bottom) - local_28.top) + local_18.top);
  }
  else {
    piVar9 = (int *)(((local_28.right - local_18.right) - local_28.left) + local_18.left);
  }
  local_5c = (void *)0x0;
  local_4c = piVar9;
  iVar2 = (**(code **)(*(int *)this + 0x60))();
  if (iVar2 != 0) {
    piVar9 = *(int **)(*(int *)(this + 0x28) + 8);
    if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
      iVar2 = local_28.bottom - local_28.top;
      iVar8 = local_18.right - local_18.left;
    }
    else {
      iVar2 = local_18.bottom - local_18.top;
      iVar8 = local_28.right - local_28.left;
    }
    (**(code **)(*piVar9 + 0x234))(0,local_18.left,local_18.top,iVar8,iVar2,0x16,0);
    RedrawWindow((HWND)piVar9[8],(RECT *)0x0,(HRGN)0x0,0x105);
    goto LAB_10090717;
  }
  local_50 = (int *)(**(code **)(*(int *)this + 0x5c))(1);
  if ((int)local_50 < 0) {
    if (param_3 == 0) goto LAB_10090394;
    pCVar5 = *(CPane **)(this + 0x28);
    local_50 = piVar9;
    do {
      do {
        if (pCVar5 == (CPane *)0x0) goto LAB_10090517;
        if (pCVar5 == (CPane *)0x0) goto LAB_10090476;
        piVar11 = *(int **)(pCVar5 + 8);
        pCVar5 = *(CPane **)pCVar5;
        iVar2 = (**(code **)(*piVar11 + 0x178))();
      } while ((iVar2 == 0) && (piVar9 = local_4c, *(int *)(this + 4) == 0));
      iVar2 = (**(code **)(*piVar11 + 0x2ac))(local_50,&local_5c);
      pCVar6 = pCVar5;
      if (iVar2 != 0) {
        while (pCVar6 != (CPane *)0x0) {
          if (pCVar6 == (CPane *)0x0) goto LAB_10090476;
          local_58 = *(CPane **)pCVar6;
          pCVar1 = *(CPane **)(pCVar6 + 8);
          iVar8 = (**(code **)(*(int *)pCVar1 + 0x178))();
          if ((iVar8 != 0) || (pCVar6 = local_58, *(int *)(this + 4) != 0)) {
            MovePane(this,pCVar1,iVar2,true,&local_5c);
            pCVar6 = local_58;
          }
        }
      }
      local_50 = (int *)((int)local_50 - iVar2);
      piVar9 = local_4c;
    } while (0 < (int)local_50);
  }
  else if ((param_3 == 0) && (lVar4 = _labs((long)piVar9), (int)local_50 < lVar4)) {
LAB_10090394:
    if ((param_2 == 3) || (local_58 = (CPane *)((uint)local_58 & 0xffffff00), param_2 == 1)) {
      local_58 = (CPane *)CONCAT31(local_58._1_3_,1);
    }
    if (-1 < (int)local_50) {
      uVar10 = (uint)local_58 & 0xff;
      iVar2 = (uint)(-1 < (int)local_4c) * 2 + -1;
      iVar8 = GetOutOfBoundsOffset(this,(CPane *)0x0,uVar10);
      lVar4 = _labs(iVar8);
      ShiftPanes(this,(CPane *)0x0,((int)local_50 - lVar4) * iVar2,uVar10);
      lVar4 = _labs((long)local_4c);
      piVar9 = (int *)((lVar4 - (int)local_50) * iVar2);
    }
    piVar11 = *(int **)(this + 0x2c);
    while (piVar11 != (int *)0x0) {
      if (piVar11 == (int *)0x0) goto LAB_10090476;
      local_4c = (int *)piVar11[1];
      pCVar5 = (CPane *)piVar11[2];
      iVar2 = (**(code **)(*(int *)pCVar5 + 0x178))();
      if ((iVar2 != 0) || (piVar11 = local_4c, *(int *)(this + 4) != 0)) {
        local_50 = (int *)(**(code **)(*(int *)pCVar5 + 0x2ac))(piVar9,&local_5c);
        ppvVar14 = &local_5c;
        pCVar6 = local_58;
        lVar4 = _labs((long)local_50);
        uVar13 = SUB41(pCVar6,0);
        lVar7 = _labs((long)piVar9);
        MovePane(this,pCVar5,lVar7 - lVar4,(bool)uVar13,ppvVar14);
        if (local_50 == piVar9) break;
        piVar9 = (int *)((int)piVar9 - (int)local_50);
        piVar11 = local_4c;
      }
    }
    goto LAB_10090717;
  }
LAB_10090517:
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    local_18.top = local_28.top;
    local_18.bottom = local_28.bottom;
  }
  else {
    local_18.left = local_28.left;
    local_18.right = local_28.right;
  }
  pCVar5 = FindFirstVisiblePane(this,1);
  AdjustPaneToRowArea(this,pCVar5,(CRect *)&local_18,&local_5c);
  pCVar6 = FindFirstVisiblePane(this,0);
  if (pCVar5 != pCVar6) {
    AdjustPaneToRowArea(this,pCVar6,(CRect *)&local_18,&local_5c);
  }
  if (((param_2 != 0xffffffff) && (param_3 != 0)) &&
     (iVar2 = (**(code **)(*(int *)this + 0x5c))(1), 0 < iVar2 + (int)piVar9)) {
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    piVar9 = *(int **)(this + 0x28);
    while (piVar9 != (int *)0x0) {
      if (piVar9 == (int *)0x0) {
LAB_10090476:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_50 = (int *)*piVar9;
      pCVar5 = (CPane *)piVar9[2];
      local_58 = pCVar5;
      iVar2 = (**(code **)(*(int *)pCVar5 + 0x178))();
      if ((iVar2 != 0) || (piVar9 = local_50, *(int *)(this + 4) != 0)) {
        ::GetWindowRect(*(HWND *)(pCVar5 + 0x20),&local_38);
        CPane::GetVirtualRect(pCVar5,(CRect *)&local_48);
        BVar3 = EqualRect(&local_38,&local_48);
        piVar9 = local_50;
        if (BVar3 == 0) {
          uVar10 = *(uint *)(this + 0x40);
          local_4c = (int *)(uVar10 & 0x2000);
          if ((((local_4c == (int *)0x0) && ((uVar10 & 0x8000) == 0)) ||
              (local_38.left <= local_48.left)) &&
             (((local_4c != (int *)0x0 || ((uVar10 & 0x8000) != 0)) ||
              (local_38.top <= local_48.top)))) {
            local_51 = '\0';
          }
          else {
            local_51 = '\x01';
          }
          piVar11 = (int *)0x0;
          if (((local_4c == (int *)0x0) && ((uVar10 & 0x8000) == 0)) ||
             ((param_2 != 1 && (param_2 != 2)))) {
            if (((local_4c == (int *)0x0) && ((uVar10 & 0x8000) == 0)) &&
               ((param_2 == 3 || (param_2 == 6)))) {
              lVar4 = _labs(local_48.top - local_38.top);
              lVar7 = _labs(param_4);
              if (lVar4 <= lVar7) {
                lVar4 = local_48.top - local_38.top;
                goto LAB_100906d1;
              }
              goto LAB_10090682;
            }
          }
          else {
            lVar4 = _labs(local_48.left - local_38.left);
            lVar7 = _labs(param_4);
            if (lVar7 < lVar4) {
LAB_10090682:
              piVar11 = (int *)_labs(param_4);
            }
            else {
              lVar4 = local_48.left - local_38.left;
LAB_100906d1:
              piVar11 = (int *)_labs(lVar4);
            }
          }
          bVar12 = local_51 == '\0';
          local_4c = piVar11;
          iVar2 = IsEnoughSpaceToMove(this,local_58,bVar12,(int *)&local_4c);
          piVar9 = local_50;
          if (iVar2 != 0) {
            MovePane(this,local_58,(int)piVar11,bVar12,&local_5c);
            piVar9 = local_50;
          }
        }
      }
    }
  }
LAB_10090717:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

