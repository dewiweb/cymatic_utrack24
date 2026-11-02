// rea decompile_all
// name: FUN_100610f1
// address: 0x100610f1
// body: available
// range: 0x100610f1-0x100612ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100612ca to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_100610f1(CFrameImpl *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  HMENU pHVar4;
  CMenu *pCVar5;
  BOOL BVar6;
  ulong uVar7;
  CObject *pCVar8;
  CMFCVisualManager *pCVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CMFCCaptionButtonEx *local_18;
  ulong local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x100610fd;
  iVar3 = CFrameImpl::IsOwnerDrawCaption(param_1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x98) == 0) {
      local_14 = CWnd::GetExStyle(*(CWnd **)(param_1 + 0xb0));
      pHVar4 = GetSystemMenu(*(HWND *)(*(int *)(param_1 + 0xb0) + 0x20),0);
      pCVar5 = CMenu::FromHandle(pHVar4);
      if ((pCVar5 != (CMenu *)0x0) && (BVar6 = IsMenu(*(HMENU *)(pCVar5 + 4)), BVar6 != 0)) {
        pHVar4 = *(HMENU *)(pCVar5 + 4);
        BVar6 = IsMenu(pHVar4);
        if ((BVar6 == 0) ||
           (uVar7 = CWnd::GetExStyle(*(CWnd **)(param_1 + 0xb0)), (uVar7 & 0x80000) == 0)) {
          pHVar4 = (HMENU)0x0;
        }
        if (pHVar4 != (HMENU)0x0) {
          local_18 = FUN_1000858a(0x40);
          local_8 = 0;
          if (local_18 == (CMFCCaptionButtonEx *)0x0) {
            pCVar8 = (CObject *)0x0;
          }
          else {
            pCVar8 = (CObject *)CMFCCaptionButtonEx::CMFCCaptionButtonEx(local_18,0x13);
          }
          local_8 = 0xffffffff;
          CObList::AddTail((CObList *)(param_1 + 0x8c),pCVar8);
          if ((local_14 & 0x10000) != 0) {
            local_18 = FUN_1000858a(0x40);
            local_8 = 1;
            if (local_18 == (CMFCCaptionButtonEx *)0x0) {
              pCVar8 = (CObject *)0x0;
            }
            else {
              pCVar8 = (CObject *)CMFCCaptionButtonEx::CMFCCaptionButtonEx(local_18,0x1a);
            }
            local_8 = 0xffffffff;
            CObList::AddTail((CObList *)(param_1 + 0x8c),pCVar8);
          }
          if ((local_14 & 0x20000) != 0) {
            local_18 = FUN_1000858a(0x40);
            local_8 = 2;
            if (local_18 == (CMFCCaptionButtonEx *)0x0) {
              pCVar8 = (CObject *)0x0;
            }
            else {
              pCVar8 = (CObject *)CMFCCaptionButtonEx::CMFCCaptionButtonEx(local_18,0x1b);
            }
            local_8 = 0xffffffff;
            CObList::AddTail((CObList *)(param_1 + 0x8c),pCVar8);
          }
        }
      }
    }
    CFrameImpl::GetCaptionRect(param_1);
    pCVar9 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar9 + 0x204))(&local_20,0);
    iVar3 = (local_24 - local_2c) + -2;
    if (iVar3 <= local_1c) {
      local_1c = iVar3;
    }
    iVar11 = local_28 - local_20;
    iVar3 = ((local_24 - local_2c) - local_1c) / 2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    puVar10 = *(undefined4 **)(param_1 + 0x90);
    while (puVar10 != (undefined4 *)0x0) {
      if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = (undefined4 *)*puVar10;
      iVar2 = puVar10[2];
      *(int *)(iVar2 + 0x30) = iVar11;
      *(int *)(iVar2 + 0x34) = iVar3 + local_2c;
      *(int *)(iVar2 + 0x38) = local_20 + iVar11;
      *(int *)(iVar2 + 0x3c) = local_1c + iVar3 + local_2c;
      iVar11 = iVar11 - local_20;
      puVar10 = puVar1;
    }
    RedrawWindow(*(HWND *)(*(int *)(param_1 + 0xb0) + 0x20),(RECT *)0x0,(HRGN)0x0,0x541);
  }
  return;
}

