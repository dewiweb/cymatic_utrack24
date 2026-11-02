// rea decompile_all
// name: CMFCToolBar::SmartUpdate
// address: 0x1002c7f9
// body: available
// range: 0x1002c7f9-0x1002caea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c8f4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::SmartUpdate(class CObList const &)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::SmartUpdate(CMFCToolBar *this,CObList *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  CMFCToolBarButton *pCVar5;
  CObject *pCVar6;
  CObject *pCVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  CObject *local_108;
  CObject *local_fc;
  CObject *local_f8;
  CMFCToolBarButton local_f4 [112];
  CMFCToolBarButton local_84 [124];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf8;
  local_8 = 0x1002c808;
  *(undefined4 *)(this + 0xb1c) = 0;
  puVar9 = *(undefined4 **)(param_1 + 4);
joined_r0x1002c81f:
  if (puVar9 != (undefined4 *)0x0) {
    if (puVar9 == (undefined4 *)0x0) goto LAB_1002c8f4;
    puVar8 = puVar9 + 2;
    puVar9 = (undefined4 *)*puVar9;
    local_f8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c,
                                  (CObject *)*puVar8);
    if (local_f8 != (CObject *)0x0) {
      puVar8 = *(undefined4 **)(this + 0xbe8);
      do {
        if (puVar8 == (undefined4 *)0x0) {
          *(undefined4 *)(this + 0xb1c) = 1;
          iVar3 = FUN_1002605c(this,*(int *)(local_f8 + 0x20),0);
          if ((-1 < iVar3) &&
             ((**(code **)(*(int *)this + 0x34c))(iVar3), *(int *)(this + 0xb54) != 0)) {
            RemoveResetStateButton(this,*(uint *)(local_f8 + 0x20));
          }
          break;
        }
        if (puVar8 == (undefined4 *)0x0) goto LAB_1002c8f4;
        puVar1 = puVar8 + 2;
        puVar8 = (undefined4 *)*puVar8;
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c,
                                    (CObject *)*puVar1);
      } while ((pCVar6 == (CObject *)0x0) ||
              (iVar3 = (**(code **)(*(int *)pCVar6 + 0x94))(local_f8), iVar3 == 0));
    }
    goto joined_r0x1002c81f;
  }
  puVar9 = *(undefined4 **)(this + 0xbe8);
  local_108 = (CObject *)0x0;
  while (puVar9 != (undefined4 *)0x0) {
    if (puVar9 == (undefined4 *)0x0) goto LAB_1002c8f4;
    puVar8 = puVar9 + 2;
    puVar9 = (undefined4 *)*puVar9;
    local_fc = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c,
                                  (CObject *)*puVar8);
    if (local_fc != (CObject *)0x0) {
      puVar8 = *(undefined4 **)(param_1 + 4);
      do {
        if (puVar8 == (undefined4 *)0x0) {
          *(undefined4 *)(this + 0xb1c) = 1;
          uVar2 = *(uint *)(local_fc + 0x20);
          local_f8 = *(CObject **)(this + 0xbd4);
          if ((int)local_108 <= (int)*(CObject **)(this + 0xbd4)) {
            local_f8 = local_108;
          }
          if (uVar2 == 0) {
            (**(code **)(*(int *)this + 0x348))(local_f8);
          }
          else {
            local_fc = (CObject *)0xffffffff;
            CMap<unsigned_int,unsigned_int,int,int>::Lookup
                      ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_1016041c,uVar2,
                       (int *)&local_fc);
            uVar4 = CMFCToolBarButton::CMFCToolBarButton
                              (local_84,uVar2,(int)local_fc,(wchar_t *)0x0,0,*(int *)(this + 0xb04))
            ;
            local_8 = 0;
            (**(code **)(*(int *)this + 0x344))(uVar4,local_f8);
            local_8 = 0xffffffff;
            CMFCToolBarButton::~CMFCToolBarButton(local_84);
            if (*(int *)(this + 0xb54) != 0) {
              pCVar5 = (CMFCToolBarButton *)
                       CMFCToolBarButton::CMFCToolBarButton
                                 (local_f4,uVar2,(int)local_fc,(wchar_t *)0x0,0,
                                  *(int *)(this + 0xb04));
              local_8 = 1;
              InsertResetStateButton(this,pCVar5,(int)local_f8);
              local_8 = 0xffffffff;
              CMFCToolBarButton::~CMFCToolBarButton(local_f4);
            }
          }
          break;
        }
        if (puVar8 == (undefined4 *)0x0) goto LAB_1002c8f4;
        puVar1 = puVar8 + 2;
        puVar8 = (undefined4 *)*puVar8;
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c,
                                    (CObject *)*puVar1);
      } while ((pCVar6 == (CObject *)0x0) ||
              (iVar3 = (**(code **)(*(int *)local_fc + 0x94))(pCVar6), iVar3 == 0));
    }
    local_108 = local_108 + 1;
  }
  if (*(int *)(param_1 + 0xc) == *(int *)(this + 0xbf0)) {
    puVar9 = *(undefined4 **)(this + 0xbe8);
    puVar8 = *(undefined4 **)(param_1 + 4);
    do {
      if (puVar9 == (undefined4 *)0x0) goto LAB_1002cadd;
      if ((puVar8 == (undefined4 *)0x0) || (puVar9 == (undefined4 *)0x0)) {
LAB_1002c8f4:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar9 + 2;
      puVar9 = (undefined4 *)*puVar9;
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c,
                                  (CObject *)*puVar1);
      puVar1 = puVar8 + 2;
      puVar8 = (undefined4 *)*puVar8;
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c,
                                  (CObject *)*puVar1);
    } while (((pCVar6 == (CObject *)0x0) || (pCVar7 == (CObject *)0x0)) ||
            (iVar3 = (**(code **)(*(int *)pCVar6 + 0x94))(pCVar7), iVar3 != 0));
  }
  *(undefined4 *)(this + 0xb1c) = 1;
LAB_1002cadd:
  iVar3 = FUN_100f90cf();
  return iVar3;
}

