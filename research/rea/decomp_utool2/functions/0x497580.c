// rea decompile_all
// name: FUN_00497580
// address: 0x497580
// body: available
// range: 0x497580-0x49780a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00497580(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *extraout_ECX;
  undefined4 *puVar5;
  undefined8 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702768;
  local_10 = ExceptionList;
  iVar3 = *param_1;
  if (iVar3 == 0x10028) {
    ExceptionList = &local_10;
    FUN_00498fb0(1);
    ExceptionList = local_10;
    return 1;
  }
  if (iVar3 == 0x10026) {
    ExceptionList = &local_10;
    FUN_00498fb0(0xffffffff);
    ExceptionList = local_10;
    return 1;
  }
  if (iVar3 == 0x10025) {
    if (*(int *)(in_ECX + 0x70) == 0) {
      if ((*(int *)(in_ECX + 0xac) != 0) && (*(int *)(*(int *)(in_ECX + 0xac) + 8) != 0)) {
        ExceptionList = &local_10;
        if (*(int *)(in_ECX + 0xac) != 0) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0xac) + 8) + 0x6c))(param_1);
          ExceptionList = local_10;
          return 1;
        }
LAB_00497774:
        (**(code **)(iRam00000000 + 0x6c))(param_1);
        ExceptionList = local_10;
        return 1;
      }
    }
    else {
      ExceptionList = &local_10;
      iVar3 = FUN_0040de70(*(int *)(in_ECX + 0x70));
      if (iVar3 != 0) {
        LOCK();
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        UNLOCK();
      }
      local_8 = 0;
      FUN_004adec0();
      uVar4 = FUN_004adf20();
      FUN_004973b0(0,1);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
        FUN_004adec0(uVar4);
        FUN_00498ad0(uVar4);
      }
      uVar6 = FUN_00499100();
      puVar5 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar5 + 1;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar5)(1);
          ExceptionList = local_10;
          return 1;
        }
      }
    }
  }
  else if (iVar3 == 0x10027) {
    ExceptionList = &local_10;
    FUN_00499100();
    uVar4 = FUN_004adf20();
    cVar2 = FUN_00498ce0(uVar4);
    if (cVar2 == '\0') {
      cVar2 = FUN_0040de40(0);
      if (cVar2 != '\0') {
        if (*extraout_ECX != 0) {
          (**(code **)(**(int **)(*extraout_ECX + 8) + 0x6c))(param_1);
          ExceptionList = local_10;
          return 1;
        }
        goto LAB_00497774;
      }
    }
    else {
      cVar2 = FUN_00498cc0();
      if (cVar2 != '\0') {
        FUN_00498fb0(1);
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  else {
    if (iVar3 == 0xd) {
      ExceptionList = &local_10;
      FUN_00498e60(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      ExceptionList = local_10;
      return 1;
    }
    if (iVar3 != 0x1b) {
      return 0;
    }
    if (*(int *)(in_ECX + 0x70) != 0) {
      ExceptionList = &local_10;
      FUN_004974d0(0);
      ExceptionList = local_10;
      return 1;
    }
    ExceptionList = &local_10;
    FUN_004973b0(0,0);
  }
  ExceptionList = local_10;
  return 1;
}

