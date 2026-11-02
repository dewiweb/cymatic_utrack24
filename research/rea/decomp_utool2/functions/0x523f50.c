// rea decompile_all
// name: FUN_00523f50
// address: 0x523f50
// body: available
// range: 0x523f50-0x523fb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00523f50(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  undefined **ppuVar1;
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = DAT_00c7ef94;
  local_24 = 0x523f6b;
  FUN_00684c50();
  if (param_1 < *(uint *)(in_ECX + 0x18)) {
    ppuVar1 = (undefined **)(*(int *)(in_ECX + 0x10) + param_1 * 4);
  }
  else {
    ppuVar1 = &PTR_DAT_00c7ed68;
  }
  local_20 = param_4;
  local_24 = param_3;
  uStack_28 = 0;
  uStack_2c = 0x523f92;
  FUN_00472d90();
  local_20 = 1;
  local_24 = 0x21;
  FUN_0040e4d0(auStack_34);
  FUN_006830c0(ppuVar1);
  return;
}

