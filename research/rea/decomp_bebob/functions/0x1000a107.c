// rea decompile_all
// name: AfxMessageBox
// address: 0x1000a107
// body: available
// range: 0x1000a107-0x1000a168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __stdcall AfxMessageBox(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int AfxMessageBox(uint param_1,uint param_2,uint param_3)

{
  undefined **ppuVar1;
  HMODULE pHVar2;
  int iVar3;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1000a113;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar1);
  local_8 = 0;
  pHVar2 = (HMODULE)FUN_1000ac62();
  if (pHVar2 != (HMODULE)0x0) {
    FUN_10006200(local_14,pHVar2,param_1);
  }
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  iVar3 = AfxMessageBox(local_14[0],param_2,param_3);
  FUN_10001030((undefined4 *)(local_14[0] + -8));
  return iVar3;
}

