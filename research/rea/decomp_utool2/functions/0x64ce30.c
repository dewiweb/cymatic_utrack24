// rea decompile_all
// name: FUN_0064ce30
// address: 0x64ce30
// body: available
// range: 0x64ce30-0x64cf00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064ce30(int param_1,char *param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  
  uVar5 = *(byte *)(param_1 + 0xb) + 7 >> 3;
  uVar9 = 0;
  pcVar1 = param_2 + uVar5;
  uVar10 = (int)pcVar1 - (int)param_2;
  if (pcVar1 < param_2) {
    uVar10 = 0;
  }
  if (uVar10 != 0) {
    do {
      uVar9 = uVar9 + 1;
      *param_2 = *param_2 + *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar9 < uVar10);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (param_2 < pcVar1 + (iVar3 - uVar5)) {
    pbVar6 = (byte *)(param_2 + -uVar5);
    pbVar11 = param_3 + -uVar5;
    do {
      bVar4 = *pbVar6;
      bVar2 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      uVar12 = (uint)*param_3 - (uint)bVar2;
      uVar10 = (uint)bVar4 - (uint)bVar2;
      iVar7 = (uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f);
      iVar8 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
      uVar9 = (int)(uVar10 + uVar12) >> 0x1f;
      if (iVar8 < iVar7) {
        iVar7 = iVar8;
        bVar4 = *param_3;
      }
      if ((int)((uVar10 + uVar12 ^ uVar9) - uVar9) < iVar7) {
        bVar4 = bVar2;
      }
      *param_2 = *param_2 + bVar4;
      param_2 = param_2 + 1;
      pbVar6 = pbVar6 + 1;
      param_3 = param_3 + 1;
    } while (param_2 < pcVar1 + (iVar3 - uVar5));
  }
  return;
}

