// rea decompile_all
// name: FUN_0041dc12
// address: 0x41dc12
// body: available
// range: 0x41dc12-0x41dce8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041dc12(char *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (*param_1 == 'u') {
    pbVar8 = (byte *)(param_1 + 1);
    if ((*pbVar8 == 0x6e) && (param_1[2] == 'i')) {
      uVar1 = 0;
      pbVar7 = (byte *)(param_1 + 3);
      iVar6 = 4;
      do {
        uVar5 = (uint)*pbVar7;
        uVar2 = uVar5 - 0x30;
        if (9 < uVar2) {
          if (5 < uVar5 - 0x41) break;
          uVar2 = uVar5 - 0x37;
        }
        if (0xf < uVar2) break;
        uVar1 = uVar1 * 0x10 + uVar2;
        iVar6 = iVar6 + -1;
        pbVar7 = pbVar7 + 1;
      } while (0 < iVar6);
      if (iVar6 == 0) {
        if (*pbVar7 == 0) {
          return uVar1;
        }
        if (*pbVar7 == 0x2e) goto LAB_0041dce0;
      }
    }
    uVar1 = 0;
    iVar6 = 6;
    do {
      uVar5 = (uint)*pbVar8;
      uVar2 = uVar5 - 0x30;
      if (9 < uVar2) {
        if (5 < uVar5 - 0x41) break;
        uVar2 = uVar5 - 0x37;
      }
      if (0xf < uVar2) break;
      uVar1 = uVar1 * 0x10 + uVar2;
      iVar6 = iVar6 + -1;
      pbVar8 = pbVar8 + 1;
    } while (0 < iVar6);
    if (iVar6 < 3) {
      if (*pbVar8 == 0) {
        return uVar1;
      }
      if (*pbVar8 == 0x2e) goto LAB_0041dce0;
    }
  }
  cVar4 = *param_1;
  pcVar3 = param_1;
  while( true ) {
    if (cVar4 == '\0') {
      uVar1 = FUN_0041db4d(pcVar3);
      return uVar1;
    }
    if ((cVar4 == '.') && (param_1 < pcVar3)) break;
    pcVar3 = pcVar3 + 1;
    cVar4 = *pcVar3;
  }
  uVar1 = FUN_0041db4d(pcVar3);
LAB_0041dce0:
  return uVar1 | 0x80000000;
}

