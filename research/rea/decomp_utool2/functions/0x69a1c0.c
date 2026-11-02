// rea decompile_all
// name: FUN_0069a1c0
// address: 0x69a1c0
// body: available
// range: 0x69a1c0-0x69a24a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069a1c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_5c [24];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x48))(0x3f800000);
  puVar3 = local_14;
  FUN_006e6400(local_24);
  FUN_0040e4d0(puVar3);
  if (*(int *)(in_ECX + 0x78) != 0) {
    uVar4 = 0;
    puVar3 = local_14;
    puVar2 = local_34;
    FUN_00673860(local_44);
    uVar1 = FUN_0040e4d0(puVar2);
    uVar1 = FUN_00677570(local_5c,uVar1,puVar3);
    FUN_00676990((int *)(in_ECX + 0x78),uVar1,uVar4);
  }
  return;
}

