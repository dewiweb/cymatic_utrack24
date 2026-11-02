// rea decompile_all
// name: CMFCToolBarEditBoxButton::SetStyle
// address: 0x100e8055
// body: available
// range: 0x100e8055-0x100e80af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarEditBoxButton::SetStyle(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarEditBoxButton::SetStyle(CMFCToolBarEditBoxButton *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  
  *(uint *)(this + 0x24) = param_1;
  if (*(int *)(this + 0x78) == 0) {
    return;
  }
  if (*(int *)(*(int *)(this + 0x78) + 0x20) == 0) {
    return;
  }
  if (DAT_10166e54 == 0) {
LAB_100e808b:
    if ((*(uint *)(this + 0x24) & 0x40000) == 0) {
LAB_100e8099:
      bVar1 = false;
      goto LAB_100e809b;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x60))();
    if (iVar2 != 0) {
      if (DAT_10166e54 == 0) goto LAB_100e808b;
      goto LAB_100e8099;
    }
  }
  bVar1 = true;
LAB_100e809b:
  CWnd::EnableWindow(*(CWnd **)(this + 0x78),(uint)!bVar1);
  return;
}

