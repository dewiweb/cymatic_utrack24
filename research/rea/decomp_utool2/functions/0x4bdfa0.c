// rea decompile_all
// name: FUN_004bdfa0
// address: 0x4bdfa0
// body: available
// range: 0x4bdfa0-0x4be06d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bdfa0(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  undefined1 local_18 [8];
  int local_10;
  undefined4 local_c;
  
  if (0 < *(int *)(*(int *)(in_ECX + 0x58) + 0x2c84)) {
    FUN_004b9700();
  }
  uVar4 = FUN_004b81a0(local_18,param_2);
  FUN_004ba140(uVar4,param_4,in_stack_ffffffd0,in_stack_ffffffd4,param_6);
  local_c = CONCAT13(param_3,CONCAT12(param_3,CONCAT11(param_3,param_3)));
  local_10 = *(int *)(in_ECX + 0x58) + 0x78;
  FUN_004be590(&local_10);
  if (0 < *(int *)(*(int *)(in_ECX + 0x58) + 0x2c84)) {
    FUN_004b9700();
  }
  iVar1 = *(int *)(in_ECX + 0x58);
  if (*(int *)(iVar1 + 100) != 0) {
    if (0 < *(int *)(iVar1 + 0x2c84)) {
      FUN_004b9700();
    }
    iVar2 = *(int *)(iVar1 + 100);
    iVar3 = *(int *)(iVar1 + 0x5c);
    (**(code **)(iVar3 + 0x5c))(*(undefined4 *)(iVar2 + 0x10));
    (**(code **)(iVar3 + 0x5c))(*(undefined4 *)(iVar2 + 0x14));
    *(undefined4 *)(iVar1 + 100) = 0;
    (**(code **)(*(int *)(iVar1 + 0x5c) + 0x38))(0);
  }
  return;
}

