// rea decompile_all
// name: FUN_0062d760
// address: 0x62d760
// body: available
// range: 0x62d760-0x62d7e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0062d760(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  int *extraout_ECX;
  int *_Memory;
  undefined4 *extraout_ECX_00;
  int iVar2;
  char *local_10;
  undefined4 local_c;
  
  local_c = 0;
  iVar2 = 0;
  _Memory = in_ECX;
  if (0 < in_ECX[2]) {
    do {
      FUN_00613440(&local_10,iVar2,param_2,_Memory);
      if (*local_10 != '\0') {
        *param_1 = local_10;
        return param_1;
      }
      _Memory = (int *)(local_10 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
          _Memory = extraout_ECX;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[2]);
  }
  FUN_0044eef0();
  return extraout_ECX_00;
}

