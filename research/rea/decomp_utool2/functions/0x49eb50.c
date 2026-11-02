// rea decompile_all
// name: FUN_0049eb50
// address: 0x49eb50
// body: available
// range: 0x49eb50-0x49ec22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049eb50(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x2c))(&local_24,*(undefined4 *)(in_ECX + 0x14));
  *(undefined4 *)(in_ECX + 0x108) = local_24;
  *(undefined4 *)(in_ECX + 0x10c) = local_20;
  *(undefined4 *)(in_ECX + 0x110) = local_1c;
  *(undefined4 *)(in_ECX + 0x114) = local_18;
  if (*(int *)(in_ECX + 0x140) != 0) {
    FUN_006e9790(local_14,local_10,local_c,local_8);
  }
  iVar1 = *(int *)(in_ECX + 0x18);
  if ((((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 9)) || (iVar1 == 0xb)) {
    *(undefined4 *)(in_ECX + 0xf0) = local_24;
    *(undefined4 *)(in_ECX + 0xf4) = local_1c;
  }
  else {
    if (((iVar1 == 1) || (iVar1 == 3)) || ((iVar1 == 10 || (iVar1 == 0xc)))) {
      *(undefined4 *)(in_ECX + 0xf0) = local_20;
      *(undefined4 *)(in_ECX + 0xf4) = local_18;
      return;
    }
    if (iVar1 == 8) {
      FUN_0049ec30();
      return;
    }
  }
  return;
}

