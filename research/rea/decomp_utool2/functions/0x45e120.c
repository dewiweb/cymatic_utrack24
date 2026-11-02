// rea decompile_all
// name: FUN_0045e120
// address: 0x45e120
// body: available
// range: 0x45e120-0x45e17d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0045e120(void)

{
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  do {
    in_ECX = in_ECX + -1;
    if (in_ECX < 0) {
      return 0;
    }
    iVar3 = FUN_00443260();
    iVar4 = FUN_00443260();
    if (iVar3 == iVar4) {
LAB_0045e168:
      iVar4 = 0;
    }
    else {
      wVar1 = _towupper((wint_t)iVar4);
      wVar2 = _towupper((wint_t)iVar3);
      if ((uint)wVar2 - (uint)wVar1 == 0) goto LAB_0045e168;
      iVar4 = ((int)((uint)wVar2 - (uint)wVar1) >> 0x1f & 0xfffffffeU) + 1;
    }
    if (iVar4 != 0) {
      return iVar4;
    }
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}

