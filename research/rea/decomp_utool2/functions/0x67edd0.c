// rea decompile_all
// name: FUN_0067edd0
// address: 0x67edd0
// body: available
// range: 0x67edd0-0x67ee96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0067edd0(undefined4 param_1)

{
  double *pdVar1;
  int in_ECX;
  undefined8 *puVar2;
  int iVar3;
  double in_XMM1_Qa;
  double local_18;
  undefined4 local_10;
  
  if (in_XMM1_Qa <= 0.0) {
    if (*(int *)(in_ECX + 0x1c) != 0) {
      puVar2 = *(undefined8 **)(in_ECX + 0x14);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = param_1;
      return 0;
    }
    if (*(int *)(in_ECX + 0x18) < 1) {
      FUN_0040ede0(8);
    }
    iVar3 = *(int *)(in_ECX + 0x1c);
    *(int *)(in_ECX + 0x1c) = iVar3 + 1;
    puVar2 = (undefined8 *)(iVar3 * 0x10 + *(int *)(in_ECX + 0x14));
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = param_1;
    }
    return 0;
  }
  iVar3 = 0;
  if (1.0 <= in_XMM1_Qa) {
    in_XMM1_Qa = 1.0;
  }
  if (0 < *(int *)(in_ECX + 0x1c)) {
    pdVar1 = *(double **)(in_ECX + 0x14);
    do {
      if (in_XMM1_Qa < *pdVar1) break;
      iVar3 = iVar3 + 1;
      pdVar1 = pdVar1 + 2;
    } while (iVar3 < *(int *)(in_ECX + 0x1c));
  }
  local_10 = param_1;
  local_18 = in_XMM1_Qa;
  FUN_0046f620(iVar3,&local_18);
  return iVar3;
}

