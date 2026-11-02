// rea decompile_all
// name: CMFCPopupMenuBar::OnToolHitTest
// address: 0x100a23fa
// body: available
// range: 0x100a23fa-0x100a256c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPopupMenuBar::OnToolHitTest(class CPoint,struct
   tagTOOLINFOW *)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCPopupMenuBar::OnToolHitTest
          (CMFCPopupMenuBar *this,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  CObject *pCVar3;
  int iVar4;
  undefined **ppuVar5;
  CFrameWnd *pCVar6;
  int *piVar7;
  CMFCPopupMenuBar *pCVar8;
  undefined4 uVar9;
  CMFCPopupMenuBar *local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100a2406;
  local_18 = this;
  if (*(int *)(this + 0xd00) == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x390))();
    if (iVar2 != -1) {
      pCVar3 = (CObject *)FUN_100261ef(this,iVar2);
      local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c,pCVar3);
      iVar1 = param_4;
      if (local_14 != (CObject *)0x0) {
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(local_14 + 0x20);
          *(undefined4 *)(param_4 + 8) = *(undefined4 *)(this + 0x20);
          *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(local_14 + 0x54);
          *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(local_14 + 0x58);
          *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(local_14 + 0x5c);
          *(undefined4 *)(param_4 + 0x1c) = *(undefined4 *)(local_14 + 0x60);
          this = local_18;
        }
        iVar4 = (**(code **)(*(int *)local_14 + 0x7c))();
        if (iVar4 == 0) {
          iVar2 = *(int *)(local_14 + 0x20);
        }
        else if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
          ppuVar5 = FUN_1000ad47();
          FUN_10005e00(&local_18,(int *)ppuVar5);
          local_8 = 0;
          if (*(short **)(iVar1 + 0x24) != (short *)0x0) {
            FUN_100022b0(&local_18,*(short **)(iVar1 + 0x24));
            _free(*(void **)(iVar1 + 0x24));
          }
          ppuVar5 = FUN_1000ad47();
          FUN_10005e00(&param_4,(int *)ppuVar5);
          local_8 = CONCAT31(local_8._1_3_,1);
          pCVar6 = CWnd::GetParentFrame((CWnd *)this);
          if (((pCVar6 != (CFrameWnd *)0x0) && (*(int *)(pCVar6 + 0x20) != 0)) &&
             (iVar4 = CObject::IsKindOf(local_14,(CRuntimeClass *)&PTR_s_CMFCShowAllButton_10133738)
             , iVar4 == 0)) {
            (**(code **)(*(int *)pCVar6 + 0x170))();
          }
          local_14 = (CObject *)&stack0xffffffcc;
          pCVar8 = local_18 + -0x10;
          piVar7 = FUN_10005e30((int *)pCVar8);
          uVar9 = 2;
          *(int **)local_14 = piVar7 + 4;
          CTooltipManager::SetTooltipText(iVar1,*(undefined4 *)(this + 0xc94),uVar9);
          FUN_10001030((undefined4 *)(param_4 + -0x10));
          FUN_10001030((undefined4 *)pCVar8);
        }
      }
    }
  }
  else {
    iVar2 = CMFCToolBar::OnToolHitTest((CMFCToolBar *)this,param_2);
  }
  return iVar2;
}

