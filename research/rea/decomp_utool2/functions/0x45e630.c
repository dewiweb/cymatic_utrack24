// rea decompile_all
// name: FUN_0045e630
// address: 0x45e630
// body: available
// range: 0x45e630-0x45e6fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e630(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *in_ECX;
  int in_EDX;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = in_EDX + -1;
  if (iVar6 < 1) {
    *(undefined1 *)*in_ECX = 0;
    return;
  }
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    if (uVar1 == 0) break;
    if (uVar1 < 0x80) {
      *(char *)*in_ECX = (char)uVar1;
      *in_ECX = *in_ECX + 1;
    }
    else {
      iVar2 = 1;
      if ((0x7ff < uVar1) && (iVar2 = 2, 0xffff < uVar1)) {
        iVar2 = 3;
      }
      iVar3 = iVar2 + -1;
      *(byte *)*in_ECX = (byte)(uVar1 >> (char)iVar2 * '\x06') | -1 << (7U - (char)iVar2 & 0x1f);
      *in_ECX = *in_ECX + 1;
      iVar2 = iVar3 * 6;
      pbVar5 = (byte *)*in_ECX;
      do {
        bVar4 = (byte)iVar2;
        iVar2 = iVar2 + -6;
        *pbVar5 = (byte)(uVar1 >> (bVar4 & 0x1f)) & 0x3f | 0x80;
        *in_ECX = *in_ECX + 1;
        iVar3 = iVar3 + -1;
        pbVar5 = (byte *)*in_ECX;
      } while (-1 < iVar3);
    }
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  *(undefined1 *)*in_ECX = 0;
  return;
}

