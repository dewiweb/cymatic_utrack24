// rea decompile_all
// name: FUN_004fbad0
// address: 0x4fbad0
// body: available
// range: 0x4fbad0-0x4fbd7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fbad0(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *_Memory_00;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706b07;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 == (undefined4 *)(in_ECX + 0x968)) {
    ExceptionList = &local_10;
    uVar4 = FUN_006e85c0(uVar3);
    FUN_0045c990("Change synched units");
    local_8 = 0;
    param_1 = operator_new(0x14);
    local_8._0_1_ = 1;
    puVar5 = operator_new(0xc);
    *puVar5 = MTSEUAPL_SetSyncUnits::vftable;
    puVar5[1] = 3;
    puVar5[2] = uVar4;
    puVar6 = operator_new(0xc);
    uVar4 = *(undefined4 *)(in_ECX + 0xd6c);
    puVar6[2] = *(undefined4 *)(in_ECX + 0xd7c);
    puVar6[1] = uVar4;
    *puVar6 = MTSEUAPL_SetSyncUnits::vftable;
    local_8 = (uint)local_8._1_3_ << 8;
    param_1[1] = in_ECX + -0x80;
    *param_1 = MTSEUA::vftable;
    param_1[2] = 3;
    param_1[3] = puVar6;
    param_1[4] = puVar5;
    *(undefined1 *)(in_ECX + 0xdc) = 1;
    _Memory_00 = (int *)(in_ECX + -8);
    if (_Memory_00 != &DAT_00bfe124) {
      LOCK();
      *_Memory_00 = *_Memory_00 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *(int *)(in_ECX + 200);
    *(int *)(in_ECX + 200) = in_ECX;
    UNLOCK();
    _Memory = (int *)(iVar1 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    FUN_0063ba90(param_1);
    if (_Memory_00 == &DAT_00bfe124) {
      ExceptionList = local_10;
      return;
    }
    LOCK();
    iVar1 = *_Memory_00;
    *_Memory_00 = *_Memory_00 + -1;
    UNLOCK();
  }
  else {
    if (param_1 == (undefined4 *)(in_ECX + 0xb04)) {
      ExceptionList = &local_10;
      uVar4 = FUN_006e85c0(uVar3);
      FUN_0045c990("Change sampling rate");
      local_8 = 2;
      puVar5 = operator_new(0x14);
      local_8._0_1_ = 3;
      puVar6 = operator_new(0xc);
      *puVar6 = MTSEUAPL_SetSamplingRate::vftable;
      puVar6[1] = 3;
      puVar6[2] = uVar4;
      puVar7 = operator_new(0xc);
      uVar4 = *(undefined4 *)(in_ECX + 0xd80);
      uVar2 = *(undefined4 *)(in_ECX + 0xd6c);
      *puVar7 = MTSEUAPL_SetSamplingRate::vftable;
      puVar7[1] = uVar2;
      puVar7[2] = uVar4;
      puVar5[2] = 1;
      local_8 = CONCAT31(local_8._1_3_,2);
    }
    else {
      if (param_1 != (undefined4 *)(in_ECX + 0xca0)) {
        return;
      }
      ExceptionList = &local_10;
      uVar4 = FUN_006e85c0(uVar3);
      FUN_0045c990("Change resolution");
      local_8 = 4;
      puVar5 = operator_new(0x14);
      local_8._0_1_ = 5;
      puVar6 = operator_new(0xc);
      *puVar6 = MTSEUAPL_SetResolution::vftable;
      puVar6[1] = 3;
      puVar6[2] = uVar4;
      puVar7 = operator_new(0xc);
      uVar4 = *(undefined4 *)(in_ECX + 0xd84);
      uVar2 = *(undefined4 *)(in_ECX + 0xd6c);
      *puVar7 = MTSEUAPL_SetResolution::vftable;
      puVar7[1] = uVar2;
      puVar7[2] = uVar4;
      puVar5[2] = 2;
      local_8 = CONCAT31(local_8._1_3_,4);
    }
    *puVar5 = MTSEUA::vftable;
    puVar5[1] = in_ECX + -0x80;
    puVar5[3] = puVar7;
    puVar5[4] = puVar6;
    FUN_005b7430(puVar5,&param_1);
    _Memory_00 = param_1 + -2;
    if (_Memory_00 == &DAT_00bfe124) {
      ExceptionList = local_10;
      return;
    }
    LOCK();
    iVar1 = *_Memory_00;
    *_Memory_00 = *_Memory_00 + -1;
    UNLOCK();
  }
  if (iVar1 == 0) {
    FID_conflict__free(_Memory_00);
  }
  ExceptionList = local_10;
  return;
}

