// rea decompile_all
// name: FUN_006b9120
// address: 0x6b9120
// body: available
// range: 0x6b9120-0x6b938f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b9120(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724463;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_006e50e0(&local_18);
  uVar2 = FUN_0045c230(*puVar3,uVar2);
  local_14 = (undefined1 *)(uVar2 >> 0x1f ^ 1);
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if ((char)local_14 == '\0') {
    uVar5 = FUN_006ba3c0(&local_1c,0);
    local_8._0_1_ = 6;
    local_8._1_3_ = 0;
    (**(code **)(*(int *)(in_ECX + -4) + 0xc))(uVar5);
  }
  else {
    puVar3 = (undefined4 *)FUN_006e50e0(&local_18);
    local_8 = 0;
    FUN_00635a10(&local_14,*puVar3);
    local_8._0_1_ = 2;
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    puVar3 = (undefined4 *)FUN_00458890();
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if (((DVar4 & 0x10) == 0) || (DVar4 == 0xffffffff)) {
      uVar5 = FUN_00636040(&local_1c);
      local_8._0_1_ = 4;
      FUN_006b9d70(uVar5);
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      FUN_0040f7f0();
      if (*(int *)(in_ECX + 0x3c) != 0) {
        FID_conflict__free(*(void **)(in_ECX + 0x38));
        *(undefined4 *)(in_ECX + 0x38) = 0;
        *(undefined4 *)(in_ECX + 0x3c) = 0;
      }
      *(undefined4 *)(in_ECX + 0x40) = 0;
      FUN_00415400(&local_14);
      uVar5 = FUN_00636a10(&local_1c);
      local_8._0_1_ = 5;
      FUN_006e55f0(uVar5,1);
    }
    else {
      FUN_006b9d70(&local_14);
      FUN_0040f7f0();
      if (*(int *)(in_ECX + 0x3c) != 0) {
        FID_conflict__free(*(void **)(in_ECX + 0x38));
        *(undefined4 *)(in_ECX + 0x38) = 0;
        *(undefined4 *)(in_ECX + 0x3c) = 0;
      }
      *(undefined4 *)(in_ECX + 0x40) = 0;
      local_1c = local_14;
      if ((*(uint *)(in_ECX + 0x30) & 0x100) != 0) goto LAB_006b935f;
      local_18 = &DAT_00bfe12c;
      local_8._0_1_ = 3;
      FUN_006e55f0(&local_18,1);
      local_1c = local_18;
    }
    piVar6 = (int *)(local_1c + -8);
    local_1c = local_14;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
        local_1c = local_14;
      }
    }
  }
LAB_006b935f:
  piVar6 = (int *)(local_1c + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

