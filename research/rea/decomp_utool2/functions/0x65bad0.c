// rea decompile_all
// name: FUN_0065bad0
// address: 0x65bad0
// body: available
// range: 0x65bad0-0x65bb42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065bad0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  if (0 < param_4) {
    do {
      pbVar6 = *(byte **)(param_2 + iVar9 * 4);
      for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
        iVar7 = (uint)(pbVar6[1] >> 2) * 0x20 + (uint)(pbVar6[2] >> 3);
        iVar5 = *(int *)(iVar4 + (uint)(*pbVar6 >> 3) * 4);
        psVar1 = (short *)(iVar5 + iVar7 * 2);
        *psVar1 = *psVar1 + 1;
        psVar2 = (short *)(iVar5 + iVar7 * 2);
        if (*psVar1 == 0) {
          *psVar2 = *psVar2 + -1;
        }
        pbVar6 = pbVar6 + 3;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_4);
  }
  return;
}

