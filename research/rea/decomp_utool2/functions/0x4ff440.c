// rea decompile_all
// name: FUN_004ff440
// address: 0x4ff440
// body: available
// range: 0x4ff440-0x4ff4f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff440(void)

{
  int in_ECX;
  undefined1 *puVar1;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 local_18 [20];
  
  if (DAT_00c8a678 != in_ECX) {
    local_24 = 1;
    uStack_28 = 2;
    uStack_2c = 0x4ff45b;
    FUN_006cc500();
  }
  local_24 = DAT_00c8a948;
  uStack_28 = 0x4ff46f;
  FUN_00684a80();
  local_24 = DAT_00c7ebb8;
  uStack_28 = 0x4ff480;
  FUN_00684c50();
  puVar1 = auStack_30;
  FUN_00410df0(local_18,4);
  FUN_0040e4d0(puVar1);
  FUN_00684310();
  local_24 = DAT_00c7ebb0;
  uStack_28 = 0x4ff4b9;
  FUN_00684c50();
  puVar1 = auStack_30;
  FUN_00410df0(local_18,4);
  FUN_0040e4d0(puVar1);
  FUN_00683310();
  return;
}

