// rea decompile_all
// name: CMFCRibbonCategory::RecalcLayout
// address: 0x100ac7d2
// body: available
// range: 0x100ac7d2-0x100acb23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ac8c5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonCategory::RecalcLayout(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonCategory::RecalcLayout(CMFCRibbonCategory *this,CDC *param_1)

{
  RECT *lprc;
  uint uVar1;
  int *piVar2;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  lprc = (RECT *)(this + 0x20);
  BVar4 = IsRectEmpty(lprc);
  if (BVar4 != 0) goto LAB_100acb13;
  if (*(int *)(this + 0x3c4) != 0) {
    FUN_100ab545((int)this);
  }
  FUN_100ac5ce(this,param_1);
  if (*(int *)(this + 1000) == 0) goto LAB_100acb13;
  uVar1 = *(uint *)(*(int *)(this + 0x3c0) + 0x31c);
  bVar3 = false;
  if (*(int *)(this + 0x3c8) < 0) {
    iVar5 = FUN_100ab59f(this,param_1);
    *(int *)(this + 0x3c8) = iVar5;
  }
  if (((uVar1 & 3) == 0) || (*(int *)(this + 0x3c4) != 0)) {
    iVar5 = *(int *)(this + 0x28) - lprc->left;
    if ((*(int *)(this + 0x14) != iVar5) || (*(int *)(this + 0x18) != *(int *)(this + 0x24))) {
      local_18.left = lprc->left;
      local_18.top = *(LONG *)(this + 0x24);
      *(int *)(this + 0x14) = iVar5;
      local_18.bottom = *(LONG *)(this + 0x2c);
      local_18.left = local_18.left + 4;
      local_18.right = *(int *)(this + 0x28) + -4;
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x24);
      ResetPanelsLayout(this);
      iVar5 = local_18.right - local_18.left;
      if (*(int *)(this + 0x3c8) < iVar5) {
        if (0 < *(int *)(this + 0x3d4)) {
          iVar9 = 0;
          if (*(int *)(this + 0x3d4) < 0) goto LAB_100aca95;
          local_1c = 1;
          while( true ) {
            iVar6 = FUN_100abb62(this,iVar5);
            if (iVar6 != 0) goto LAB_100aca95;
            iVar6 = *(int *)(this + 0x3d4);
            if (iVar9 == iVar6) break;
            if ((iVar9 < 0) || (iVar6 <= iVar9)) goto LAB_100ac8c5;
            iVar8 = *(int *)(*(int *)(this + 0x3d0) + iVar9 * 4);
            if ((iVar8 < 0) || (*(int *)(this + 1000) <= iVar8)) break;
            iVar8 = *(int *)(*(int *)(this + 0x3e4) + iVar8 * 4);
            if (iVar9 < iVar6 + -1) {
              if ((local_1c < 0) || (*(int *)(this + 0x3d4) <= local_1c)) goto LAB_100ac8c5;
              if (*(int *)(*(int *)(this + 0x3d0) + 4 + iVar9 * 4) != -1) goto LAB_100ac9f8;
              iVar6 = *(int *)(iVar8 + 0x248) + -1;
              iVar9 = iVar9 + 1;
              local_1c = local_1c + 1;
              *(undefined4 *)(iVar8 + 8) = 1;
LAB_100aca07:
              *(int *)(iVar8 + 0x44) = iVar6;
            }
            else {
LAB_100ac9f8:
              if (*(int *)(iVar8 + 0x44) < *(int *)(iVar8 + 0x248) + -1) {
                iVar6 = *(int *)(iVar8 + 0x44) + 1;
                goto LAB_100aca07;
              }
            }
            iVar9 = iVar9 + 1;
            local_1c = local_1c + 1;
            if (*(int *)(this + 0x3d4) < iVar9) break;
          }
          ResetPanelsLayout(this);
        }
        while (iVar9 = FUN_100abb62(this,iVar5), iVar9 == 0) {
          iVar8 = 0;
          iVar9 = -1;
          iVar6 = 1;
          if (*(int *)(this + 1000) < 1) break;
          do {
            if ((iVar8 < 0) || (*(int *)(this + 1000) <= iVar8)) goto LAB_100ac8c5;
            iVar7 = *(int *)(*(int *)(this + 0x3e4) + iVar8 * 4);
            iVar7 = (*(int *)(iVar7 + 0x248) - *(int *)(iVar7 + 0x44)) + -1;
            if (iVar6 <= iVar7) {
              iVar9 = iVar8;
              iVar6 = iVar7;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(this + 1000));
          if (iVar9 < 0) break;
          if (*(int *)(this + 1000) <= iVar9) goto LAB_100ac8c5;
          piVar2 = (int *)(*(int *)(*(int *)(this + 0x3e4) + iVar9 * 4) + 0x44);
          *piVar2 = *piVar2 + 1;
        }
      }
      else {
        iVar5 = 0;
        if (0 < *(int *)(this + 1000)) {
          do {
            if ((iVar5 < 0) || (*(int *)(this + 1000) <= iVar5)) goto LAB_100ac8c5;
            iVar9 = *(int *)(*(int *)(this + 0x3e4) + iVar5 * 4);
            iVar5 = iVar5 + 1;
            *(undefined4 *)(iVar9 + 8) = 1;
            *(int *)(iVar9 + 0x44) = *(int *)(iVar9 + 0x248) + -1;
          } while (iVar5 < *(int *)(this + 1000));
        }
      }
LAB_100aca95:
      (**(code **)(*(int *)this + 0x40))(param_1);
      bVar3 = true;
    }
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(this + 1000)) {
      do {
        if ((iVar5 < 0) || (*(int *)(this + 1000) <= iVar5)) {
LAB_100ac8c5:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        piVar2 = *(int **)(*(int *)(this + 0x3e4) + iVar5 * 4);
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        (**(code **)(*piVar2 + 0x48))(param_1,&local_18);
        (**(code **)(*piVar2 + 0x60))(0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 1000));
    }
    *(undefined4 *)(this + 0x14) = 0xffffffff;
    *(undefined4 *)(this + 0x3c8) = 0xffffffff;
  }
  UpdateScrollButtons(this);
  if (((bVar3) && (*(int *)(this + 0x3c0) != 0)) && (*(int *)(*(int *)(this + 0x3c0) + 0x20) != 0))
  {
    local_18.left = *(LONG *)(this + 0x104);
    local_18.top = *(LONG *)(this + 0x108);
    local_18.right = *(LONG *)(this + 0x10c);
    local_18.bottom = *(LONG *)(this + 0x110);
    BVar4 = IsRectEmpty(&local_18);
    if (BVar4 != 0) {
      local_18.left = *(LONG *)(this + 0x26c);
      local_18.top = *(LONG *)(this + 0x270);
      local_18.right = *(LONG *)(this + 0x274);
      local_18.bottom = *(LONG *)(this + 0x278);
      BVar4 = IsRectEmpty(&local_18);
      if (BVar4 != 0) goto LAB_100acb13;
    }
    RedrawWindow(*(HWND *)(*(int *)(this + 0x3c0) + 0x20),(RECT *)(this + 0x20),(HRGN)0x0,0x105);
  }
LAB_100acb13:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

