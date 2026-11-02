// rea decompile_all
// name: FUN_005f69d0
// address: 0x5f69d0
// body: available
// range: 0x5f69d0-0x5f6a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f69d0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *puVar3;
  
  uVar1 = *(undefined4 *)*in_ECX;
  puVar3 = in_ECX;
  do {
    switch(uVar1) {
    case 0:
      iVar2 = FUN_005f64d0();
      puVar3 = extraout_ECX;
      break;
    case 1:
      iVar2 = FUN_005f5fd0();
      puVar3 = extraout_ECX_00;
      break;
    case 2:
      iVar2 = FUN_005f5420();
      puVar3 = extraout_ECX_01;
      if (iVar2 == 0) {
        return 1;
      }
      goto LAB_005f6a20;
    case 3:
      iVar2 = FUN_005f50f0(puVar3);
      puVar3 = extraout_ECX_02;
      break;
    case 4:
    case 7:
      return 1;
    default:
      goto switchD_005f69e0_caseD_5;
    }
    if (iVar2 == 0) {
switchD_005f69e0_caseD_5:
      return 0;
    }
LAB_005f6a20:
    uVar1 = *(undefined4 *)*in_ECX;
  } while( true );
}

