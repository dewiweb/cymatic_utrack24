// rea decompile_all
// name: FUN_0068fd40
// address: 0x68fd40
// body: available
// range: 0x68fd40-0x690276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068fd40(float *param_1,float *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  int *in_ECX;
  int iVar8;
  char extraout_DL;
  float *pfVar9;
  float fVar10;
  float *pfStack_ac;
  undefined1 *puStack_a8;
  uint uStack_a4;
  float local_94 [4];
  undefined1 local_84 [16];
  float local_74;
  int local_70;
  int local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  int *local_50;
  float local_4c;
  int *local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  int *local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  float *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007218a3;
  local_10 = ExceptionList;
  uStack_a4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_ECX[1] == 0) {
    return;
  }
  puStack_a8 = (undefined1 *)0x68fd7c;
  ExceptionList = &local_10;
  local_14 = (float *)FUN_006902e0();
  pfVar9 = (float *)in_ECX[9];
  if (((int)pfVar9 < 0) || ((*(byte *)(in_ECX + 0xc) & 0x20) != 0)) {
    pfVar9 = (float *)((int)param_2 - (int)local_14);
  }
  local_1c = param_1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    puStack_a8 = (undefined1 *)0x68fda8;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puStack_a8 = (undefined1 *)0x0;
  local_8 = 0;
  pfStack_ac = local_14;
  FUN_006773f0();
  pfVar4 = local_14;
  if ((*(byte *)(in_ECX + 0xc) & 0x10) != 0) {
    pfVar9 = (float *)((int)pfVar9 + (int)local_14);
  }
  puStack_a8 = (undefined1 *)in_ECX[7];
  pfStack_ac = pfVar9;
  FUN_00472d90(0);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    puStack_a8 = (undefined1 *)0x68fdfb;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  puStack_a8 = local_84;
  pfStack_ac = (float *)0x68fe08;
  cVar5 = (**(code **)(*(int *)*param_1 + 0x14))();
  if (cVar5 != '\0') {
    if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
      FUN_006e8e70(&pfStack_ac,0x1000503,0);
      FUN_00684a80();
    }
    iVar8 = in_ECX[9];
    if (iVar8 < 0) {
      iVar8 = (int)param_2 - (int)pfVar4;
    }
    pfStack_ac = (float *)in_ECX[7];
    (**(code **)(*in_ECX + 0x20))(param_1,iVar8);
  }
  local_8 = 1;
  if (*(char *)(param_1 + 2) == '\0') {
    pfStack_ac = (float *)0x68fe5f;
    (**(code **)(*(int *)*param_1 + 0x38))();
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  pfVar9 = (float *)in_ECX[1];
  local_18 = (int *)((float)in_ECX[7] * 0.5);
  local_8 = 2;
  local_14 = (float *)pfVar9[0x2a];
  if ((int)local_14 < 0) {
    pfStack_ac = (float *)0x68fe96;
    iVar8 = FUN_006e9580();
    pfStack_ac = pfVar9;
    local_14 = (float *)(**(code **)(*(int *)(iVar8 + 0x14) + 0xc))();
  }
  pfVar9 = local_14;
  local_8 = 0xffffffff;
  local_20 = (undefined4 *)((*(char *)(in_ECX[1] + 0xae) != '\0') - 1);
  for (iVar8 = in_ECX[2]; iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
    local_20 = (undefined4 *)((int)local_20 + 1);
  }
  if (((int)local_20 < 0) || (*(char *)(in_ECX[1] + 0xb0) == '\0')) goto LAB_0069013a;
  fVar10 = ((float)(int)local_20 + 0.5) * (float)(int)local_14;
  if (in_ECX[2] == 0) {
LAB_0068ff5e:
    if (in_ECX[2] == 0) {
      pfStack_ac = (float *)0x68ff6b;
      cVar5 = FUN_00690280();
      if (cVar5 != '\0') goto LAB_0068ff6f;
    }
  }
  else {
    pfStack_ac = (float *)0x68ff17;
    cVar5 = FUN_00690280();
    if (cVar5 == '\0') goto LAB_0068ff5e;
    pfStack_ac = (float *)0x68ff22;
    cVar5 = FUN_006df610();
    local_38 = local_18;
    if (cVar5 == '\0') {
      local_38 = (int *)(float)in_ECX[7];
    }
    pfStack_ac = &local_44;
    local_40 = 0;
    local_44 = fVar10;
    local_3c = fVar10;
    (**(code **)(*in_ECX + 0x2c))(param_1);
LAB_0068ff6f:
    local_50 = local_18;
    local_48 = local_18;
    pfStack_ac = &local_54;
    local_4c = (float)((int)pfVar9 / 2) + fVar10;
    local_54 = fVar10;
    (**(code **)(*in_ECX + 0x28))(param_1);
  }
  piVar1 = (int *)in_ECX[2];
  puVar2 = local_20;
  while ((piVar1 != (int *)0x0 && (local_1c = (undefined4 *)((int)puVar2 + -1), -1 < (int)local_1c))
        ) {
    local_18 = piVar1 + 2;
    local_24 = (undefined4 *)*local_18;
    fVar10 = fVar10 - (float)(int)local_14;
    if (local_24 == (undefined4 *)0x0) {
LAB_00690035:
      iVar8 = *local_18;
      if (iVar8 != 0) {
        pfStack_ac = *(float **)(iVar8 + 0x14);
        if ((int)pfStack_ac < 1) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = *(int **)(*(int *)(iVar8 + 0xc) + -4 + (int)pfStack_ac * 4);
        }
        if (piVar7 != piVar1) {
          local_28 = (float)in_ECX[7];
          local_30 = 0;
          local_34 = fVar10;
          local_2c = fVar10;
          if (*(code **)(*piVar1 + 0x2c) == FUN_006dfab0) {
            FUN_006e8e70(&pfStack_ac,0x1000501,0);
            FUN_00684c50();
            pfStack_ac = &local_34;
            (**(code **)(*(int *)*param_1 + 100))();
          }
          else {
            pfStack_ac = &local_34;
            (**(code **)(*piVar1 + 0x2c))(param_1);
          }
        }
      }
    }
    else if ((*(byte *)((int)local_24 + 0x30) & 8) == 0) {
      if (*(int *)((int)local_24 + 4) != 0) {
        pfStack_ac = (float *)0x69001c;
        iVar8 = FUN_006e9580();
        pfStack_ac = *(float **)((int)local_24 + 4);
        bVar6 = (**(code **)(*(int *)(iVar8 + 0x14) + 8))();
        goto joined_r0x0069002e;
      }
    }
    else {
      bVar6 = *(byte *)((int)local_24 + 0x30) >> 2 & 1;
joined_r0x0069002e:
      if (bVar6 != 0) goto LAB_00690035;
    }
    piVar1 = (int *)*local_18;
    puVar2 = local_1c;
  }
  pfStack_ac = (float *)0x6900c7;
  cVar5 = (**(code **)(*in_ECX + 4))();
  if (cVar5 != '\0') {
    iVar8 = *(int *)(*(int *)(in_ECX[1] + 0x80) + 0x78);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar8 + 8);
    }
    param_1 = (float *)CONCAT31((int3)((uint)fVar10 >> 8),in_ECX == *(int **)(iVar8 + 0x8c));
    pfStack_ac = param_1;
    local_58 = (float)in_ECX[7];
    local_60 = 0;
    local_64 = (float)((int)local_20 * (int)local_14);
    local_5c = (float)(int)local_14;
    (**(code **)(*in_ECX + 0x24))(puVar3,&local_64,DAT_00c7ef94);
  }
LAB_0069013a:
  if ((in_ECX[0xd] & 3U) == 0) {
    if (in_ECX[1] == 0) {
      ExceptionList = local_10;
      return;
    }
    if (*(char *)(in_ECX[1] + 0xac) == '\0') {
      ExceptionList = local_10;
      return;
    }
  }
  else if ((in_ECX[0xd] & 3U) != 2) {
    ExceptionList = local_10;
    return;
  }
  pfStack_ac = &local_74;
  FUN_0067faa0();
  param_1 = (float *)0x0;
  iVar8 = local_70;
  if (0 < in_ECX[5]) {
    do {
      local_1c = *(undefined4 **)(in_ECX[3] + (int)param_1 * 4);
      pfVar9 = (float *)(*(int *)((int)local_1c + 0x18) - in_ECX[6]);
      if (local_68 + iVar8 <= (int)pfVar9) {
        ExceptionList = local_10;
        return;
      }
      if (iVar8 <= *(int *)((int)local_1c + 0x20) + (int)pfVar9) {
        local_24 = puVar3;
        if (*(char *)(puVar3 + 2) != '\0') {
          *(undefined1 *)(puVar3 + 2) = 0;
          pfStack_ac = (float *)0x6901d1;
          (**(code **)(*(int *)*puVar3 + 0x34))();
        }
        *(undefined1 *)(puVar3 + 2) = 1;
        local_8 = 3;
        pfStack_ac = pfVar9;
        FUN_006773f0(0);
        pfStack_ac = *(float **)((int)local_1c + 0x20);
        FUN_00472d90(0,param_2);
        if (*(char *)(puVar3 + 2) != extraout_DL) {
          *(char *)(puVar3 + 2) = extraout_DL;
          pfStack_ac = (float *)0x690210;
          (**(code **)(*(int *)*puVar3 + 0x34))();
        }
        pfStack_ac = local_94;
        cVar5 = (**(code **)(*(int *)*puVar3 + 0x14))();
        if (cVar5 != '\0') {
          pfStack_ac = param_2;
          FUN_0068fd40(puVar3);
        }
        local_8 = 4;
        if (*(char *)(puVar3 + 2) == '\0') {
          pfStack_ac = (float *)0x690249;
          (**(code **)(*(int *)*puVar3 + 0x38))();
        }
        else {
          *(undefined1 *)(puVar3 + 2) = 0;
        }
        local_8 = 0xffffffff;
        iVar8 = local_70;
      }
      param_1 = (float *)((int)param_1 + 1);
    } while ((int)param_1 < in_ECX[5]);
  }
  ExceptionList = local_10;
  return;
}

