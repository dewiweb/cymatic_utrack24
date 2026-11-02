// rea decompile_all
// name: CDockablePane::OnNcCalcSize
// address: 0x10078f8a
// body: available
// range: 0x10078f8a-0x10079278 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078ff1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnNcCalcSize(int,struct tagNCCALCSIZE_PARAMS *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockablePane::OnNcCalcSize(CDockablePane *this,int param_1,tagNCCALCSIZE_PARAMS *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_74;
  int local_68;
  int local_60;
  int local_5c;
  int local_54;
  int local_4c;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CWnd::Default((CWnd *)this);
  iVar2 = (**(code **)(*(int *)this + 0x16c))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x1a0))();
    CopyRect(&local_18,(RECT *)param_2);
    local_18.top = local_18.top + iVar2;
    CMFCCaptionButton::GetSize();
    local_74 = DAT_10161384 + local_18.left;
    local_68 = (local_18.right - DAT_10161384) - local_60;
    local_28.left = 0;
    local_28.top = 0;
    iVar7 = (((iVar2 - local_5c) / 2 - *(int *)(this + 0x2c0)) - iVar2) + local_18.top;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    CWnd::ScreenToClient((CWnd *)this,&local_28);
    iVar3 = (**(code **)(*(int *)this + 0x1d0))();
    iVar4 = 0;
    if (iVar2 < 1) {
      if (0 < *(int *)(this + 0x328)) {
        do {
          if ((iVar4 < 0) || (*(int *)(this + 0x328) <= iVar4)) goto LAB_10078ff1;
          iVar2 = iVar4 * 4;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(*(int *)(*(int *)(this + 0x324) + iVar2) + 0xc) = 1;
        } while (iVar4 < *(int *)(this + 0x328));
      }
    }
    else {
      local_4c = 0;
      if (0 < *(int *)(this + 0x328)) {
        do {
          if ((local_4c < 0) || (*(int *)(this + 0x328) <= local_4c)) goto LAB_10078ff1;
          iVar2 = *(int *)(*(int *)(this + 0x324) + local_4c * 4);
          iVar4 = FUN_100b954e(iVar2);
          local_54 = 0;
          if (DAT_10161388 != 0) {
            if (((iVar3 == 0) && (iVar4 == 9)) ||
               ((iVar5 = (**(code **)(*(int *)this + 0x1c4))(), iVar5 == 0 && (iVar4 == 0x13)))) {
              local_54 = 1;
            }
            else {
              local_54 = 0;
            }
          }
          if ((DAT_10168104 == 0) && (iVar4 == 8)) {
            local_54 = 1;
          }
          *(undefined4 *)(iVar2 + 4) = 0;
          *(undefined4 *)(iVar2 + 8) = 0;
          if (*(int *)(iVar2 + 0x18) == 0) {
            CopyRect(&local_38,(RECT *)param_2);
            *(int *)(iVar2 + 0x24) = local_68 - local_38.left;
            *(int *)(iVar2 + 0x28) = iVar7 - local_38.top;
            *(int *)(iVar2 + 0xc) = local_54;
            if (local_54 == 0) {
              local_68 = local_68 + (-2 - local_60);
            }
          }
          else {
            CopyRect(&local_48,(RECT *)param_2);
            *(int *)(iVar2 + 0x24) = local_74 - local_48.left;
            *(int *)(iVar2 + 0x28) = iVar7 - local_48.top;
            *(int *)(iVar2 + 0xc) = local_54;
            if (local_54 == 0) {
              local_74 = local_74 + 2 + local_60;
            }
          }
          local_4c = local_4c + 1;
        } while (local_4c < *(int *)(this + 0x328));
      }
      local_4c = 0;
      if (0 < *(int *)(this + 0x328)) {
        do {
          if ((local_4c < 0) || (*(int *)(this + 0x328) <= local_4c)) goto LAB_10078ff1;
          piVar1 = *(int **)(*(int *)(this + 0x324) + local_4c * 4);
          if (piVar1[6] != 0) {
            CopyRect(&local_38,(RECT *)param_2);
            piVar6 = (int *)(**(code **)(*piVar1 + 0xc))(&local_48);
            piVar1[3] = (uint)(local_68 <= *piVar6 + local_38.left);
          }
          local_4c = local_4c + 1;
        } while (local_4c < *(int *)(this + 0x328));
      }
    }
    if (local_18.right <= local_18.left) {
      local_18.right = local_18.left;
    }
    if (local_18.bottom <= local_18.top) {
      local_18.bottom = local_18.top;
    }
    *(LONG *)param_2 = local_18.left;
    *(LONG *)(param_2 + 4) = local_18.top;
    *(LONG *)(param_2 + 8) = local_18.right;
    *(LONG *)(param_2 + 0xc) = local_18.bottom;
    FUN_10078eb5((CWnd *)this);
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(this + 0x328)) {
      do {
        if ((iVar2 < 0) || (*(int *)(this + 0x328) <= iVar2)) {
LAB_10078ff1:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar3 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)(*(int *)(this + 0x324) + iVar3) + 0xc) = 1;
      } while (iVar2 < *(int *)(this + 0x328));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

