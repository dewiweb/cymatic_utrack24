// rea decompile_all
// name: FUN_0064cf10
// address: 0x64cf10
// body: available
// range: 0x64cf10-0x64cfc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064cf10(uint param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint local_8;
  
  iVar4 = *(int *)(param_1 + 4);
  local_8 = 0;
  pbVar8 = param_2 + 1;
  bVar1 = *param_3;
  uVar6 = (uint)*param_2 + (uint)bVar1;
  *param_2 = (byte)uVar6;
  uVar2 = (int)(param_2 + iVar4) - (int)pbVar8;
  if (param_2 + iVar4 < pbVar8) {
    uVar2 = 0;
  }
  param_1 = (uint)bVar1;
  if (uVar2 != 0) {
    do {
      param_3 = param_3 + 1;
      uVar3 = (uint)*param_3;
      uVar10 = uVar3 - param_1;
      uVar9 = (uVar6 & 0xff) - param_1;
      iVar4 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
      iVar5 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
      uVar7 = (int)(uVar9 + uVar10) >> 0x1f;
      uVar6 = uVar6 & 0xff;
      if (iVar5 < iVar4) {
        iVar4 = iVar5;
        uVar6 = uVar3;
      }
      if ((int)((uVar9 + uVar10 ^ uVar7) - uVar7) < iVar4) {
        uVar6 = param_1;
      }
      uVar6 = uVar6 + *pbVar8;
      local_8 = local_8 + 1;
      *pbVar8 = (byte)uVar6;
      pbVar8 = pbVar8 + 1;
      param_1 = uVar3;
    } while (local_8 < uVar2);
  }
  return;
}

