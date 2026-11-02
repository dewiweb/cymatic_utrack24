// rea decompile_all
// name: FUN_00658390
// address: 0x658390
// body: available
// range: 0x658390-0x6583fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00658390(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *in_ECX;
  uint uVar3;
  uint in_EDX;
  
  uVar3 = 0x3f;
  if ((in_EDX >> 0x18) - 0x20 < 0x5f) {
    uVar3 = in_EDX >> 0x18;
  }
  *in_ECX = 0x27;
  in_ECX[1] = (char)uVar3;
  uVar1 = in_EDX >> 0x10 & 0xff;
  in_ECX[5] = 0x27;
  uVar3 = 0x3f;
  if (uVar1 - 0x20 < 0x5f) {
    uVar3 = uVar1;
  }
  uVar1 = in_EDX >> 8 & 0xff;
  in_ECX[2] = (char)uVar3;
  uVar3 = 0x3f;
  if (uVar1 - 0x20 < 0x5f) {
    uVar3 = uVar1;
  }
  in_ECX[3] = (char)uVar3;
  uVar2 = 0x3f;
  if ((in_EDX & 0xff) - 0x20 < 0x5f) {
    uVar2 = (undefined1)in_EDX;
  }
  in_ECX[4] = uVar2;
  return;
}

