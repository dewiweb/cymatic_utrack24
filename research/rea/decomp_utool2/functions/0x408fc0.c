// rea decompile_all
// name: FUN_00408fc0
// address: 0x408fc0
// body: available
// range: 0x408fc0-0x409406 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408fc0(double *param_1,code *param_2)

{
  double *in_ECX;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined4 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  double local_38 [3];
  undefined4 local_20;
  int iStack_1c;
  double *local_14;
  
  auVar6._0_8_ = in_ECX[2] * 3.141592653589793;
  auVar6._8_8_ = 0;
  local_14 = in_ECX;
  FUN_006f9250();
  local_38[0] = auVar6._0_8_;
  local_38[1] = -local_38[0];
  uVar2 = -*(int *)((int)local_14 + 0xc);
  if ((double)(int)uVar2 + local_14[2] < -*local_14) {
    (*param_2)();
    *param_1 = 0.0;
    param_1 = param_1 + 3;
    uVar2 = uVar2 + 1;
  }
  if ((local_14[2] < 0.9999999999999) || (1.0000000000001 < local_14[2])) {
    iStack_1c = 0;
  }
  else {
    iStack_1c = -1;
  }
  if (0.0 < local_14[4] || local_14[4] == 0.0) {
    uVar7 = uVar2;
    if ((int)uVar2 < iStack_1c) {
      do {
        fVar3 = (float10)(*param_2)();
        dVar5 = (double)fVar3;
        local_38[2] = dVar5;
        if (0.0 <= dVar5) {
          FUN_006f8700();
        }
        else {
          uVar4 = SUB84(dVar5,0);
          uVar2 = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
          FUN_006f8700();
          dVar5 = -(double)CONCAT44(uVar2,uVar4);
        }
        uVar2 = uVar7 + 1;
        *param_1 = ((local_38[uVar7 & 1] * dVar5) / ((double)(int)uVar7 + local_14[2])) /
                   3.141592653589793;
        param_1 = param_1 + 3;
        uVar7 = uVar2;
      } while ((int)uVar2 < iStack_1c);
    }
    _local_20 = (double)(int)uVar2 + local_14[2];
    if (1e-13 < ABS(_local_20)) {
      fVar3 = (float10)(*param_2)();
      dVar5 = (double)fVar3;
      uVar4 = SUB84(dVar5,0);
      local_38[2] = dVar5;
      if (0.0 <= dVar5) {
        FUN_006f8700();
      }
      else {
        uVar7 = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
        FUN_006f8700();
        dVar5 = -(double)CONCAT44(uVar7,uVar4);
      }
      dVar5 = ((local_38[uVar2 & 1] * dVar5) / _local_20) / 3.141592653589793;
    }
    else {
      fVar3 = (float10)(*param_2)();
      dVar5 = (double)fVar3;
      uVar4 = SUB84(dVar5,0);
      local_38[2] = dVar5;
      if (0.0 <= dVar5) {
        FUN_006f8700();
      }
      else {
        uVar7 = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
        FUN_006f8700();
        dVar5 = -(double)CONCAT44(uVar7,uVar4);
      }
    }
    *param_1 = dVar5;
    iVar1 = *(int *)((int)local_14 + 0xc) + -2;
    _local_20 = (double)CONCAT44(iVar1,local_20);
    if ((int)uVar2 < iVar1) {
      do {
        param_1 = param_1 + 3;
        uVar2 = uVar2 + 1;
        fVar3 = (float10)(*param_2)();
        dVar5 = (double)fVar3;
        local_38[2] = dVar5;
        if (0.0 <= dVar5) {
          FUN_006f8700();
        }
        else {
          uVar4 = SUB84(dVar5,0);
          uVar7 = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
          FUN_006f8700();
          dVar5 = -(double)CONCAT44(uVar7,uVar4);
        }
        *param_1 = ((local_38[uVar2 & 1] * dVar5) / ((double)(int)uVar2 + local_14[2])) /
                   3.141592653589793;
      } while ((int)uVar2 < iStack_1c);
    }
    _local_20 = (double)(int)(uVar2 + 1) + local_14[2];
    if (*local_14 <= _local_20 && _local_20 != *local_14) goto LAB_00409389;
    fVar3 = (float10)(*param_2)();
    local_38[2] = (double)fVar3;
    if (0.0 <= local_38[2]) {
      FUN_006f8700();
    }
    else {
      uVar4 = SUB84(local_38[2],0);
      uVar7 = (uint)((ulonglong)local_38[2] >> 0x20) ^ 0x80000000;
      FUN_006f8700();
      local_38[2] = -(double)CONCAT44(uVar7,uVar4);
    }
    local_38[2] = local_38[uVar2 + 1 & 1] * local_38[2];
  }
  else {
    uVar7 = uVar2;
    if ((int)uVar2 < iStack_1c) {
      do {
        fVar3 = (float10)(*param_2)();
        uVar2 = uVar7 + 1;
        local_38[2] = (double)(fVar3 * (float10)local_38[uVar7 & 1]);
        *param_1 = (local_38[2] / ((double)(int)uVar7 + local_14[2])) / 3.141592653589793;
        param_1 = param_1 + 3;
        uVar7 = uVar2;
      } while ((int)uVar2 < iStack_1c);
    }
    _local_20 = (double)(int)uVar2 + local_14[2];
    if (1e-13 < ABS(_local_20)) {
      fVar3 = (float10)(*param_2)();
      local_38[2] = (double)fVar3;
      dVar5 = (((double)fVar3 * local_38[uVar2 & 1]) / _local_20) / 3.141592653589793;
    }
    else {
      fVar3 = (float10)(*param_2)();
      dVar5 = (double)fVar3;
      local_38[2] = dVar5;
    }
    *param_1 = dVar5;
    iVar1 = *(int *)((int)local_14 + 0xc) + -2;
    iStack_1c = iVar1;
    if ((int)uVar2 < iVar1) {
      do {
        param_1 = param_1 + 3;
        uVar2 = uVar2 + 1;
        fVar3 = (float10)(*param_2)();
        local_38[2] = (double)(fVar3 * (float10)local_38[uVar2 & 1]);
        *param_1 = (local_38[2] / ((double)(int)uVar2 + local_14[2])) / 3.141592653589793;
      } while ((int)uVar2 < iStack_1c);
    }
    _local_20 = (double)(int)(uVar2 + 1) + local_14[2];
    if (*local_14 <= _local_20 && _local_20 != *local_14) {
LAB_00409389:
      param_1[3] = 0.0;
      return;
    }
    fVar3 = (float10)(*param_2)();
    local_38[2] = (double)fVar3;
    local_38[2] = (double)fVar3 * local_38[uVar2 + 1 & 1];
  }
  param_1[3] = (local_38[2] / _local_20) / 3.141592653589793;
  return;
}

