// rea decompile_all
// name: FUN_00460390
// address: 0x460390
// body: available
// range: 0x460390-0x46042e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460390(int param_1,uint param_2)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(in_ECX + 0x50) >> 3 & 0x3f;
  uVar1 = *(uint *)(in_ECX + 0x50) + param_2 * 8;
  *(uint *)(in_ECX + 0x50) = uVar1;
  if (uVar1 < param_2 * 8) {
    *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + 1;
  }
  uVar3 = -uVar2 + 0x40;
  *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + (param_2 >> 0x1d);
  uVar1 = 0;
  if (uVar3 <= param_2) {
    FUN_004c2c30(uVar2 + in_ECX,param_1,uVar3);
    FUN_00460430(in_ECX);
    uVar1 = uVar3;
    for (uVar2 = -uVar2 + 0x80; uVar2 <= param_2; uVar2 = uVar2 + 0x40) {
      FUN_00460430(param_1 + -0x40 + uVar2);
      uVar1 = uVar1 + 0x40;
    }
    uVar2 = 0;
  }
  FUN_004c2c30(uVar2 + in_ECX,uVar1 + param_1,param_2 - uVar1);
  return;
}

