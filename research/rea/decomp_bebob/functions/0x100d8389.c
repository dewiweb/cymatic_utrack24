// rea decompile_all
// name: CScrollView::OnPrepareDC
// address: 0x100d8389
// body: available
// range: 0x100d8389-0x100d84ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CScrollView::OnPrepareDC(class CDC *,struct CPrintInfo *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CScrollView::OnPrepareDC(CScrollView *this,CDC *param_1,CPrintInfo *param_2)

{
  int *piVar1;
  int iVar2;
  int local_20 [2];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar2 = 0;
  if (*(int *)(this + 0x78) == 0) {
    if (*(int *)(this + 0x80) == -1) {
      (**(code **)(*(int *)param_1 + 0x34))(8);
      (**(code **)(*(int *)param_1 + 0x48))
                (local_20,*(undefined4 *)(this + 0x84),*(undefined4 *)(this + 0x88));
      (**(code **)(*(int *)param_1 + 0x40))
                (&local_18.right,*(undefined4 *)(this + 0x8c),*(undefined4 *)(this + 0x90));
    }
    else {
      (**(code **)(*(int *)param_1 + 0x34))(*(int *)(this + 0x80));
    }
    local_20[0] = 0;
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar1 = (int *)GetDeviceScrollPosition(this);
      local_20[0] = -*piVar1;
      iVar2 = -piVar1[1];
      if (*(int *)(this + 0xa4) != 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_18);
        if (*(int *)(this + 0x8c) < local_18.right - local_18.left) {
          local_20[0] = ((local_18.right - *(int *)(this + 0x8c)) - local_18.left) / 2;
        }
        if (*(int *)(this + 0x90) < local_18.bottom - local_18.top) {
          iVar2 = ((local_18.bottom - *(int *)(this + 0x90)) - local_18.top) / 2;
        }
      }
    }
    (**(code **)(*(int *)param_1 + 0x38))(&local_18.right,local_20[0],iVar2);
    CView::OnPrepareDC((CView *)this,param_1,param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

