// rea decompile_all
// name: FUN_0045cfe0
// address: 0x45cfe0
// body: available
// range: 0x45cfe0-0x45d058 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0045cfe0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      return iVar6;
    }
    param_1 = param_1 + 1;
    uVar4 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar2 = 0x40;
      iVar5 = 0;
      uVar3 = 0x7f;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar2 < 9) break;
          uVar2 = uVar2 >> 1;
          iVar5 = iVar5 + 1;
          uVar3 = uVar3 >> 1;
        } while ((uVar4 & uVar2) != 0);
      }
      uVar4 = uVar4 & uVar3;
      for (; (iVar5 = iVar5 + -1, -1 < iVar5 && ((*param_1 & 0xc0) == 0x80)); param_1 = param_1 + 1)
      {
        uVar4 = uVar4 << 6 | *param_1 & 0x3f;
      }
    }
    bVar1 = *param_1;
    iVar6 = iVar6 * 0x1f + uVar4;
  } while( true );
}

