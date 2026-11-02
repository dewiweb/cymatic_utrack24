// rea decompile_all
// name: FUN_005a8630
// address: 0x5a8630
// body: available
// range: 0x5a8630-0x5a86ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a8630(void)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_18 [20];
  
  local_24 = DAT_00c7ebb8;
  local_28 = 0x5a864e;
  FUN_00684c50();
  local_30 = *(undefined4 *)(in_ECX + 0x74);
  local_2c = *(undefined4 *)(in_ECX + 0x78);
  local_28 = *(undefined4 *)(in_ECX + 0x7c);
  local_24 = *(undefined4 *)(in_ECX + 0x80);
  FUN_00684310();
  local_24 = DAT_00c7ef94;
  local_28 = 0x5a868d;
  FUN_00684c50();
  puVar1 = &local_30;
  FUN_0040ef50(local_18);
  FUN_00412df0(puVar1);
  FUN_00683310();
  return;
}

