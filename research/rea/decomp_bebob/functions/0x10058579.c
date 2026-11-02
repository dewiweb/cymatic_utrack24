// rea decompile_all
// name: CControlBar::DrawThemedGripper
// address: 0x10058579
// body: available
// range: 0x10058579-0x1005877c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005859f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CControlBar::DrawThemedGripper(class CDC *,class CRect const
   &,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CControlBar::DrawThemedGripper(CControlBar *this,CDC *param_1,CRect *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int local_50;
  int local_4c;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  undefined1 local_18 [12];
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1 == (CDC *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (*(int *)(this + 0x9c) != 0) {
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    if (param_3 != 0) {
      GetClientRect(*(HWND *)(this + 0x20),&local_48);
      local_18._0_4_ = 0;
      local_18._4_4_ = 0;
      local_18._8_4_ = 0;
      local_c = 0;
      GetWindowRect(*(HWND *)(this + 0x20),(LPRECT)local_18);
      CWnd::ScreenToClient((CWnd *)this,(tagRECT *)local_18);
      OffsetRect(&local_48,-local_18._0_4_,-local_18._4_4_);
    }
    if ((*(uint *)(this + 0xa4) & 0xa000) == 0) {
      local_50 = 1;
      lVar1 = CThemeHelper::GetThemePartSize
                        (*(void **)(this + 0x9c),*(HDC__ **)(param_1 + 4),1,0,(tagRECT *)0x0,1,
                         (tagSIZE *)(local_18 + 8));
      if (lVar1 < 0) goto LAB_1005876c;
      if (param_3 == 0) {
        local_38.top = *(LONG *)(param_2 + 4);
        local_4c = local_38.top;
      }
      else {
        local_4c = *(int *)(param_2 + 4);
        iVar2 = local_48.top - local_4c;
        if (iVar2 < local_c) {
          iVar2 = iVar2 + -1;
        }
        local_38.top = (iVar2 - local_c) / 2 + local_4c;
      }
      local_38.left = *(int *)(this + 0x84) + *(int *)param_2;
      local_38.right =
           (((*(int *)(param_2 + 8) - *(int *)(this + 0x88)) - *(int *)(this + 0x84)) -
           *(int *)param_2) + local_38.left;
      local_38.bottom = local_c + local_38.top;
      local_28.top = local_4c;
      local_28.bottom = local_48.top;
      local_28.left = local_38.left;
      local_28.right = local_38.right;
    }
    else {
      local_50 = 2;
      lVar1 = CThemeHelper::GetThemePartSize
                        (*(void **)(this + 0x9c),*(HDC__ **)(param_1 + 4),2,0,(tagRECT *)0x0,1,
                         (tagSIZE *)(local_18 + 8));
      if (lVar1 < 0) goto LAB_1005876c;
      if (param_3 == 0) {
        local_38.left = *(LONG *)param_2;
        local_4c = local_38.left;
      }
      else {
        local_4c = *(int *)param_2;
        iVar2 = local_48.left - local_4c;
        if (iVar2 < (int)local_18._8_4_) {
          iVar2 = iVar2 + -1;
        }
        local_38.left = (iVar2 - local_18._8_4_) / 2 + local_4c;
      }
      local_38.right = local_38.left + local_18._8_4_;
      local_38.top = *(int *)(param_2 + 4) + *(int *)(this + 0x84);
      local_28.left = local_4c;
      local_38.bottom =
           (((*(int *)(param_2 + 0xc) - *(int *)(this + 0x88)) - *(int *)(param_2 + 4)) -
           *(int *)(this + 0x84)) + local_38.top;
      local_28.right = local_48.left;
      local_28.bottom = local_38.bottom;
      local_28.top = local_38.top;
    }
    CThemeHelper::DrawThemeBackground
              (*(void **)(this + 0x9c),*(HDC__ **)(param_1 + 4),local_50,0,&local_38,&local_28);
  }
LAB_1005876c:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

