// rea decompile_all
// name: CPropertySheet::OnCommand
// address: 0x100d662e
// body: available
// range: 0x100d662e-0x100d66a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPropertySheet::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPropertySheet::OnCommand(CPropertySheet *this,uint param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = CWnd::OnCommand((CWnd *)this,param_1,param_2);
  if (iVar1 == 0) {
    if ((param_2 != 0) && ((short)(param_1 >> 0x10) == 0)) {
      uVar2 = SendMessageW((HWND)param_2,0x87,0,0);
      if ((uVar2 & 0x2010) != 0) {
        uVar2 = GetWindowLongW((HWND)param_2,-0x10);
        uVar2 = uVar2 & 0xf;
        if ((((uVar2 == 0) || (uVar2 == 1)) || (uVar2 == 8)) || (uVar2 == 0xb)) {
          *(uint *)(this + 0x60) = param_1 & 0xffff;
        }
      }
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

