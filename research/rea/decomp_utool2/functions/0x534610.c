// rea decompile_all
// name: FUN_00534610
// address: 0x534610
// body: available
// range: 0x534610-0x53491c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00534610(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d2a3;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar6 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = *(int *)(in_ECX + 0x188);
  *(int *)(in_ECX + 0x188) = (int)PTR_DAT_00c7ed68;
  UNLOCK();
  piVar6 = (int *)(iVar4 + -8);
  local_14 = uVar3;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  *(undefined2 *)(in_ECX + 0x18c) = 0;
  *(undefined1 *)(in_ECX + 0x18e) = 0;
  pcVar1 = *(code **)(*(int *)(in_ECX + 0x74) + 8);
  if (pcVar1 == FUN_0040a040) {
    piVar6 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    LOCK();
    iVar4 = *(int *)(in_ECX + 0x78);
    *(int *)(in_ECX + 0x78) = (int)PTR_DAT_00c7ed68;
    UNLOCK();
    piVar6 = (int *)(iVar4 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  else {
    (*pcVar1)(&PTR_DAT_00c7ed68,uVar3);
  }
  if (*(uint *)(in_ECX + 0x80) < *(uint *)(*(int *)(in_ECX + 0x17c) + 0x4bc)) {
    local_44 = *(int *)(*(int *)(*(int *)(in_ECX + 0x17c) + 0x4b4) + *(uint *)(in_ECX + 0x80) * 4);
    FUN_0053f050(&local_48);
    local_8 = 0;
    if (local_48 != (undefined4 *)0x0) {
      FUN_0040eb00(local_38);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (1 < (int)local_48[9]) {
        if (*(int *)(local_44 + 0x24) + 1 < 0) {
          iVar4 = FUN_006104a0();
          *(undefined1 *)(iVar4 + -1) = 0x2d;
          iVar4 = iVar4 + -1;
        }
        else {
          iVar4 = FUN_006104a0();
        }
        FUN_004557e0(&local_15 + -iVar4);
        local_8._0_1_ = 2;
        uVar5 = FUN_00637690(&local_3c);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00636ec0(uVar5);
        piVar6 = (int *)(local_40 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar6 = (int *)(local_3c + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar6);
          }
        }
      }
      piVar6 = (int *)(local_38[0] + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      iVar4 = *(int *)(in_ECX + 0x188);
      *(int *)(in_ECX + 0x188) = local_38[0];
      UNLOCK();
      piVar6 = (int *)(iVar4 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      cVar2 = FUN_00548d30();
      if (cVar2 == '\0') {
        *(undefined1 *)(in_ECX + 0x18c) = 1;
        uVar5 = FUN_005406d0(&local_3c);
        local_8._0_1_ = 4;
        uVar5 = FUN_00637690(uVar5);
        local_8 = CONCAT31(local_8._1_3_,5);
        (**(code **)(*(int *)(in_ECX + 0x74) + 8))(uVar5);
        piVar6 = (int *)(local_40 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        piVar6 = (int *)(local_3c + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar6);
          }
        }
      }
      else {
        if (local_48[6] != *(int *)(*(int *)(in_ECX + 0x17c) + 0x4ac)) {
          *(undefined1 *)(in_ECX + 0x18d) = 1;
        }
        if (local_48[8] != *(int *)(*(int *)(in_ECX + 0x17c) + 0x4b0)) {
          *(undefined1 *)(in_ECX + 0x18e) = 1;
        }
      }
      piVar6 = (int *)(local_38[0] + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      LOCK();
      piVar6 = local_48 + 1;
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*local_48)(1);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

