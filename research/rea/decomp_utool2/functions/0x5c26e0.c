// rea decompile_all
// name: FUN_005c26e0
// address: 0x5c26e0
// body: available
// range: 0x5c26e0-0x5c2741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005c26e0(short param_1)

{
  uint uVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071a7a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*in_ECX + 4))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (((char)uVar1 != '\0') &&
     (uVar1 = CONCAT22((short)(uVar1 >> 0x10),(short)in_ECX[4]), (short)in_ECX[4] == param_1)) {
    ExceptionList = local_10;
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}

