// rea decompile_all
// name: CMFCRibbonPanel::GetPaltteMinSize
// address: 0x100b3fa2
// body: available
// range: 0x100b3fa2-0x100b418d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b400f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: class CSize __thiscall CMFCRibbonPanel::GetPaltteMinSize(void)const 
   
   Library: Visual Studio 2010 Release */

int * __thiscall CMFCRibbonPanel::GetPaltteMinSize(CMFCRibbonPanel *this)

{
  CObject *this_00;
  CMFCRibbonBar *this_01;
  CFont *pCVar1;
  int *piVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  undefined4 extraout_ECX;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *in_stack_00000004;
  CClientDC local_58 [20];
  undefined4 local_44 [2];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  CPen *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x100b3fae;
  iVar5 = 0;
  if (*(CObject **)(this + 0xb0) == (CObject *)0x0) {
    *in_stack_00000004 = -1;
    in_stack_00000004[1] = -1;
  }
  else {
    local_28 = CObject::IsKindOf(*(CObject **)(this + 0xb0),
                                 (CRuntimeClass *)&PTR_s_CMFCRibbonUndoButton_1013f824);
    this_01 = CMFCRibbonBaseElement::GetTopLevelRibbonBar(*(CMFCRibbonBaseElement **)(this + 0xb0));
    CClientDC::CClientDC(local_58,(CWnd *)this_01);
    local_8 = 0;
    pCVar1 = CWnd::GetFont((CWnd *)this_01);
    local_2c = CDC::SelectObject((CDC *)local_58,(CPen *)pCVar1);
    if (local_2c == (CPen *)0x0) {
LAB_100b400f:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_30 = GetSystemMetrics(2);
    piVar2 = (int *)(**(code **)(**(int **)(this + 0xb0) + 0x1e4))(&local_3c);
    local_24 = *piVar2;
    iVar3 = (**(code **)(**(int **)(this + 0xb0) + 0x1e4))(&local_3c);
    local_34 = *(int *)(iVar3 + 4);
    local_18 = 0;
    local_20 = 0;
    local_14 = 0;
    local_1c = 0;
    if (0 < *(int *)(this + 0x25c)) {
      do {
        if ((iVar5 < 0) || (*(int *)(this + 0x25c) <= iVar5)) goto LAB_100b400f;
        this_00 = *(CObject **)(*(int *)(this + 600) + iVar5 * 4);
        (**(code **)(*(int *)this_00 + 0x6c))(0);
        (**(code **)(*(int *)this_00 + 0xe0))(local_58);
        (**(code **)(*(int *)this_00 + 0x50))(&local_3c,local_58);
        iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
        if (iVar3 == 0) {
          iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0);
          if (iVar3 == 0) {
            if (local_28 == 0) {
              pCVar4 = CMFCVisualManager::GetInstance();
              uVar6 = (**(code **)(*(int *)pCVar4 + 0x2d0))();
              uVar7 = FUN_10026c8e(extraout_ECX,(int)((ulonglong)uVar6 >> 0x20),local_44);
              local_3c = local_3c + *(int *)uVar7 + (int)uVar6 * 2 + 0xc;
            }
            if (local_14 <= local_3c) {
              local_14 = local_3c;
            }
            local_1c = local_1c + local_38;
          }
          else {
            if (local_18 <= local_3c) {
              local_18 = local_3c;
            }
            iVar3 = (**(code **)(**(int **)(this + 0xb0) + 0x1f8))();
            if (local_20 <= iVar3 + local_38) {
              local_20 = (**(code **)(**(int **)(this + 0xb0) + 0x1f8))();
              local_20 = local_20 + local_38;
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0x25c));
    }
    CDC::SelectObject((CDC *)local_58,local_2c);
    iVar5 = local_18;
    if (local_18 < local_24) {
      iVar5 = local_24;
    }
    iVar3 = iVar5 + local_30;
    if (iVar5 + local_30 <= local_14) {
      iVar3 = local_14;
    }
    local_8 = 0xffffffff;
    *in_stack_00000004 = iVar3;
    in_stack_00000004[1] = local_1c + local_20 + local_34;
    CClientDC::~CClientDC(local_58);
  }
  return in_stack_00000004;
}

