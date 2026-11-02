// rea decompile_all
// name: CMFCOutlookBarPane::SetBackImage
// address: 0x100bfb56
// body: available
// range: 0x100bfb56-0x100bfc1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCOutlookBarPane::SetBackImage(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCOutlookBarPane::SetBackImage(CMFCOutlookBarPane *this,uint param_1)

{
  AFX_MODULE_STATE *pAVar1;
  HBITMAP__ *h;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(uint *)(this + 0x1c80) != param_1) {
    *(undefined4 *)(this + 0x1c9c) = 0;
    if (0 < *(int *)(this + 0xcd8)) {
      FUN_100822ef((int)(this + 0xcd4));
    }
    *(undefined4 *)(this + 0x1c80) = 0;
    if (param_1 != 0) {
      pAVar1 = AfxGetModuleState();
      h = LoadImageW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)(param_1 & 0xffff),0,0,0,0x3000);
      if (h != (HBITMAP__ *)0x0) {
        GetObjectW(h,0x18,local_1c);
        *(undefined4 *)(this + 0xd28) = local_14;
        *(undefined4 *)(this + 0xd24) = local_18;
        CMFCToolBarImages::AddImage((CMFCToolBarImages *)(this + 0xcd4),h,0);
        *(uint *)(this + 0x1c80) = param_1;
      }
      *(uint *)(this + 0x1c9c) = (uint)(8 < DAT_10166c4c);
    }
    if (*(HWND *)(this + 0x20) != (HWND)0x0) {
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  return;
}

