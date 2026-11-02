// rea decompile_all
// name: CMFCRibbonCategory::OnKey
// address: 0x100abf6f
// body: available
// range: 0x100abf6f-0x100ac18d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ac062 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonCategory::OnKey(unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonCategory::OnKey(CMFCRibbonCategory *this,uint param_1)

{
  CMFCRibbonBaseElement *pCVar1;
  int *piVar2;
  BOOL BVar3;
  BOOL BVar4;
  CMFCRibbonBaseElement *pCVar5;
  int iVar6;
  undefined **local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  CMFCRibbonBaseElement *local_54;
  CMFCRibbonBaseElement *local_50;
  int local_4c;
  CMFCRibbonCategory *local_48;
  RECT local_44;
  RECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100abf7b;
  local_50 = (CMFCRibbonBaseElement *)0x0;
  local_48 = this;
  if (param_1 != 9) {
    if ((param_1 == 0xd) || (param_1 == 0x20)) {
      piVar2 = (int *)FUN_100abee8((int)this);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x13c))(0);
      }
      goto LAB_100ac186;
    }
    if ((param_1 < 0x25) || (0x28 < param_1)) goto LAB_100ac186;
  }
  local_68 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  local_64 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_8 = 0;
  FUN_100abf2a(this,&local_68);
  if (local_60 == 0) {
    local_8 = 0xffffffff;
    FUN_1006d033(&local_68);
  }
  else {
    local_54 = (CMFCRibbonBaseElement *)FUN_100abee8((int)this);
    if (local_54 == (CMFCRibbonBaseElement *)0x0) {
      local_4c = 0;
      pCVar5 = local_50;
      if (0 < local_60) {
        do {
          if ((local_4c < 0) || (local_60 <= local_4c)) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          pCVar5 = *(CMFCRibbonBaseElement **)(local_64 + local_4c * 4);
          iVar6 = (**(code **)(*(int *)pCVar5 + 0x78))();
          if (iVar6 != 0) {
            local_34.left = *(LONG *)(pCVar5 + 0x18);
            local_34.top = *(LONG *)(pCVar5 + 0x1c);
            local_34.right = *(LONG *)(pCVar5 + 0x20);
            local_34.bottom = *(LONG *)(pCVar5 + 0x24);
            BVar3 = IsRectEmpty(&local_34);
            if (BVar3 == 0) break;
          }
          local_4c = local_4c + 1;
          pCVar5 = local_50;
        } while (local_4c < local_60);
      }
    }
    else {
      local_4c = 0;
      local_44.left = *(LONG *)(this + 0x104);
      local_44.top = *(LONG *)(this + 0x108);
      local_44.right = *(LONG *)(this + 0x10c);
      local_44.bottom = *(LONG *)(this + 0x110);
      BVar3 = IsRectEmpty(&local_44);
      local_24.left = *(LONG *)(local_48 + 0x26c);
      local_24.top = *(LONG *)(local_48 + 0x270);
      local_24.right = *(LONG *)(local_48 + 0x274);
      local_24.bottom = *(LONG *)(local_48 + 0x278);
      BVar4 = IsRectEmpty(&local_24);
      local_50 = CMFCRibbonBar::FindNextFocusedElement
                           (param_1,&local_68,*(undefined4 *)(local_48 + 0x20),
                            *(undefined4 *)(local_48 + 0x24),*(undefined4 *)(local_48 + 0x28),
                            *(undefined4 *)(local_48 + 0x2c),local_54,BVar3 == 0,BVar4 == 0,
                            &local_4c);
      pCVar5 = local_50;
      if (local_4c != 0) {
        if (local_4c == -2) {
          pCVar5 = (CMFCRibbonBaseElement *)FUN_100abde6((int *)local_48);
        }
        else if ((local_4c == -1) || (local_4c == 1)) {
          (**(code **)(*(int *)local_48 + 0x3c))(local_4c < 0,0);
          pCVar5 = local_50;
        }
        else if (local_4c == 2) {
          pCVar5 = (CMFCRibbonBaseElement *)FUN_100abe3f((int *)local_48);
        }
      }
    }
    local_50 = pCVar5;
    local_8 = 0xffffffff;
    FUN_1006d033(&local_68);
    pCVar1 = local_50;
    pCVar5 = local_54;
    if ((local_50 != local_54) && (local_50 != (CMFCRibbonBaseElement *)0x0)) {
      if (*(CMFCRibbonBar **)(local_48 + 0x3c0) != (CMFCRibbonBar *)0x0) {
        CMFCRibbonBar::DeactivateKeyboardFocus(*(CMFCRibbonBar **)(local_48 + 0x3c0),0);
      }
      if (pCVar5 != (CMFCRibbonBaseElement *)0x0) {
        *(int *)(pCVar5 + 0x70) = 0;
        *(int *)(pCVar5 + 0x6c) = 0;
        (**(code **)(*(int *)pCVar5 + 0x184))(0);
        (**(code **)(*(int *)pCVar5 + 0x118))();
      }
      *(int *)(pCVar1 + 0x70) = 1;
      (**(code **)(*(int *)pCVar1 + 0x184))(1);
      (**(code **)(*(int *)pCVar1 + 0x118))();
    }
  }
LAB_100ac186:
  iVar6 = FUN_100f90cf();
  return iVar6;
}

