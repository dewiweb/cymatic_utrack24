// rea decompile_all
// name: CThemeHelper::DrawThemeBackground
// address: 0x100d3526
// body: available
// range: 0x100d3526-0x100d357d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static long __cdecl CThemeHelper::DrawThemeBackground(void *,struct HDC__
   *,int,int,struct tagRECT const *,struct tagRECT const *)
   
   Library: Visual Studio 2010 Release */

long __cdecl
CThemeHelper::DrawThemeBackground
          (void *param_1,HDC__ *param_2,int param_3,int param_4,tagRECT *param_5,tagRECT *param_6)

{
  long lVar1;
  
  if ((DAT_101696c4 & 1) == 0) {
    DAT_101696c4 = DAT_101696c4 | 1;
    DAT_101696c0 = GetProc("DrawThemeBackground",&LAB_100d33f1);
  }
  lVar1 = (*DAT_101696c0)(param_1,param_2,param_3,param_4,param_5,param_6);
  return lVar1;
}

