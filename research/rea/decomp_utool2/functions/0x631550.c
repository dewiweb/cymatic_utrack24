// rea decompile_all
// name: FUN_00631550
// address: 0x631550
// body: available
// range: 0x631550-0x63174c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00631550(undefined4 *param_1,int param_2,int param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  
  iVar13 = 0;
  if (-1 < param_2) {
    iVar13 = param_2;
  }
  iVar10 = 0;
  if (-1 < param_3) {
    iVar10 = param_3;
  }
  pbVar3 = (byte *)*in_ECX;
  iVar12 = 0;
  pbVar11 = pbVar3;
  if (0 < iVar13) {
    do {
      bVar1 = *pbVar11;
      if (bVar1 == 0) {
        iVar13 = *in_ECX;
        piVar7 = (int *)(iVar13 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        FUN_0044edf0(iVar13);
        return param_1;
      }
      pbVar11 = pbVar11 + 1;
      if ((char)bVar1 < '\0') {
        uVar9 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar9 < 9) break;
            uVar9 = uVar9 >> 1;
            pbVar11 = pbVar11 + 1;
          } while ((uVar9 & (int)(char)bVar1) != 0);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar13);
  }
  iVar13 = 0;
  pbVar15 = pbVar11;
  if (0 < iVar10) {
    do {
      bVar1 = *pbVar15;
      if (bVar1 == 0) break;
      pbVar15 = pbVar15 + 1;
      if ((char)bVar1 < '\0') {
        uVar9 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar9 < 9) break;
            uVar9 = uVar9 >> 1;
            pbVar15 = pbVar15 + 1;
          } while ((uVar9 & (int)(char)bVar1) != 0);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar10);
  }
  if ((pbVar11 == pbVar3) && (*pbVar15 == 0)) {
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      iVar13 = FUN_0045d1e0();
      uVar9 = iVar13 + 4U & 0xfffffffc;
      puVar5 = (undefined4 *)FUN_004bfe22(uVar9 + 0xb);
      *puVar5 = 0;
      pcVar4 = (char *)(puVar5 + 2);
      puVar5[1] = uVar9;
      cVar2 = *param_4;
      *pcVar4 = cVar2;
      if (cVar2 != '\0') {
        pcVar6 = pcVar4;
        do {
          cVar2 = pcVar6[(int)(param_4 + (1 - (int)pcVar4))];
          pcVar6 = pcVar6 + 1;
          *pcVar6 = cVar2;
        } while (cVar2 != '\0');
      }
      *param_1 = pcVar4;
      return param_1;
    }
  }
  else {
    iVar13 = (int)pbVar11 - (int)pbVar3;
    pcVar4 = param_4;
    do {
      pcVar6 = pcVar4;
      pcVar4 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    iVar10 = (int)pcVar6 - (int)param_4;
    pbVar3 = pbVar15;
    do {
      pbVar11 = pbVar3;
      pbVar3 = pbVar11 + 1;
    } while (*pbVar11 != 0);
    iVar12 = (int)pbVar11 - (int)pbVar15;
    iVar14 = iVar12 + iVar10 + iVar13;
    if (iVar14 != 0) {
      puVar8 = (undefined4 *)FUN_004bfe22();
      puVar8[1] = iVar14 + 4U & 0xfffffffc;
      puVar5 = puVar8 + 2;
      *puVar8 = 0;
      FUN_004c2c30(puVar5,*in_ECX,iVar13);
      FUN_004c2c30(iVar13 + (int)puVar5,param_4,iVar10);
      iVar10 = iVar13 + (int)puVar5 + iVar10;
      FUN_004c2c30(iVar10,pbVar15,iVar12);
      *(undefined1 *)(iVar10 + iVar12) = 0;
      *param_1 = puVar5;
      return param_1;
    }
  }
  *param_1 = &DAT_00bfe12c;
  return param_1;
}

