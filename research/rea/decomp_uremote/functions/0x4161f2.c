// rea decompile_all
// name: FUN_004161f2
// address: 0x4161f2
// body: available
// range: 0x4161f2-0x4163a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004161f2(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  iVar2 = param_3;
  param_3 = 0;
  if ((byte *)(param_1 + 5U) <= param_2) {
    bVar1 = *(byte *)(param_1 + 3);
    uVar3 = (uint)*(byte *)(param_1 + 4);
    uVar4 = uVar3 + *(int *)(iVar2 + 0x5c);
    pbVar9 = (byte *)(param_1 + 5);
    if (*(uint *)(iVar2 + 0x60) < uVar4) {
      uVar5 = FUN_00411976(0x24,*(undefined4 *)(iVar2 + 100),&param_3);
      *(undefined4 *)(iVar2 + 100) = uVar5;
      if (param_3 != 0) {
        return param_3;
      }
      *(uint *)(iVar2 + 0x60) = uVar4 + 3 & 0xfffffffc;
    }
    iVar7 = 8;
    if ((bVar1 & 1) != 0) {
      iVar7 = 9;
    }
    if ((bVar1 & 2) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 4) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 8) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 0x10) != 0) {
      iVar7 = iVar7 + 1;
    }
    puVar6 = (uint *)(*(int *)(iVar2 + 0x5c) * 0x24 + *(int *)(iVar2 + 100));
    uVar4 = uVar3;
    if (pbVar9 + iVar7 * uVar3 <= param_2) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if ((bVar1 & 1) == 0) {
          uVar8 = (uint)*pbVar9;
          pbVar10 = pbVar9 + 1;
        }
        else {
          pbVar10 = pbVar9 + 2;
          uVar8 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        *puVar6 = uVar8;
        if ((bVar1 & 2) == 0) {
          uVar8 = (uint)*pbVar10;
          pbVar9 = pbVar10 + 1;
        }
        else {
          pbVar9 = pbVar10 + 2;
          uVar8 = (uint)CONCAT11(*pbVar10,pbVar10[1]);
        }
        puVar6[1] = uVar8;
        puVar6[2] = (uint)*pbVar9;
        if ((bVar1 & 4) == 0) {
          pbVar10 = pbVar9 + 3;
          uVar8 = (uint)pbVar9[1];
        }
        else {
          pbVar10 = pbVar9 + 4;
          uVar8 = (uint)CONCAT11(pbVar9[1],pbVar9[2]);
        }
        puVar6[5] = uVar8 << 8 | (uint)pbVar10[-1];
        if ((bVar1 & 8) == 0) {
          pbVar11 = pbVar10 + 2;
          uVar8 = (uint)*pbVar10;
        }
        else {
          pbVar11 = pbVar10 + 3;
          uVar8 = (uint)CONCAT11(*pbVar10,pbVar10[1]);
        }
        puVar6[6] = uVar8 << 8 | (uint)pbVar11[-1];
        if ((bVar1 & 0x10) == 0) {
          uVar8 = (uint)*pbVar11;
          pbVar9 = pbVar11 + 1;
        }
        else {
          pbVar9 = pbVar11 + 2;
          uVar8 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
        }
        puVar6[7] = uVar8;
        puVar6 = puVar6 + 9;
      }
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + uVar3;
      return param_3;
    }
  }
  return 8;
}

