// rea decompile_all
// name: FUN_0062eb70
// address: 0x62eb70
// body: available
// range: 0x62eb70-0x62ec45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062eb70(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *in_ECX;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  
  pbVar7 = (byte *)*in_ECX;
  iVar10 = 2;
  bVar8 = *pbVar7;
  pbVar9 = pbVar7;
  if (bVar8 != 0) {
    do {
      iVar10 = iVar10 + -1;
      pbVar9 = pbVar9 + 1;
      if ((char)bVar8 < '\0') {
        uVar4 = 0x40;
        if ((bVar8 & 0x40) != 0) {
          do {
            if (uVar4 < 9) break;
            uVar4 = uVar4 >> 1;
            pbVar9 = pbVar9 + 1;
          } while ((uVar4 & (int)(char)bVar8) != 0);
        }
      }
      bVar8 = *pbVar9;
    } while (bVar8 != 0);
    if (iVar10 < 1) {
      *param_1 = pbVar7;
      pbVar7 = pbVar7 + -8;
      if (pbVar7 == (byte *)&DAT_00bfe124) {
        return;
      }
      LOCK();
      *(int *)pbVar7 = *(int *)pbVar7 + 1;
      UNLOCK();
      return;
    }
  }
  puVar5 = (undefined4 *)
           FUN_004bfe22(((uint)(pbVar9 + iVar10 + (4 - (int)pbVar7)) & 0xfffffffc) + 0xb);
  puVar5[1] = (uint)(pbVar9 + iVar10 + (4 - (int)pbVar7)) & 0xfffffffc;
  pcVar1 = (char *)(puVar5 + 2);
  *puVar5 = 0;
  pcVar3 = (char *)*in_ECX;
  cVar2 = *pcVar3;
  *pcVar1 = cVar2;
  pcVar6 = pcVar1;
  if (cVar2 != '\0') {
    do {
      cVar2 = pcVar6[(int)(pcVar3 + (1 - (int)pcVar1))];
      pcVar6 = pcVar6 + 1;
      *pcVar6 = cVar2;
    } while (cVar2 != '\0');
  }
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    FUN_0044ecc0(0x20);
  }
  *pcVar6 = '\0';
  *param_1 = pcVar1;
  return;
}

