// rea decompile_all
// name: FUN_0044d150
// address: 0x44d150
// body: available
// range: 0x44d150-0x44d3e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044d150(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,float param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9
                 ,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  int *in_ECX;
  int iVar9;
  char *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *piVar17;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  int local_2c [2];
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff9a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar4 = FUN_0044d3f0(param_2[2],param_7,param_8,param_9,param_10,param_11);
  if ((cVar4 != '\0') && (param_5 < (uint)in_ECX[8])) {
    iVar5 = in_ECX[9];
    if (param_2[2] < in_ECX[9]) {
      iVar5 = param_2[2];
    }
    uVar6 = FUN_0040dde0(local_3c,iVar5);
    piVar17 = local_2c;
    FUN_0067faa0(local_4c);
    FUN_0044db90(piVar17,uVar6);
    if ((0 < local_24) && (0 < local_20)) {
      iVar5 = param_2[1];
      iVar2 = param_2[3];
      fVar15 = (float)(iVar2 + iVar5);
      local_1c = (void *)0x0;
      local_18 = 0;
      local_14 = 0;
      pcVar10 = (char *)(*in_ECX + ((in_ECX[9] * param_5 - *param_2) + local_2c[0]) * 2);
      fVar11 = (fVar15 + (float)iVar5) * 0.5;
      fVar12 = (fVar15 - (float)iVar5) * param_6 * 0.00390625;
      local_8 = 0;
      FUN_0040ede0(local_24 / 2 + local_24 + 8 & 0xfffffff8);
      fVar15 = (float)local_2c[0];
      iVar9 = local_14;
      iVar3 = local_14;
      while (local_24 = local_24 + -1, local_14 = iVar3, -1 < local_24) {
        if (*pcVar10 < pcVar10[1]) {
          fVar13 = (fVar11 - (float)(int)pcVar10[1] * fVar12) - 0.3;
          fVar16 = (float)iVar5;
          if ((float)iVar5 <= fVar13) {
            fVar16 = fVar13;
          }
          fVar13 = (float)(iVar2 + iVar5);
          fVar14 = (fVar11 - (float)(int)*pcVar10 * fVar12) + 0.3;
          if (fVar14 <= fVar13) {
            fVar13 = fVar14;
          }
          if (0.0 < fVar13 - fVar16) {
            iVar1 = iVar9 + 1;
            local_14 = iVar9;
            if (local_18 < iVar1) {
              iVar7 = iVar1;
              if (iVar1 < 0) {
                iVar7 = iVar9 + 2;
              }
              local_14 = iVar3;
              FUN_0040ede0((iVar7 >> 1) + 8 + iVar1 & 0xfffffff8);
            }
            iVar9 = local_14 + 1;
            pfVar8 = (float *)(local_14 * 0x10 + (int)local_1c);
            local_14 = iVar9;
            if (pfVar8 != (float *)0x0) {
              *pfVar8 = fVar15;
              pfVar8[1] = fVar16;
              pfVar8[2] = 1.0;
              pfVar8[3] = fVar13 - fVar16;
            }
          }
        }
        fVar15 = fVar15 + 1.0;
        pcVar10 = pcVar10 + 2;
        iVar3 = local_14;
      }
      (**(code **)(*(int *)*param_1 + 0x58))(&local_1c);
      FID_conflict__free(local_1c);
    }
  }
  ExceptionList = local_10;
  return;
}

