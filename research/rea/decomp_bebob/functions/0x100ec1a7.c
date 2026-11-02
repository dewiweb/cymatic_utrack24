// rea decompile_all
// name: FUN_100ec1a7
// address: 0x100ec1a7
// body: available
// range: 0x100ec1a7-0x100ec251 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ec1a7(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  double dVar1;
  undefined4 extraout_ECX;
  ulonglong uVar2;
  
  dVar1 = 1.0;
  if (DAT_10166c84 != 0) {
    dVar1 = _DAT_10166c7c;
  }
  if (dVar1 != 1.0) {
    uVar2 = FUN_100f8660(param_1,param_2);
    param_3 = (undefined4)uVar2;
    uVar2 = FUN_100f8660(extraout_ECX,(int)(uVar2 >> 0x20));
    param_4 = (int)uVar2;
  }
  *(undefined4 *)(param_1 + 0x388) = param_3;
  *(int *)(param_1 + 0x38c) = param_4;
  if ((*(int *)(param_1 + 0x364) == 0) || (*(int *)(param_1 + 0x348) < 1)) {
    *(undefined4 *)(param_1 + 0x1f0) = param_3;
  }
  else {
    param_4 = param_4 + -3;
    *(undefined4 *)(param_1 + 0x1f0) = param_3;
  }
  *(int *)(param_1 + 500) = param_4;
  return;
}

