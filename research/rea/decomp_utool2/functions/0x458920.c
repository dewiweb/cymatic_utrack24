// rea decompile_all
// name: FUN_00458920
// address: 0x458920
// body: available
// range: 0x458920-0x4589d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00458920(char *param_1)

{
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  int iVar5;
  char in_CL;
  
  iVar4 = FUN_00443260();
  do {
    if (iVar4 == 0x2a) {
      if ((*param_1 != '\0') && (cVar1 = FUN_00459a30(param_1), cVar1 == '\0')) {
        return 0;
      }
      return 1;
    }
    iVar5 = FUN_00443260();
    if (iVar4 == iVar5) {
LAB_00458976:
      if (iVar4 == 0) {
        return 1;
      }
    }
    else if ((iVar4 != 0x3f) || (iVar5 == 0)) {
      if (in_CL == '\0') {
        return 0;
      }
      wVar2 = _towlower((wint_t)iVar4);
      wVar3 = _towlower((wint_t)iVar5);
      if (wVar2 != wVar3) {
        return 0;
      }
      goto LAB_00458976;
    }
    iVar4 = FUN_00443260();
  } while( true );
}

