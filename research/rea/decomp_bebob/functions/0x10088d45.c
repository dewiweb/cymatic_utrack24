// rea decompile_all
// name: CPane::MovePane
// address: 0x10088d45
// body: available
// range: 0x10088d45-0x10088e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CPane::MovePane(class CRect,int,void * &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPane::MovePane(CPane *this,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7
               )

{
  int _X;
  long lVar1;
  HWND pHVar2;
  CWnd *this_00;
  int _X_00;
  tagRECT *ptVar3;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  _X = param_6 - param_4;
  local_20 = 0;
  local_1c = 0;
  _X_00 = param_5 - param_3;
  (**(code **)(*(int *)this + 0x26c))(&local_20);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  *param_2 = (param_5 - param_3) - (local_18.right - local_18.left);
  param_2[1] = (param_6 - param_4) - (local_18.bottom - local_18.top);
  if (param_7 == 0) {
    lVar1 = _labs(_X_00);
    if (lVar1 < local_20) {
      if ((local_18.left == param_3) || (local_18.right != param_5)) {
        param_5 = local_20 + local_18.left;
      }
      else {
        param_3 = local_18.right - local_20;
      }
      *param_2 = ((local_18.right - param_5) - local_18.left) + param_3;
    }
    lVar1 = _labs(_X);
    if (lVar1 < local_1c) {
      if ((local_18.top == param_4) || (local_18.bottom != param_6)) {
        param_6 = local_1c + local_18.top;
      }
      else {
        param_4 = local_18.bottom - local_1c;
      }
      param_2[1] = ((local_18.bottom - param_6) - local_18.top) + param_4;
    }
  }
  ptVar3 = (tagRECT *)&param_3;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar2);
  CWnd::ScreenToClient(this_00,ptVar3);
  (**(code **)(*(int *)this + 0x230))(&param_3,1,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

