// rea decompile_all
// name: FUN_005eaa00
// address: 0x5eaa00
// body: available
// range: 0x5eaa00-0x5eaa60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005eaa00(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  if (in_ECX != (undefined4 *)0x0) {
    _memset(in_ECX,0,0x168);
    in_ECX[1] = 0x4000;
    uVar1 = FUN_004c554b(0x4000);
    *in_ECX = uVar1;
    in_ECX[6] = 0x400;
    uVar1 = FUN_004c554b(0x1000);
    in_ECX[4] = uVar1;
    uVar1 = FUN_004c554b(in_ECX[6] << 3);
    in_ECX[0x54] = in_EDX;
    in_ECX[5] = uVar1;
    return 0;
  }
  return 0xffffffff;
}

