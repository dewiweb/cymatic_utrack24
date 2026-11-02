// rea decompile_all
// name: CMFCRibbonButton::GetKeyTipRect
// address: 0x100ba4aa
// body: available
// range: 0x100ba4aa-0x100ba72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CRect __thiscall CMFCRibbonButton::GetKeyTipRect(class CDC *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonButton::GetKeyTipRect(CMFCRibbonButton *this,CDC *param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  RECT *lprc;
  int in_stack_0000000c;
  undefined1 local_30 [4];
  CMFCRibbonButton *local_2c;
  int local_28;
  RECT *local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = this;
  (**(code **)(*(int *)this + 0x134))(&local_20,param_2);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((local_20 == 0) && (local_1c == 0)) goto LAB_100ba719;
  lprc = (RECT *)(this + 0x18);
  local_24 = lprc;
  BVar1 = IsRectEmpty(lprc);
  if (BVar1 != 0) goto LAB_100ba719;
  if (in_stack_0000000c == 0) {
    iVar2 = lprc->left + 10;
  }
  else {
    iVar2 = *(int *)(this + 0x20) - local_20 / 2;
  }
  *(int *)param_1 = iVar2;
  *(int *)(param_1 + 4) = *(int *)(this + 0x24) - local_1c / 2;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_28 = (**(code **)(*(int *)this + 0x8c))();
  if (local_28 != 0) {
    iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    if ((iVar2 == 0) && ((*(int *)(this + 0x68) == 0 || (*(int *)(this + 100) == 0)))) {
      iVar2 = (**(code **)(*(int *)this + 0x1a8))();
      if (iVar2 == 0) {
        local_18.left = *(LONG *)(local_28 + 0x6c);
        local_18.top = *(int *)(local_28 + 0x70);
        local_18.right = *(LONG *)(local_28 + 0x74);
        local_18.bottom = *(int *)(local_28 + 0x78);
        BVar1 = IsRectEmpty(&local_18);
        this = local_2c;
        lprc = local_24;
        if (BVar1 == 0) {
          local_18.bottom =
               local_18.bottom + (*(int *)(local_28 + 0x60) - *(int *)(local_28 + 0x68));
          *(LONG *)(param_1 + 4) = local_18.bottom - local_1c / 2;
        }
      }
    }
  }
  iVar2 = (**(code **)(*(int *)this + 0x1a8))();
  if (((iVar2 == 0) || (*(int *)(this + 0x68) != 0)) || (*(int *)(this + 100) != 0)) {
    iVar2 = (**(code **)(*(int *)this + 0x1ac))();
    if (iVar2 != 0) {
      *(int *)(param_1 + 4) = (lprc->bottom + lprc->top) / 2 - local_1c / 2;
      goto LAB_100ba6f0;
    }
    if ((*(int *)(this + 0x130) != 0) || (*(int *)(this + 100) != 0)) {
      if (*(int *)(this + 0x54) != 0) {
        if (in_stack_0000000c == 0) {
          piVar4 = (int *)(**(code **)(*(int *)this + 0x70))(local_30,0);
          *(LONG *)param_1 = (lprc->left - local_20) + 4 + *piVar4;
        }
        iVar2 = (*(int *)(this + 0x24) - local_1c) + -4;
        goto LAB_100ba6e6;
      }
      if (in_stack_0000000c != 0) goto LAB_100ba708;
      goto LAB_100ba6f0;
    }
    iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    if (iVar2 == 0) {
      if (*(int *)(this + 0x68) != 0) {
        *(int *)param_1 = (lprc->right + lprc->left) / 2 - local_20 / 2;
        *(int *)(param_1 + 4) = (lprc->bottom + lprc->top) / 2;
      }
      BVar1 = IsRectEmpty(&local_18);
      if (BVar1 == 0) {
        iVar2 = *(int *)(this + 0x1c);
        iVar3 = (local_18.bottom + local_18.top) / 2;
        if (iVar2 < iVar3) {
          if (iVar3 < *(int *)(this + 0x24)) {
            iVar2 = (lprc->bottom + lprc->top) / 2;
          }
          else if (iVar3 <= iVar2) goto LAB_100ba708;
          *(int *)(param_1 + 4) = iVar2 - local_1c / 2;
        }
      }
    }
    else {
      iVar2 = (lprc->bottom + lprc->top) / 2;
LAB_100ba6e6:
      *(int *)(param_1 + 4) = iVar2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x24);
LAB_100ba6f0:
    *(int *)param_1 = (lprc->right + lprc->left) / 2 - local_20 / 2;
  }
LAB_100ba708:
  *(int *)(param_1 + 8) = *(int *)param_1 + local_20;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 4) + local_1c;
LAB_100ba719:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

