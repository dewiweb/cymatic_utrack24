// rea decompile_all
// name: FUN_005f6ab0
// address: 0x5f6ab0
// body: available
// range: 0x5f6ab0-0x5f6b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005f6ab0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)*in_ECX;
  puVar3 = in_ECX;
  if (7 < uVar1) {
switchD_005f6ac0_caseD_5f6ad2:
    return false;
  }
  do {
    switch((&switchD_005f6ac0::switchdataD_005f6b28)[uVar1]) {
    case (undefined *)0x5f6ac7:
      iVar2 = FUN_005f64d0();
      puVar3 = extraout_ECX;
      if (iVar2 == 0) {
        return false;
      }
      break;
    case (undefined *)0x5f6ad2:
      goto switchD_005f6ac0_caseD_5f6ad2;
    case (undefined *)0x5f6ad9:
      iVar2 = FUN_005f5420();
      puVar3 = extraout_ECX_00;
      if (iVar2 == 0) {
        return true;
      }
      break;
    case (undefined *)0x5f6ae4:
      return true;
    case (undefined *)0x5f6aee:
      iVar2 = FUN_005f50f0(puVar3);
      if (iVar2 == 0) {
        return false;
      }
      puVar3 = extraout_ECX_01;
      if (in_ECX != (undefined4 *)0x0) {
        return true;
      }
      break;
    case (undefined *)0x5f6b16:
      iVar2 = FUN_005f5fd0();
      return iVar2 != 0;
    }
    uVar1 = *(uint *)*in_ECX;
    if (7 < uVar1) {
      return false;
    }
  } while( true );
}

