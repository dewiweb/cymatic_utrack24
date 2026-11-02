// rea decompile_all
// name: FUN_005fc300
// address: 0x5fc300
// body: available
// range: 0x5fc300-0x5fc496 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005fc300(void)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  
  pcVar6 = *(char **)(in_ECX + 4);
  cVar2 = *pcVar6;
  while (cVar2 != '\0') {
    if ((cVar2 < ' ') || (cVar2 == '\x7f')) {
      return 0;
    }
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar1;
  }
  pbVar7 = *(byte **)(in_ECX + 8);
  bVar3 = *pbVar7;
  do {
    if (bVar3 == 0) {
      return 1;
    }
    if ((char)bVar3 < '\0') {
      if (((bVar3 & 0xe0) == 0xc0) && ((pbVar7[1] & 0xc0) == 0x80)) {
        if ((bVar3 & 0xfe) == 0xc0) {
          return 0;
        }
        iVar5 = 2;
      }
      else if (((bVar3 & 0xf0) == 0xe0) &&
              ((bVar4 = pbVar7[1], (bVar4 & 0xc0) == 0x80 && ((pbVar7[2] & 0xc0) == 0x80)))) {
        if (bVar3 == 0xe0) {
          bVar8 = (bVar4 & 0xe0) == 0x80;
LAB_005fc3aa:
          if (bVar8) {
            return 0;
          }
        }
        else {
          if (bVar3 == 0xed) {
            bVar8 = (bVar4 & 0xe0) == 0xa0;
            goto LAB_005fc3aa;
          }
          if ((bVar3 == 0xef) && (bVar4 == 0xbf)) {
            bVar8 = (pbVar7[2] & 0xfe) == 0xbe;
            goto LAB_005fc3aa;
          }
        }
        iVar5 = 3;
      }
      else if (((bVar3 & 0xf8) == 0xf0) &&
              ((((pbVar7[1] & 0xc0) == 0x80 && ((pbVar7[2] & 0xc0) == 0x80)) &&
               ((pbVar7[3] & 0xc0) == 0x80)))) {
        if ((bVar3 == 0xf0) && ((pbVar7[1] & 0xf0) == 0x80)) {
          return 0;
        }
        iVar5 = 4;
      }
      else if ((((bVar3 & 0xfc) == 0xf8) && ((pbVar7[1] & 0xc0) == 0x80)) &&
              (((pbVar7[2] & 0xc0) == 0x80 &&
               (((pbVar7[3] & 0xc0) == 0x80 && ((pbVar7[4] & 0xc0) == 0x80)))))) {
        if ((bVar3 == 0xf8) && ((pbVar7[1] & 0xf8) == 0x80)) {
          return 0;
        }
        iVar5 = 5;
      }
      else {
        if ((bVar3 & 0xfe) != 0xfc) {
          return 0;
        }
        if ((pbVar7[1] & 0xc0) != 0x80) {
          return 0;
        }
        if ((pbVar7[2] & 0xc0) != 0x80) {
          return 0;
        }
        if ((pbVar7[3] & 0xc0) != 0x80) {
          return 0;
        }
        if ((pbVar7[4] & 0xc0) != 0x80) {
          return 0;
        }
        if ((pbVar7[5] & 0xc0) != 0x80) {
          return 0;
        }
        if ((bVar3 == 0xfc) && ((pbVar7[1] & 0xfc) == 0x80)) {
          return 0;
        }
        iVar5 = 6;
      }
    }
    else {
      iVar5 = 1;
    }
    bVar3 = pbVar7[iVar5];
    pbVar7 = pbVar7 + iVar5;
  } while( true );
}

