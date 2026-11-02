// rea decompile_all
// name: CTabbedPane::ResetTabs
// address: 0x100c0cf4
// body: available
// range: 0x100c0cf4-0x100c0df9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static void __stdcall CTabbedPane::ResetTabs(void)
   
   Library: Visual Studio 2010 Release */

void CTabbedPane::ResetTabs(void)

{
  HWND hWnd;
  BOOL BVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  CMFCVisualManager *pCVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100c0d00;
  puVar7 = DAT_101621ac;
  while (puVar7 != (undefined4 *)0x0) {
    hWnd = (HWND)puVar7[2];
    puVar7 = (undefined4 *)*puVar7;
    BVar1 = IsWindow(hWnd);
    if (BVar1 != 0) {
      pCVar2 = CWnd::FromHandlePermanent(hWnd);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTabbedPane_101621c4,(CObject *)pCVar2);
      if (pCVar3 != (CObject *)0x0) {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                    *(CObject **)(pCVar3 + 0x358));
        pCVar4 = CMFCVisualManager::GetInstance();
        iVar6 = *(int *)pCVar3;
        uVar5 = (**(code **)(*(int *)pCVar4 + 300))(1);
        (**(code **)(iVar6 + 0x240))(uVar5);
        pCVar4 = CMFCVisualManager::GetInstance();
        iVar6 = (**(code **)(*(int *)pCVar4 + 0x130))();
        CMFCTabCtrl::SetDrawFrame((CMFCTabCtrl *)pCVar3,iVar6);
        CMFCTabCtrl::ModifyTabStyle((CMFCTabCtrl *)pCVar3,DAT_10169318);
        (**(code **)(*(int *)pCVar3 + 0x180))();
        if (DAT_1016931c == 0) {
          FUN_10093f29(pCVar3,0);
          local_24 = CArray<unsigned_long,unsigned_long>::vftable;
          local_20 = 0;
          local_14 = 0;
          local_18 = 0;
          local_1c = 0;
          local_8 = 0;
          CMFCBaseTabCtrl::SetAutoColors
                    ((CMFCBaseTabCtrl *)pCVar3,(CArray<unsigned_long,unsigned_long> *)&local_24);
          local_8 = 0xffffffff;
          FUN_10005770(&local_24);
        }
        else {
          FUN_10093f29(pCVar3,1);
          CMFCBaseTabCtrl::SetAutoColors
                    ((CMFCBaseTabCtrl *)pCVar3,
                     (CArray<unsigned_long,unsigned_long> *)&PTR_vftable_10162194);
        }
      }
    }
  }
  return;
}

