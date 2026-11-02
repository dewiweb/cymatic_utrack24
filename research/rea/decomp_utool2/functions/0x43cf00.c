// rea decompile_all
// name: FUN_0043cf00
// address: 0x43cf00
// body: available
// range: 0x43cf00-0x43d1f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043cf00(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  uint *in_ECX;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = 0;
  uVar9 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  uVar1 = FUN_0062c730("acid one shot",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  iVar2 = FID_conflict__atoi(*ppuVar7);
  uVar1 = FUN_0062c730("acid root set",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  iVar3 = FID_conflict__atoi(*ppuVar7);
  uVar1 = FUN_0062c730("acid stretch",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  iVar4 = FID_conflict__atoi(*ppuVar7);
  uVar1 = FUN_0062c730("acid disk based",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  iVar5 = FID_conflict__atoi(*ppuVar7);
  uVar1 = FUN_0062c730("acidizer flag",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  iVar6 = FID_conflict__atoi(*ppuVar7);
  *in_ECX = -(uint)(iVar6 != 0) & 0x10 | -(uint)(iVar5 != 0) & 8 | -(uint)(iVar4 != 0) & 4 |
            -(uint)(iVar3 != 0) & 2 | (uint)(iVar2 != 0);
  uVar1 = FUN_0062c730("acid root set",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  iVar2 = FID_conflict__atoi(*ppuVar7);
  if (iVar2 != 0) {
    uVar1 = FUN_0062c730("acid root note",*(undefined1 *)(param_1 + 0x18),0);
    if (uVar1 < *(uint *)(param_1 + 0x14)) {
      ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
    }
    else {
      ppuVar7 = &PTR_DAT_00c7ed68;
    }
    iVar2 = FID_conflict__atoi(*ppuVar7);
    *(short *)(in_ECX + 1) = (short)iVar2;
  }
  uVar1 = FUN_0062c730("acid beats",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  uVar1 = FID_conflict__atoi(*ppuVar7);
  in_ECX[3] = uVar1;
  uVar1 = FUN_0062c730("acid denominator",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  iVar2 = FID_conflict__atoi(*ppuVar7);
  *(short *)(in_ECX + 4) = (short)iVar2;
  uVar1 = FUN_0062c730("acid numerator",*(undefined1 *)(param_1 + 0x18),0);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    ppuVar7 = (undefined **)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  iVar2 = FID_conflict__atoi(*ppuVar7);
  *(short *)((int)in_ECX + 0x12) = (short)iVar2;
  iVar2 = FUN_0062c730("acid tempo",0,0);
  if (-1 < iVar2) {
    FUN_0062c730("acid tempo",*(undefined1 *)(param_1 + 0x18),0);
    FUN_0045c380();
    in_ECX[5] = (uint)(float)(double)CONCAT44(uVar9,uVar8);
  }
  return;
}

