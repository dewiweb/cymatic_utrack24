// rea decompile_all
// name: FUN_006781a0
// address: 0x6781a0
// body: available
// range: 0x6781a0-0x67874c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006781a0(char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int *in_EDX;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 in_XMM3_Da;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_24;
  int local_20;
  
  iVar2 = *in_EDX;
  uVar8 = *(undefined4 *)(iVar2 + 0x10);
  uVar10 = *(undefined4 *)(iVar2 + 0x14);
  uVar12 = *(undefined4 *)(iVar2 + 0x18);
  uVar13 = *(undefined4 *)(iVar2 + 0x1c);
  if (param_1 == '\0') {
    FUN_00682e50();
    FUN_00678b90(uVar8,uVar10,in_XMM3_Da);
  }
  else {
    FUN_00682e50();
  }
  local_20 = 1;
  if (1 < in_EDX[2]) {
    local_24 = 0x30;
    do {
      puVar4 = (undefined4 *)(*in_EDX + local_24);
      FUN_00678da0(uVar8,uVar10,uVar12,uVar13,puVar4[4],puVar4[5],puVar4[6],puVar4[7],*puVar4,
                   puVar4[1]);
      local_20 = local_20 + 1;
      uVar8 = puVar4[4];
      local_24 = local_24 + 0x30;
      uVar10 = puVar4[5];
      uVar12 = puVar4[6];
      uVar13 = puVar4[7];
    } while (local_20 < in_EDX[2]);
  }
  puVar4 = (undefined4 *)*in_EDX;
  iVar2 = in_EDX[2];
  if (param_1 == '\0') {
    FUN_00682d90();
    FUN_00678b90(puVar4[iVar2 * 0xc + -4],puVar4[iVar2 * 0xc + -3],in_XMM3_Da);
  }
  else {
    FUN_00678da0(uVar8,uVar10,uVar12,uVar13,puVar4[4],puVar4[5],puVar4[6],puVar4[7],*puVar4,
                 puVar4[1]);
    iVar3 = in_ECX[2];
    if ((iVar3 != 0) && (*(float *)(*in_ECX + -4 + iVar3 * 4) != 100005.0)) {
      if (in_ECX[1] < iVar3 + 1) {
        FUN_00409cf0((iVar3 + 1) / 2 + iVar3 + 9 & 0xfffffff8);
      }
      iVar3 = in_ECX[2];
      in_ECX[2] = iVar3 + 1;
      *(undefined4 *)(*in_ECX + iVar3 * 4) = 0x47c35280;
    }
    FUN_00682e50();
  }
  fVar9 = (float)puVar4[iVar2 * 0xc + -2];
  fVar11 = (float)puVar4[iVar2 * 0xc + -1];
  uVar8 = puVar4[iVar2 * 0xc + -4];
  uVar10 = puVar4[iVar2 * 0xc + -3];
  local_24 = in_EDX[2] + -2;
  if (-1 < local_24) {
    iVar3 = local_24 * 0x30;
    do {
      iVar5 = *in_EDX + iVar3;
      FUN_00678da0(uVar8,uVar10,fVar9,fVar11,*(undefined4 *)(iVar5 + 0x20),
                   *(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x28),
                   *(undefined4 *)(iVar5 + 0x2c),*(undefined4 *)(iVar5 + 8),
                   *(undefined4 *)(iVar5 + 0xc));
      local_24 = local_24 + -1;
      uVar8 = *(undefined4 *)(iVar5 + 0x20);
      iVar3 = iVar3 + -0x30;
      uVar10 = *(undefined4 *)(iVar5 + 0x24);
      fVar9 = *(float *)(iVar5 + 0x28);
      fVar11 = *(float *)(iVar5 + 0x2c);
    } while (-1 < local_24);
  }
  if (param_1 == '\0') {
    if (in_ECX[2] == 0) {
      in_ECX[4] = 0;
      in_ECX[3] = 0;
      in_ECX[6] = 0;
      in_ECX[5] = 0;
      iVar2 = in_ECX[2] + 3;
      if ((in_ECX[1] < iVar2) &&
         (uVar6 = in_ECX[2] + 0xb + iVar2 / 2 & 0xfffffff8, in_ECX[1] != uVar6)) {
        if ((int)uVar6 < 1) {
          FID_conflict__free((void *)*in_ECX);
          *in_ECX = 0;
        }
        else if (*in_ECX == 0) {
          iVar2 = FUN_004c554b();
          *in_ECX = iVar2;
        }
        else {
          iVar2 = FUN_004c553b(*in_ECX,uVar6 * 4);
          *in_ECX = iVar2;
        }
        in_ECX[1] = uVar6;
      }
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      *(undefined4 *)(*in_ECX + iVar2 * 4) = 0x47c35100;
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      *(undefined4 *)(*in_ECX + iVar2 * 4) = 0;
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      *(undefined4 *)(*in_ECX + iVar2 * 4) = 0;
    }
    iVar2 = in_ECX[2] + 3;
    if ((in_ECX[1] < iVar2) &&
       (uVar6 = in_ECX[2] + 0xb + iVar2 / 2 & 0xfffffff8, in_ECX[1] != uVar6)) {
      if ((int)uVar6 < 1) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
      }
      else if (*in_ECX == 0) {
        iVar2 = FUN_004c554b();
        *in_ECX = iVar2;
      }
      else {
        iVar2 = FUN_004c553b(*in_ECX,uVar6 * 4);
        *in_ECX = iVar2;
      }
      in_ECX[1] = uVar6;
    }
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1;
    *(undefined4 *)(*in_ECX + iVar2 * 4) = 0x47c35080;
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1;
    *(float *)(*in_ECX + iVar2 * 4) = fVar9;
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1;
    *(float *)(*in_ECX + iVar2 * 4) = fVar11;
    fVar7 = fVar9;
    if ((float)in_ECX[3] <= fVar9) {
      fVar7 = (float)in_ECX[3];
    }
    if (fVar9 <= (float)in_ECX[4]) {
      fVar9 = (float)in_ECX[4];
    }
    in_ECX[3] = (int)fVar7;
    fVar7 = fVar11;
    if ((float)in_ECX[5] <= fVar11) {
      fVar7 = (float)in_ECX[5];
    }
    if (fVar11 <= (float)in_ECX[6]) {
      fVar11 = (float)in_ECX[6];
    }
    in_ECX[4] = (int)fVar9;
    in_ECX[5] = (int)fVar7;
    in_ECX[6] = (int)fVar11;
  }
  else {
    puVar1 = puVar4 + iVar2 * 0xc + -4;
    FUN_00678da0(uVar8,uVar10,fVar9,fVar11,*puVar1,puVar1[1],puVar1[2],puVar1[3],
                 puVar4[iVar2 * 0xc + -10],puVar4[iVar2 * 0xc + -9]);
  }
  iVar2 = in_ECX[2];
  if ((iVar2 != 0) && (iVar3 = *in_ECX, *(float *)(iVar3 + -4 + iVar2 * 4) != 100005.0)) {
    if ((in_ECX[1] < iVar2 + 1) &&
       (uVar6 = iVar2 + 9 + (iVar2 + 1) / 2 & 0xfffffff8, in_ECX[1] != uVar6)) {
      if ((int)uVar6 < 1) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
      }
      else if (iVar3 == 0) {
        iVar2 = FUN_004c554b();
        *in_ECX = iVar2;
      }
      else {
        iVar2 = FUN_004c553b(iVar3,uVar6 * 4);
        *in_ECX = iVar2;
      }
      in_ECX[1] = uVar6;
    }
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1;
    *(undefined4 *)(*in_ECX + iVar2 * 4) = 0x47c35280;
  }
  return;
}

