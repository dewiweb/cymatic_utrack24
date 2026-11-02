// rea decompile_all
// name: FUN_006325e0
// address: 0x6325e0
// body: available
// range: 0x6325e0-0x63264f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006325e0(int param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *in_ECX;
  uint uVar4;
  
  if (*param_2 == '\0') {
    return -1;
  }
  pbVar2 = (byte *)*in_ECX;
  iVar3 = param_1;
  do {
    do {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          iVar3 = FUN_0045e080(pbVar2);
          if (-1 < iVar3) {
            iVar3 = iVar3 + param_1;
          }
          return iVar3;
        }
        bVar1 = *pbVar2;
        if (bVar1 == 0) {
          return -1;
        }
        pbVar2 = pbVar2 + 1;
      } while (-1 < (char)bVar1);
      uVar4 = 0x40;
    } while ((bVar1 & 0x40) == 0);
    do {
      if (uVar4 < 9) break;
      uVar4 = uVar4 >> 1;
      pbVar2 = pbVar2 + 1;
    } while ((uVar4 & (int)(char)bVar1) != 0);
  } while( true );
}

