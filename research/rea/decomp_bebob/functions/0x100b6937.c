// rea decompile_all
// name: CMFCRibbonPanel
// address: 0x100b6937
// body: available
// range: 0x100b6937-0x100b6a20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall CMFCRibbonPanel::CMFCRibbonPanel(char const *,struct HICON__ *)
    protected: __thiscall CMFCRibbonPanel::CMFCRibbonPanel(wchar_t const *,struct HICON__ *)
   
   Library: Visual Studio 2010 Release */

CMFCRibbonPanel * __thiscall CMFCRibbonPanel(void *this,char *param_1,HICON__ *param_2)

{
  undefined **ppuVar1;
  
  *(undefined ***)this = CMFCRibbonPanel::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00((void *)((int)this + 0x9c),(int *)ppuVar1);
  CMFCRibbonDefaultPanelButton::CMFCRibbonDefaultPanelButton
            ((CMFCRibbonDefaultPanelButton *)((int)this + 0xb8),this);
  CMap<int,int,int,int>::CMap<int,int,int,int>((CMap<int,int,int,int> *)((int)this + 0x224),10);
  *(undefined ***)((int)this + 0x240) = CArray<int,int>::vftable;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined ***)((int)this + 0x254) =
       CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  CMFCRibbonPanel::CommonInit(this,param_1,param_2);
  return this;
}

