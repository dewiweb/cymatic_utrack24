// rea decompile_all
// name: FUN_0043b2c0
// address: 0x43b2c0
// body: available
// range: 0x43b2c0-0x43b33c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043b2c0(int param_1,undefined4 param_2)

{
  int *_Memory;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined **ppuVar4;
  
  uVar3 = FUN_0062c730(param_2,*(undefined1 *)(param_1 + 0x18),0);
  if (uVar3 < *(uint *)(param_1 + 0x14)) {
    ppuVar4 = (undefined **)(*(int *)(param_1 + 0xc) + uVar3 * 4);
  }
  else {
    ppuVar4 = &PTR_DAT_00c7ed68;
  }
  pcVar2 = *ppuVar4;
  _Memory = (int *)(pcVar2 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    *_Memory = *_Memory + 1;
    UNLOCK();
  }
  if (*pcVar2 != '\0') {
    FUN_005e2ec0(pcVar2);
  }
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  return;
}

