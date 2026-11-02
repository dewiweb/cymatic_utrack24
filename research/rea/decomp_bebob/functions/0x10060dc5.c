// rea decompile_all
// name: CFrameImpl::OnActivateApp
// address: 0x10060dc5
// body: available
// range: 0x10060dc5-0x10060e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnActivateApp(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameImpl::OnActivateApp(CFrameImpl *this,int param_1)

{
  CMFCVisualManager *pCVar1;
  BOOL BVar2;
  
  if (*(int *)(this + 0x2c) == 0) {
    pCVar1 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar1 + 0x1f8))(*(undefined4 *)(this + 0xb0),param_1);
    if (param_1 == 0) {
      if (*(int *)(this + 0xfc) != 0) {
        BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20));
        if (BVar2 != 0) {
          FUN_1006dd3f(*(int *)(this + 0xfc));
          CMFCRibbonBar::OnCancelMode(*(CMFCRibbonBar **)(this + 0xfc));
        }
      }
      if ((DAT_10166c44 == 0) && (DAT_10166c40 != 0)) {
        DAT_10166c40 = 0;
        FUN_1002cc26();
      }
    }
  }
  return;
}

