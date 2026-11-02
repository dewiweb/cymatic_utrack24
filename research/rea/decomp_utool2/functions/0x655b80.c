// rea decompile_all
// name: FUN_00655b80
// address: 0x655b80
// body: available
// range: 0x655b80-0x655be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00655b80(void)

{
  int iVar1;
  
  iVar1 = FUN_00659650();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | 0x300000;
    *(undefined4 *)(iVar1 + 0x28) = 0x8000;
    *(undefined4 *)(iVar1 + 0x268) = 0x2000;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(code **)(iVar1 + 0x10) = FUN_00654e60;
    if (*(int *)(iVar1 + 0xc) != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_006563b0();
    }
    *(undefined4 *)(iVar1 + 0x130) = 0;
  }
  return iVar1;
}

