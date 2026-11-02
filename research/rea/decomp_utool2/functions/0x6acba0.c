// rea decompile_all
// name: FUN_006acba0
// address: 0x6acba0
// body: available
// range: 0x6acba0-0x6acc15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006acba0(uint param_1)

{
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint uVar2;
  
  if (param_1 < *(uint *)(in_ECX + 0x7c)) {
    FUN_006ad110();
    uVar1 = extraout_ECX;
    if (param_1 < *(uint *)(in_ECX + 0x7c)) {
      FUN_004b0120(param_1);
      uVar1 = extraout_ECX_00;
    }
    if (param_1 < *(uint *)(*(int *)(in_ECX + 0x70) + 0x98)) {
      uVar2 = *(uint *)(*(int *)(in_ECX + 0x70) + 0xa8);
      if (param_1 == uVar2) {
        uVar2 = 0xffffffff;
      }
      else if ((int)param_1 < (int)uVar2) {
        uVar2 = uVar2 - 1;
      }
      FUN_004aede0(param_1,uVar1);
      FUN_006adb80(uVar2,extraout_ECX_01);
      FUN_006ad390(extraout_ECX_02);
    }
  }
  return;
}

