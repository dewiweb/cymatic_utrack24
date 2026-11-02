// rea decompile_all
// name: FUN_006bfb60
// address: 0x6bfb60
// body: available
// range: 0x6bfb60-0x6bfc34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bfb60(void)

{
  int *in_ECX;
  int *piStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0x3f800000;
  local_c = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x2f] = 0;
  puStack_30 = (undefined4 *)in_ECX[0x23];
  local_20 = 0x3f800000;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  if (puStack_30 == (undefined4 *)0x0) {
    puStack_30 = &local_20;
    local_2c = (undefined4 *)0x40800000;
    piStack_34 = in_ECX + 0x24;
    piStack_38 = in_ECX + 0x2c;
    FUN_00677cd0();
  }
  else {
    local_28 = (undefined4 *)0x40800000;
    local_2c = &local_20;
    piStack_34 = (int *)in_ECX[0x21];
    piStack_38 = in_ECX + 0x24;
    FUN_00677730(in_ECX + 0x2c);
  }
  local_28 = &uStack_18;
  local_2c = (undefined4 *)0x6bfc14;
  local_2c = (undefined4 *)(**(code **)(*in_ECX + 0xb8))();
  puStack_30 = (undefined4 *)0x6bfc1c;
  FUN_006c5cf0();
  FUN_006e6400(&piStack_38);
  FUN_006ce9f0(1);
  return;
}

