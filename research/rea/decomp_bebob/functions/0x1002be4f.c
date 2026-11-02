// rea decompile_all
// name: CMFCToolBar::Deactivate
// address: 0x1002be4f
// body: available
// range: 0x1002be4f-0x1002beab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::Deactivate(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::Deactivate(CMFCToolBar *this)

{
  int iVar1;
  CWnd *pCVar2;
  
  iVar1 = *(int *)(this + 0xb7c);
  if ((-1 < iVar1) && (iVar1 < *(int *)(this + 0xbd4))) {
    *(undefined4 *)(this + 0xb84) = 0xffffffff;
    *(undefined4 *)(this + 0xb7c) = 0xffffffff;
    InvalidateButton(this,iVar1);
    UpdateWindow(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::GetOwner((CWnd *)this);
    SendMessageW(*(HWND *)(pCVar2 + 0x20),0x362,0xe001,0);
  }
                    /* WARNING: Could not recover jumptable at 0x1002bea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x364))();
  return;
}

