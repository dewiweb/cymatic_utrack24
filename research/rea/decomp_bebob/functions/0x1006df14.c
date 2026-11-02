// rea decompile_all
// name: CMFCRibbonBar::FindNextFocusedElement
// address: 0x1006df14
// body: available
// range: 0x1006df14-0x1006e370 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006df69 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static class CMFCRibbonBaseElement * __cdecl
   CMFCRibbonBar::FindNextFocusedElement(int,class CArray<class CMFCRibbonBaseElement *,class
   CMFCRibbonBaseElement *> const &,class CRect,class CMFCRibbonBaseElement *,int,int,int &)
   
   Library: Visual Studio 2010 Release */

CMFCRibbonBaseElement * __cdecl
CMFCRibbonBar::FindNextFocusedElement
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,CObject *param_7,
          int param_8,int param_9,undefined4 *param_10)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  CMFCRibbonBaseElement *pCVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_3c;
  int *local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *param_10 = 0;
  iVar3 = *(int *)(param_2 + 8);
  local_3c = 0;
  if (0 < iVar3) {
    do {
      if ((local_3c < 0) || (iVar3 <= local_3c)) goto LAB_1006df69;
      if (*(CObject **)(*(int *)(param_2 + 4) + local_3c * 4) == param_7) {
        iVar3 = CObject::IsKindOf(param_7,(CRuntimeClass *)&PTR_s_CMFCRibbonTab_10131b28);
        local_2c = (int *)0x0;
        if (param_1 == 9) {
          local_2c = (int *)0xffffffff;
          uVar2 = GetAsyncKeyState(0x10);
          iVar10 = local_3c;
          if ((uVar2 & 0x8000) == 0) goto LAB_1006e085;
          goto LAB_1006dfa8;
        }
        iVar3 = (**(code **)(*(int *)param_7 + 0xc0))();
        if (iVar3 != 0) break;
        iVar3 = *(int *)(param_7 + 0x18);
        iVar10 = *(int *)(param_7 + 0x1c);
        iVar4 = *(int *)(param_7 + 0x20);
        iVar9 = *(int *)(param_7 + 0x24);
        if (param_1 == 0x25) {
LAB_1006e235:
          if (param_1 == 0x27) {
            iVar6 = iVar4 + 1;
          }
          else {
            iVar6 = iVar3 + -6;
          }
          goto LAB_1006e258;
        }
        if (param_1 != 0x26) {
          if (param_1 == 0x27) goto LAB_1006e235;
          if (param_1 != 0x28) break;
        }
        iVar3 = (iVar4 + iVar3) / 2;
        if (param_1 == 0x28) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar9 = iVar10 + -1;
        }
        iVar10 = iVar3;
        goto LAB_1006e1bf;
      }
      local_3c = local_3c + 1;
    } while (local_3c < iVar3);
  }
  goto LAB_1006e362;
LAB_1006dfa8:
  do {
    iVar10 = iVar10 + -1;
    if (iVar10 < 0) {
      if (param_8 != 0) goto LAB_1006e064;
      if (param_9 != 0) goto LAB_1006e06f;
      iVar10 = *(int *)(param_2 + 8) + -1;
    }
    if (iVar10 == local_3c) goto LAB_1006e362;
    if (iVar3 == 0) {
LAB_1006dfec:
      if ((iVar10 < 0) || (*(int *)(param_2 + 8) <= iVar10)) goto LAB_1006df69;
      iVar4 = (**(code **)(**(int **)(*(int *)(param_2 + 4) + iVar10 * 4) + 0x78))();
      if (iVar4 != 0) {
        if (*(int *)(param_2 + 8) <= iVar10) goto LAB_1006df69;
        iVar4 = *(int *)(*(int *)(param_2 + 4) + iVar10 * 4);
        local_18.left = *(LONG *)(iVar4 + 0x18);
        local_18.top = *(LONG *)(iVar4 + 0x1c);
        local_18.right = *(LONG *)(iVar4 + 0x20);
        local_18.bottom = *(LONG *)(iVar4 + 0x24);
        BVar5 = IsRectEmpty(&local_18);
        if (BVar5 == 0) {
          local_2c = (int *)iVar10;
        }
      }
    }
    else {
      if ((iVar10 < 0) || (*(int *)(param_2 + 8) <= iVar10)) goto LAB_1006df69;
      iVar4 = CObject::IsKindOf(*(CObject **)(*(int *)(param_2 + 4) + iVar10 * 4),
                                (CRuntimeClass *)&PTR_s_CMFCRibbonTab_10131b28);
      if (iVar4 == 0) goto LAB_1006dfec;
    }
  } while ((int)local_2c < 0);
LAB_1006e04d:
  if (*(int *)(param_2 + 8) <= (int)local_2c) {
LAB_1006df69:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  goto LAB_1006e362;
LAB_1006e085:
  iVar10 = iVar10 + 1;
  if (*(int *)(param_2 + 8) <= iVar10) {
    iVar10 = 0;
    if (param_9 != 0) goto LAB_1006e135;
    if (param_8 != 0) goto LAB_1006e143;
  }
  if (iVar10 == local_3c) goto LAB_1006e362;
  if (iVar3 == 0) {
LAB_1006e0d4:
    if ((iVar10 < 0) || (*(int *)(param_2 + 8) <= iVar10)) goto LAB_1006df69;
    iVar4 = (**(code **)(**(int **)(*(int *)(param_2 + 4) + iVar10 * 4) + 0x78))();
    if (iVar4 != 0) {
      if (*(int *)(param_2 + 8) <= iVar10) goto LAB_1006df69;
      iVar4 = *(int *)(*(int *)(param_2 + 4) + iVar10 * 4);
      local_18.left = *(LONG *)(iVar4 + 0x18);
      local_18.top = *(LONG *)(iVar4 + 0x1c);
      local_18.right = *(LONG *)(iVar4 + 0x20);
      local_18.bottom = *(LONG *)(iVar4 + 0x24);
      BVar5 = IsRectEmpty(&local_18);
      if (BVar5 == 0) {
        local_2c = (int *)iVar10;
      }
    }
  }
  else {
    if ((iVar10 < 0) || (*(int *)(param_2 + 8) <= iVar10)) goto LAB_1006df69;
    iVar4 = CObject::IsKindOf(*(CObject **)(*(int *)(param_2 + 4) + iVar10 * 4),
                              (CRuntimeClass *)&PTR_s_CMFCRibbonTab_10131b28);
    if (iVar4 == 0) goto LAB_1006e0d4;
  }
  if (-1 < (int)local_2c) goto LAB_1006e04d;
  goto LAB_1006e085;
LAB_1006e258:
  do {
    if (param_1 == 0x27) {
      if (param_5 < iVar6) {
        if (param_9 != 0) goto LAB_1006e135;
        iVar6 = param_3;
        if (param_8 != 0) goto LAB_1006e143;
      }
    }
    else if (iVar6 < param_3) {
      if (param_8 != 0) goto LAB_1006e064;
      iVar6 = param_5;
      if (param_9 != 0) goto LAB_1006e06f;
    }
    if ((iVar3 <= iVar6) && (iVar6 <= iVar4)) break;
    local_28.right = iVar6 + 5;
    local_28.left = iVar6;
    local_28.top = iVar10;
    local_28.bottom = iVar9;
    if (((*(int *)(param_7 + 0x5c) == 0) && (*(int *)(param_7 + 0x60) == 0)) ||
       (iVar7 = (**(code **)(*(int *)param_7 + 0xa4))(), iVar7 != 0)) {
      InflateRect(&local_28,0,(local_28.bottom - local_28.top) / -3);
    }
    iVar7 = *(int *)(param_2 + 8);
    iVar11 = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    piVar1 = local_2c;
    if (0 < iVar7) {
      do {
        if ((iVar11 < 0) || (iVar7 <= iVar11)) goto LAB_1006df69;
        piVar1 = *(int **)(*(int *)(param_2 + 4) + iVar11 * 4);
        iVar7 = (**(code **)(*piVar1 + 0x78))();
        if ((iVar7 != 0) &&
           (BVar5 = IntersectRect(&local_18,(RECT *)(piVar1 + 6),&local_28), BVar5 != 0)) break;
        iVar7 = *(int *)(param_2 + 8);
        iVar11 = iVar11 + 1;
        piVar1 = local_2c;
      } while (iVar11 < iVar7);
    }
    local_2c = piVar1;
    iVar6 = iVar6 + (((param_1 != 0x27) - 1 & 10) - 5);
  } while (local_2c == (int *)0x0);
  goto LAB_1006e362;
LAB_1006e064:
  *param_10 = 0xffffffff;
  goto LAB_1006e362;
LAB_1006e06f:
  *param_10 = 2;
  goto LAB_1006e362;
LAB_1006e135:
  *param_10 = 1;
  goto LAB_1006e362;
LAB_1006e143:
  *param_10 = 0xfffffffe;
  goto LAB_1006e362;
LAB_1006e1bf:
  do {
    iVar4 = iVar9;
    if ((iVar10 < param_3) && (param_5 < iVar3)) break;
    do {
      while( true ) {
        if (local_2c != (int *)0x0) goto LAB_1006e224;
        local_2c = (int *)FUN_1006dec5(iVar10,iVar4,param_2);
        if (((local_2c != (int *)0x0) ||
            (local_2c = (int *)FUN_1006dec5(iVar3,iVar4,param_2), local_2c != (int *)0x0)) &&
           (iVar6 = (**(code **)(*local_2c + 0x78))(), iVar6 == 0)) {
          local_2c = (int *)0x0;
        }
        iVar4 = iVar4 + (((param_1 != 0x28) - 1 & 10) - 5);
        if (param_1 == 0x28) break;
        if (iVar4 < param_4) goto LAB_1006e224;
      }
    } while (iVar4 <= param_6);
LAB_1006e224:
    iVar10 = iVar10 + -5;
    iVar3 = iVar3 + 5;
  } while (local_2c == (int *)0x0);
LAB_1006e362:
  pCVar8 = (CMFCRibbonBaseElement *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar8;
}

