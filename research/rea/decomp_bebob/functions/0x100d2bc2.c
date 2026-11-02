// rea decompile_all
// name: CDockBar::CalcFixedLayout
// address: 0x100d2bc2
// body: available
// range: 0x100d2bc2-0x100d3147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d2beb to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CDockBar::CalcFixedLayout(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockBar::CalcFixedLayout(CDockBar *this,int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  CDockBar *pCVar3;
  BOOL BVar4;
  CFrameWnd *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_0000000c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int local_6c;
  int local_68;
  CDockBar *local_64;
  int local_60;
  int *local_5c;
  HDWP local_58 [8];
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_74 = (int *)param_1;
  local_64 = this;
  if (this != (CDockBar *)0x0) {
    CControlBar::CalcFixedLayout((CControlBar *)this,param_1,param_2);
    BVar4 = IsRectEmpty((RECT *)(this + 0xd4));
    if (BVar4 == 0) {
      local_28.left = ((RECT *)(this + 0xd4))->left;
      local_28.top = *(LONG *)(this + 0xd8);
      local_28.right = *(LONG *)(this + 0xdc);
      local_28.bottom = *(LONG *)(this + 0xe0);
      (**(code **)(*(int *)this + 0x16c))(&local_28,in_stack_0000000c);
      local_7c = local_28.right - local_28.left;
      local_78 = local_28.bottom - local_28.top;
    }
    else {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      pCVar5 = CWnd::GetParentFrame((CWnd *)this);
      if (pCVar5 == (CFrameWnd *)0x0) goto LAB_100d2beb;
      GetClientRect(*(HWND *)(pCVar5 + 0x20),&local_28);
      local_7c = local_28.right - local_28.left;
      local_78 = local_28.bottom - local_28.top;
    }
    if (*(int *)(this + 0xd0) == 0) {
      local_58[0] = BeginDeferWindowPos(*(int *)(this + 0xc4));
    }
    else {
      local_58[0] = (HDWP)0x0;
    }
    iVar8 = -DAT_10164b34;
    iVar7 = -DAT_10164b30;
    local_68 = 0;
    local_6c = 0;
    local_60 = 0;
    if (0 < *(int *)(local_64 + 0xc4)) {
      local_70 = -4;
      local_88 = iVar8;
      do {
        local_5c = (int *)FUN_100d299c(local_64,local_60);
        pCVar3 = local_64;
        if ((local_60 < 0) || (*(int *)(local_64 + 0xc4) <= local_60)) goto LAB_100d2beb;
        if (local_5c == (int *)0x0) {
          if (*(int *)(local_70 + 4 + *(int *)(local_64 + 0xc0)) == 0) {
LAB_100d3032:
            if (local_68 != 0) {
              if (in_stack_0000000c == 0) {
                iVar7 = iVar7 + (local_68 - DAT_10164b30);
                iVar6 = *local_74;
                if (*local_74 <= iVar7) {
                  iVar6 = iVar7;
                }
                *local_74 = iVar6;
                iVar6 = local_74[1];
                if (local_74[1] <= iVar8) {
                  iVar6 = iVar8;
                }
                local_74[1] = iVar6;
                iVar8 = -DAT_10164b34;
              }
              else {
                iVar8 = iVar8 + (local_68 - DAT_10164b34);
                if (iVar7 < *local_74) {
                  iVar7 = *local_74;
                }
                *local_74 = iVar7;
                iVar7 = local_74[1];
                if (local_74[1] <= iVar8) {
                  iVar7 = iVar8;
                }
                local_74[1] = iVar7;
                iVar7 = -DAT_10164b30;
              }
              local_68 = 0;
              local_88 = iVar8;
            }
          }
        }
        else {
          iVar6 = (**(code **)(*local_5c + 0x18c))();
          if (iVar6 == 0) {
LAB_100d3013:
            if (local_6c != 0) goto LAB_100d30a2;
          }
          else {
            uVar1 = local_5c[0x29];
            if (((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) {
              iVar6 = (-(uint)((uVar1 & 0xa000) != 0) & 0xfffffffa) + 0x10;
            }
            else {
              iVar6 = 6;
            }
            (**(code **)(*local_5c + 0x164))(&local_84,0xffffffff,iVar6);
            local_18.right = local_84 + iVar7;
            local_18.bottom = local_80 + iVar8;
            local_28.left = 0;
            local_28.top = 0;
            local_28.right = 0;
            local_28.bottom = 0;
            local_18.left = iVar7;
            local_18.top = iVar8;
            GetWindowRect((HWND)local_5c[8],&local_28);
            CWnd::ScreenToClient((CWnd *)pCVar3,&local_28);
            if (in_stack_0000000c == 0) {
              if ((local_18.top < local_28.top) && (*(int *)(pCVar3 + 0xb8) == 0)) {
                OffsetRect(&local_18,0,local_28.top - local_18.top);
              }
              if ((local_78 < local_18.bottom) && (*(int *)(pCVar3 + 0xb8) == 0)) {
                iVar6 = local_78 - ((local_18.bottom - local_18.top) - DAT_10164b34);
                if (iVar6 <= iVar8) {
                  iVar6 = iVar8;
                }
                OffsetRect(&local_18,0,iVar6 - local_18.top);
              }
              if (local_6c == 0) {
                if ((local_78 - DAT_10164b34 <= local_18.top) && (0 < local_60)) {
                  if ((local_60 + -1 < 0) || (*(int *)(pCVar3 + 0xc4) <= local_60 + -1))
                  goto LAB_100d2beb;
                  if (*(int *)(local_70 + *(int *)(pCVar3 + 0xc0)) != 0) goto LAB_100d2ecd;
                }
              }
              else {
                local_6c = 0;
                OffsetRect(&local_18,0,-(local_18.top + DAT_10164b34));
              }
              BVar4 = EqualRect(&local_18,&local_28);
              if (BVar4 == 0) {
                if ((*(int *)(pCVar3 + 0xd0) == 0) && ((*(byte *)(local_5c + 0x29) & 1) == 0)) {
                  iVar8 = local_5c[0x2d];
                  *(LONG *)(iVar8 + 0x94) = local_18.left;
                  *(LONG *)(iVar8 + 0x98) = local_18.top;
                  *(LONG *)(iVar8 + 0x9c) = local_18.right;
                  *(LONG *)(iVar8 + 0xa0) = local_18.bottom;
                }
                AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)local_58,(HWND__ *)local_5c[8],&local_18
                                   );
              }
              iVar8 = (local_18.top - DAT_10164b34) + local_80;
              local_88 = iVar8;
              if (local_68 <= local_84) {
                local_68 = local_84;
                goto LAB_100d3013;
              }
            }
            else {
              if ((local_18.left < local_28.left) && (*(int *)(pCVar3 + 0xb8) == 0)) {
                OffsetRect(&local_18,local_28.left - local_18.left,0);
              }
              if ((local_7c < local_18.right) && (*(int *)(pCVar3 + 0xb8) == 0)) {
                iVar6 = local_7c - ((local_18.right - DAT_10164b30) - local_18.left);
                if (iVar6 <= iVar7) {
                  iVar6 = iVar7;
                }
                OffsetRect(&local_18,iVar6 - local_18.left,0);
              }
              if (local_6c == 0) {
                if ((local_7c - DAT_10164b30 <= local_18.left) && (0 < local_60)) {
                  if ((local_60 + -1 < 0) || (*(int *)(pCVar3 + 0xc4) <= local_60 + -1))
                  goto LAB_100d2beb;
                  if (*(int *)(local_70 + *(int *)(pCVar3 + 0xc0)) != 0) {
LAB_100d2ecd:
                    FUN_1000a2f0((CWnd *)(pCVar3 + 0xbc),local_60,0,1);
                    local_6c = 1;
                    goto LAB_100d3032;
                  }
                }
              }
              else {
                local_6c = 0;
                OffsetRect(&local_18,-(DAT_10164b30 + local_18.left),0);
              }
              BVar4 = EqualRect(&local_18,&local_28);
              if (BVar4 == 0) {
                if ((*(int *)(pCVar3 + 0xd0) == 0) && ((*(byte *)(local_5c + 0x29) & 1) == 0)) {
                  iVar7 = local_5c[0x2d];
                  *(LONG *)(iVar7 + 0x94) = local_18.left;
                  *(LONG *)(iVar7 + 0x98) = local_18.top;
                  *(LONG *)(iVar7 + 0x9c) = local_18.right;
                  *(LONG *)(iVar7 + 0xa0) = local_18.bottom;
                  iVar8 = local_88;
                }
                AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)local_58,(HWND__ *)local_5c[8],&local_18
                                   );
              }
              iVar7 = (local_84 - DAT_10164b30) + local_18.left;
              if (local_68 <= local_80) {
                local_68 = local_80;
              }
            }
          }
          (**(code **)(*local_5c + 400))(local_58);
        }
LAB_100d30a2:
        local_60 = local_60 + 1;
        local_70 = local_70 + 4;
      } while (local_60 < *(int *)(local_64 + 0xc4));
    }
    pCVar3 = local_64;
    piVar2 = local_74;
    if ((*(int *)(local_64 + 0xd0) == 0) && (local_58[0] != (HDWP)0x0)) {
      EndDeferWindowPos(local_58[0]);
    }
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    SetRectEmpty(&local_38);
    (**(code **)(*(int *)pCVar3 + 0x16c))(&local_38,in_stack_0000000c);
    if (((param_2 == 0) || (in_stack_0000000c == 0)) && (*piVar2 != 0)) {
      *piVar2 = (*piVar2 - local_38.right) + local_38.left;
    }
    if (((param_2 == 0) || (in_stack_0000000c != 0)) && (piVar2[1] != 0)) {
      piVar2[1] = (piVar2[1] - local_38.bottom) + local_38.top;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_100d2beb:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

