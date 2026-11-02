// rea decompile_all
// name: FUN_00407220
// address: 0x407220
// body: available
// range: 0x407220-0x4073ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407220(uint param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar5 = param_1;
  param_1 = param_3;
  if ((int)uVar5 < 0) {
    param_3 = uVar5 + param_3;
    if (param_3 < 1) {
      uVar5 = uVar5 + *(int *)(in_ECX + 0x20);
    }
    else {
      FUN_00407220(*(int *)(in_ECX + 0x20) + uVar5,param_2,-uVar5,param_4);
      uVar5 = 0;
      param_1 = param_3;
    }
  }
  iVar1 = *(int *)(in_ECX + 0x60);
  if (0 < iVar1) {
    if ((int)param_1 <= iVar1) {
      *(uint *)(in_ECX + 0x60) = iVar1 - param_1;
      return;
    }
    uVar5 = uVar5 + iVar1;
    *(undefined4 *)(in_ECX + 0x60) = 0;
    param_1 = param_1 - iVar1;
  }
  iVar1 = *(int *)(in_ECX + 0x18);
  if (*(int *)(in_ECX + 0x44) < 1) {
    if (1 < iVar1) {
      iVar7 = *(int *)(in_ECX + 0x6c);
      puVar10 = (undefined8 *)(*(int *)(in_ECX + 0x58) + (iVar7 + uVar5) * 8);
      iVar2 = (int)((iVar1 - iVar7) + -1 + param_1) / iVar1;
      *(uint *)(in_ECX + 0x6c) = (iVar2 * iVar1 - param_1) + iVar7;
      puVar6 = (undefined8 *)*param_2;
      *param_4 = *param_4 + iVar2;
      *param_2 = (int)(puVar6 + iVar2);
      if (3 < iVar2) {
        iVar7 = (iVar2 - 4U >> 2) + 1;
        iVar2 = iVar2 + iVar7 * -4;
        do {
          puVar8 = puVar10 + iVar1;
          *puVar6 = *puVar10;
          puVar9 = puVar8 + iVar1;
          puVar6[1] = *puVar8;
          puVar6[2] = *puVar9;
          puVar10 = puVar9 + iVar1 + iVar1;
          puVar6[3] = puVar9[iVar1];
          puVar6 = puVar6 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (0 < iVar2) {
        do {
          iVar2 = iVar2 + -1;
          *puVar6 = *puVar10;
          puVar10 = puVar10 + iVar1;
          puVar6 = puVar6 + 1;
        } while (0 < iVar2);
        return;
      }
      return;
    }
  }
  else {
    uVar4 = iVar1 - 1U & uVar5;
    if (0 < (int)uVar4) {
      iVar2 = iVar1 - uVar4;
      param_1 = param_1 - iVar2;
      uVar5 = uVar5 + iVar2;
    }
    if ((int)param_1 < 1) {
      return;
    }
    bVar3 = (byte)*(undefined4 *)(in_ECX + 0x44);
    param_1 = (int)(param_1 + iVar1 + -1) >> (bVar3 & 0x1f);
    uVar5 = (int)uVar5 >> (bVar3 & 0x1f);
  }
  iVar1 = *param_2;
  FUN_004c2c30(iVar1,*(int *)(in_ECX + 0x58) + uVar5 * 8,param_1 * 8);
  *param_2 = iVar1 + param_1 * 8;
  *param_4 = *param_4 + param_1;
  return;
}

