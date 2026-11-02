// rea decompile_all
// name: CMFCToolBar::AdjustLocations
// address: 0x1002cd62
// body: available
// range: 0x1002cd62-0x1002d250 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ce01 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBar::AdjustLocations(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::AdjustLocations(CMFCToolBar *this)

{
  CMFCToolBarButton *this_00;
  CMFCToolBarButton *pCVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  CMFCToolBarButton *pCVar5;
  CMFCToolBarButton *pCVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 local_ac [8];
  CClientDC local_a4 [20];
  undefined1 local_90 [4];
  CMFCToolBarButton *local_8c;
  int local_88;
  CMFCToolBarButton *local_84;
  int local_80;
  CMFCToolBarButton *local_7c;
  uint local_78;
  CMFCToolBarButton *local_74;
  CMFCToolBarButton *local_70;
  int local_6c;
  int local_68;
  CFont *local_64;
  int local_60;
  CMFCToolBarButton *local_5c;
  CMFCToolBarButton *local_58;
  CMFCToolBarButton *local_54;
  CMFCToolBarButton *local_50;
  CMFCToolBarButton *local_4c;
  CMFCToolBarButton *local_48;
  CMFCToolBarButton *local_44;
  uint local_40;
  CMFCToolBarButton *local_3c;
  int *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x9c;
  local_8 = 0x1002cd71;
  if ((*(int *)(this + 0xbd4) == 0) || (*(int *)(this + 0x20) == 0)) goto LAB_1002d24b;
  uVar2 = (**(code **)(*(int *)this + 400))();
  uVar2 = (uint)((uVar2 & 0xa000) != 0);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_40 = uVar2;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_70 = (CMFCToolBarButton *)local_24.right;
  CClientDC::CClientDC(local_a4,(CWnd *)this);
  local_8 = 0;
  if (uVar2 == 0) {
    local_64 = (CFont *)CDC::SelectObject((CDC *)local_a4,(CPen *)&DAT_10166be4);
  }
  else {
    local_64 = CBasePane::SelectDefaultFont((CBasePane *)this,(CDC *)local_a4);
  }
  if (local_64 == (CFont *)0x0) {
LAB_1002ce01:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pCVar6 = (CMFCToolBarButton *)local_24.top;
  if (uVar2 != 0) {
    pCVar6 = (CMFCToolBarButton *)local_24.left;
  }
  local_74 = (CMFCToolBarButton *)local_24.top;
  local_48 = pCVar6 + 1;
  local_44 = (CMFCToolBarButton *)(**(code **)(*(int *)this + 0x354))();
  local_80 = (**(code **)(*(int *)this + 0x358))();
  local_7c = local_44;
  local_6c = 0;
  local_68 = 0;
  if (((*(int *)(this + 0xca0) != 0) && (iVar3 = (**(code **)(*(int *)this + 0x16c))(), iVar3 == 0))
     && (DAT_10166e54 == 0)) {
    CObList::RemoveAll((CObList *)(*(int *)(this + 0xca0) + 0x110));
    local_44 = *(CMFCToolBarButton **)(*(int *)(this + 0xca0) + 0xfc);
    *(undefined4 *)(*(int *)(this + 0xca0) + 0xfc) = 0;
    if (uVar2 == 0) {
      local_88 = local_24.right - local_24.left;
      local_84 = local_7c;
    }
    else {
      local_88 = local_80;
      local_84 = (CMFCToolBarButton *)(local_24.bottom + -local_24.top);
    }
    piVar4 = (int *)(**(code **)(**(int **)(this + 0xca0) + 0x1c))
                              (local_90,local_a4,&local_88,uVar2);
    local_6c = *piVar4;
    local_68 = piVar4[1];
    *(CMFCToolBarButton **)(*(int *)(this + 0xca0) + 0xfc) = local_44;
  }
  local_78 = 0;
  local_38 = (int *)0x0;
  pCVar5 = *(CMFCToolBarButton **)(this + 0xbcc);
  pCVar6 = pCVar6 + 1;
  while (pCVar5 != (CMFCToolBarButton *)0x0) {
    do {
      local_44 = pCVar5;
      if (pCVar5 == (CMFCToolBarButton *)0x0) goto LAB_1002ce01;
      this_00 = *(CMFCToolBarButton **)(pCVar5 + 8);
      local_5c = *(CMFCToolBarButton **)pCVar5;
      local_84 = this_00;
      if (this_00 == (CMFCToolBarButton *)0x0) goto LAB_1002d159;
      local_60 = 1;
      piVar4 = (int *)(**(code **)(*(int *)this_00 + 0x1c))(local_ac,local_a4,&local_80,local_40);
      iVar3 = *piVar4;
      local_4c = (CMFCToolBarButton *)piVar4[1];
      if ((*(int *)(this_00 + 0x18) != 0) && (local_40 != 0)) {
        local_4c = local_7c;
      }
      if (((byte)this_00[0x24] & 1) != 0) {
        if ((pCVar6 == local_48) || (local_78 != 0)) {
          local_4c = (CMFCToolBarButton *)0x0;
          iVar3 = 0;
          local_60 = 0;
        }
        else {
          local_78 = 1;
        }
      }
      if (local_40 == 0) {
        local_50 = (CMFCToolBarButton *)(local_24.left + iVar3);
        local_4c = local_4c + (int)pCVar6;
        local_58 = (CMFCToolBarButton *)local_24.left;
        local_54 = pCVar6;
        local_3c = local_4c;
      }
      else {
        local_50 = pCVar6 + iVar3;
        local_4c = local_4c + (int)local_74;
        local_38 = (int *)((int)local_38 + iVar3);
        local_54 = local_74;
        local_58 = pCVar6;
        local_3c = local_50;
      }
      local_8c = pCVar6;
      if ((((*(CMFCToolBarButton **)(this + 0xca0) != (CMFCToolBarButton *)0x0) &&
           (this_00 != *(CMFCToolBarButton **)(this + 0xca0))) &&
          (iVar3 = (**(code **)(*(int *)this + 0x16c))(), iVar3 == 0)) && (DAT_10166e54 == 0)) {
        iVar3 = *(int *)(this + 0xca0);
        iVar7 = local_68;
        iVar8 = local_6c;
        if (((*(int *)(iVar3 + 0xe8) < 1) && (local_5c != (CMFCToolBarButton *)0x0)) &&
           ((*(int *)(local_5c + 8) == iVar3 && (*(int *)(iVar3 + 0x11c) == 0)))) {
          iVar7 = 0;
          iVar8 = 0;
        }
        if (local_40 == 0) {
          if (local_24.bottom - iVar7 < (int)local_4c) goto LAB_1002d035;
        }
        else if ((int)local_70 - iVar8 < (int)local_50) {
LAB_1002d035:
          local_60 = 0;
          local_3c = local_8c;
          CObList::AddTail((CObList *)(iVar3 + 0x110),(CObject *)this_00);
        }
      }
      CMFCToolBarButton::Show(this_00,local_60);
      pCVar1 = local_84;
      *(CMFCToolBarButton **)(this_00 + 0x54) = local_58;
      *(CMFCToolBarButton **)(this_00 + 0x58) = local_54;
      *(CMFCToolBarButton **)(this_00 + 0x5c) = local_50;
      *(CMFCToolBarButton **)(this_00 + 0x60) = local_4c;
      (**(code **)(*(int *)local_84 + 0x30))();
      if (local_60 != 0) {
        local_78 = *(uint *)(pCVar1 + 0x24) & 1;
      }
      pCVar5 = local_5c;
      pCVar6 = local_3c;
    } while ((*(int *)(pCVar1 + 0x10) == 0) && (local_5c != (CMFCToolBarButton *)0x0));
    if (local_40 != 0) {
      pCVar6 = local_70 + (-(int)local_48 - (int)local_38);
      local_84 = (CMFCToolBarButton *)((int)pCVar6 / 2);
      iVar3 = (**(code **)(*(int *)this + 0x16c))();
      if ((iVar3 != 0) && (0 < (int)pCVar6 / 2)) {
        pCVar6 = local_44;
        pCVar5 = *(CMFCToolBarButton **)(this + 0xb14);
        while (pCVar5 != (CMFCToolBarButton *)0x0) {
          if (pCVar6 == (CMFCToolBarButton *)0x0) goto LAB_1002ce01;
          local_3c = *(CMFCToolBarButton **)(pCVar6 + 4);
          local_38 = *(int **)(pCVar6 + 8);
          if (local_38 == (int *)0x0) goto LAB_1002ce01;
          if ((local_38[4] != 0) && (pCVar6 != local_44)) break;
          local_34.left = local_38[0x15];
          local_34.top = local_38[0x16];
          local_34.right = local_38[0x17];
          local_34.bottom = local_38[0x18];
          OffsetRect(&local_34,(int)local_84,0);
          local_38[0x15] = local_34.left;
          local_38[0x16] = local_34.top;
          local_38[0x17] = local_34.right;
          local_38[0x18] = local_34.bottom;
          (**(code **)(*local_38 + 0x30))();
          pCVar6 = local_3c;
          pCVar5 = local_3c;
        }
      }
      local_38 = (int *)0x0;
      local_74 = local_74 + 5 + (int)local_7c;
      pCVar5 = local_5c;
      pCVar6 = local_48;
      local_3c = local_48;
    }
  }
LAB_1002d159:
  iVar3 = *(int *)(this + 0xca0);
  if (iVar3 != 0) {
    local_58 = (CMFCToolBarButton *)local_24.left;
    local_54 = (CMFCToolBarButton *)local_24.top;
    local_50 = (CMFCToolBarButton *)local_24.right;
    local_4c = (CMFCToolBarButton *)local_24.bottom;
    if ((((*(int *)(iVar3 + 0xe8) < 1) && (*(int *)(iVar3 + 0x11c) == 0)) ||
        (iVar3 = (**(code **)(*(int *)this + 0x16c))(), iVar3 != 0)) || (DAT_10166e54 != 0)) {
      piVar4 = *(int **)(this + 0xca0);
      local_58 = (CMFCToolBarButton *)0x0;
      local_54 = (CMFCToolBarButton *)0x0;
      local_50 = (CMFCToolBarButton *)0x0;
      local_4c = (CMFCToolBarButton *)0x0;
      piVar4[0x15] = 0;
      piVar4[0x16] = 0;
      piVar4[0x17] = 0;
      piVar4[0x18] = 0;
      (**(code **)(*piVar4 + 0x30))();
      piVar4 = *(int **)(this + 0xca0);
      if (piVar4[0x10] != 1) {
        piVar4[0x10] = 1;
        uVar9 = 0;
        goto LAB_1002d218;
      }
    }
    else {
      if (local_40 == 0) {
        local_4c = local_4c + -1;
        local_54 = local_4c + -local_68;
      }
      else {
        local_50 = local_70 + -1;
        local_58 = local_50 + (1 - local_6c);
      }
      piVar4 = *(int **)(this + 0xca0);
      piVar4[0x15] = (int)local_58;
      piVar4[0x16] = (int)local_54;
      piVar4[0x17] = (int)local_50;
      piVar4[0x18] = (int)local_4c;
      (**(code **)(*piVar4 + 0x30))();
      piVar4 = *(int **)(this + 0xca0);
      if (piVar4[0x10] != 0) {
        piVar4[0x10] = 0;
        uVar9 = 1;
LAB_1002d218:
        (**(code **)(*piVar4 + 0x84))(uVar9);
      }
    }
  }
  CDC::SelectObject((CDC *)local_a4,(CPen *)local_64);
  UpdateTooltips(this);
  RedrawCustomizeButton(this);
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_a4);
LAB_1002d24b:
  FUN_100f90cf();
  return;
}

