// rea decompile_all
// name: FUN_0065c1a0
// address: 0x65c1a0
// body: available
// range: 0x65c1a0-0x65c234 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c1a0(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char cVar9;
  byte *pbVar10;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      pbVar10 = *(byte **)(param_2 + (int)param_3);
      pcVar7 = (char *)*param_3;
      for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
        cVar9 = '\0';
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            bVar2 = *pbVar10;
            pbVar10 = pbVar10 + 1;
            iVar1 = iVar6 * 4;
            iVar6 = iVar6 + 1;
            cVar9 = cVar9 + *(char *)(*(int *)(iVar5 + iVar1) + (uint)bVar2);
          } while (iVar6 < iVar4);
        }
        *pcVar7 = cVar9;
        pcVar7 = pcVar7 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

