// rea decompile_all
// name: FUN_004254b4
// address: 0x4254b4
// body: available
// range: 0x4254b4-0x42563e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004254b4(void)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  int *unaff_ESI;
  char *unaff_EDI;
  int local_c;
  
  iVar5 = *unaff_ESI;
  iVar1 = unaff_ESI[2];
  iVar13 = 0;
  pcVar3 = (char *)unaff_ESI[3];
  if (0 < iVar5) {
    do {
      pcVar7 = pcVar3 + iVar1;
      for (; pcVar3 < pcVar7; pcVar3 = pcVar3 + 1) {
        if (*pcVar3 != '\0') goto LAB_004254e9;
      }
      iVar13 = iVar13 + 1;
      pcVar3 = pcVar7;
    } while (iVar13 < iVar5);
LAB_004254e9:
    if (iVar13 < iVar5) {
      if (0 < iVar13) {
        iVar5 = iVar5 - iVar13;
        _memmove((void *)unaff_ESI[3],(void *)(iVar13 * iVar1 + unaff_ESI[3]),iVar5 * iVar1);
        cVar11 = (char)iVar13;
        *unaff_EDI = *unaff_EDI - cVar11;
        unaff_EDI[3] = unaff_EDI[3] - cVar11;
        unaff_EDI[6] = unaff_EDI[6] - cVar11;
        *unaff_ESI = *unaff_ESI - iVar13;
      }
      local_c = 0;
      pcVar3 = (char *)((iVar5 + -1) * iVar1 + unaff_ESI[3]);
      if (0 < iVar5) {
        pcVar8 = pcVar3 + iVar1;
        pcVar7 = pcVar3;
        do {
          for (; pcVar3 < pcVar8; pcVar3 = pcVar3 + 1) {
            if (*pcVar3 != '\0') goto LAB_00425564;
          }
          pcVar3 = pcVar7 + -iVar1;
          pcVar8 = pcVar8 + -iVar1;
          local_c = local_c + 1;
          pcVar7 = pcVar3;
        } while (local_c < iVar5);
LAB_00425564:
        if (0 < local_c) {
          *unaff_EDI = *unaff_EDI - (char)local_c;
          iVar5 = iVar5 - local_c;
          *unaff_ESI = *unaff_ESI - local_c;
        }
      }
      iVar5 = iVar1 * iVar5;
      do {
        pbVar4 = (byte *)unaff_ESI[3];
        for (pbVar6 = pbVar4; pbVar6 < pbVar4 + iVar5; pbVar6 = pbVar6 + iVar1) {
          if ((*pbVar6 & 0x80) != 0) goto LAB_004255ff;
        }
        pbVar6 = pbVar4 + iVar5;
        for (; pbVar4 < pbVar6; pbVar4 = pbVar4 + iVar1) {
          bVar2 = *pbVar4 * '\x02';
          pbVar10 = pbVar4;
          if (8 < unaff_ESI[1]) {
            local_c = (unaff_ESI[1] - 9U >> 3) + 1;
            pbVar9 = pbVar4;
            do {
              pbVar10 = pbVar9 + 1;
              bVar12 = *pbVar10 >> 7 | bVar2;
              bVar2 = *pbVar10 * '\x02';
              local_c = local_c + -1;
              *pbVar9 = bVar12;
              pbVar9 = pbVar10;
            } while (local_c != 0);
          }
          *pbVar10 = bVar2;
        }
        unaff_ESI[1] = unaff_ESI[1] + -1;
        unaff_EDI[2] = unaff_EDI[2] + '\x01';
        unaff_EDI[5] = unaff_EDI[5] + '\x01';
        unaff_EDI[1] = unaff_EDI[1] + -1;
      } while (0 < unaff_ESI[1]);
LAB_004255ff:
      iVar13 = unaff_ESI[1];
      do {
        iVar13 = iVar13 + -1;
        pbVar4 = (byte *)((iVar13 >> 3) + unaff_ESI[3]);
        pbVar6 = pbVar4 + iVar5;
        for (; pbVar4 < pbVar6; pbVar4 = pbVar4 + iVar1) {
          if ((*pbVar4 & (byte)(0x80 >> ((byte)iVar13 & 7))) != 0) {
            return;
          }
        }
        unaff_ESI[1] = iVar13;
        unaff_EDI[1] = unaff_EDI[1] + -1;
        iVar13 = unaff_ESI[1];
      } while (0 < iVar13);
      return;
    }
  }
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  unaff_ESI[2] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x12) = 1;
  return;
}

