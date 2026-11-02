// rea decompile_all
// name: FUN_00534060
// address: 0x534060
// body: available
// range: 0x534060-0x5345a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00534109) */
/* WARNING: Removing unreachable block (ram,0x0053411a) */
/* WARNING: Removing unreachable block (ram,0x0053415d) */
/* WARNING: Removing unreachable block (ram,0x0053416e) */

void FUN_00534060(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int extraout_ECX;
  undefined4 uVar4;
  float in_XMM0_Da;
  float fVar5;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  int aiStack_68 [2];
  undefined1 *puStack_60;
  int local_30;
  char *local_2c;
  int local_24;
  char *local_20;
  undefined4 *local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  uVar4 = DAT_00c7ef94;
  puStack_c = &LAB_0070d258;
  local_10 = ExceptionList;
  if (*(uint *)(*(int *)(in_ECX + 0x17c) + 0x4bc) <= *(uint *)(in_ECX + 0x80)) {
    return;
  }
  local_14 = "";
  local_18 = "";
  local_8 = 1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if ((**(char **)(in_ECX + 0x188) == '\0') ||
     (*(int *)(in_ECX + 0x80) < *(int *)(*(int *)(in_ECX + 0x17c) + 0x4c0))) {
    if (*(char *)(in_ECX + 0x18c) == '\0') {
      if (*(char *)(in_ECX + 0x18d) == '\0') {
        if (*(char *)(in_ECX + 0x18e) == '\0') goto LAB_00534219;
      }
      else {
        FUN_0045c990();
        local_14 = local_20;
        local_20 = "";
        FUN_00637c10();
      }
      uVar4 = DAT_00c7ebb0;
      if (*(char *)(in_ECX + 0x18e) != '\0') {
        if (*local_14 == '\0') {
          FUN_0045c990();
          local_14 = local_20;
        }
        else {
          FUN_0045c990();
          local_18 = local_20;
        }
        FUN_00637c10();
        uVar4 = DAT_00c7ebb0;
      }
    }
    else {
      FUN_0045c990();
      local_14 = local_2c;
    }
  }
  else {
    FUN_0045c990();
    local_14 = local_2c;
  }
LAB_00534219:
  FUN_0057f440();
  local_8 = 2;
  local_24 = 0;
  if (*local_14 != '\0') {
    puVar1 = local_1c;
    if (*local_18 != '\0') {
      in_XMM0_Da = (float)*(int *)(in_ECX + 0x1c) * 0.47;
      operator_new(0x28);
      puVar1 = (undefined4 *)FUN_00468a40();
      if (puVar1 != (undefined4 *)0x0) {
        LOCK();
        puVar1[1] = puVar1[1] + 1;
        UNLOCK();
      }
      if (local_1c != (undefined4 *)0x0) {
        LOCK();
        piVar2 = local_1c + 1;
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*local_1c)();
        }
      }
    }
    local_1c = puVar1;
    FUN_006831f0();
    FUN_004363b0();
    fVar5 = in_XMM0_Da;
    FUN_006831f0();
    FUN_004363b0();
    local_24 = (int)fVar5;
    if ((int)fVar5 < (int)in_XMM0_Da) {
      local_24 = (int)in_XMM0_Da;
    }
    local_24 = local_24 + 4;
  }
  (**(code **)(**(int **)(in_ECX + 0x7c) + 0xb0))();
  puStack_60 = (undefined1 *)0x534343;
  FUN_00684c50();
  puStack_60 = (undefined1 *)(int)(*(float *)(in_ECX + 0x184) - (float)local_24);
  aiStack_68[1] = 0;
  aiStack_68[0] = 0x534371;
  FUN_00472d90();
  puStack_60 = (undefined1 *)0x21;
  FUN_0040e4d0(&uStack_70);
  FUN_006830c0(in_ECX + 0x188);
  if (*local_14 != '\0') {
    piVar2 = (int *)(local_14 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_8 = 3;
    if (*local_18 != '\0') {
      puStack_60 = (undefined1 *)0x5343d0;
      FUN_00637690();
      local_8 = 4;
      puStack_60 = (undefined1 *)0x5343dd;
      FUN_00636ec0();
      local_8 = 3;
      piVar2 = (int *)(local_30 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          puStack_60 = (undefined1 *)0x534402;
          FID_conflict__free(piVar2);
        }
      }
    }
    aiStack_68[1] = 0x22;
    aiStack_68[0] = *(int *)(in_ECX + 0x1c) + -6;
    puStack_6c = (undefined1 *)local_24;
    uStack_70 = 3;
    piVar2 = (int *)(local_14 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    puStack_60 = (undefined1 *)uVar4;
    FUN_0057ee50(local_14);
    local_8 = 2;
    piVar2 = (int *)(local_14 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        puStack_60 = (undefined1 *)0x53446b;
        FID_conflict__free(piVar2);
      }
    }
  }
  if (*(char *)(in_ECX + 0x84) != '\0') {
    puStack_60 = &stack0xffffffa4;
    aiStack_68[1] = 0x534493;
    FUN_006842b0();
    puStack_60 = (undefined1 *)0x53449a;
    FUN_00684c50();
    if (0.0 < (float)*(int *)(in_ECX + 0x18)) {
      puStack_60 = (undefined1 *)0x5344d8;
      (**(code **)(*(int *)*param_1 + 0x50))();
    }
  }
  if (*(uint *)(in_ECX + 0x80) < *(uint *)(*(int *)(in_ECX + 0x17c) + 0x4bc)) {
    iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x17c) + 0x4b4) + *(uint *)(in_ECX + 0x80) * 4);
  }
  else {
    iVar3 = 0;
  }
  if (*(char *)(iVar3 + 0x39) != '\0') {
    puStack_60 = (undefined1 *)0x534510;
    FUN_00684c50();
    puStack_60 = *(undefined1 **)(in_ECX + 0x18);
    aiStack_68[1] = 0;
    aiStack_68[0] = 0x534522;
    FUN_00472d90();
    puStack_6c = (undefined1 *)aiStack_68;
    uStack_70 = 0x534529;
    aiStack_68[0] = extraout_ECX;
    FUN_0040e4d0();
    puStack_6c = (undefined1 *)0x534538;
    FUN_00677150();
  }
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar2 = local_1c + 1;
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puStack_60 = (undefined1 *)0x53454f;
      (**(code **)*local_1c)();
    }
  }
  piVar2 = (int *)(local_18 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      puStack_60 = (undefined1 *)0x53456f;
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      puStack_60 = (undefined1 *)0x53458f;
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

