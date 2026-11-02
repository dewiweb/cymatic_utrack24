// rea decompile_all
// name: FUN_006def10
// address: 0x6def10
// body: available
// range: 0x6def10-0x6def4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006def10(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  if (*(char *)((int)in_ECX + 0x9b) == '\0') {
    piVar1 = (int *)FUN_006e9580();
    if (*(code **)(*piVar1 + 0x18) == FUN_006dd700) {
      iVar2 = 0x12;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x18))();
    }
    in_ECX[0x23] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x006def3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x84))();
    return;
  }
  return;
}

