// rea decompile_all
// name: FUN_006a8930
// address: 0x6a8930
// body: available
// range: 0x6a8930-0x6a8b91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a8930(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined4 *local_60;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072335a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_68 = &stack0xffffffa4;
  local_60 = (undefined4 *)0x0;
  uStack_64 = 0x1000280;
  FUN_006e8e70();
  puVar2 = param_1;
  local_60 = (undefined4 *)0x6a8979;
  FUN_00684a80();
  if (*(int *)(iVar1 + 0xa0) != 0) {
    if ((*(byte *)(iVar1 + 0x69) & 0x10) == 0) {
      if (*(int *)(iVar1 + 0xc) != 0) {
        cVar3 = FUN_006e6320();
        if (cVar3 == '\0') goto LAB_006a8b58;
      }
      puStack_68 = &stack0xffffffa4;
      local_60 = (undefined4 *)0x0;
      uStack_64 = 0x1000282;
      FUN_006e8e70();
      local_60 = (undefined4 *)0x6a8b58;
      FUN_00684c50();
    }
    goto LAB_006a8b58;
  }
  if ((*(byte *)(iVar1 + 0x69) & 0x10) == 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      cVar3 = FUN_006e6320();
      if (cVar3 == '\0') goto LAB_006a89a6;
    }
    param_2 = 0x3f800000;
  }
  else {
LAB_006a89a6:
    param_2 = 0x3f000000;
  }
  local_60 = &param_1;
  uStack_64 = 0x6a89bf;
  FUN_006dbbf0();
  local_60 = (undefined4 *)&stack0xffffffa4;
  uStack_64 = 0;
  puStack_68 = (undefined1 *)0x1000281;
  local_8 = 0;
  FUN_006e8e70(&local_14);
  uStack_64 = 0x6a89e6;
  FUN_00684d10();
  local_60 = (undefined4 *)0x6a89ed;
  FUN_00684c50();
  if (*(char *)(puVar2 + 2) != '\0') {
    *(undefined1 *)(puVar2 + 2) = 0;
    (**(code **)(*(int *)*puVar2 + 0x34))();
  }
  local_60 = (undefined4 *)0x6a8a09;
  (**(code **)(*(int *)*puVar2 + 0x68))();
  local_28 = *(undefined4 *)(iVar1 + 0xb4);
  local_24 = *(undefined4 *)(iVar1 + 0xb8);
  local_20 = *(undefined4 *)(iVar1 + 0xbc);
  local_1c = *(undefined4 *)(iVar1 + 0xc0);
  local_60 = (undefined4 *)0x6a8a38;
  FUN_006e6400();
  local_60 = &local_38;
  uStack_64 = 0x6a8a45;
  FUN_004107c0();
  puStack_68 = local_38;
  uStack_64 = local_34;
  local_60 = (undefined4 *)local_30;
  local_8._0_1_ = 1;
  uVar4 = FUN_006e25d0(&local_14,0);
  iVar5 = 1;
  if (1 < (int)((float)local_2c / (float)param_1[5])) {
    iVar5 = (int)((float)local_2c / (float)param_1[5]);
  }
  local_8._0_1_ = 3;
  FUN_00682290(uVar4,*(undefined4 *)(iVar1 + 0x9c),iVar5,*(undefined4 *)(iVar1 + 0xc4));
  local_8 = (uint)local_8._1_3_ << 8;
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      local_60 = (undefined4 *)0x6a8ae1;
      FID_conflict__free(piVar6);
    }
  }
  local_60 = (undefined4 *)&stack0xffffffa4;
  uStack_64 = 0;
  puStack_68 = (undefined1 *)0x1000282;
  FUN_006e8e70(local_18);
  uStack_64 = 0x6a8b04;
  FUN_00684d10();
  local_60 = (undefined4 *)0x6a8b0b;
  FUN_00684c50();
  local_8 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_1 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      local_60 = (undefined4 *)0x6a8b27;
      (**(code **)*param_1)();
    }
  }
LAB_006a8b58:
  local_60 = (undefined4 *)0x6a8b63;
  FUN_006e6400();
  FUN_0040e4d0(&puStack_68);
  FUN_00677150();
  ExceptionList = local_10;
  return;
}

