// rea decompile_all
// name: FUN_006ec880
// address: 0x6ec880
// body: available
// range: 0x6ec880-0x6ec9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006ec880(void)

{
  int iVar1;
  int iVar2;
  
  FUN_006f2f70();
  iVar1 = FUN_006f2ff0();
  switch(iVar1) {
  case 0:
    return 4;
  default:
    iVar2 = FID_conflict__iswalpha((wint_t)iVar1);
    if (((iVar2 != 0) || (iVar1 == 0x5f)) || (iVar1 == 0x40)) {
      FUN_004b72f0();
    }
    FUN_006f30b0();
    return 4;
  case 0x22:
  case 0x27:
    FUN_004b7270();
    return 5;
  case 0x2f:
switchD_006ec8a8_caseD_2f:
    FUN_006f30b0();
    break;
  case 0x3a:
  case 0x3d:
    FUN_006f30b0();
    return 3;
  case 0x3c:
    FUN_006f30b0();
    FUN_006f2f70();
    iVar1 = FUN_006f2ff0();
    if (iVar1 == 0x3f) {
      FUN_006f30b0();
      FUN_006ea410();
      return 8;
    }
    if (iVar1 == 0x21) {
      FUN_006f30b0();
      iVar1 = FUN_006f2ff0();
      if (iVar1 == 0x2d) {
        FUN_006f30b0();
        iVar1 = FUN_006f2ff0();
        if (iVar1 == 0x2d) {
          FUN_006ea390();
          return 1;
        }
      }
    }
    iVar1 = FUN_006f2ff0();
    if (iVar1 == 0x2f) {
      FUN_006f30b0();
    }
    FUN_004b72f0();
    FUN_006f2f70();
    iVar1 = FUN_006f2ff0();
    if (iVar1 == 0x2f) goto switchD_006ec8a8_caseD_2f;
    break;
  case 0x3e:
    goto switchD_006ec8a8_caseD_3e;
  }
  FUN_006f2f70();
  iVar1 = FUN_006f2ff0();
  if (iVar1 == 0x3e) {
switchD_006ec8a8_caseD_3e:
    FUN_006f30b0();
  }
  return 2;
}

