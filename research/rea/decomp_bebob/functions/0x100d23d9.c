// rea decompile_all
// name: CMFCToolBarFontComboBox::RebuildFonts
// address: 0x100d23d9
// body: available
// range: 0x100d23d9-0x100d24b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d246f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarFontComboBox::RebuildFonts(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarFontComboBox::RebuildFonts(CMFCToolBarFontComboBox *this)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined **local_164 [37];
  tagPDW *local_d0;
  CWindowDC local_88 [4];
  HDC local_84;
  HDC__ *local_74;
  tagLOGFONTW local_70;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x154;
  local_8 = 0x100d23e8;
  CWindowDC::CWindowDC(local_88,(CWnd *)0x0);
  local_8 = 0;
  _memset(&local_70,0,0x5c);
  local_70.lfCharSet = *(BYTE *)(this + 0xf8);
  EnumFontFamiliesExW(local_84,&local_70,(FONTENUMPROCW)&LAB_100d21c0,(LPARAM)this,0);
  CPrintDialog::CPrintDialog((CPrintDialog *)local_164,0,0x14000c,(CWnd *)0x0);
  local_8 = CONCAT31(local_8._1_3_,1);
  pAVar1 = AfxGetModuleState();
  iVar2 = CWinApp::GetPrinterDeviceDefaults(*(CWinApp **)(pAVar1 + 4),local_d0);
  if (iVar2 != 0) {
    local_74 = CPrintDialog::CreatePrinterDC((CPrintDialog *)local_164);
    if (local_74 == (HDC__ *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    EnumFontFamiliesExW(local_74,&local_70,(FONTENUMPROCW)&LAB_100d2209,(LPARAM)this,0);
    DeleteObject(local_74);
  }
  local_8 = local_8 & 0xffffff00;
  local_164[0] = CCommonDialog::vftable;
  CDialog::~CDialog((CDialog *)local_164);
  local_8 = 0xffffffff;
  CWindowDC::~CWindowDC(local_88);
  FUN_100f90cf();
  return;
}

