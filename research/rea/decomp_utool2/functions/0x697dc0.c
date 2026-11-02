// rea decompile_all
// name: FUN_00697dc0
// address: 0x697dc0
// body: available
// range: 0x697dc0-0x697e4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00697dc0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(in_ECX + 0x9c) == 0) {
    FUN_006cb4b0();
    FUN_004b0b90(0,local_18,local_14);
    iVar2 = FUN_00697ae0(local_10);
    if (iVar2 != 0) {
      cVar1 = FUN_006e2bd0();
      if (cVar1 == '\0') goto LAB_00697e36;
    }
    FUN_006e92f0(param_1);
    return param_1;
  }
LAB_00697e36:
  uVar3 = FUN_00491210();
  *param_1 = uVar3;
  return param_1;
}

