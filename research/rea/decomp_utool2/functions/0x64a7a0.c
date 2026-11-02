// rea decompile_all
// name: FUN_0064a7a0
// address: 0x64a7a0
// body: available
// range: 0x64a7a0-0x64a853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0064a7a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00659650();
  *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | 0x200000;
  *(undefined4 *)(iVar1 + 0x74) = 0x2000;
  *(undefined4 *)(iVar1 + 0x88) = 1;
  *(undefined4 *)(iVar1 + 0x78) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x84) = 8;
  *(undefined4 *)(iVar1 + 0x80) = 0xf;
  *(undefined4 *)(iVar1 + 0x7c) = 8;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x98) = 8;
  *(undefined4 *)(iVar1 + 0x94) = 0xf;
  *(undefined4 *)(iVar1 + 0x90) = 8;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(code **)(iVar1 + 0xc) = FUN_0064af40;
  *(code **)(iVar1 + 0x130) = FUN_0064af10;
  if (*(int *)(iVar1 + 0x10) != 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    FUN_006563b0();
  }
  return iVar1;
}

