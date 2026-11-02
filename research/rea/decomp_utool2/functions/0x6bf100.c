// rea decompile_all
// name: FUN_006bf100
// address: 0x6bf100
// body: available
// range: 0x6bf100-0x6bf488 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006bf100(undefined4 param_1)

{
  float *pfVar1;
  double dVar2;
  char cVar3;
  int in_ECX;
  undefined4 in_XMM0_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_XMM0_Db;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  FUN_0069ee40(param_1);
  fVar4 = (float)(double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  fVar9 = fVar4;
  FUN_0069ee40(param_1);
  fVar5 = (float)(double)CONCAT44(in_XMM0_Db,fVar9);
  fVar9 = fVar5;
  FUN_0069ee40(param_1);
  fVar6 = (float)(double)CONCAT44(in_XMM0_Db,fVar9);
  fVar9 = fVar6;
  FUN_0069ee40(param_1);
  pfVar1 = *(float **)(in_ECX + 4);
  fVar11 = 1.0;
  fVar13 = 0.0;
  fVar9 = (float)(double)CONCAT44(in_XMM0_Db,fVar9);
  uVar7 = 0x3f800000;
  uVar8 = 0;
  local_50 = 1.0;
  fStack_4c = 0.0;
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  local_40 = 0x3f800000;
  if (*(char *)(pfVar1 + 4) != '\0') {
    FUN_0069ee40(param_1);
    dVar2 = (double)CONCAT44(uVar8,uVar7);
    fVar11 = (float)dVar2;
    FUN_0069ee40(param_1);
    fVar10 = fVar9 - fVar5;
    fVar15 = fVar6 - fVar4;
    fVar12 = (float)dVar2 - fVar4;
    local_78 = ((fVar4 + fVar5) - fVar6) - fVar5;
    fVar14 = (float)(double)CONCAT44(uVar8,fVar11) - fVar5;
    local_74 = ((fVar9 + fVar4) - fVar5) - fVar4;
    fVar11 = local_78 * fVar15 - local_74 * fVar10;
    fVar13 = fVar10;
    local_70 = fVar5;
    local_6c = fVar4;
    local_64 = fVar15;
    if (fVar11 != 0.0) {
      fVar11 = 1.0 / fVar11;
      local_64 = local_78 * fVar11;
      local_74 = -local_74 * fVar11;
      local_78 = fVar15 * fVar11;
      fVar13 = -fVar10 * fVar11;
      local_70 = -(-fVar10 * fVar11 * fVar4) - local_78 * fVar5;
      local_6c = -(local_64 * fVar4) - local_74 * fVar5;
    }
    local_50 = fVar12 * fVar13 + fVar15 * local_64;
    fStack_4c = fVar12 * local_78 + fVar15 * local_74;
    fStack_48 = fVar12 * local_70 + fVar15 * local_6c + fVar4;
    fStack_44 = fVar14 * fVar13 + fVar10 * local_64;
    fVar11 = fVar14 * local_78 + fVar10 * local_74;
    fVar13 = fVar14 * local_70 + fVar10 * local_6c + fVar5;
    local_40 = CONCAT44(fVar13,fVar11);
    local_30 = local_50;
    fStack_2c = fStack_4c;
    fStack_28 = fStack_48;
    fStack_24 = fStack_44;
  }
  if ((((*pfVar1 == fVar4) && (pfVar1[1] == fVar5)) && (pfVar1[2] == fVar6)) &&
     ((pfVar1[3] == fVar9 && (cVar3 = FUN_0067e2a0(&local_50), cVar3 == '\0')))) {
    return 0;
  }
  *pfVar1 = fVar4;
  pfVar1[1] = fVar5;
  pfVar1[2] = fVar6;
  pfVar1[3] = fVar9;
  *(float *)(in_ECX + 0xc) = local_50;
  *(float *)(in_ECX + 0x10) = fStack_4c;
  *(float *)(in_ECX + 0x14) = fStack_48;
  *(float *)(in_ECX + 0x18) = fStack_44;
  *(float *)(in_ECX + 0x1c) = fVar11;
  *(float *)(in_ECX + 0x20) = fVar13;
  return 1;
}

