// rea decompile_all
// name: CThemeHelper::GetThemePartSize
// address: 0x100d357e
// body: available
// range: 0x100d357e-0x100d35d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static long __cdecl CThemeHelper::GetThemePartSize(void *,struct HDC__ *,int,int,struct
   tagRECT *,enum THEMESIZE,struct tagSIZE *)
   
   Library: Visual Studio 2010 Release */

long __cdecl
CThemeHelper::GetThemePartSize
          (void *param_1,HDC__ *param_2,int param_3,int param_4,tagRECT *param_5,THEMESIZE param_6,
          tagSIZE *param_7)

{
  long lVar1;
  
  if ((DAT_101696cc & 1) == 0) {
    DAT_101696cc = DAT_101696cc | 1;
    DAT_101696c8 = GetProc("GetThemePartSize",&LAB_100d33f1);
  }
  lVar1 = (*DAT_101696c8)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return lVar1;
}

