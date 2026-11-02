// rea decompile_all
// name: common_getenv<char>
// address: 0x4d34f4
// body: available
// range: 0x4d34f4-0x4d3567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    char * __cdecl common_getenv<char>(char const * const)
   
   Library: Visual Studio 2015 Release */

char * __cdecl common_getenv<char>(char *param_1)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (uVar2 = FUN_004d4a43(param_1,0x7fff), uVar2 < 0x7fff)) {
    ___acrt_lock(0xb);
    pcVar3 = common_getenv_nolock<char>(param_1);
    FUN_004d356b();
    return pcVar3;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_004d0d1c();
  return (char *)0x0;
}

