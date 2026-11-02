// rea decompile_all
// name: CDockSite::CreateRow
// address: 0x10090901
// body: available
// range: 0x10090901-0x1009095b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CDockingPanesRow * __thiscall CDockSite::CreateRow(class CDockSite
   *,int,int)
   
   Library: Visual Studio 2010 Release */

CDockingPanesRow * __thiscall
CDockSite::CreateRow(CDockSite *this,CDockSite *param_1,int param_2,int param_3)

{
  CDockingPanesRow *pCVar1;
  int iVar2;
  
  pCVar1 = FUN_1000858a(0x48);
  if (pCVar1 == (CDockingPanesRow *)0x0) {
    pCVar1 = (CDockingPanesRow *)0x0;
  }
  else {
    pCVar1 = (CDockingPanesRow *)CDockingPanesRow::CDockingPanesRow(pCVar1,this,param_2,param_3);
  }
  iVar2 = (**(code **)(*(int *)pCVar1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)pCVar1 + 4))(1);
    pCVar1 = (CDockingPanesRow *)0x0;
  }
  return pCVar1;
}

