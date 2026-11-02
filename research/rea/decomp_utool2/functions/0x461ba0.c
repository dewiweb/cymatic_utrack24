// rea decompile_all
// name: FUN_00461ba0
// address: 0x461ba0
// body: available
// range: 0x461ba0-0x461d90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461ba0(int *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  int in_ECX;
  int *_Memory;
  uint uVar6;
  int local_2c;
  int local_28;
  byte local_24;
  undefined1 local_23 [7];
  undefined4 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700c88;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)(in_ECX + 8);
  if (*(code **)(*param_1 + 0x4c) == FUN_0062a880) {
    iVar3 = FUN_0045d1e0(*puVar1);
    (**(code **)(*param_1 + 0x10))(*puVar1,iVar3 + 1);
  }
  else {
    (**(code **)(*param_1 + 0x4c))(puVar1,local_14);
  }
  uVar6 = *(uint *)(in_ECX + 0x14);
  if (*(code **)(*param_1 + 0x48) == FUN_006205c0) {
    iVar3 = 0;
    for (uVar4 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f); uVar4 != 0; uVar4 = uVar4 >> 8
        ) {
      local_23[iVar3] = (char)uVar4;
      iVar3 = iVar3 + 1;
    }
    local_24 = (byte)iVar3;
    if ((int)uVar6 < 0) {
      local_24 = local_24 | 0x80;
    }
    (**(code **)(*param_1 + 0x10))(&local_24,iVar3 + 1);
  }
  else {
    (**(code **)(*param_1 + 0x48))(uVar6);
  }
  uVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    local_28 = 0;
    do {
      local_1c = (undefined4 *)FUN_00631840(&local_2c,uVar6);
      local_8 = 0;
      if (*(code **)(*param_1 + 0x4c) == FUN_0062a880) {
        iVar3 = FUN_0045d1e0(*local_1c);
        (**(code **)(*param_1 + 0x10))(*local_1c,iVar3 + 1);
      }
      else {
        (**(code **)(*param_1 + 0x4c))(local_1c);
      }
      local_8 = 0xffffffff;
      _Memory = (int *)(local_2c + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar3 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      if (uVar6 < *(uint *)(in_ECX + 0x14)) {
        ppuVar5 = (undefined **)(*(int *)(in_ECX + 0xc) + local_28 + 8);
      }
      else {
        ppuVar5 = &PTR_PTR_00c7ed58;
      }
      (**(code **)(*(int *)*ppuVar5 + 0x60))(ppuVar5 + 2,param_1);
      local_28 = local_28 + 0x18;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(in_ECX + 0x14));
  }
  uVar6 = *(uint *)(in_ECX + 0x20);
  if (*(code **)(*param_1 + 0x48) == FUN_006205c0) {
    iVar3 = 0;
    for (uVar4 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f); uVar4 != 0; uVar4 = uVar4 >> 8
        ) {
      *(char *)((int)&local_1c + iVar3 + 1) = (char)uVar4;
      iVar3 = iVar3 + 1;
    }
    bVar2 = (byte)iVar3;
    if ((int)uVar6 < 0) {
      bVar2 = bVar2 | 0x80;
    }
    local_1c = (undefined4 *)CONCAT31(local_1c._1_3_,bVar2);
    (**(code **)(*param_1 + 0x10))(&local_1c,iVar3 + 1);
  }
  else {
    (**(code **)(*param_1 + 0x48))(uVar6);
  }
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    do {
      FUN_00461da0();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x20));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

