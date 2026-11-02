// rea decompile_all
// name: CMFCPopupMenuBar::AdjustLocations
// address: 0x1009fc48
// body: available
// range: 0x1009fc48-0x1009fec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009fcf8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenuBar::AdjustLocations(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenuBar::AdjustLocations(CMFCPopupMenuBar *this)

{
  int *piVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_7c [8];
  CClientDC local_74 [20];
  int *local_60;
  CPen *local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  tagPOINT local_44;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x1009fc54;
  if ((((this != (CMFCPopupMenuBar *)0x0) && (*(HWND *)(this + 0x20) != (HWND)0x0)) &&
      (BVar3 = IsWindow(*(HWND *)(this + 0x20)), BVar3 != 0)) && (*(int *)(this + 0xb68) == 0)) {
    if (*(int *)(this + 0xd00) == 0) {
      if (*(int *)(this + 0xcd8) == 0) {
        CMFCToolBarMenuButton::GetTextHorzOffsets((int *)(this + 0xcd8),(int *)(this + 0xcdc));
      }
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_24);
      CClientDC::CClientDC(local_74,(CWnd *)this);
      local_8 = 0;
      local_5c = CDC::SelectObject((CDC *)local_74,(CPen *)&DAT_10166bb4);
      if (local_5c == (CPen *)0x0) {
LAB_1009fcf8:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      uVar6 = (**(code **)(*(int *)this + 0x354))();
      local_2c = local_24.left;
      iVar5 = (local_24.top - (int)uVar6 * *(int *)(this + 0xcd4)) + 1;
      local_48 = iVar5;
      if ((*(int *)(this + 0xd28) == 0) || (DAT_10166e54 != 0)) {
        local_28 = local_24.right - local_24.left;
      }
      else {
        if (*(int *)(this + 0xd28) < 1) goto LAB_1009fcf8;
        local_28 = **(int **)(this + 0xd24);
      }
      local_3c = 0;
      FUN_10026c8e(local_24.left,(int)((ulonglong)uVar6 >> 0x20),&local_34);
      local_34 = local_34 + 2;
      local_30 = local_30 + 2;
      if (local_30 <= DAT_10166c6c) {
        local_30 = DAT_10166c6c;
      }
      puVar2 = *(undefined4 **)(this + 0xbcc);
      while (puVar2 != (undefined4 *)0x0) {
        if (puVar2 == (undefined4 *)0x0) goto LAB_1009fcf8;
        piVar1 = (int *)puVar2[2];
        local_38 = (undefined4 *)*puVar2;
        local_60 = piVar1;
        if (piVar1 == (int *)0x0) goto LAB_1009fcf8;
        if ((((piVar1[9] & 0x20000000U) != 0) && (iVar5 != local_48)) && (DAT_10166e54 == 0)) {
          local_3c = local_3c + 1;
          local_2c = local_28 + 1;
          if ((local_3c < 0) || (*(int *)(this + 0xd28) <= local_3c)) goto LAB_1009fcf8;
          local_28 = *(int *)(*(int *)(this + 0xd24) + local_3c * 4);
          iVar5 = local_48;
        }
        local_54 = iVar5;
        if ((piVar1[9] & 1U) == 0) {
          iVar4 = (**(code **)(*piVar1 + 0x1c))(local_7c,local_74,&local_34,1);
          local_50 = local_28 + local_24.left;
          local_4c = *(int *)(iVar4 + 4) + iVar5;
          local_58 = local_2c;
        }
        else {
          local_58 = *(int *)(this + 0xcd8) + local_2c;
          local_50 = (local_28 - *(int *)(this + 0xcdc)) + local_24.left;
          local_4c = iVar5 + 8;
        }
        iVar5 = *local_60;
        piVar1[0x15] = local_58;
        piVar1[0x16] = local_54;
        piVar1[0x17] = local_50;
        piVar1[0x18] = local_4c;
        (**(code **)(iVar5 + 0x30))();
        iVar5 = local_4c;
        puVar2 = local_38;
      }
      CDC::SelectObject((CDC *)local_74,local_5c);
      FUN_1002de91((int)this);
      local_44.x = 0;
      local_44.y = 0;
      GetCursorPos(&local_44);
      ScreenToClient(*(HWND *)(this + 0x20),&local_44);
      iVar5 = (**(code **)(*(int *)this + 0x390))(local_44.x,local_44.y);
      if (-1 < iVar5) {
        *(undefined4 *)(this + 0xcfc) = 0;
      }
      CMFCToolBar::UpdateTooltips((CMFCToolBar *)this);
      local_8 = 0xffffffff;
      CClientDC::~CClientDC(local_74);
    }
    else {
      CMFCToolBar::AdjustLocations((CMFCToolBar *)this);
      CMFCToolBar::UpdateTooltips((CMFCToolBar *)this);
    }
  }
  FUN_100f90cf();
  return;
}

