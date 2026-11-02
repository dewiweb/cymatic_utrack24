// rea decompile_all
// name: COleDropSource::OnBeginDrag
// address: 0x100986c9
// body: available
// range: 0x100986c9-0x100987ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleDropSource::OnBeginDrag(class CWnd *)
   
   Library: Visual Studio 2010 Release */

int __thiscall COleDropSource::OnBeginDrag(COleDropSource *this,CWnd *param_1)

{
  POINT pt;
  SHORT SVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  DWORD DVar5;
  tagMSG local_24;
  DWORD local_8;
  
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  SVar1 = GetKeyState(1);
  if (SVar1 < 0) {
    *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 1;
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
  }
  else {
    SVar1 = GetKeyState(2);
    if (SVar1 < 0) {
      *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 2;
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
    }
  }
  local_8 = GetTickCount();
  pHVar2 = SetCapture(*(HWND *)(param_1 + 0x20));
  CWnd::FromHandle(pHVar2);
  if (*(int *)(this + 0x34) == 0) {
    while( true ) {
      pHVar2 = GetCapture();
      pCVar3 = CWnd::FromHandle(pHVar2);
      if (pCVar3 != param_1) break;
      BVar4 = PeekMessageW(&local_24,(HWND)0x0,0x200,0x209,1);
      if ((BVar4 != 0) || (BVar4 = PeekMessageW(&local_24,(HWND)0x0,0x100,0x109,1), BVar4 != 0)) {
        if (((local_24.message == 0x202) ||
            (((local_24.message == 0x205 || (local_24.message == 0x201)) ||
             (local_24.message == 0x204)))) ||
           ((local_24.message == 0x100 && (local_24.wParam == 0x1b)))) break;
        pt.y = local_24.pt.y;
        pt.x = local_24.pt.x;
        BVar4 = PtInRect((RECT *)(this + 0x24),pt);
        *(uint *)(this + 0x34) = (uint)(BVar4 == 0);
      }
      DVar5 = GetTickCount();
      if (DAT_10168ba8 < DVar5 - local_8) {
        *(undefined4 *)(this + 0x34) = 1;
      }
      if (*(int *)(this + 0x34) != 0) break;
    }
  }
  ReleaseCapture();
  return *(int *)(this + 0x34);
}

