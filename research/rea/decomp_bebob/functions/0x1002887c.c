// rea decompile_all
// name: CMFCToolBar::FindDropIndex
// address: 0x1002887c
// body: available
// range: 0x1002887c-0x10028bec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002896f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::FindDropIndex(class CPoint,class CRect &)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::FindDropIndex(CMFCToolBar *this,int param_2,int param_3,LPRECT param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LONG LVar4;
  int iVar5;
  LONG LVar6;
  LONG LVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  int local_3c;
  int local_28;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_1c = -1;
  SetRectEmpty(param_4);
  uVar8 = (**(code **)(*(int *)this + 400))();
  bVar11 = (uVar8 & 0xa000) == 0;
  local_3c = param_3;
  if (param_3 < 0) {
    local_3c = 0;
  }
  if ((*(int *)(this + 0xbd4) == 0) ||
     ((*(int *)(this + 0xbd4) == 1 && (*(int *)(this + 0xca0) != 0)))) {
    GetClientRect(*(HWND *)(this + 0x20),param_4);
    local_1c = 0;
  }
  else {
    if (bVar11) {
      puVar9 = *(undefined4 **)(this + 0xbcc);
      local_20 = 0;
      while (puVar9 != (undefined4 *)0x0) {
        if (puVar9 == (undefined4 *)0x0) goto LAB_1002896f;
        iVar10 = puVar9[2];
        puVar9 = (undefined4 *)*puVar9;
        if (iVar10 == 0) goto LAB_1002896f;
        iVar5 = *(int *)(iVar10 + 0x58);
        LVar4 = *(LONG *)(iVar10 + 0x5c);
        iVar1 = *(int *)(iVar10 + 0x60);
        if (local_3c < iVar5) {
          param_4->left = *(LONG *)(iVar10 + 0x54);
          param_4->top = iVar5;
          param_4->right = LVar4;
          param_4->bottom = iVar1;
          param_4->bottom = param_4->top;
          local_1c = local_20;
          goto LAB_10028b26;
        }
        if (local_3c <= iVar1) {
          param_4->left = *(LONG *)(iVar10 + 0x54);
          param_4->top = iVar5;
          param_4->right = LVar4;
          param_4->bottom = iVar1;
          if (iVar1 - local_3c < local_3c - iVar5) {
            param_4->top = param_4->bottom;
            local_1c = local_20 + 1;
          }
          else {
            param_4->bottom = param_4->top;
            local_1c = local_20;
          }
          goto LAB_10028b26;
        }
        local_20 = local_20 + 1;
      }
      goto LAB_10028bba;
    }
    local_28 = (**(code **)(*(int *)this + 0x354))();
    local_20 = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    puVar9 = *(undefined4 **)(this + 0xbcc);
    while (puVar9 != (undefined4 *)0x0) {
      if (puVar9 == (undefined4 *)0x0) goto LAB_1002896f;
      iVar10 = puVar9[2];
      puVar9 = (undefined4 *)*puVar9;
      if (iVar10 == 0) goto LAB_1002896f;
      LVar4 = local_18.left;
      iVar5 = local_18.top;
      LVar6 = local_18.right;
      LVar7 = local_18.bottom;
      if ((*(int *)(iVar10 + 0x40) == 0) && (*(int *)(iVar10 + 0x50) != 0)) {
        iVar5 = *(int *)(iVar10 + 0x58);
        LVar4 = *(int *)(iVar10 + 0x54);
        LVar6 = *(int *)(iVar10 + 0x5c);
        LVar7 = *(int *)(iVar10 + 0x60);
        if ((0 < local_20) && (local_18.bottom < iVar5)) {
          local_28 = iVar5 - local_18.bottom;
          break;
        }
      }
      local_18.bottom = LVar7;
      local_18.right = LVar6;
      local_18.top = iVar5;
      local_18.left = LVar4;
      local_20 = local_20 + 1;
    }
    iVar10 = (**(code **)(*(int *)this + 0x354))();
    local_3c = local_3c / (iVar10 + local_28);
    local_20 = 0;
    puVar9 = *(undefined4 **)(this + 0xbcc);
    iVar10 = 0;
    while (puVar9 != (undefined4 *)0x0) {
      if (puVar9 == (undefined4 *)0x0) {
LAB_1002896f:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar5 = puVar9[2];
      puVar9 = (undefined4 *)*puVar9;
      if (iVar5 == 0) goto LAB_1002896f;
      iVar1 = local_18.left;
      iVar2 = local_18.top;
      iVar3 = local_18.right;
      LVar4 = local_18.bottom;
      if ((*(int *)(iVar5 + 0x40) == 0) && (*(int *)(iVar5 + 0x50) != 0)) {
        iVar1 = *(int *)(iVar5 + 0x54);
        iVar2 = *(int *)(iVar5 + 0x58);
        iVar3 = *(int *)(iVar5 + 0x5c);
        LVar4 = *(LONG *)(iVar5 + 0x60);
        if ((0 < iVar10) && (local_18.bottom <= iVar2)) {
          local_20 = local_20 + 1;
        }
        if (local_3c < local_20) {
          param_4->left = local_18.left;
          param_4->top = local_18.top;
          param_4->right = local_18.right;
          param_4->bottom = local_18.bottom;
          param_4->left = param_4->right;
          local_1c = iVar10 + -1;
        }
        else {
          if (local_20 != local_3c) goto LAB_100289fd;
          if (param_2 < iVar1) {
            param_4->left = iVar1;
            param_4->top = iVar2;
            param_4->right = iVar3;
            param_4->bottom = LVar4;
          }
          else {
            if (iVar3 < param_2) goto LAB_100289fd;
            param_4->left = iVar1;
            param_4->top = iVar2;
            param_4->right = iVar3;
            param_4->bottom = LVar4;
            if (iVar3 - param_2 < param_2 - iVar1) {
              param_4->left = param_4->right;
              local_1c = iVar10 + 1;
              goto LAB_10028a2b;
            }
          }
          param_4->right = param_4->left;
          local_1c = iVar10;
        }
LAB_10028a2b:
        if (local_1c != -1) goto LAB_10028b26;
        break;
      }
LAB_100289fd:
      local_18.bottom = LVar4;
      local_18.right = iVar3;
      local_18.top = iVar2;
      local_18.left = iVar1;
      iVar10 = iVar10 + 1;
    }
    if (local_20 != local_3c) goto LAB_10028bba;
    param_4->left = local_18.left;
    param_4->top = local_18.top;
    param_4->right = local_18.right;
    param_4->bottom = local_18.bottom;
    param_4->left = param_4->right;
    local_1c = iVar10;
  }
LAB_10028b26:
  if (-1 < local_1c) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    if ((*(int *)(this + 0xca0) != 0) && (local_1c == *(int *)(this + 0xbd4))) {
      iVar10 = *(int *)(this + 0xbd4) + -1;
      local_1c = 0;
      if (-1 < iVar10) {
        local_1c = iVar10;
      }
    }
    if (bVar11) {
      iVar10 = param_4->top + -3;
      if (iVar10 < local_18.top) {
        iVar10 = local_18.top;
      }
      param_4->top = iVar10;
      param_4->bottom = iVar10 + 6;
      if (local_18.bottom < iVar10 + 6) {
        param_4->bottom = local_18.bottom;
        param_4->top = local_18.bottom + -6;
      }
    }
    else {
      iVar10 = param_4->left + -3;
      if (iVar10 < local_18.left) {
        iVar10 = local_18.left;
      }
      param_4->left = iVar10;
      param_4->right = iVar10 + 6;
      if (local_18.right < iVar10 + 6) {
        param_4->right = local_18.right;
        param_4->left = local_18.right + -6;
      }
    }
  }
LAB_10028bba:
  if ((*(int *)(this + 0xca0) != 0) && (local_1c == *(int *)(this + 0xbd4))) {
    SetRectEmpty(param_4);
  }
  iVar10 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar10;
}

