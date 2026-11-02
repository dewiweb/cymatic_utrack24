// rea decompile_all
// name: FUN_0062bdf0
// address: 0x62bdf0
// body: available
// range: 0x62bdf0-0x62be63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062bdf0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[1] != param_1) {
    if (param_1 == 0) {
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
      in_ECX[1] = 0;
      return;
    }
    if (*in_ECX == 0) {
      FUN_004591c0(param_1,param_2);
    }
    else {
      iVar2 = FUN_004c553b(*in_ECX,param_1);
      *in_ECX = iVar2;
      if (((char)param_2 != '\0') && (uVar1 = in_ECX[1], uVar1 < param_1)) {
        _memset((void *)(iVar2 + uVar1),0,param_1 - uVar1);
        in_ECX[1] = param_1;
        return;
      }
    }
    in_ECX[1] = param_1;
  }
  return;
}

