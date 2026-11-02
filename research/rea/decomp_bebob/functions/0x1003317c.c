// rea decompile_all
// name: CMFCBaseVisualManager::UpdateSystemColors
// address: 0x1003317c
// body: available
// range: 0x1003317c-0x1003335f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseVisualManager::UpdateSystemColors(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCBaseVisualManager::UpdateSystemColors(CMFCBaseVisualManager *this)

{
  CWnd *pCVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x4c) != 0) {
    CleanUpThemes(this);
    if (((*(int *)(this + 0x50) != 0) && (*(int *)(this + 0x54) != 0)) &&
       (*(int *)(this + 0x58) != 0)) {
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"WINDOW");
      *(undefined4 *)(this + 4) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"TOOLBAR");
      *(undefined4 *)(this + 8) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"BUTTON");
      *(undefined4 *)(this + 0x10) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"STATUS");
      *(undefined4 *)(this + 0x14) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"REBAR");
      *(undefined4 *)(this + 0xc) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"COMBOBOX");
      *(undefined4 *)(this + 0x18) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"PROGRESS");
      *(undefined4 *)(this + 0x1c) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"HEADER");
      *(undefined4 *)(this + 0x20) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"SCROLLBAR");
      *(undefined4 *)(this + 0x24) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"EXPLORERBAR");
      *(undefined4 *)(this + 0x28) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"TREEVIEW");
      *(undefined4 *)(this + 0x2c) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"STARTPANEL");
      *(undefined4 *)(this + 0x30) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"TASKBAND");
      *(undefined4 *)(this + 0x34) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"TASKBAR");
      *(undefined4 *)(this + 0x38) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"SPIN");
      *(undefined4 *)(this + 0x3c) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,&DAT_101223b8);
      *(undefined4 *)(this + 0x40) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"TRACKBAR");
      *(undefined4 *)(this + 0x44) = uVar2;
      pCVar1 = AfxGetMainWnd();
      uVar2 = 0;
      if (pCVar1 != (CWnd *)0x0) {
        uVar2 = *(undefined4 *)(pCVar1 + 0x20);
      }
      uVar2 = (**(code **)(this + 0x50))(uVar2,L"MENU");
      *(undefined4 *)(this + 0x48) = uVar2;
    }
  }
  return;
}

