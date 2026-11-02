// rea decompile_all
// name: FUN_004b9d40
// address: 0x4b9d40
// body: available
// range: 0x4b9d40-0x4ba130 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9d40(float *param_1,float *param_2)

{
  uint uVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined4 uVar15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007043bc;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar15 = 0;
  iVar2 = in_ECX + 0x78;
  iVar14 = iVar2;
  FUN_004bdec0(iVar2,0);
  FUN_004be520(iVar2,iVar14,uVar15);
  FUN_004bdec0(iVar2,1);
  local_8 = 2;
  if (*(int *)(in_ECX + 0x34) != 0) {
    *(undefined4 *)(in_ECX + 0x34) = 0;
    (*(code *)**(undefined4 **)(in_ECX + 0x38))(0x84c0,uVar1);
  }
  local_8 = 0xffffffff;
  FUN_004b9410(in_ECX + 0x24,param_1);
  fVar11 = param_1[1];
  fVar10 = *param_2;
  fVar13 = (0.5 - (float)*(int *)(in_ECX + 8)) + param_2[2];
  fVar8 = param_2[3];
  fVar12 = param_2[4];
  fVar9 = (0.5 - (float)*(int *)(in_ECX + 0xc)) + param_2[5];
  fVar3 = *param_1 * fVar10 + fVar11 * param_2[1] + fVar13;
  fVar4 = *param_1 * fVar8 + fVar11 * fVar12 + fVar9;
  fVar5 = param_1[2] * fVar10 + param_1[3] * param_2[1] + fVar13;
  fVar6 = param_1[2] * fVar8 + param_1[3] * fVar12 + fVar9;
  fVar7 = (param_1[3] - fVar11) + *param_1;
  fVar11 = fVar11 - (param_1[2] - *param_1);
  fVar13 = fVar7 * fVar10 + param_2[1] * fVar11 + fVar13;
  fVar9 = fVar7 * fVar8 + fVar12 * fVar11 + fVar9;
  iVar2 = *(int *)(in_ECX + 0x60);
  if (*(char *)(param_1 + 4) == '\0') {
    fVar13 = fVar13 - fVar3;
    fVar9 = fVar9 - fVar4;
    fVar11 = fVar13 * fVar13 + fVar9 * fVar9;
    fVar10 = 0.0;
    if (0.0 < fVar11) {
      fVar11 = ((fVar5 - fVar3) * fVar13 + (fVar6 - fVar4) * fVar9) / fVar11;
      fVar10 = 0.0;
      if ((0.0 <= fVar11) && (fVar10 = 1.0, fVar11 <= 1.0)) {
        fVar10 = fVar11;
      }
    }
    fVar4 = fVar10 * fVar9 + fVar4;
    fVar3 = fVar10 * fVar13 + fVar3;
    fVar12 = fVar4 - fVar6;
    fVar8 = fVar5 - fVar3;
    fVar11 = fVar12;
    fVar10 = fVar8;
    FUN_00411660();
    FUN_00411660();
    if (fVar11 <= fVar10) {
      FUN_004b98a0(extraout_ECX,in_ECX + 0x78,iVar2 + 0x138);
      iVar2 = iVar2 + 0x158;
      fVar8 = fVar12 / fVar8;
      fVar6 = fVar5 - fVar6 * fVar8;
      fVar10 = fVar4;
      fVar11 = fVar3;
    }
    else {
      FUN_004b98a0(extraout_ECX,in_ECX + 0x78,iVar2 + 200);
      iVar2 = iVar2 + 0xe8;
      fVar8 = fVar8 / fVar12;
      fVar6 = fVar6 - fVar5 * fVar8;
      fVar10 = fVar3;
      fVar11 = fVar4;
    }
    local_8 = 3;
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x70))
              (*(undefined4 *)(iVar2 + 8),fVar3,fVar4,fVar8,fVar6 - (fVar11 - fVar10 * fVar8));
    ExceptionList = local_10;
    return;
  }
  FUN_004b98a0(in_ECX + 8,in_ECX + 0x78,iVar2 + 0x58);
  FUN_004b8ce0(fVar3,fVar4,fVar5,fVar6,fVar13,fVar9);
  ExceptionList = local_10;
  return;
}

