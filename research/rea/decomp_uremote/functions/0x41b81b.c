// rea decompile_all
// name: FUN_0041b81b
// address: 0x41b81b
// body: available
// range: 0x41b81b-0x41b905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041b81b(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int in_EAX;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  bool bVar11;
  
  bVar11 = SBORROW4(in_EAX,param_2);
  iVar7 = in_EAX - param_2;
  iVar5 = in_EAX;
  if (param_2 < in_EAX) {
    bVar11 = SBORROW4(param_2,in_EAX);
    iVar7 = param_2 - in_EAX;
    iVar5 = param_2;
    param_2 = in_EAX;
  }
  if (((bVar11 != iVar7 < 0) && (-1 < iVar5)) && (param_2 < *param_1)) {
    puVar6 = (uint *)(iVar5 * 0x10 + param_1[2]);
    puVar9 = (uint *)(param_2 * 0x10 + param_1[2]);
    uVar3 = *puVar9;
    uVar8 = *puVar6;
    if (uVar3 != 0) {
      if (uVar8 < uVar3) {
        iVar7 = FUN_0041b5a5();
        if (iVar7 != 0) {
          return iVar7;
        }
        for (; uVar8 < uVar3; uVar8 = uVar8 + 1) {
          FUN_0041b613();
        }
      }
      pbVar4 = (byte *)puVar9[2];
      pbVar10 = (byte *)puVar6[2];
      for (uVar8 = uVar3 + 7 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar10 = *pbVar10 | *pbVar4;
        pbVar10 = pbVar10 + 1;
        pbVar4 = pbVar4 + 1;
      }
    }
    *puVar9 = 0;
    puVar9[3] = 0;
    iVar7 = (*param_1 - param_2) + -1;
    if (0 < iVar7) {
      uVar8 = *puVar9;
      uVar3 = puVar9[1];
      uVar1 = puVar9[2];
      uVar2 = puVar9[3];
      _memmove(puVar9,puVar9 + 4,iVar7 * 0x10);
      puVar9 = puVar9 + iVar7 * 4;
      *puVar9 = uVar8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar1;
      puVar9[3] = uVar2;
    }
    *param_1 = *param_1 + -1;
  }
  return 0;
}

