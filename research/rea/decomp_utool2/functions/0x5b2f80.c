// rea decompile_all
// name: FUN_005b2f80
// address: 0x5b2f80
// body: available
// range: 0x5b2f80-0x5b321f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005b2f80(void)

{
  int iVar1;
  char extraout_var;
  int *piVar2;
  char extraout_var_00;
  char extraout_var_01;
  int *in_ECX;
  char cVar4;
  int iVar3;
  int *in_EDX;
  int iVar5;
  int iVar6;
  int in_stack_ffffffc8;
  int local_20;
  int local_1c;
  int local_18;
  bool local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00719010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *in_ECX;
  piVar2 = (int *)(iVar6 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  iVar5 = *in_EDX;
  piVar2 = (int *)(iVar5 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_8 = 1;
  local_1c = iVar5;
  local_18 = iVar6;
  if (*DAT_00c8a8e8 == '\0') {
    cVar4 = '\0';
  }
  else {
    in_stack_ffffffc8 = iVar6;
    FUN_0045e080(iVar6);
    cVar4 = extraout_var;
  }
  if (-1 < cVar4) {
    if (*DAT_00c8a8e8 == '\0') {
      iVar3 = 0;
    }
    else {
      in_stack_ffffffc8 = iVar5;
      iVar3 = FUN_0045e080(iVar5);
    }
    if (-1 < iVar3) {
      piVar2 = (int *)FUN_00634090(&local_20,DAT_00c8a8e8,in_stack_ffffffc8);
      iVar3 = *piVar2;
      *piVar2 = iVar6;
      piVar2 = (int *)(local_20 + -8);
      local_18 = iVar3;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          in_stack_ffffffc8 = 0x5b307b;
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)FUN_00634090(&local_20,DAT_00c8a8e8,in_stack_ffffffc8);
      iVar1 = *piVar2;
      *piVar2 = iVar5;
      piVar2 = (int *)(local_20 + -8);
      local_1c = iVar1;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      if (*DAT_00c8a8e8 == '\0') {
        cVar4 = '\0';
      }
      else {
        FUN_0045e080(iVar3);
        cVar4 = extraout_var_00;
      }
      iVar6 = iVar3;
      if (-1 < cVar4) {
        piVar2 = (int *)FUN_00633de0(&local_20,DAT_00c8a8e8,0);
        iVar6 = *piVar2;
        *piVar2 = iVar3;
        piVar2 = (int *)(local_20 + -8);
        local_18 = iVar6;
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar2);
          }
        }
      }
      if (*DAT_00c8a8e8 == '\0') {
        cVar4 = '\0';
      }
      else {
        FUN_0045e080(iVar1);
        cVar4 = extraout_var_01;
      }
      iVar5 = iVar1;
      if (-1 < cVar4) {
        piVar2 = (int *)FUN_00633de0(&local_20,DAT_00c8a8e8,0);
        iVar5 = *piVar2;
        *piVar2 = iVar1;
        piVar2 = (int *)(local_20 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar2);
          }
        }
      }
      if (iVar6 == iVar5) {
        local_11 = true;
      }
      else {
        iVar3 = FUN_00448730(iVar6);
        local_11 = iVar3 == 0;
      }
      goto LAB_005b31cd;
    }
  }
  local_11 = false;
LAB_005b31cd:
  piVar2 = (int *)(iVar5 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(iVar6 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return local_11;
}

