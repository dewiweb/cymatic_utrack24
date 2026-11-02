// rea decompile_all
// name: FUN_0069f700
// address: 0x69f700
// body: available
// range: 0x69f700-0x69f971 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069f700(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 **ppuVar5;
  undefined4 *local_48;
  void *local_44;
  int local_3c;
  undefined4 **local_38;
  undefined **local_34 [2];
  int local_2c [2];
  undefined **local_24;
  undefined4 local_20;
  int local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722a19;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34[0] = &PTR_vftable_00c7ed4c;
  local_2c[0] = *param_1;
  piVar4 = (int *)(local_2c[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_1c[2] = uVar3;
  FUN_0063b210(&local_48,&DAT_00c8a980,local_34);
  local_8 = 0;
  (**(code **)(*local_34[0] + 0x54))(local_2c,uVar3);
  if (local_48 == (undefined4 *)0x0) {
    operator_new(0x34);
    local_24 = (undefined **)FUN_00460e00(&DAT_00c8aa94);
    if (local_24 != (undefined **)0x0) {
      LOCK();
      local_24[1] = local_24[1] + 1;
      UNLOCK();
    }
    local_20 = 0;
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_8._0_1_ = 3;
    FUN_0063b440(&local_24);
    FUN_0063b3e0();
    local_1c[0] = *param_1;
    piVar4 = (int *)(local_1c[0] + -8);
    local_24 = &PTR_vftable_00c7ed4c;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_8._0_1_ = 4;
    if (local_48 != (undefined4 *)0x0) {
      FUN_00461420(&DAT_00c8a980,&local_24,0);
    }
    local_8._0_1_ = 0;
    (**(code **)(*local_24 + 0x54))(local_1c);
    piVar4 = (int *)FUN_0069ed70(&local_38);
    local_24 = &PTR_vftable_00c7ed4c;
    local_1c[0] = *piVar4;
    *piVar4 = (int)&DAT_00bfe12c;
    local_8._0_1_ = 6;
    if (local_48 != (undefined4 *)0x0) {
      FUN_00461420(&DAT_00c8a9c4,&local_24,0);
    }
    (**(code **)(*local_24 + 0x54))(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    ppuVar5 = local_38 + -2;
    if (ppuVar5 != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar1 = *ppuVar5;
      *ppuVar5 = (undefined4 *)((int)*ppuVar5 + -1);
      UNLOCK();
      if (puVar1 == (undefined4 *)0x0) {
        FID_conflict__free(ppuVar5);
      }
    }
    if (*in_ECX != 0) {
      FUN_00461880(local_48,0xffffffff,0);
    }
  }
  else {
    piVar4 = (int *)FUN_0069ed70(&local_38);
    local_24 = &PTR_vftable_00c7ed4c;
    local_1c[0] = *piVar4;
    *piVar4 = (int)&DAT_00bfe12c;
    local_8 = CONCAT31(local_8._1_3_,2);
    if (local_48 != (undefined4 *)0x0) {
      FUN_00461420(&DAT_00c8a9c4,&local_24,0);
    }
    (**(code **)(*local_24 + 0x54))(local_1c);
    ppuVar5 = local_38 + -2;
    if (ppuVar5 != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar1 = *ppuVar5;
      *ppuVar5 = (undefined4 *)((int)*ppuVar5 + -1);
      UNLOCK();
      if (puVar1 == (undefined4 *)0x0) {
        FID_conflict__free(ppuVar5);
      }
    }
  }
  puVar1 = local_48;
  if ((0 < local_3c) && (local_48 != (undefined4 *)0x0)) {
    local_38 = &local_48;
    uVar3 = FUN_00447770(&local_38);
    if (uVar3 < (uint)puVar1[0xb]) {
      FUN_00410320(uVar3);
    }
  }
  FID_conflict__free(local_44);
  if (local_48 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_48 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_48)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_1c[2] ^ (uint)&stack0xfffffffc);
  return;
}

