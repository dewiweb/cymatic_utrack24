// rea decompile_all
// name: FUN_00684d10
// address: 0x684d10
// body: available
// range: 0x684d10-0x684d59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00684d10(undefined4 *param_1)

{
  uint *in_ECX;
  undefined1 uVar1;
  double dVar2;
  float in_XMM2_Da;
  undefined4 local_18;
  undefined4 local_c;
  
  dVar2 = (double)((float)(*in_ECX >> 0x18) * in_XMM2_Da) + 6755399441055744.0;
  local_18 = SUB84(dVar2,0);
  uVar1 = 0xff;
  if (local_18 < 0xff) {
    uVar1 = SUB81(dVar2,0);
  }
  local_c = CONCAT13(uVar1,(int3)*in_ECX);
  *param_1 = local_c;
  return;
}

