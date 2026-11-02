// rea decompile_all
// name: AFX_GLOBAL_DATA::GetITaskbarList3
// address: 0x10018ba7
// body: available
// range: 0x10018ba7-0x10018c02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct ITaskbarList3 * __thiscall AFX_GLOBAL_DATA::GetITaskbarList3(void)
   
   Library: Visual Studio 2010 Release */

ITaskbarList3 * __thiscall AFX_GLOBAL_DATA::GetITaskbarList3(AFX_GLOBAL_DATA *this)

{
  AFX_GLOBAL_DATA *ppv;
  HRESULT HVar1;
  
  if ((*(int *)(this + 0x178) == 0) || (*(int *)(this + 0x21c) == 0)) {
    return (ITaskbarList3 *)0x0;
  }
  ppv = this + 0x224;
  if (*(ITaskbarList3 **)ppv != (ITaskbarList3 *)0x0) {
    return *(ITaskbarList3 **)ppv;
  }
  if (*(int *)(this + 0x218) == 0) {
    HVar1 = CoInitialize((LPVOID)0x0);
    if (HVar1 < 0) goto LAB_10018bf9;
    *(int *)(this + 0x218) = 1;
  }
  CoCreateInstance((IID *)&DAT_10145144,(LPUNKNOWN)0x0,1,(IID *)&DAT_1011f0dc,(LPVOID *)ppv);
LAB_10018bf9:
  return *(ITaskbarList3 **)ppv;
}

