// rea decompile_all
// name: FUN_00620d60
// address: 0x620d60
// body: available
// range: 0x620d60-0x620dd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00620d60(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int iVar4;
  
  pbVar2 = param_2;
  if (param_1 < param_2) {
    do {
      iVar4 = 0;
      do {
        param_2 = pbVar2;
        pbVar2 = param_2 + -1;
        if ((*pbVar2 & 0xc0) != 0x80) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      if ((*pbVar2 != 0x20) && (4 < (byte)(*pbVar2 - 9))) {
        bVar1 = *pbVar2;
        if (-1 < (char)bVar1) break;
        uVar3 = 0x40;
        if ((bVar1 & 0x40) != 0) goto LAB_00620dc0;
        break;
      }
      if (pbVar2 <= param_1) {
        *in_ECX = pbVar2;
        return;
      }
    } while( true );
  }
  goto LAB_00620dcc;
  while( true ) {
    uVar3 = uVar3 >> 1;
    param_2 = param_2 + 1;
    if ((uVar3 & (int)(char)bVar1) == 0) break;
LAB_00620dc0:
    if (uVar3 < 9) break;
  }
LAB_00620dcc:
  *in_ECX = param_2;
  return;
}

