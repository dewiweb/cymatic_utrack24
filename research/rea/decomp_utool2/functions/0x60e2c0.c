// rea decompile_all
// name: FUN_0060e2c0
// address: 0x60e2c0
// body: available
// range: 0x60e2c0-0x60e365 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060e2c0(undefined4 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = in_ECX;
  if (0 < in_ECX[0x14]) {
    do {
      iVar2 = local_8;
      piVar1 = local_c;
      local_10 = (param_2[3] * local_8) / in_ECX[0x14];
      local_1c = *param_2;
      local_18 = param_2[1] + local_10;
      local_14 = param_2[2];
      local_8 = local_8 + 1;
      local_10 = (local_8 * param_2[3]) / in_ECX[0x14] - local_10;
      (**(code **)(*local_c + 0x20))(param_1,&local_1c,param_3,param_4,iVar2,param_5);
      in_ECX = piVar1;
    } while (local_8 < piVar1[0x14]);
  }
  return;
}

