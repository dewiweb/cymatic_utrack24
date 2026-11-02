// rea decompile_all
// name: FUN_006d69b0
// address: 0x6d69b0
// body: available
// range: 0x6d69b0-0x6d6a2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d69b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *local_28;
  undefined4 uStack_24;
  
  puStack_2c = (undefined1 *)&uStack_24;
  local_28 = (undefined1 *)0x1000700;
  puStack_30 = (undefined1 *)0x6d69cb;
  FUN_006ab460();
  local_28 = (undefined1 *)0x6d69d5;
  FUN_00684a80();
  local_28 = (undefined1 *)&uStack_24;
  puStack_2c = (undefined1 *)0x1000600;
  puStack_30 = (undefined1 *)&param_1;
  FUN_006ab460();
  puStack_2c = (undefined1 *)0x6d69f6;
  FUN_006842b0();
  local_28 = (undefined1 *)0x6d69fd;
  FUN_00684c50();
  uStack_24 = param_3;
  local_28 = (undefined1 *)param_2;
  puStack_2c = (undefined1 *)0x0;
  puStack_30 = (undefined1 *)0x6d6a0f;
  FUN_00472d90();
  FUN_0040e4d0(&puStack_30);
  FUN_00677150();
  return;
}

