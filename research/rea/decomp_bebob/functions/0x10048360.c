// rea decompile_all
// name: CMFCPropertyGridCtrl::TrackHeader
// address: 0x10048360
// body: available
// range: 0x10048360-0x100484b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::TrackHeader(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPropertyGridCtrl::TrackHeader(CMFCPropertyGridCtrl *this,int param_1)

{
  RECT *pRVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  undefined4 local_6c;
  int local_68;
  CClientDC local_3c [4];
  HDC local_38;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x1004836c;
  CClientDC::CClientDC(local_3c,(CWnd *)this);
  local_8 = 0;
  pRVar1 = (RECT *)(this + 0x328);
  BVar2 = IsRectEmpty(pRVar1);
  if ((BVar2 == 0) && (*(int *)(this + 0x35c) == 0)) {
    InvertRect(local_38,pRVar1);
  }
  if (param_1 < 0) {
    SetRectEmpty(pRVar1);
  }
  else {
    pRVar1->left = *(LONG *)(this + 0x2e8);
    *(undefined4 *)(this + 0x32c) = *(undefined4 *)(this + 0x2ec);
    *(undefined4 *)(this + 0x330) = *(undefined4 *)(this + 0x2f0);
    *(undefined4 *)(this + 0x334) = *(undefined4 *)(this + 0x2f4);
    pRVar1 = (RECT *)(this + 0x328);
    pRVar1->left = pRVar1->left + param_1;
    *(LONG *)(this + 0x330) = pRVar1->left + 1;
    if (*(int *)(this + 0x35c) == 0) {
      InvertRect(local_38,pRVar1);
    }
    else {
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_24);
      local_28 = *(int *)(this + 0x314);
      if (local_28 <= param_1) {
        local_28 = param_1;
      }
      iVar4 = local_24.right - local_24.left;
      iVar3 = GetSystemMetrics(0x15);
      if (local_28 < (iVar4 - iVar3) + -5) {
        local_68 = *(int *)(this + 0x314);
        if (*(int *)(this + 0x314) <= param_1) {
          local_68 = param_1;
        }
      }
      else {
        iVar4 = local_24.right - local_24.left;
        iVar3 = GetSystemMetrics(0x15);
        local_68 = (iVar4 - iVar3) + -5;
      }
      *(int *)(this + 0x318) = local_68;
      local_68 = local_68 + 2;
      local_6c = 1;
      iVar3 = (**(code **)(*(int *)this + 0x160))();
      SendMessageW(*(HWND *)(iVar3 + 0x20),0x120c,0,(LPARAM)&local_6c);
      local_68 = (local_24.right - local_24.left) + 10;
      iVar3 = (**(code **)(*(int *)this + 0x160))();
      SendMessageW(*(HWND *)(iVar3 + 0x20),0x120c,1,(LPARAM)&local_6c);
    }
  }
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_3c);
  FUN_100f90cf();
  return;
}

