// rea decompile_all
// name: FUN_005c4750
// address: 0x5c4750
// body: available
// range: 0x5c4750-0x5c47c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005c4750(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint in_EAX;
  byte *in_ECX;
  
  bVar1 = *in_ECX;
  if (((bVar1 < 0x80) && (bVar2 = in_ECX[1], bVar2 < 0x80)) && (bVar3 = in_ECX[2], bVar3 < 0x80)) {
    *param_2 = param_1;
    *(byte *)(param_2 + 3) = in_ECX[4];
    bVar4 = in_ECX[3];
    param_2[1] = (uint)bVar1 * 0x80 + (uint)bVar2;
    if (bVar4 < 0x80) {
      *(undefined1 *)((int)param_2 + 0xd) = 1;
      param_2[2] = (uint)bVar3 * 0x80 + (uint)bVar4;
      return 1;
    }
    param_2[2] = (uint)bVar3;
    *(undefined1 *)((int)param_2 + 0xd) = 0;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

