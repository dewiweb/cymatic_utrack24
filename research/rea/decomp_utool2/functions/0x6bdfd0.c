// rea decompile_all
// name: FUN_006bdfd0
// address: 0x6bdfd0
// body: available
// range: 0x6bdfd0-0x6be1de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_006bdfd0(float *param_1)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  float fVar6;
  float10 fVar7;
  float local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724e12;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *in_ECX;
  if (iVar2 != 0) {
    piVar5 = *(int **)(iVar2 + 0xc);
    piVar4 = piVar5 + *(int *)(iVar2 + 0x14) * 6;
    for (; (piVar5 != piVar4 && (*piVar5 != DAT_00c8a994)); piVar5 = piVar5 + 6) {
    }
  }
  FUN_00635650(&local_18);
  local_8 = 0;
  iVar2 = *in_ECX;
  if (iVar2 != 0) {
    piVar5 = *(int **)(iVar2 + 0xc);
    piVar4 = piVar5 + *(int *)(iVar2 + 0x14) * 6;
    for (; (piVar5 != piVar4 && (*piVar5 != DAT_00c8a9d0)); piVar5 = piVar5 + 6) {
    }
  }
  FUN_00635650(&local_14);
  iVar2 = FUN_00448730(local_14,"square",uVar1);
  if (iVar2 == 0) {
    local_1c = 1.4013e-45;
  }
  else {
    iVar2 = FUN_00448730(local_14,"round",uVar1);
    local_1c = 0.0;
    if (iVar2 == 0) {
      local_1c = 2.8026e-45;
    }
  }
  iVar2 = FUN_00448730(local_18,"curved",uVar1);
  if (iVar2 == 0) {
    fVar6 = 1.4013e-45;
  }
  else {
    iVar2 = FUN_00448730(local_18,"bevel");
    fVar6 = 0.0;
    if (iVar2 == 0) {
      fVar6 = 2.8026e-45;
    }
  }
  iVar2 = *in_ECX;
  if (iVar2 != 0) {
    piVar5 = *(int **)(iVar2 + 0xc);
    piVar4 = piVar5 + *(int *)(iVar2 + 0x14) * 6;
    for (; piVar5 != piVar4; piVar5 = piVar5 + 6) {
      if (*piVar5 == DAT_00c8aa5c) {
        ppuVar3 = (undefined **)(piVar5 + 2);
        if (ppuVar3 != (undefined **)0x0) goto LAB_006be169;
        break;
      }
    }
  }
  ppuVar3 = &PTR_PTR_00c7ed58;
LAB_006be169:
  fVar7 = (float10)(**(code **)(*(int *)*ppuVar3 + 0xc))(ppuVar3 + 2);
  piVar4 = (int *)(local_14 + -8);
  param_1[1] = fVar6;
  param_1[2] = local_1c;
  *param_1 = (float)fVar7;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

