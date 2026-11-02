// rea decompile_all
// name: FUN_10070964
// address: 0x10070964
// body: available
// range: 0x10070964-0x10070b3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070b39 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_10070964(void *this,uint param_1)

{
  AFX_MODULE_STATE *pAVar1;
  CObject *pCVar2;
  int iVar3;
  UINT UVar4;
  undefined **ppuVar5;
  HMENU pHVar6;
  CMenu *pCVar7;
  undefined4 uVar8;
  undefined **local_28;
  HMENU local_24;
  CMFCToolBarButton *local_20;
  int local_1c;
  void *local_18;
  undefined **local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10070970;
  local_18 = this;
  while (*(int *)((int)this + 0xbf0) != 0) {
    pCVar2 = CObList::RemoveHead((CObList *)((int)this + 0xbe4));
    if (pCVar2 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar2 + 4))(1);
    }
  }
  pAVar1 = AfxGetModuleState();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_1012f19c,*(CObject **)(pAVar1 + 4));
  if ((pCVar2 != (CObject *)0x0) && (*(int *)(pCVar2 + 0xf0) != 0)) {
    local_28 = CMenu::vftable;
    local_24 = (HMENU)0x0;
    local_8 = 0;
    iVar3 = CMenu::LoadMenuA((CMenu *)&local_28,param_1);
    if (iVar3 != 0) {
      local_1c = GetMenuItemCount(local_24);
      param_1 = 0;
      if (0 < local_1c) {
        do {
          UVar4 = GetMenuItemID(local_24,param_1);
          ppuVar5 = FUN_1000ad47();
          FUN_10005e00(local_14,(int *)ppuVar5);
          local_8._0_1_ = 1;
          if (UVar4 == 0) {
            local_20 = FUN_1000858a(0x70);
            local_8._0_1_ = 2;
            if (local_20 == (CMFCToolBarButton *)0x0) {
              pCVar2 = (CObject *)0x0;
            }
            else {
              pCVar2 = (CObject *)CMFCToolBarButton::CMFCToolBarButton(local_20);
            }
            local_8._0_1_ = 1;
            if (pCVar2 == (CObject *)0x0) {
LAB_10070b39:
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            *(undefined4 *)(pCVar2 + 0x24) = 1;
LAB_10070af4:
            local_8._0_1_ = 1;
            CObList::AddTail((CObList *)((int)this + 0xbe4),pCVar2);
          }
          else {
            if (UVar4 != 0xffffffff) {
              local_20 = FUN_1000858a(0x70);
              local_8._0_1_ = 3;
              if (local_20 == (CMFCToolBarButton *)0x0) {
                pCVar2 = (CObject *)0x0;
              }
              else {
                pCVar2 = (CObject *)
                         CMFCToolBarButton::CMFCToolBarButton
                                   (local_20,UVar4,-1,(wchar_t *)local_14[0],0,0);
              }
              goto LAB_10070af4;
            }
            pHVar6 = GetSubMenu(local_24,param_1);
            pCVar7 = CMenu::FromHandle(pHVar6);
            if (pCVar7 == (CMenu *)0x0) goto LAB_10070b39;
            pCVar2 = CRuntimeClass::CreateObject(*(CRuntimeClass **)((int)this + 0xd14));
            if (pCVar7 == (CMenu *)0x0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(pCVar7 + 4);
            }
            Initialize(pCVar2,0,uVar8,0xffffffff,local_14[0],0);
            CObList::AddTail((CObList *)((int)local_18 + 0xbe4),pCVar2);
            this = local_18;
          }
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10001030(local_14[0] + -4);
          param_1 = param_1 + 1;
        } while ((int)param_1 < local_1c);
      }
      local_8 = 0xffffffff;
      local_28 = CMenu::vftable;
      CMenu::DestroyMenu((CMenu *)&local_28);
      return 1;
    }
    local_8 = 0xffffffff;
    local_28 = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_28);
  }
  return 0;
}

