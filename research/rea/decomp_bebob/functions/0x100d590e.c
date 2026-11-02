// rea decompile_all
// name: CMFCToolBarsMenuPropertyPage::SelectMenu
// address: 0x100d590e
// body: available
// range: 0x100d590e-0x100d59ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCToolBarsMenuPropertyPage::SelectMenu(class CDocTemplate *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarsMenuPropertyPage::SelectMenu
          (CMFCToolBarsMenuPropertyPage *this,CDocTemplate *param_1,int param_2)

{
  LRESULT LVar1;
  CDocTemplate *pCVar2;
  WPARAM local_8;
  
  local_8 = 0;
  LVar1 = SendMessageW(*(HWND *)(this + 0x4dc),0x146,0,0);
  if (0 < LVar1) {
    do {
      pCVar2 = (CDocTemplate *)SendMessageW(*(HWND *)(this + 0x4dc),0x150,local_8,0);
      if (pCVar2 == param_1) {
        if (param_2 == 0) {
          *(undefined4 *)(this + 0x554) = 0;
        }
        if (*(int *)(this + 0x544) != 0) {
          *(undefined4 *)(this + 0x550) = *(undefined4 *)(*(int *)(this + 0x544) + 0xcd4);
        }
        SendMessageW(*(HWND *)(this + 0x4dc),0x14e,local_8,0);
        OnSelchangeMenuList(this);
        return 1;
      }
      local_8 = local_8 + 1;
      LVar1 = SendMessageW(*(HWND *)(this + 0x4dc),0x146,0,0);
    } while ((int)local_8 < LVar1);
  }
  return 0;
}

