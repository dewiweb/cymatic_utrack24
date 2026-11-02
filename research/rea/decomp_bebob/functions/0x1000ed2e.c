// rea decompile_all
// name: OnToolHitTest
// address: 0x1000ed2e
// body: available
// range: 0x1000ed2e-0x1000eda0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::OnToolHitTest(class CPoint,struct tagTOOLINFOA *)const 
    public: virtual int __thiscall CWnd::OnToolHitTest(class CPoint,struct tagTOOLINFOW *)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall OnToolHitTest(void *this,LONG param_1,LONG param_2,uint *param_3)

{
  tagPOINT tVar1;
  HWND__ *hWnd;
  int iVar2;
  uint uVar3;
  
  tVar1.y = param_2;
  tVar1.x = param_1;
  hWnd = _AfxTopChildWindowFromPoint(*(HWND__ **)((int)this + 0x20),tVar1);
  if (hWnd == (HWND__ *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = GetDlgCtrlID(hWnd);
    if ((param_3 != (uint *)0x0) && (0x2b < *param_3)) {
      uVar3 = *(uint *)((int)this + 0x20);
      param_3[1] = param_3[1] | 1;
      param_3[9] = 0xffffffff;
      param_3[2] = uVar3;
      param_3[3] = (uint)hWnd;
      uVar3 = SendMessageW(hWnd,0x87,0,0);
      if ((uVar3 & 0x2000) == 0) {
        param_3[1] = param_3[1] | 0x80000002;
      }
    }
  }
  return iVar2;
}

