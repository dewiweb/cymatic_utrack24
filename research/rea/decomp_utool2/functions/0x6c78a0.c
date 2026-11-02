// rea decompile_all
// name: FUN_006c78a0
// address: 0x6c78a0
// body: available
// range: 0x6c78a0-0x6c7941 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c78a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 *puVar3;
  undefined1 local_40 [24];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (in_ECX[0x41] != 0) {
    if (in_ECX[0x38] == 1) {
      FUN_006c5c20(0,0);
      return;
    }
    iVar1 = (**(code **)(*in_ECX + 200))(local_18);
    local_8 = 0x24;
    if (in_ECX[0x38] == 4) {
      local_8 = 0x40;
    }
    if ((0.0 < *(float *)(iVar1 + 8)) && (0.0 < *(float *)(iVar1 + 0xc))) {
      puVar3 = local_28;
      uVar2 = (**(code **)(*(int *)in_ECX[0x41] + 0xb8))(puVar3,iVar1);
      uVar2 = FUN_00677570(local_40,uVar2,puVar3);
      FUN_006cf510(uVar2);
    }
  }
  return;
}

