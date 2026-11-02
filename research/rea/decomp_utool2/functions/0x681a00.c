// rea decompile_all
// name: FUN_00681a00
// address: 0x681a00
// body: available
// range: 0x681a00-0x681d66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00681a00(float *param_1)

{
  int iVar1;
  int *in_ECX;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_0046fd40();
  __hypot((double)(param_1[2] - *param_1),(double)(param_1[3] - param_1[1]));
  FUN_00682e50();
  __hypot((double)(param_1[2] - *param_1),(double)(param_1[3] - param_1[1]));
  FUN_00682d90();
  __hypot((double)(local_10 - local_18),(double)(local_c - local_14));
  FUN_00682d90();
  __hypot((double)(local_10 - local_18),(double)(local_c - local_14));
  FUN_00682d90();
  iVar1 = in_ECX[2];
  if ((iVar1 != 0) && (*(float *)(*in_ECX + -4 + iVar1 * 4) != 100005.0)) {
    if (in_ECX[1] < iVar1 + 1) {
      FUN_00409cf0();
    }
    iVar1 = in_ECX[2];
    in_ECX[2] = iVar1 + 1;
    *(undefined4 *)(*in_ECX + iVar1 * 4) = 0x47c35280;
  }
  return;
}

