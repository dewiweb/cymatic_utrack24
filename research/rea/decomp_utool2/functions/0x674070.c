// rea decompile_all
// name: FUN_00674070
// address: 0x674070
// body: available
// range: 0x674070-0x6741e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674070(undefined4 param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 **ppuVar9;
  int *piVar10;
  void *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00720539;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_50 = (void *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 1;
  local_8 = 0;
  if (in_ECX[8] < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(in_ECX[6] + -4 + in_ECX[8] * 4);
  }
  piVar5 = (int *)(iVar4 + 0x38);
  if (*(int *)(*(int *)(iVar4 + 0x38) + 8) == 0) {
    ppuVar9 = &local_14;
    piVar10 = piVar5;
    FUN_004681b0(ppuVar9,piVar5,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    puVar3 = (undefined4 *)FUN_004682f0(ppuVar9,piVar10);
    uVar2 = *(undefined4 *)(*piVar5 + 8);
    *(undefined4 *)(*piVar5 + 8) = *puVar3;
    *puVar3 = uVar2;
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar10 = local_14 + 1;
      iVar4 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*local_14)(1);
      }
    }
  }
  (**(code **)(**(int **)(*piVar5 + 8) + 0x1c))(param_1,&local_50);
  fVar1 = *(float *)(*piVar5 + 0x14);
  fVar8 = *(float *)(*piVar5 + 0x18) * fVar1;
  fVar6 = *param_2 * 0.0;
  fVar7 = param_2[1] * 0.0;
  local_2c = param_2[1] * fVar1 + fVar6;
  local_30 = *param_2 * fVar8 + fVar7;
  local_28 = fVar6 + fVar7 + param_2[2];
  fVar7 = param_2[4] * 0.0;
  fVar6 = param_2[3] * 0.0;
  local_20 = param_2[4] * fVar1 + fVar6;
  local_24 = param_2[3] * fVar8 + fVar7;
  local_1c = fVar6 + fVar7 + param_2[5];
  (**(code **)(*in_ECX + 0x5c))(&local_50,&local_30);
  FID_conflict__free(local_50);
  ExceptionList = local_10;
  return;
}

