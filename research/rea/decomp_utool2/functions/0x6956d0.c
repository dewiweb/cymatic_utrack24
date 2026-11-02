// rea decompile_all
// name: FUN_006956d0
// address: 0x6956d0
// body: available
// range: 0x6956d0-0x695720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006956d0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piStack_10;
  
  piStack_10 = (int *)0x6956dc;
  iVar1 = FUN_006e9580();
  piStack_10 = (int *)(iVar1 + 0xc);
  if (*(code **)(*piStack_10 + 4) == FUN_006dd6a0) {
    FUN_006e8e70(&piStack_10,0x1000200,0);
    FUN_00684a80();
    return;
  }
  (**(code **)(*piStack_10 + 4))
            (param_1,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
  return;
}

