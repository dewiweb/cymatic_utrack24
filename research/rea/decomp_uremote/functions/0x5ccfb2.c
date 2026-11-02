// rea decompile_all
// name: std::locale::_Locimp::_Locimp_dtor
// address: 0x5ccfb2
// body: available
// range: 0x5ccfb2-0x5cd011 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Locimp::_Locimp_dtor(class std::locale::_Locimp *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl std::locale::_Locimp::_Locimp_dtor(_Locimp *param_1)

{
  int *piVar1;
  facet *pfVar2;
  int iVar3;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x5ccfbe;
  _Lockit::_Lockit(local_14,0);
  local_8 = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    piVar1 = (int *)(*(int *)(param_1 + 8) + iVar3 * 4);
    if (*piVar1 != 0) {
      pfVar2 = facet::_Decref((facet *)*piVar1);
      if (pfVar2 != (facet *)0x0) {
        (*(code *)**(undefined4 **)pfVar2)(1);
      }
    }
  }
  _free(*(void **)(param_1 + 8));
  local_8 = 0xffffffff;
  FUN_005cd2d7();
  return;
}

