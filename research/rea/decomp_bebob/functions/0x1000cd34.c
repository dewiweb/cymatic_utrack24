// rea decompile_all
// name: _AfxTopChildWindowFromPoint
// address: 0x1000cd34
// body: available
// range: 0x1000cd34-0x1000cdf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct HWND__ * __stdcall _AfxTopChildWindowFromPoint(struct HWND__ *,struct tagPOINT)
   
   Library: Visual Studio 2010 Release */

HWND__ * _AfxTopChildWindowFromPoint(HWND__ *param_1,tagPOINT param_2)

{
  POINT pt;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  HWND__ *pHVar4;
  UINT uCmd;
  tagPOINT local_24;
  HWND local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_24.x = param_2.x;
  local_24.y = param_2.y;
  local_1c = RealChildWindowFromPoint(param_1,param_2);
  if (local_1c == (HWND)0x0) {
    ClientToScreen(param_1,&local_24);
    uCmd = 5;
    while (param_1 = GetWindow(param_1,uCmd), param_1 != (HWND)0x0) {
      iVar1 = GetDlgCtrlID(param_1);
      if ((iVar1 != 0xffff) && (uVar2 = GetWindowLongW(param_1,-0x10), (uVar2 & 0x10000000) != 0)) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(param_1,&local_18);
        pt.y = local_24.y;
        pt.x = local_24.x;
        BVar3 = PtInRect(&local_18,pt);
        if (BVar3 != 0) {
          local_1c = param_1;
        }
      }
      uCmd = 2;
    }
  }
  pHVar4 = (HWND__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar4;
}

