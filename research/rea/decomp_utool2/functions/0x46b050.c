// rea decompile_all
// name: FUN_0046b050
// address: 0x46b050
// body: available
// range: 0x46b050-0x46b3ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b050(int param_1,int *param_2,float param_3,float param_4,undefined4 param_5,
                 undefined4 *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  int *local_2c;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070157f;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_4 < -1e+10) || (1e+10 < param_4)) {
    param_4 = 0.0;
  }
  local_14 = uVar4;
  if (param_4 != *(float *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(float *)(param_1 + 0x14) = param_4;
    if (param_2[2] <= *(int *)(param_1 + 0x10)) {
      operator_new(0x28);
      local_2c = (int *)FUN_00641dd0();
      iVar7 = param_2[2] + 1;
      if (param_2[1] < iVar7) {
        FUN_00409cf0(iVar7 / 2 + param_2[2] + 9 & 0xfffffff8);
      }
      iVar7 = param_2[2];
      param_2[2] = iVar7 + 1;
      iVar9 = *param_2;
      local_2c[5] = (int)param_3;
      local_2c[6] = (int)param_4;
      *(int **)(iVar9 + iVar7 * 4) = local_2c;
    }
  }
  piVar5 = *(int **)(*param_2 + *(int *)(param_1 + 0x10) * 4);
  local_2c = piVar5;
  (**(code **)(*(int *)*param_6 + 0x20))((int *)*param_6,&local_28,uVar4);
  fVar11 = (float)local_26;
  FUN_00411660();
  fVar11 = (fVar11 / (float)local_28) * (float)param_6[1];
  if (fVar11 <= (float)piVar5[7]) {
    fVar11 = (float)piVar5[7];
  }
  piVar5[7] = (int)fVar11;
  fVar11 = (float)local_24;
  FUN_00411660();
  fVar11 = (fVar11 / (float)local_28) * (float)param_6[1];
  if (fVar11 <= (float)piVar5[8]) {
    fVar11 = (float)piVar5[8];
  }
  piVar5[8] = (int)fVar11;
  operator_new(0x1c);
  local_8 = 0;
  iVar7 = *(int *)(param_7 + 0x10);
  iVar8 = *(int *)(param_7 + 8) + iVar7;
  iVar9 = iVar7;
  if (iVar7 < iVar8) {
    iVar9 = iVar8;
  }
  piVar5 = (int *)FUN_00641e50(iVar7,iVar9,param_6[2]);
  local_8 = 0xffffffff;
  iVar7 = local_2c[2] + 1;
  if (local_2c[1] < iVar7) {
    FUN_00409cf0(iVar7 / 2 + local_2c[2] + 9 & 0xfffffff8);
  }
  iVar7 = local_2c[2];
  local_2c[2] = iVar7 + 1;
  *(int **)(*local_2c + iVar7 * 4) = piVar5;
  (**(code **)(*(int *)*param_6 + 0x20))((int *)*param_6,&local_28);
  FUN_00411660();
  FUN_00411660();
  piVar6 = (int *)FUN_0046b480(&local_2c,param_6);
  iVar7 = *piVar5;
  *piVar5 = *piVar6;
  *piVar6 = iVar7;
  if (local_2c != (int *)0x0) {
    LOCK();
    piVar6 = local_2c + 1;
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_2c)(1);
    }
  }
  piVar6 = (int *)FUN_0046b3f0();
  local_2c = (int *)0x0;
  piVar5[1] = *piVar6;
  iVar7 = *(int *)(*param_2 + *(int *)(param_1 + 0x10) * 4);
  fVar11 = param_3 - *(float *)(iVar7 + 0x14);
  fVar12 = *(float *)(*piVar5 + 0x1c) * *(float *)(*piVar5 + 0x14);
  if (param_6[2] != 0) {
    fVar1 = *(float *)(iVar7 + 0x18);
    param_3 = fVar11;
    do {
      fVar2 = *(float *)(param_6[4] + (int)local_2c * 4);
      if ((*(byte *)(param_6 + 7) & 1) != 0) {
        fVar11 = fVar11 - (fVar2 + fVar12);
        param_3 = fVar11;
      }
      iVar7 = piVar5[4];
      iVar9 = iVar7 + 1;
      uVar3 = *(ushort *)(param_6[3] + (int)local_2c * 2);
      if (piVar5[3] < iVar9) {
        if (iVar9 < 0) {
          iVar9 = iVar7 + 2;
        }
        uVar4 = iVar7 + 9 + (iVar9 >> 1) & 0xfffffff8;
        if (piVar5[3] != uVar4) {
          if ((int)uVar4 < 1) {
            FID_conflict__free((void *)piVar5[2]);
            piVar5[2] = 0;
          }
          else if (piVar5[2] == 0) {
            iVar7 = FUN_004c554b();
            piVar5[2] = iVar7;
          }
          else {
            iVar7 = FUN_004c553b(piVar5[2],uVar4 << 4);
            piVar5[2] = iVar7;
          }
          piVar5[3] = uVar4;
          fVar11 = param_3;
        }
      }
      iVar7 = piVar5[4];
      piVar5[4] = iVar7 + 1;
      puVar10 = (uint *)(iVar7 * 0x10 + piVar5[2]);
      if (puVar10 != (uint *)0x0) {
        *puVar10 = (uint)uVar3;
        puVar10[1] = (uint)fVar11;
        puVar10[2] = (uint)(param_4 - fVar1);
        puVar10[3] = (uint)fVar2;
      }
      if ((*(byte *)(param_6 + 7) & 1) == 0) {
        fVar11 = fVar11 + fVar2 + fVar12;
        param_3 = fVar11;
      }
      local_2c = (int *)((int)local_2c + 1);
    } while (local_2c < (int *)param_6[2]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

