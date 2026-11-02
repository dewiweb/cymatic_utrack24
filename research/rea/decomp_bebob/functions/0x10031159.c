// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonButtonBorder
// address: 0x10031159
// body: available
// range: 0x10031159-0x10031338 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100312eb to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonButtonBorder(class CDC *,class
   CMFCRibbonButton *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonButtonBorder
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  CDC *this_00;
  int iVar1;
  BOOL BVar2;
  LONG LVar3;
  ulong uVar4;
  LONG LVar5;
  ulong uVar6;
  undefined1 local_4c [8];
  CDrawingManager local_44 [8];
  CDrawingManager local_3c [4];
  CDC *local_38;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x10031165;
  local_38 = param_1;
  iVar1 = CObject::IsKindOf((CObject *)param_2,(CRuntimeClass *)&PTR_s_CMFCRibbonEdit_10131fa4);
  if (iVar1 == 0) {
    local_34.left = *(LONG *)(param_2 + 0x18);
    local_34.top = *(LONG *)(param_2 + 0x1c);
    local_34.right = *(LONG *)(param_2 + 0x20);
    local_34.bottom = *(LONG *)(param_2 + 0x24);
    iVar1 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)param_2);
    if ((((iVar1 == 0) || (iVar1 = (**(code **)(*(int *)param_2 + 0x3c))(), iVar1 == 0)) ||
        (iVar1 = (**(code **)(*(int *)param_2 + 0x2c))(), iVar1 != 0)) &&
       (((iVar1 = (**(code **)(*(int *)param_2 + 0x2c))(), iVar1 != 0 ||
         (iVar1 = (**(code **)(*(int *)param_2 + 0x3c))(), iVar1 != 0)) ||
        ((iVar1 = (**(code **)(*(int *)param_2 + 0x40))(), iVar1 != 0 ||
         (iVar1 = (**(code **)(*(int *)param_2 + 0x30))(), iVar1 != 0)))))) {
      if (DAT_1016891c == 0) {
        iVar1 = (**(code **)(*(int *)param_2 + 0x34))();
        uVar4 = DAT_10166af0;
        uVar6 = DAT_10166af4;
        if (((iVar1 == 0) &&
            (iVar1 = (**(code **)(*(int *)param_2 + 0x3c))(), uVar4 = DAT_10166af0,
            uVar6 = DAT_10166af4, iVar1 == 0)) &&
           (iVar1 = (**(code **)(*(int *)param_2 + 0x40))(), uVar4 = DAT_10166af0,
           uVar6 = DAT_10166af4, iVar1 == 0)) {
          uVar4 = DAT_10166af4;
          uVar6 = DAT_10166af0;
        }
        CDC::Draw3dRect(local_38,&local_34,uVar4,uVar6);
      }
      else {
        CDrawingManager::CDrawingManager(local_44,local_38);
        local_8 = 0;
        CDrawingManager::DrawRect(local_44,(CRect *)&local_34,0xffffffff,DAT_10166af0);
        local_8 = 0xffffffff;
        FUN_1009c588((undefined4 *)local_44);
      }
      local_24.left = *(LONG *)(param_2 + 0xc4);
      local_24.top = *(LONG *)(param_2 + 200);
      local_24.right = *(LONG *)(param_2 + 0xcc);
      local_24.bottom = *(LONG *)(param_2 + 0xd0);
      BVar2 = IsRectEmpty(&local_24);
      this_00 = local_38;
      if (BVar2 == 0) {
        if (DAT_1016891c == 0) {
          local_38 = (CDC *)CDC::SelectObject(local_38,(CPen *)&DAT_10166b80);
          if (local_38 == (CDC *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          if (*(int *)(param_2 + 0x110) == 0) {
            CDC::MoveTo(this_00,(int)local_4c,local_24.left);
            LVar3 = local_24.left;
            LVar5 = local_24.bottom;
          }
          else {
            CDC::MoveTo(this_00,(int)local_44,local_24.left);
            LVar3 = local_24.right;
            LVar5 = local_24.top;
          }
          CDC::LineTo(this_00,LVar3,LVar5);
          CDC::SelectObject(this_00,(CPen *)local_38);
        }
        else {
          CDrawingManager::CDrawingManager(local_3c,local_38);
          local_8 = 1;
          LVar3 = local_24.left;
          LVar5 = local_24.bottom;
          if (*(int *)(param_2 + 0x110) != 0) {
            LVar3 = local_24.right;
            LVar5 = local_24.top;
          }
          CDrawingManager::DrawLine(local_3c,local_24.left,local_24.top,LVar3,LVar5,DAT_10166af0);
          local_8 = 0xffffffff;
          FUN_1009c588((undefined4 *)local_3c);
        }
      }
    }
  }
  FUN_100f90cf();
  return;
}

