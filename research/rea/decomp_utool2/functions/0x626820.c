// rea decompile_all
// name: FUN_00626820
// address: 0x626820
// body: available
// range: 0x626820-0x626a3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00626820(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *_Memory;
  int iVar8;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d7f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *param_1;
  pcVar3 = *(code **)(iVar2 + 0x14);
  local_20 = in_ECX;
  if (pcVar3 == FUN_0062c8e0) {
    param_1 = (int *)CONCAT31(param_1._1_3_,0x7b);
    (**(code **)(iVar2 + 0x10))(&param_1,1);
  }
  else {
    (*pcVar3)(0x7b,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  }
  if ((char)param_3 == '\0') {
    iVar2 = piVar4[1];
    uVar6 = FUN_0045d1e0(iVar2);
    (**(code **)(*piVar4 + 0x10))(iVar2,uVar6);
  }
  cVar5 = (char)param_3;
  iVar2 = *(int *)(in_ECX + 0x10);
  iVar8 = 0;
  if (0 < iVar2) {
    local_1c = local_20 + 8;
    local_20 = param_2 + 2;
    local_18 = 0;
    do {
      if ((char)param_3 == '\0') {
        (**(code **)(*piVar4 + 0x44))(0x20,local_20);
      }
      pcVar3 = *(code **)(*piVar4 + 0x14);
      if (pcVar3 == FUN_0062c8e0) {
        param_1 = (int *)CONCAT31(param_1._1_3_,0x22);
        (**(code **)(*piVar4 + 0x10))(&param_1,1);
      }
      else {
        (*pcVar3)(0x22);
      }
      puVar7 = (undefined4 *)FUN_00631840(&local_24,iVar8);
      local_8 = 0;
      FUN_00451c50(*puVar7);
      local_8 = 0xffffffff;
      _Memory = (int *)(local_24 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      (**(code **)(*piVar4 + 0x10))(&DAT_00c00fd0,3);
      FUN_00451960(local_20,param_3);
      if (iVar8 < iVar2 + -1) {
        if ((char)param_3 == '\0') {
          pcVar3 = *(code **)(*piVar4 + 0x14);
          if (pcVar3 == FUN_0062c8e0) {
            local_14[0] = 0x2c;
            (**(code **)(*piVar4 + 0x10))(local_14,1);
          }
          else {
            (*pcVar3)(0x2c);
          }
LAB_006269b6:
          iVar1 = piVar4[1];
          uVar6 = FUN_0045d1e0(iVar1);
          (**(code **)(*piVar4 + 0x10))(iVar1,uVar6);
        }
        else {
          (**(code **)(*piVar4 + 0x10))(&DAT_00c00fe4,2);
        }
      }
      else if ((char)param_3 == '\0') goto LAB_006269b6;
      cVar5 = (char)param_3;
      local_18 = local_18 + 0x18;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  if (cVar5 == '\0') {
    (**(code **)(*piVar4 + 0x44))(0x20,param_2);
  }
  pcVar3 = *(code **)(*piVar4 + 0x14);
  if (pcVar3 == FUN_0062c8e0) {
    param_3 = CONCAT31(param_3._1_3_,0x7d);
    (**(code **)(*piVar4 + 0x10))(&param_3,1);
    ExceptionList = local_10;
    return;
  }
  (*pcVar3)(0x7d);
  ExceptionList = local_10;
  return;
}

