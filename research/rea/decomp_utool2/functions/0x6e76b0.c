// rea decompile_all
// name: FUN_006e76b0
// address: 0x6e76b0
// body: available
// range: 0x6e76b0-0x6e770c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e76b0(void)

{
  int in_ECX;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [20];
  
  if (0 < *(int *)(in_ECX + 0x94)) {
    puStack_2c = (undefined1 *)&puStack_20;
    uStack_24 = 0;
    uStack_28 = 0x1002810;
    FUN_006e8e70();
    uStack_24 = 0x6e76da;
    FUN_00684c50();
    puStack_20 = local_18;
    uStack_24 = 0x6e76e5;
    FUN_006e6400();
    FUN_0040e4d0(&puStack_2c);
    FUN_00677150();
  }
  return;
}

