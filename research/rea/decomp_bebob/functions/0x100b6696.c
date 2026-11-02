// rea decompile_all
// name: FUN_100b6696
// address: 0x100b6696
// body: available
// range: 0x100b6696-0x100b6935 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b6931 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100b6696(void *this,CDC *param_1)

{
  RECT *lprc;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  COLORREF CVar5;
  CMFCVisualManager *pCVar6;
  undefined4 uVar7;
  int iVar8;
  int local_40;
  RECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar4 = IsRectEmpty((RECT *)((int)this + 0x6c));
  if (BVar4 == 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    (**(code **)(*(int *)param_1 + 0x50))(&local_18);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    BVar4 = IntersectRect(&local_28,(RECT *)((int)this + 0x6c),&local_18);
    if (BVar4 != 0) {
      CVar5 = GetTextColor(*(HDC *)(param_1 + 8));
      uVar7 = DAT_10166b00;
      if ((*(int *)((int)this + 0xa8) != 0) && (*(int *)((int)this + 0xb0) == 0)) {
        pCVar6 = CMFCVisualManager::GetInstance();
        uVar7 = (**(code **)(*(int *)pCVar6 + 0x21c))
                          (param_1,this,*(undefined4 *)((int)this + 0x6c),
                           *(undefined4 *)((int)this + 0x70),*(undefined4 *)((int)this + 0x74),
                           *(undefined4 *)((int)this + 0x78),*(undefined4 *)((int)this + 0x5c),
                           *(undefined4 *)((int)this + 0x60),*(undefined4 *)((int)this + 100),
                           *(undefined4 *)((int)this + 0x68));
      }
      lprc = (RECT *)((int)this + 0x5c);
      BVar4 = IsRectEmpty(lprc);
      if ((BVar4 == 0) && (BVar4 = IntersectRect(&local_28,lprc,&local_18), BVar4 != 0)) {
        pCVar6 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar6 + 0x220))
                  (param_1,this,lprc->left,*(undefined4 *)((int)this + 0x60),
                   *(undefined4 *)((int)this + 100),*(undefined4 *)((int)this + 0x68));
      }
      (**(code **)(*(int *)param_1 + 0x30))(uVar7);
      local_38.left = *(int *)((int)this + 0xd0);
      local_38.top = *(int *)((int)this + 0xd4);
      local_38.right = *(int *)((int)this + 0xd8);
      local_38.bottom = *(int *)((int)this + 0xdc);
      BVar4 = IsRectEmpty(&local_38);
      if (BVar4 == 0) {
        local_38.left = *(int *)((int)this + 0xd0);
        local_38.top = *(int *)((int)this + 0xd4);
        local_38.right = *(int *)((int)this + 0xd8);
        local_38.bottom = *(int *)((int)this + 0xdc);
        BVar4 = IntersectRect(&local_28,&local_38,&local_18);
        if (BVar4 != 0) {
          (**(code **)(*(int *)((int)this + 0xb8) + 0xdc))(param_1);
        }
      }
      else if (*(int *)((int)this + 0xb0) == 0) {
        if ((*(int *)((int)this + 0x20) != 0) && (*(int *)((int)this + 0xac) != 0)) {
          uVar1 = *(undefined4 *)(*(int *)((int)this + 0xac) + 0xcc8);
          *(undefined4 *)(*(int *)((int)this + 0xac) + 0xcc8) = 0;
          pCVar6 = CMFCVisualManager::GetInstance();
          (**(code **)(*(int *)pCVar6 + 0x34))
                    (param_1,*(undefined4 *)((int)this + 0xac),*(undefined4 *)((int)this + 0x6c),
                     *(undefined4 *)((int)this + 0x70),*(undefined4 *)((int)this + 0x74),
                     *(undefined4 *)((int)this + 0x78),*(undefined4 *)((int)this + 0x6c),
                     *(undefined4 *)((int)this + 0x70),*(undefined4 *)((int)this + 0x74),
                     *(undefined4 *)((int)this + 0x78),0);
          *(undefined4 *)(*(int *)((int)this + 0xac) + 0xcc8) = uVar1;
        }
        local_40 = 0;
        if (0 < *(int *)((int)this + 0x25c)) {
          do {
            if ((local_40 < 0) || (*(int *)((int)this + 0x25c) <= local_40)) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            piVar2 = *(int **)(*(int *)((int)this + 600) + local_40 * 4);
            local_38.left = piVar2[6];
            local_38.top = piVar2[7];
            local_38.right = piVar2[8];
            local_38.bottom = piVar2[9];
            BVar4 = IntersectRect(&local_28,&local_38,&local_18);
            if (BVar4 != 0) {
              (**(code **)(*(int *)param_1 + 0x30))(uVar7);
              iVar3 = piVar2[0x1b];
              if (((*(int *)((int)this + 0x1c) != 0) &&
                  (iVar8 = (**(code **)(*piVar2 + 0x40))(), iVar8 != 0)) &&
                 (*(int *)((int)this + 0xb4) == 0)) {
                piVar2[0x1b] = 1;
              }
              (**(code **)(*piVar2 + 0xdc))(param_1);
              piVar2[0x1b] = iVar3;
            }
            local_40 = local_40 + 1;
          } while (local_40 < *(int *)((int)this + 0x25c));
        }
      }
      else {
        CMFCRibbonPanel::OnDrawPaletteMenu(this,param_1);
      }
      (**(code **)(*(int *)param_1 + 0x30))(CVar5);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

