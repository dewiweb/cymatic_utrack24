// rea decompile_all
// name: FUN_0069af70
// address: 0x69af70
// body: available
// range: 0x69af70-0x69b17e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069af70(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint *puStack_60;
  undefined4 *local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072225f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = 0;
  iVar1 = FUN_006e9580();
  local_1c = (int *)(iVar1 + 0x24);
  (**(code **)(*local_1c + 4))();
  uVar3 = local_20;
  if (**(char **)(local_18 + 0xc0) != '\0') {
    puStack_60 = &local_20;
    uStack_64 = 0x69b00a;
    puVar2 = (undefined4 *)FUN_006e25d0();
    uVar3 = 1;
    if ((*(char *)*puVar2 == '\0') && (*(int *)(*(int *)(local_18 + 0xbc) + 0xa0) == 0)) {
      local_11 = '\x01';
      goto LAB_0069b031;
    }
  }
  local_11 = '\0';
LAB_0069b031:
  if (((uVar3 & 1) != 0) && (piVar4 = (int *)(local_20 - 8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_60 = (uint *)0x69b058;
      FID_conflict__free(piVar4);
    }
  }
  if (local_11 != '\0') {
    puStack_60 = (uint *)&stack0xffffffa4;
    uStack_64 = 0;
    uStack_68 = 0x1000a00;
    puStack_6c = &local_20;
    FUN_006e8e70();
    uStack_64 = 0x69b088;
    FUN_00684d10();
    puStack_60 = (uint *)0x69b092;
    FUN_00684c50();
    puStack_60 = (uint *)0x69b0a1;
    local_20 = FUN_006e25b0();
    local_8 = 0;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    puStack_60 = (uint *)0x69b0c6;
    (**(code **)(*(int *)*param_1 + 0x68))();
    if (local_1c != (int *)0x0) {
      LOCK();
      piVar4 = local_1c + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        puStack_60 = (uint *)0x1;
        uStack_64 = 0x69b0e2;
        (**(code **)*local_1c)();
      }
    }
    FUN_00418f80(&puStack_6c,2,1);
    piVar4 = (int *)FUN_006e25b0(&local_24);
    local_8 = 1;
    iVar5 = (int)((float)*(int *)(*(int *)(local_18 + 0xbc) + 0x1c) / *(float *)(*piVar4 + 0x14));
    iVar1 = 1;
    if (1 < iVar5) {
      iVar1 = iVar5;
    }
    FUN_00682290(local_18 + 0xc0,*(undefined4 *)(*(int *)(local_18 + 0xbc) + 0x9c),iVar1,0);
    if (local_24 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_24 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        puStack_60 = (uint *)0x1;
        uStack_64 = 0x69b16b;
        (**(code **)*local_24)();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

