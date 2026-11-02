// rea decompile_all
// name: FUN_005ca710
// address: 0x5ca710
// body: available
// range: 0x5ca710-0x5ca78c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca710(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
  piVar1 = param_2 + 4;
  iVar2 = (int)((*(double *)(param_2 + 2) - *(double *)(in_ECX + 4) * 0.001) *
               *(double *)(in_ECX + 0x34));
  if (4 < *piVar1) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_005c6170(param_2,*piVar1,iVar2);
  if (*(double *)(in_ECX + 0x34) < (double)iVar2) {
    FUN_005c6210(extraout_ECX,iVar2 - (int)*(double *)(in_ECX + 0x34));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
  return;
}

