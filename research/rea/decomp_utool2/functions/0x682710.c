// rea decompile_all
// name: FUN_00682710
// address: 0x682710
// body: available
// range: 0x682710-0x68294d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00682710(undefined4 *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007209ec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar8 = (int *)*param_1;
  local_1c = piVar8;
  piVar7 = (int *)(**(code **)(*piVar8 + 0x6c))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar9 = (undefined4 *)*piVar7;
  if (puVar9 != (undefined4 *)0x0) {
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_11 = '\0';
  local_24 = 0;
  local_18 = puVar9;
  if (0 < local_20[2]) {
    local_28 = 0;
    piVar7 = local_20;
    do {
      piVar10 = (int *)(*piVar7 + local_28);
      if (*(char *)(*piVar10 + 0x24) != '\0') {
        FUN_00642040(param_1,piVar10,local_24,param_2);
        piVar7 = local_20;
        puVar9 = local_18;
      }
      if ((char)piVar10[6] == '\0') {
        puVar5 = (undefined4 *)*piVar10;
        piVar8 = local_1c;
        if ((puVar9 != puVar5) &&
           (((((float)puVar9[5] != (float)puVar5[5] ||
              (*(char *)(puVar9 + 9) != *(char *)(puVar5 + 9))) ||
             ((float)puVar9[6] != (float)puVar5[6])) ||
            ((((float)puVar9[7] != (float)puVar5[7] ||
              (cVar6 = FUN_006356b0(), puVar9 = local_18, cVar6 == '\0')) ||
             (cVar6 = FUN_006356b0(), piVar8 = local_1c, puVar9 = local_18, cVar6 == '\0')))))) {
          puVar5 = (undefined4 *)*piVar10;
          if (puVar9 != puVar5) {
            if (puVar5 != (undefined4 *)0x0) {
              LOCK();
              puVar5[1] = puVar5[1] + 1;
              UNLOCK();
              puVar9 = local_18;
            }
            local_18 = puVar5;
            if (puVar9 != (undefined4 *)0x0) {
              LOCK();
              piVar8 = puVar9 + 1;
              iVar1 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar1 == 1) {
                (**(code **)*puVar9)(1);
              }
            }
          }
          piVar8 = local_1c;
          if (local_11 == '\0') {
            local_11 = '\x01';
            (**(code **)(*local_1c + 0x34))();
          }
          (**(code **)(*piVar8 + 0x68))(&local_18);
        }
        fVar2 = param_2[1];
        fVar3 = *param_2;
        local_44 = fVar2 * 0.0 + fVar3;
        local_40 = fVar3 * 0.0 + fVar2;
        fVar4 = param_2[4];
        local_3c = fVar3 * (float)piVar10[3] + fVar2 * (float)piVar10[4] + param_2[2];
        fVar2 = param_2[3];
        local_38 = fVar4 * 0.0 + fVar2;
        local_34 = fVar2 * 0.0 + fVar4;
        local_30 = fVar2 * (float)piVar10[3] + fVar4 * (float)piVar10[4] + param_2[5];
        (**(code **)(*piVar8 + 0x70))(piVar10[2],&local_44);
        piVar7 = local_20;
        puVar9 = local_18;
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + 0x1c;
    } while (local_24 < piVar7[2]);
    if (local_11 != '\0') {
      (**(code **)(*piVar8 + 0x38))();
      puVar9 = local_18;
    }
  }
  if (puVar9 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = puVar9 + 1;
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar9)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

