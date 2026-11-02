// rea decompile_all
// name: FUN_004b51f0
// address: 0x4b51f0
// body: available
// range: 0x4b51f0-0x4b525e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b51f0(void)

{
  int in_ECX;
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  
  puStack_1c = &local_8;
  uStack_18 = *(undefined4 *)(in_ECX + 0x74);
  uStack_20 = 0x4b520b;
  (**(code **)(**(int **)(in_ECX + 0x70) + 0xb4))();
  puStack_28 = (undefined1 *)&uStack_20;
  uStack_24 = local_8;
  puStack_2c = (undefined1 *)0x4b5226;
  FUN_00680d30();
  puStack_2c = (undefined1 *)&uStack_24;
  puStack_28 = (undefined1 *)local_8;
  uStack_30 = 0x4b5241;
  FUN_00680d30();
  puStack_28 = (undefined1 *)0x6;
  puStack_2c = (undefined1 *)0x6;
  FUN_006e6400(auStack_3c);
  FUN_00676c40();
  return;
}

