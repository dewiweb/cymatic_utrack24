// rea decompile_all
// name: FUN_006ac430
// address: 0x6ac430
// body: available
// range: 0x6ac430-0x6ac590 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ac430(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 local_8c [24];
  undefined1 local_74 [16];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [8];
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  if (*(int *)(in_ECX + 0x78) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(*(int *)(in_ECX + 0x78) + 8);
  }
  uVar4 = FUN_006e6400(local_74);
  FUN_006d37f0(local_4c,uVar10,uVar4);
  iVar5 = 0;
  if (-param_3 < 0) {
    iVar5 = -param_3;
  }
  local_40 = *(int *)(in_ECX + 0xbc) - local_40;
  local_c = 0;
  if (local_40 < 0) {
    local_c = local_40;
  }
  iVar8 = 0;
  if (-param_2 < 0) {
    iVar8 = -param_2;
  }
  local_44 = *(int *)(in_ECX + 0xb8) - local_44;
  iVar9 = 0;
  if (local_44 < 0) {
    iVar9 = local_44;
  }
  if (iVar9 < iVar8) {
    iVar9 = iVar8;
  }
  if (local_c < iVar5) {
    local_c = iVar5;
  }
  if (*(int *)(in_ECX + 0x78) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
  }
  puVar3 = *(undefined4 **)(iVar5 + 0x24);
  if (puVar3 == (undefined4 *)0x0) {
    puVar6 = &local_64;
    local_64 = 0x3f800000;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_54 = 0x3f800000;
    local_50 = 0;
  }
  else {
    local_24 = *puVar3;
    uStack_20 = puVar3[1];
    uStack_1c = puVar3[2];
    uStack_18 = puVar3[3];
    local_14 = puVar3[4];
    puVar6 = &local_24;
    local_10 = puVar3[5];
  }
  local_3c = *puVar6;
  uStack_38 = puVar6[1];
  uStack_34 = puVar6[2];
  uStack_30 = puVar6[3];
  local_2c = puVar6[4];
  local_28 = puVar6[5];
  pfVar7 = (float *)FUN_0067df10(local_8c);
  fVar1 = pfVar7[4];
  fVar2 = pfVar7[3];
  *param_1 = (int)(pfVar7[1] * (float)local_c + *pfVar7 * (float)iVar9 + pfVar7[2]);
  param_1[1] = (int)(fVar2 * (float)iVar9 + fVar1 * (float)local_c + pfVar7[5]);
  return;
}

