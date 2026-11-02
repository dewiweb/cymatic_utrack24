// rea decompile_all
// name: FUN_006903f0
// address: 0x6903f0
// body: available
// range: 0x6903f0-0x690430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006903f0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  char cVar4;
  
  iVar1 = *(int *)(in_ECX + 8);
  piVar2 = (int *)(in_ECX + 8);
  do {
    if (iVar1 == 0) {
      return in_ECX;
    }
    iVar1 = *piVar2;
    uVar3 = *(uint *)(iVar1 + 0x34) & 3;
    if (uVar3 == 0) {
      if (*(int *)(iVar1 + 4) != 0) {
        cVar4 = *(char *)(*(int *)(iVar1 + 4) + 0xac);
        goto LAB_00690422;
      }
LAB_00690424:
      in_ECX = iVar1;
    }
    else {
      cVar4 = uVar3 == 2;
LAB_00690422:
      if (cVar4 == '\0') goto LAB_00690424;
    }
    piVar2 = (int *)(iVar1 + 8);
    iVar1 = *piVar2;
  } while( true );
}

