// rea decompile_all
// name: FUN_0045d2e0
// address: 0x45d2e0
// body: available
// range: 0x45d2e0-0x45d356 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0045d2e0(char *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (*param_1 == '\0') {
    return 0;
  }
  uStack_c = 0;
  local_10 = 0;
  do {
    iVar2 = FUN_00443260();
    uVar3 = iVar2 - 0x30;
    if (uVar3 < 10) {
LAB_0045d327:
      if (-1 < (int)uVar3) {
        uVar1 = local_10 >> 0x1c;
        local_10 = local_10 << 4 | uVar3;
        uStack_c = uStack_c << 4 | uVar1 | (int)uVar3 >> 0x1f;
      }
    }
    else {
      uVar3 = iVar2 - 0x61;
      if ((uVar3 < 6) || (uVar3 = iVar2 - 0x41, uVar3 < 6)) {
        uVar3 = uVar3 + 10;
        goto LAB_0045d327;
      }
    }
    if (*param_1 == '\0') {
      return CONCAT44(uStack_c,local_10);
    }
  } while( true );
}

