// rea decompile_all
// name: FUN_00633d10
// address: 0x633d10
// body: available
// range: 0x633d10-0x633dde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00633d10(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *in_ECX;
  uint uVar8;
  byte *pbVar9;
  
  pbVar7 = (byte *)*in_ECX;
  bVar2 = *pbVar7;
  pbVar9 = pbVar7;
  do {
    if (bVar2 == 0) {
      if (param_3 < 1) {
        *param_1 = pbVar7;
        pbVar7 = pbVar7 + -8;
        if (pbVar7 != (byte *)&DAT_00bfe124) {
          LOCK();
          *(int *)pbVar7 = *(int *)pbVar7 + 1;
          UNLOCK();
        }
        return param_1;
      }
      puVar5 = (undefined4 *)
               FUN_004bfe22(((uint)(pbVar9 + param_3 + (4 - (int)pbVar7)) & 0xfffffffc) + 0xb);
      puVar5[1] = (uint)(pbVar9 + param_3 + (4 - (int)pbVar7)) & 0xfffffffc;
      pcVar1 = (char *)(puVar5 + 2);
      *puVar5 = 0;
      while (param_3 = param_3 + -1, -1 < param_3) {
        FUN_0044ecc0(0x30);
      }
      pcVar4 = (char *)*in_ECX;
      cVar3 = *pcVar4;
      *pcVar1 = cVar3;
      if (cVar3 != '\0') {
        pcVar6 = pcVar1;
        do {
          cVar3 = pcVar6[(int)(pcVar4 + (1 - (int)pcVar1))];
          pcVar6 = pcVar6 + 1;
          *pcVar6 = cVar3;
        } while (cVar3 != '\0');
      }
      *param_1 = pcVar1;
      return param_1;
    }
    param_3 = param_3 + -1;
    pbVar9 = pbVar9 + 1;
    if ((char)bVar2 < '\0') {
      uVar8 = 0x40;
      if ((bVar2 & 0x40) != 0) {
        do {
          if (uVar8 < 9) break;
          uVar8 = uVar8 >> 1;
          pbVar9 = pbVar9 + 1;
        } while ((uVar8 & (int)(char)bVar2) != 0);
      }
    }
    bVar2 = *pbVar9;
  } while( true );
}

