// rea decompile_all
// name: FUN_0041db4d
// address: 0x41db4d
// body: available
// range: 0x41db4d-0x41dc11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_0041db4d(char *param_1)

{
  char cVar1;
  char *in_EAX;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if (in_EAX == (char *)0x0) {
    return 0;
  }
  if (param_1 <= in_EAX) {
    return 0;
  }
  pcVar6 = in_EAX + 1;
  iVar7 = 0;
  iVar8 = 0x34;
  while( true ) {
    iVar3 = iVar8 + iVar7 >> 1;
    pbVar2 = &DAT_008fd928 + CONCAT11((&UNK_008fd92a)[iVar3 * 2],(&UNK_008fd92b)[iVar3 * 2]);
    if ((*pbVar2 & 0x7f) == (int)*in_EAX) break;
    if ((int)(*pbVar2 & 0x7f) < (int)*in_EAX) {
      iVar7 = iVar3 + 1;
      iVar3 = iVar8;
    }
    iVar8 = iVar3;
    if (iVar3 <= iVar7) {
      return 0;
    }
  }
  while (pcVar6 < param_1) {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if ((*pbVar2 & 0x80) == 0) {
      pbVar4 = pbVar2 + 1;
      uVar5 = *pbVar4 & 0x7f;
      if ((char)*pbVar4 < '\0') {
        pbVar4 = pbVar2 + 3;
      }
      while( true ) {
        if ((int)uVar5 < 1) {
          return 0;
        }
        pbVar2 = &DAT_008fd928 + CONCAT11(pbVar4[1],pbVar4[2]);
        if ((int)cVar1 == (*pbVar2 & 0x7f)) break;
        uVar5 = uVar5 - 1;
        pbVar4 = pbVar4 + 2;
      }
    }
    else {
      pbVar2 = pbVar2 + 1;
      if ((int)cVar1 != (*pbVar2 & 0x7f)) {
        return 0;
      }
    }
  }
  if ((*pbVar2 & 0x80) != 0) {
    return 0;
  }
  if ((pbVar2[1] & 0x80) == 0) {
    return 0;
  }
  return CONCAT11(pbVar2[2],pbVar2[3]);
}

