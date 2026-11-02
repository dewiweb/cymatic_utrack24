// rea decompile_all
// name: FUN_006243a0
// address: 0x6243a0
// body: available
// range: 0x6243a0-0x62442e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006243a0(uint param_1)

{
  int in_ECX;
  uint uVar1;
  uint uVar2;
  undefined4 local_c;
  
  uVar1 = param_1 >> 3;
  local_c = 6;
  param_1 = param_1 & 7;
  do {
    if (*(uint *)(in_ECX + 4) <= uVar1) {
      return;
    }
    uVar2 = local_c;
    if (8 - param_1 < local_c) {
      uVar2 = 8 - param_1;
    }
    param_1 = 0;
    uVar1 = uVar1 + 1;
    local_c = local_c - uVar2;
  } while (local_c != 0);
  return;
}

