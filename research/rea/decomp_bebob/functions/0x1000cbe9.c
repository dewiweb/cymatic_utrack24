// rea decompile_all
// name: _AfxIsComboBoxControl
// address: 0x1000cbe9
// body: available
// range: 0x1000cbe9-0x1000cc55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall _AfxIsComboBoxControl(struct HWND__ *,unsigned int)
   
   Library: Visual Studio 2010 Release */

int _AfxIsComboBoxControl(HWND__ *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  WCHAR local_1c [10];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (HWND__ *)0x0) &&
     (uVar1 = GetWindowLongW(param_1,-0x10), (uVar1 & 0xf) == param_2)) {
    GetClassNameW(param_1,local_1c,10);
    CompareStringW(0x409,1,local_1c,-1,L"combobox",-1);
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

