// rea decompile_all
// name: FUN_00498691
// address: 0x498691
// body: available
// range: 0x498691-0x49873b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498691(int param_1,char *param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  iVar5 = (int)(*(byte *)(param_1 + 0xb) + 7) >> 3;
  pcVar1 = param_2 + iVar5;
  for (; param_2 < pcVar1; param_2 = param_2 + 1) {
    bVar2 = *param_3;
    param_3 = param_3 + 1;
    *param_2 = *param_2 + bVar2;
  }
  iVar4 = *(int *)(param_1 + 4);
  if (param_2 < pcVar1 + (iVar4 - iVar5)) {
    pbVar11 = (byte *)(param_2 + -iVar5);
    pbVar10 = param_3 + -iVar5;
    do {
      bVar2 = *pbVar10;
      bVar3 = *param_3;
      bVar7 = *pbVar11;
      param_3 = param_3 + 1;
      iVar6 = (uint)bVar3 - (uint)bVar2;
      pbVar10 = pbVar10 + 1;
      iVar8 = (uint)bVar7 - (uint)bVar2;
      param_1 = iVar6;
      if (iVar6 < 0) {
        param_1 = -iVar6;
      }
      iVar9 = iVar8;
      if (iVar8 < 0) {
        iVar9 = -iVar8;
      }
      iVar6 = iVar6 + iVar8;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (iVar9 < param_1) {
        bVar7 = bVar3;
        param_1 = iVar9;
      }
      if (iVar6 < param_1) {
        bVar7 = bVar2;
      }
      *param_2 = *param_2 + bVar7;
      param_2 = param_2 + 1;
      pbVar11 = pbVar11 + 1;
    } while (param_2 < pcVar1 + (iVar4 - iVar5));
  }
  return;
}

