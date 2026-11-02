// rea decompile_all
// name: FUN_0045d290
// address: 0x45d290
// body: available
// range: 0x45d290-0x45d2d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0045d290(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
      return uVar4;
    }
    iVar2 = FUN_00443260();
    uVar3 = iVar2 - 0x30;
    if (uVar3 < 10) {
LAB_0045d2c3:
      if (-1 < (int)uVar3) {
        uVar4 = uVar4 << 4 | uVar3;
      }
    }
    else {
      uVar3 = iVar2 - 0x61;
      if ((uVar3 < 6) || (uVar3 = iVar2 - 0x41, uVar3 < 6)) {
        uVar3 = uVar3 + 10;
        goto LAB_0045d2c3;
      }
    }
    cVar1 = *param_1;
  } while( true );
}

