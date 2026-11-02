// rea decompile_all
// name: CMFCToolBarsCommandsPropertyPage::OnSelchangeCategory
// address: 0x100e426f
// body: available
// range: 0x100e426f-0x100e44ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e4353 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsCommandsPropertyPage::OnSelchangeCategory(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsCommandsPropertyPage::OnSelchangeCategory(CMFCToolBarsCommandsPropertyPage *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  AFX_MODULE_STATE *pAVar3;
  undefined **ppuVar4;
  int iVar5;
  LRESULT LVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CObject *pCVar9;
  CCommandManager *this_00;
  int *piVar10;
  LRESULT LVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int local_2c;
  WPARAM local_28;
  ushort *local_24;
  WPARAM local_20;
  int local_1c;
  WPARAM local_18;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100e427b;
  CWnd::UpdateData((CWnd *)this,1);
  local_28 = SendMessageW(*(HWND *)(this + 200),0x188,0,0);
  if (local_28 != 0xffffffff) {
    pAVar3 = AfxGetModuleState();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar3 + 4));
    local_8 = 0;
    SendMessageW(*(HWND *)(this + 0x13c),0xb,0,0);
    SendMessageW(*(HWND *)(this + 0x13c),0x184,0,0);
    ppuVar4 = FUN_1000ad47();
    FUN_10005e00(&local_2c,(int *)ppuVar4);
    local_8 = CONCAT31(local_8._1_3_,1);
    GetText(this + 0xa8,local_28,(CSimpleStringT<wchar_t,0> *)&local_2c);
    iVar5 = FUN_10005720(&local_2c,*(ushort **)(this + 0x1a4));
    OnChangeSelButton(this,(CMFCToolBarButton *)0x0);
    LVar6 = SendMessageW(*(HWND *)(this + 200),0x199,local_28,0);
    pHVar7 = GetParent(*(HWND *)(this + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar7);
    pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                                (CObject *)pCVar8);
    if (pCVar9 == (CObject *)0x0) {
LAB_100e4353:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    puVar2 = *(undefined4 **)(LVar6 + 4);
    while (puVar2 != (undefined4 *)0x0) {
      if (puVar2 == (undefined4 *)0x0) goto LAB_100e4353;
      puVar1 = (undefined4 *)*puVar2;
      local_1c = puVar2[2];
      if (local_1c == 0) goto LAB_100e4353;
      uVar13 = *(uint *)(local_1c + 0x20);
      if (uVar13 == 0xffffffff) {
LAB_100e43a9:
        uVar12 = 0;
      }
      else {
        iVar14 = 0;
        this_00 = (CCommandManager *)FUN_10037712();
        iVar14 = CCommandManager::GetCmdImage(this_00,uVar13,iVar14);
        if (iVar14 != -1) goto LAB_100e43a9;
        uVar12 = 1;
      }
      *(undefined4 *)(local_1c + 4) = uVar12;
      piVar10 = FUN_10005e30((int *)(*(int *)(local_1c + 0x2c) + -0x10));
      local_24 = (ushort *)(piVar10 + 4);
      local_8 = CONCAT31(local_8._1_3_,2);
      if ((*(int *)(*(int *)(local_1c + 0x30) + -0xc) != 0) &&
         ((iVar5 == 0 || (iVar14 = FUN_1009636e(local_24,LVar6), 1 < iVar14)))) {
        FUN_10007c90(&local_24,(undefined4 *)(local_1c + 0x30));
      }
      local_20 = 0xffffffff;
      if (iVar5 != 0) {
LAB_100e4482:
        local_20 = SendMessageW(*(HWND *)(this + 0x13c),0x180,0,(LPARAM)local_24);
      }
      else {
        local_18 = 0;
        do {
          LVar11 = SendMessageW(*(HWND *)(this + 0x13c),0x18b,0,0);
          if (LVar11 <= (int)local_18) break;
          ppuVar4 = FUN_1000ad47();
          FUN_10005e00(&local_28,(int *)ppuVar4);
          local_8 = CONCAT31(local_8._1_3_,3);
          GetText(this + 0x11c,local_18,(CSimpleStringT<wchar_t,0> *)&local_28);
          iVar14 = FUN_10005720(&local_28,local_24);
          if (0 < iVar14) {
            local_20 = SendMessageW(*(HWND *)(this + 0x13c),0x181,local_18,(LPARAM)local_24);
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_10001030((undefined4 *)(local_28 - 0x10));
          local_18 = local_18 + 1;
        } while (local_20 == 0xffffffff);
        if (local_20 == 0xffffffff) goto LAB_100e4482;
      }
      SendMessageW(*(HWND *)(this + 0x13c),0x19a,local_20,local_1c);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_10001030((undefined4 *)(local_24 + -8));
      puVar2 = puVar1;
    }
    SendMessageW(*(HWND *)(this + 0x13c),0xb,1,0);
    FUN_10001030((undefined4 *)(local_2c + -0x10));
    local_8 = 0xffffffff;
    CWaitCursor::~CWaitCursor(local_11);
  }
  return;
}

