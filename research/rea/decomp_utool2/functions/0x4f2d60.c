// rea decompile_all
// name: FUN_004f2d60
// address: 0x4f2d60
// body: available
// range: 0x4f2d60-0x4f2fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2d60(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *in_ECX;
  float fVar8;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705ec6;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar4 = in_ECX + 5;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  local_18 = in_ECX;
  local_14 = piVar4;
  operator_new(0x28);
  iVar3 = FUN_00468990(uVar2);
  *piVar4 = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  in_ECX[8] = 0;
  local_8 = 1;
  if (*param_1 == 0) {
    fVar8 = (float)*(int *)(in_ECX[1] + 0x1c) * (float)param_1[6];
    in_ECX[7] = fVar8;
    operator_new(0x28);
    iVar3 = FUN_00468a40(0);
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    puVar7 = (undefined4 *)*piVar4;
    *piVar4 = iVar3;
    if (puVar7 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = puVar7 + 1;
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar7)(1);
      }
    }
    FUN_006831f0(param_1 + 3);
    in_ECX[6] = fVar8;
  }
  else {
    if (*param_1 != 1) goto LAB_004f2fc7;
    local_14 = param_1 + 9;
    in_ECX[7] = (float)*(int *)(in_ECX[1] + 0x1c) * (float)param_1[6];
    piVar4 = (int *)FUN_0040f020(&local_18,0);
    piVar5 = (int *)FUN_0040f020(&param_2,0);
    iVar3 = 0;
    if (*piVar4 != 0) {
      iVar3 = *(int *)(*piVar4 + 0xc);
    }
    iVar6 = 0;
    if (*piVar5 != 0) {
      iVar6 = *(int *)(*piVar5 + 0x10);
    }
    in_ECX[6] = ((float)iVar3 * (float)in_ECX[7]) / (float)iVar6;
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = param_2 + 1;
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*param_2)(1);
      }
    }
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_18 + 1;
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*local_18)(1);
      }
    }
    iVar3 = param_1[0xb];
    do {
      iVar3 = iVar3 + -1;
      piVar4 = (int *)FUN_0040f020(&local_18,iVar3);
      iVar6 = 0;
      if (*piVar4 != 0) {
        iVar6 = *(int *)(*piVar4 + 0xc);
      }
      param_2 = (undefined4 *)CONCAT13((float)iVar6 < (float)in_ECX[6],param_2._0_3_);
      if (local_18 != (undefined4 *)0x0) {
        LOCK();
        piVar4 = local_18 + 1;
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*local_18)(1);
        }
      }
    } while ((param_2._3_1_ == '\0') && (iVar3 != 0));
    puVar7 = (undefined4 *)FUN_0040f020(&param_2,iVar3);
    uVar1 = in_ECX[8];
    in_ECX[8] = *puVar7;
    *puVar7 = uVar1;
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = param_2 + 1;
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*param_2)(1);
      }
    }
  }
  FUN_004f2c00(&local_2c);
  in_ECX[2] = local_24 * 0.5 + local_2c;
  in_ECX[3] = local_20 * 0.5 + local_28;
LAB_004f2fc7:
  in_ECX[4] = 0;
  ExceptionList = local_10;
  return;
}

