// rea decompile_all
// name: vscan_fn
// address: 0x100fad16
// body: available
// range: 0x100fad16-0x100fad84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _vscan_fn
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl vscan_fn(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EDX;
  uint unaff_ESI;
  undefined4 local_24;
  int local_20 [7];
  
  local_24 = 0;
  piVar1 = local_20;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  if ((in_EDX != 0) && (param_2 != 0)) {
    local_20[2] = 0x49;
    if (unaff_ESI < 0x40000000) {
      local_20[0] = unaff_ESI * 2;
    }
    else {
      local_20[0] = 0x7fffffff;
    }
    uVar2 = (*(code *)param_1)(&local_24,param_2,param_3,param_4);
    return uVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_100fe6d4();
  return 0xffffffff;
}

