// rea decompile_all
// name: CMFCPropertyGridCtrl::SetCurSel
// address: 0x10048658
// body: available
// range: 0x10048658-0x10048857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCPropertyGridCtrl::SetCurSel(class CMFCPropertyGridProperty *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridCtrl::SetCurSel
          (CMFCPropertyGridCtrl *this,CMFCPropertyGridProperty *param_1,int param_2)

{
  int iVar1;
  CMFCPropertyGridProperty *pCVar2;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar2 = *(CMFCPropertyGridProperty **)(this + 0x398);
  if (pCVar2 == param_1) goto LAB_1004883f;
  if ((pCVar2 != (CMFCPropertyGridProperty *)0x0) && (*(int *)(pCVar2 + 0x54) != 0)) {
    (**(code **)(*(int *)this + 0x184))(1);
  }
  *(CMFCPropertyGridProperty **)(this + 0x398) = param_1;
  (**(code **)(*(int *)this + 0x178))(param_1,pCVar2);
  if (pCVar2 != (CMFCPropertyGridProperty *)0x0) {
    (**(code **)(*(int *)pCVar2 + 0x74))(param_1);
    local_28.left = ((LPRECT)(pCVar2 + 0x3c))->left;
    local_28.top = *(LONG *)(pCVar2 + 0x40);
    local_28.right = *(LONG *)(pCVar2 + 0x44);
    local_28.bottom = *(LONG *)(pCVar2 + 0x48);
    SetRectEmpty((LPRECT)(pCVar2 + 0x3c));
    if (param_2 != 0) {
      local_18.left = *(LONG *)(pCVar2 + 0x2c);
      local_18.top = *(LONG *)(pCVar2 + 0x30);
      local_18.right = *(LONG *)(pCVar2 + 0x34);
      local_18.bottom = *(LONG *)(pCVar2 + 0x38);
      if (((*(int *)(pCVar2 + 0x58) == 0) ||
          ((*(int *)(this + 0x358) == 0 && (*(int *)(pCVar2 + 0x58) == 0)))) &&
         (iVar1 = (**(code **)(*(int *)pCVar2 + 0x9c))(), iVar1 != 0)) {
        local_18.right = *(int *)(this + 0x318) + local_18.left;
      }
      if (local_18.right < local_28.right) {
        local_18.right = local_28.right;
      }
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    }
  }
  if (param_1 == (CMFCPropertyGridProperty *)0x0) {
LAB_100487d6:
    if (param_2 != 0) {
      if (*(int *)(this + 700) != 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_18);
        local_28.top = *(LONG *)(this + 0x2f4);
        local_28.left = local_18.left;
        local_28.right = local_18.right;
        local_28.bottom = local_18.bottom;
        InflateRect(&local_28,-4,-4);
        InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      }
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  else {
    (**(code **)(*(int *)param_1 + 0x70))(pCVar2);
    iVar1 = (**(code **)(*(int *)param_1 + 0x94))();
    if (iVar1 != 0) {
      (**(code **)(*(int *)param_1 + 0x78))();
    }
    if (param_2 != 0) {
      local_18.left = *(LONG *)(param_1 + 0x2c);
      local_18.top = *(LONG *)(param_1 + 0x30);
      local_18.right = *(LONG *)(param_1 + 0x34);
      local_18.bottom = *(LONG *)(param_1 + 0x38);
      if (((*(int *)(param_1 + 0x58) == 0) ||
          ((*(int *)(this + 0x358) == 0 && (*(int *)(param_1 + 0x58) == 0)))) &&
         (iVar1 = (**(code **)(*(int *)param_1 + 0x9c))(), iVar1 != 0)) {
        local_18.right = *(int *)(this + 0x318) + local_18.left;
      }
      if (local_18.right < *(int *)(param_1 + 0x44)) {
        local_18.right = *(int *)(param_1 + 0x44);
      }
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(param_1 + 0x3c),1);
      goto LAB_100487d6;
    }
  }
  pCVar2 = *(CMFCPropertyGridProperty **)(this + 0x398);
LAB_1004883f:
  (**(code **)(*(int *)this + 0x1b4))(pCVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

