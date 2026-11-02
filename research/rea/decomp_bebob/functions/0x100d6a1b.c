// rea decompile_all
// name: CPropertySheet::CommonConstruct
// address: 0x100d6a1b
// body: available
// range: 0x100d6a1b-0x100d6a85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPropertySheet::CommonConstruct(class CWnd *,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPropertySheet::CommonConstruct(CPropertySheet *this,CWnd *param_1,uint param_2)

{
  int iVar1;
  
  _memset(this + 0x74,0,0x34);
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0xbc);
  *(undefined4 *)(this + 0x74) = 0x34;
  *(undefined4 *)(this + 0x78) = 8;
  *(uint *)(this + 0x90) = param_2;
  *(undefined4 *)(this + 0xc4) = 1;
  iVar1 = AfxHelpEnabled();
  if (iVar1 != 0) {
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x200;
  }
  *(CWnd **)(this + 0xc0) = param_1;
  return;
}

