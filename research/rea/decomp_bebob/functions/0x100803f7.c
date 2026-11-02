// rea decompile_all
// name: CMFCToolBarImages::MapFromSysColor
// address: 0x100803f7
// body: available
// range: 0x100803f7-0x10080477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static unsigned long __stdcall CMFCToolBarImages::MapFromSysColor(unsigned long,int)
   
   Library: Visual Studio 2010 Release */

ulong CMFCToolBarImages::MapFromSysColor(ulong param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = AFX_GLOBAL_DATA::GetColor((AFX_GLOBAL_DATA *)&DAT_10166aa0,(&DAT_1012cab4)[iVar2 * 2]);
    if (param_2 == 0) {
      if (param_1 == uVar1) {
        return (ulong)(&PTR_1012cab0)[iVar2 * 2];
      }
    }
    else if (param_1 == ((uVar1 >> 8 & 0xff | (uVar1 & 0xff) << 8) << 8 | uVar1 >> 0x10 & 0xff)) {
      return (uint)CONCAT21(CONCAT11(*(undefined1 *)(&PTR_1012cab0 + iVar2 * 2),
                                     *(undefined1 *)((int)&PTR_1012cab0 + iVar2 * 8 + 1)),
                            *(undefined1 *)((int)&PTR_1012cab0 + iVar2 * 8 + 2));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return param_1;
}

