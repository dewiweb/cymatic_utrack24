// rea decompile_all
// name: FUN_0066e730
// address: 0x66e730
// body: available
// range: 0x66e730-0x66e819 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066e730(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  FUN_0066ca20();
  if ((char)in_ECX[0x2c] == '\0') {
    FUN_006706b0();
    FUN_0066a2e0();
    FUN_0066ac70();
  }
  FUN_0066f780();
  if (*(char *)((int)in_ECX + 0xb1) == '\0') {
    if ((char)in_ECX[0x35] == '\0') {
      FUN_0066e820();
    }
    else {
      FUN_0066b2a0();
    }
  }
  else {
    *(undefined4 *)(*in_ECX + 0x14) = 1;
    (**(code **)*in_ECX)();
  }
  FUN_00670f90();
  FUN_0066e5c0();
  puVar1 = (undefined4 *)(**(code **)in_ECX[1])();
  in_ECX[0x53] = (int)puVar1;
  *puVar1 = FUN_0066d960;
  puVar1[1] = FUN_0066d870;
  puVar1[2] = FUN_0066d780;
  puVar1[3] = FUN_0066d760;
  puVar1[4] = FUN_0066d680;
  puVar1[5] = FUN_0066d9f0;
  puVar1[6] = FUN_0066d9b0;
  puVar1[7] = 0;
  (**(code **)(in_ECX[1] + 0x18))();
  (**(code **)in_ECX[0x53])();
  return;
}

