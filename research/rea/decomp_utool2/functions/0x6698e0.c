// rea decompile_all
// name: FUN_006698e0
// address: 0x6698e0
// body: available
// range: 0x6698e0-0x66997b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006698e0(void)

{
  int iVar1;
  int *in_ECX;
  
  switch(in_ECX[5]) {
  case 200:
    (**(code **)(in_ECX[100] + 4))();
    (**(code **)(in_ECX[6] + 8))();
    in_ECX[5] = 0xc9;
switchD_006698f7_caseD_c9:
    iVar1 = (**(code **)in_ECX[100])();
    if (iVar1 == 1) {
      FUN_00669a40();
      in_ECX[5] = 0xca;
    }
    return iVar1;
  case 0xc9:
    goto switchD_006698f7_caseD_c9;
  case 0xca:
    return 1;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar1 = (**(code **)in_ECX[100])();
    return iVar1;
  default:
    *(undefined4 *)(*in_ECX + 0x14) = 0x14;
    *(int *)(*in_ECX + 0x18) = in_ECX[5];
    (**(code **)*in_ECX)();
    return 0;
  }
}

