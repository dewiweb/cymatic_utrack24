// rea decompile_all
// name: FUN_006e83a0
// address: 0x6e83a0
// body: available
// range: 0x6e83a0-0x6e85ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e83a0(int param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined1 **local_54;
  undefined1 *local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  char local_25;
  undefined **local_24;
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00728b52;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 != 0) && (iVar5 = *(int *)(in_ECX + 0x90) + -1, -1 < iVar5)) {
    do {
      piVar6 = *(int **)(*(int *)(in_ECX + 0x88) + iVar5 * 4);
      if (piVar6[1] == param_1) {
        if (piVar6 != (int *)0x0) {
          local_30 = (undefined1 *)*piVar6;
          piVar6 = (int *)((undefined1 *)*piVar6 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
          }
          ppuVar4 = &local_30;
          bVar3 = true;
          bVar2 = false;
          goto LAB_006e8410;
        }
        break;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  local_2c = &DAT_00bfe12c;
  ppuVar4 = &local_2c;
  bVar3 = false;
  bVar2 = true;
LAB_006e8410:
  puVar1 = *ppuVar4;
  *ppuVar4 = &DAT_00bfe12c;
  local_8 = 0;
  local_38 = puVar1;
  local_34 = in_ECX;
  if (bVar2) {
    piVar6 = (int *)(local_2c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_54 = (undefined1 **)0x6e844c;
        FID_conflict__free(piVar6);
      }
    }
  }
  if (bVar3) {
    piVar6 = (int *)(local_30 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_54 = (undefined1 **)0x6e8477;
        FID_conflict__free(piVar6);
      }
    }
  }
  bVar2 = false;
  if (*(int *)(local_34 + 0xa4) == param_1) {
    local_54 = &local_30;
    uStack_58 = 0x6e8499;
    piVar6 = (int *)FUN_006e25d0();
    bVar2 = true;
    if ((undefined1 *)*piVar6 != puVar1) {
      local_54 = (undefined1 **)*piVar6;
      uStack_58 = 0x6e84b1;
      iVar5 = FUN_00448730();
      if (iVar5 != 0) goto LAB_006e84e5;
    }
    local_25 = '\0';
  }
  else {
LAB_006e84e5:
    local_25 = '\x01';
  }
  if ((bVar2) && (piVar6 = (int *)(local_30 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_54 = (undefined1 **)0x6e850e;
      FID_conflict__free(piVar6);
    }
  }
  if (local_25 != '\0') {
    local_54 = &local_38;
    uStack_58 = 0x6e852b;
    FUN_006e4900();
    *(int *)(local_34 + 0xa4) = param_1;
    local_24 = &PTR_vftable_00c7ed44;
    local_1c[0] = param_1;
    local_8._0_1_ = 1;
    local_54 = (undefined1 **)0x6e8551;
    (**(code **)(**(int **)(local_34 + 0x94) + 8))();
    local_8 = (uint)local_8._1_3_ << 8;
    local_54 = (undefined1 **)local_1c;
    uStack_58 = 0x6e8561;
    (**(code **)(*local_24 + 0x54))();
    FUN_006e6400(auStack_5c);
    FUN_006ce9f0(1);
    local_54 = (undefined1 **)0x6e857f;
    FUN_0069a2c0();
  }
  piVar6 = (int *)(puVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_54 = (undefined1 **)0x6e859a;
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

