// rea decompile_all
// name: CCheckListBox::PreDrawItemThemed
// address: 0x100e9341
// body: available
// range: 0x100e9341-0x100e9493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: bool __thiscall CCheckListBox::PreDrawItemThemed(class CDC *,struct tagDRAWITEMSTRUCT
   &,int,int)
   
   Library: Visual Studio 2010 Release */

bool __thiscall
CCheckListBox::PreDrawItemThemed
          (CCheckListBox *this,CDC *param_1,tagDRAWITEMSTRUCT *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  tagSIZE local_54;
  CCheckListBox *local_4c;
  RECT *local_48;
  void *local_44;
  int local_40;
  undefined1 local_39;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_39 = 0;
  local_4c = this;
  iVar2 = CThemeHelper::IsAppThemed();
  if (iVar2 != 0) {
    local_44 = CThemeHelper::OpenThemeData(*(HWND__ **)(this + 0x20),L"Button");
    if (local_44 != (void *)0x0) {
      local_40 = 1;
      if (param_3 == 1) {
        local_40 = 5;
      }
      else if (param_3 == 2) {
        local_40 = 4;
      }
      lVar3 = CThemeHelper::GetThemePartSize
                        (local_44,*(HDC__ **)(param_1 + 4),3,local_40,(tagRECT *)0x0,1,&local_54);
      if (-1 < lVar3) {
        local_48 = (RECT *)(param_2 + 0x1c);
        CopyRect(&local_18,local_48);
        local_18.left = local_18.left + 1;
        iVar2 = (param_4 - local_54.cy) / 2;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        local_18.top = local_18.top + 1 + iVar2;
        local_18.right = local_54.cx + local_18.left;
        local_18.bottom = local_18.top + local_54.cy;
        CopyRect(&local_28,local_48);
        local_28.right = local_28.left + 2 + local_54.cx;
        (**(code **)(*(int *)this + 0x17c))
                  (&local_38,local_28.left,local_28.top,local_28.right,local_28.bottom,local_18.left
                   ,local_18.top,local_18.right,local_18.bottom);
        lVar3 = CThemeHelper::DrawThemeBackground
                          (local_44,*(HDC__ **)(param_1 + 4),3,local_40,&local_38,(tagRECT *)0x0);
        if (-1 < lVar3) {
          local_48->left = local_48->left + local_54.cx + 3;
          local_39 = 1;
        }
        CThemeHelper::CloseThemeData(local_44);
      }
    }
  }
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}

