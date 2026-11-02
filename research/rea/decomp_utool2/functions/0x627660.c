// rea decompile_all
// name: FUN_00627660
// address: 0x627660
// body: available
// range: 0x627660-0x6276da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00627660(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    iVar4 = iVar6;
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar3 = 0x40;
      iVar6 = 0;
      uVar5 = 0x7f;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar3 < 9) break;
          uVar3 = uVar3 >> 1;
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 >> 1;
        } while ((uVar2 & uVar3) != 0);
      }
      uVar2 = uVar2 & uVar5;
      for (; (iVar6 = iVar6 + -1, -1 < iVar6 && ((*param_1 & 0xc0) == 0x80)); param_1 = param_1 + 1)
      {
        uVar2 = uVar2 << 6 | *param_1 & 0x3f;
      }
    }
    if (uVar2 == 0) {
      return iVar4;
    }
    iVar6 = iVar4 + 1;
    if (uVar2 != 0x5c) {
      iVar6 = iVar4;
    }
  } while( true );
}

