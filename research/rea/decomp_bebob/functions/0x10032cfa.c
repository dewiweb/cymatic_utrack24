// rea decompile_all
// name: CMFCVisualManager::OnFillRibbonButton
// address: 0x10032cfa
// body: available
// range: 0x10032cfa-0x10032ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnFillRibbonButton(class CDC *,class
   CMFCRibbonButton *)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCVisualManager::OnFillRibbonButton
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  int iVar1;
  ulong uVar2;
  CDrawingManager *pCVar3;
  CDrawingManager local_58 [8];
  ulong local_50;
  CDrawingManager local_4c [4];
  CDC *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  RECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10032d06;
  local_48 = param_1;
  iVar1 = CObject::IsKindOf((CObject *)param_2,(CRuntimeClass *)&PTR_s_CMFCRibbonEdit_10131fa4);
  if (iVar1 == 0) {
    iVar1 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)param_2);
    if ((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)param_2 + 0x164))(), iVar1 == 0)) {
      iVar1 = (**(code **)(*(int *)param_2 + 0x2c))();
      if (iVar1 != 0) {
        local_24.left = *(LONG *)(param_2 + 0x18);
        local_24.top = *(LONG *)(param_2 + 0x1c);
        local_24.right = *(LONG *)(param_2 + 0x20);
        local_24.bottom = *(LONG *)(param_2 + 0x24);
        FillRect(*(HDC *)(local_48 + 4),&local_24,DAT_10166b3c);
      }
      goto LAB_10032ebc;
    }
    iVar1 = (**(code **)(*(int *)param_2 + 0x3c))();
    if ((iVar1 == 0) || (iVar1 = (**(code **)(*(int *)param_2 + 0x2c))(), iVar1 != 0))
    goto LAB_10032ebc;
    if (DAT_1016891c == 0) {
      local_44 = *(undefined4 *)(param_2 + 0x18);
      uStack_40 = *(undefined4 *)(param_2 + 0x1c);
      uStack_3c = *(undefined4 *)(param_2 + 0x20);
      uStack_38 = *(undefined4 *)(param_2 + 0x24);
      CMFCToolBarImages::FillDitheredRect(local_48,(CRect *)&local_44);
      goto LAB_10032ebc;
    }
    CDrawingManager::CDrawingManager(local_58,param_1);
    local_24.left = *(LONG *)(param_2 + 0x18);
    local_24.top = *(LONG *)(param_2 + 0x1c);
    local_24.right = *(LONG *)(param_2 + 0x20);
    local_8 = 2;
    local_24.bottom = *(LONG *)(param_2 + 0x24);
    CDrawingManager::DrawRect(local_58,(CRect *)&local_24,DAT_10166b04,0xffffffff);
    pCVar3 = local_58;
  }
  else {
    local_34.left = *(LONG *)(param_2 + 0xd4);
    local_34.top = *(LONG *)(param_2 + 0xd8);
    local_34.right = *(LONG *)(param_2 + 0xdc);
    local_34.bottom = *(LONG *)(param_2 + 0xe0);
    local_24.top = *(LONG *)(param_2 + 0x1c);
    local_24.right = *(LONG *)(param_2 + 0x20);
    local_24.bottom = *(LONG *)(param_2 + 0x24);
    local_50 = DAT_10166af0;
    local_24.left = local_34.left;
    if (DAT_1016891c == 0) {
      iVar1 = (**(code **)(*(int *)param_2 + 0x40))();
      if ((iVar1 == 0) && (iVar1 = (**(code **)(*(int *)param_2 + 0x2c))(), iVar1 == 0)) {
        CDrawingManager::CDrawingManager(local_58,local_48);
        local_8 = 1;
        CDrawingManager::HighlightRect
                  (local_58,local_34.left,local_34.top,local_34.right,local_34.bottom,0xffffffff,
                   0xffffffff,0,0xffffffff);
        local_8 = 0xffffffff;
        FUN_1009c588((undefined4 *)local_58);
      }
      else {
        FillRect(*(HDC *)(local_48 + 4),&local_34,DAT_10166b64);
      }
      CDC::Draw3dRect(local_48,&local_24,local_50,local_50);
      goto LAB_10032ebc;
    }
    CDrawingManager::CDrawingManager(local_4c,local_48);
    local_8 = 0;
    CDrawingManager::DrawRect(local_4c,(CRect *)&local_24,DAT_10166b04,local_50);
    pCVar3 = local_4c;
  }
  local_8 = 0xffffffff;
  FUN_1009c588((undefined4 *)pCVar3);
LAB_10032ebc:
  uVar2 = FUN_100f90cf();
  return uVar2;
}

