// rea decompile_all
// name: FUN_0044ecc0
// address: 0x44ecc0
// body: available
// range: 0x44ecc0-0x44ed49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044ecc0(uint param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *in_ECX;
  byte *pbVar4;
  
  if (0x7f < param_1) {
    iVar1 = 1;
    if ((0x7ff < param_1) && (iVar1 = 2, 0xffff < param_1)) {
      iVar1 = 3;
    }
    iVar2 = iVar1 + -1;
    *(byte *)*in_ECX = (byte)(param_1 >> (char)iVar1 * '\x06') | -1 << (7U - (char)iVar1 & 0x1f);
    *in_ECX = *in_ECX + 1;
    iVar1 = iVar2 * 6;
    pbVar4 = (byte *)*in_ECX;
    do {
      bVar3 = (byte)iVar1;
      iVar1 = iVar1 + -6;
      *pbVar4 = (byte)(param_1 >> (bVar3 & 0x1f)) & 0x3f | 0x80;
      *in_ECX = *in_ECX + 1;
      iVar2 = iVar2 + -1;
      pbVar4 = (byte *)*in_ECX;
    } while (-1 < iVar2);
    return;
  }
  *(char *)*in_ECX = (char)param_1;
  *in_ECX = *in_ECX + 1;
  return;
}

