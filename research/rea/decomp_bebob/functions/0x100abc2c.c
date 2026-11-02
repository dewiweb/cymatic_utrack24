// rea decompile_all
// name: CMFCRibbonCategory::EnsureVisible
// address: 0x100abc2c
// body: available
// range: 0x100abc2c-0x100abde5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100abd62 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonCategory::EnsureVisible(class CMFCRibbonButton *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonCategory::EnsureVisible(CMFCRibbonCategory *this,CMFCRibbonButton *param_1)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_28;
  int local_24;
  int local_20;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar2 = IsRectEmpty((RECT *)(this + 0x20));
  if (BVar2 == 0) {
    iVar4 = *(int *)(this + 0x28);
    iVar5 = ((RECT *)(this + 0x20))->left + 4;
    local_18.left = *(LONG *)(param_1 + 0x18);
    local_18.top = *(LONG *)(param_1 + 0x1c);
    local_18.right = *(LONG *)(param_1 + 0x20);
    local_18.bottom = *(LONG *)(param_1 + 0x24);
    BVar2 = IsRectEmpty(&local_18);
    if (BVar2 == 0) {
      if (local_18.left < *(int *)(this + 0x20) + -2) {
        iVar5 = iVar5 - local_18.left;
        uVar7 = 1;
      }
      else {
        if (local_18.right <= *(int *)(this + 0x28) + 2) goto LAB_100abdd6;
        iVar5 = local_18.right - (iVar4 + -4);
        uVar7 = 0;
      }
      (**(code **)(*(int *)this + 0x3c))(uVar7,iVar5);
    }
    else {
      iVar3 = (**(code **)(*(int *)param_1 + 0x8c))();
      iVar6 = 0;
      if (iVar3 != 0) {
        local_28 = -1;
        local_20 = -1;
        local_24 = -1;
        if (0 < *(int *)(this + 1000)) {
          do {
            if ((iVar6 < 0) || (*(int *)(this + 1000) <= iVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            iVar1 = *(int *)(*(int *)(this + 0x3e4) + iVar6 * 4);
            if (iVar1 == iVar3) {
              local_28 = iVar6;
            }
            BVar2 = IsRectEmpty((RECT *)(iVar1 + 0x6c));
            if ((BVar2 == 0) && (local_24 = iVar6, local_20 < 0)) {
              local_20 = iVar6;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(this + 1000));
          if (((local_28 != -1) && (local_20 != -1)) && (local_24 != -1)) {
            if (local_28 < local_20) {
              iVar4 = (**(code **)(*(int *)this + 0x3c))(1,0);
              if (iVar4 != 0) {
                do {
                  BVar2 = IsRectEmpty((RECT *)(iVar3 + 0x6c));
                  if ((BVar2 == 0) && (iVar5 <= ((RECT *)(iVar3 + 0x6c))->left)) break;
                  iVar4 = (**(code **)(*(int *)this + 0x3c))(1,0);
                } while (iVar4 != 0);
              }
            }
            else if ((local_24 < local_28) &&
                    (iVar5 = (**(code **)(*(int *)this + 0x3c))(0,0), iVar5 != 0)) {
              do {
                BVar2 = IsRectEmpty((RECT *)(iVar3 + 0x6c));
                if ((BVar2 == 0) && (*(int *)(iVar3 + 0x74) <= iVar4 + -4)) break;
                iVar5 = (**(code **)(*(int *)this + 0x3c))(0,0);
              } while (iVar5 != 0);
            }
          }
        }
      }
    }
  }
LAB_100abdd6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

