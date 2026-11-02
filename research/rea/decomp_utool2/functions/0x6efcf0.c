// rea decompile_all
// name: FUN_006efcf0
// address: 0x6efcf0
// body: available
// range: 0x6efcf0-0x6f00f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006efcf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  char local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  char local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  char local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007296e4;
  local_10 = ExceptionList;
  local_1c = 0;
  if (*(char *)(in_ECX + 0xa4) != '\0') {
    return;
  }
  ExceptionList = &local_10;
  local_94 = in_ECX;
  FUN_006ee820(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_88 = *(undefined4 *)(in_ECX + 200);
  local_8c = *(int *)(in_ECX + 0xc4);
  local_84 = *(undefined4 *)(in_ECX + 0xcc);
  local_80 = *(undefined4 *)(in_ECX + 0xd0);
  local_4c = *(undefined4 *)(in_ECX + 0xdc);
  local_50 = *(int *)(in_ECX + 0xd8);
  local_48 = *(undefined4 *)(in_ECX + 0xe0);
  local_44 = *(undefined4 *)(in_ECX + 0xe4);
  local_40 = '\0';
  local_3c = *(int *)(in_ECX + 0xb0);
  local_38 = *(undefined4 *)(in_ECX + 0xb4);
  local_34 = *(undefined4 *)(in_ECX + 0xb8);
  local_30 = *(undefined4 *)(in_ECX + 0xbc);
  local_2c = '\0';
  local_8 = 2;
  local_7c = '\x01';
  if (local_8c != 0) {
    local_18 = &local_8c;
    FUN_0040e3e0(&local_18);
    if (local_40 == '\x01') goto LAB_006efe05;
  }
  local_40 = '\x01';
  if (local_50 != 0) {
    local_18 = &local_50;
    FUN_0040e3e0(&local_18);
  }
LAB_006efe05:
  if ((local_2c != '\x01') && (local_2c = '\x01', local_3c != 0)) {
    local_18 = &local_3c;
    FUN_0040e3e0(&local_18);
  }
  local_18 = *(int **)(in_ECX + 0xe0);
  iVar6 = *(int *)(in_ECX + 0xcc);
  if ((iVar6 < (int)local_18) && (*(int *)(in_ECX + 0xe4) == 0)) {
    local_18 = (int *)((int)local_18 + -1);
  }
  if (iVar6 <= (int)local_18) {
    do {
      FUN_006f2820(&local_24,iVar6);
      iVar1 = local_24;
      local_8 = CONCAT31(local_8._1_3_,3);
      local_20 = FUN_006f1760(local_24);
      if (local_20 < 1) {
        puVar2 = (undefined4 *)FUN_00620cf0(&local_90);
        local_1c = local_1c | 1;
        if (*(char *)*puVar2 != '\0') goto LAB_006efea0;
        local_11 = '\0';
      }
      else {
LAB_006efea0:
        local_11 = '\x01';
      }
      if ((local_1c & 1) != 0) {
        local_1c = local_1c & 0xfffffffe;
        piVar5 = (int *)(local_90 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      if (local_11 != '\0') {
        iVar3 = *(int *)(in_ECX + 0x7c);
        local_74 = 0;
        local_6c = 0;
        local_68 = '\0';
        local_78 = iVar3;
        local_70 = iVar6;
        FUN_006f2d00(iVar6,0);
        local_60 = 0;
        local_58 = local_20;
        local_54 = '\0';
        local_64 = iVar3;
        local_5c = iVar6;
        FUN_006f2d00(iVar6,local_20);
        in_ECX = local_94;
        local_8 = CONCAT31(local_8._1_3_,5);
        iVar3 = FUN_006ed2a0(iVar6,local_58);
        local_28 = 0;
        if (0 < param_1 + iVar3) {
          local_28 = param_1 + iVar3;
        }
        if (local_28 != iVar3) {
          local_20 = *(int *)(in_ECX + 0x7c);
          local_98 = local_60;
          local_9c = local_74;
          if (local_74 < local_60) {
            operator_new(0x14);
            uVar4 = FUN_004b4460(local_20,local_9c,local_98);
            FUN_0063ba90(uVar4);
          }
          uVar4 = FUN_006ed340(&local_a0,local_28);
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_006f1ab0(uVar4,local_74,1);
          piVar5 = (int *)(local_a0 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar5);
            }
          }
        }
        if ((local_54 != '\0') && (local_54 = '\0', local_64 != 0)) {
          FUN_00415ff0(&local_64);
        }
        if ((local_68 != '\0') && (local_68 = '\0', local_78 != 0)) {
          FUN_00415ff0(&local_78);
        }
      }
      piVar5 = (int *)(iVar1 + -8);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)local_18);
  }
  FUN_006f2e00(&local_8c);
  FUN_006f2e00(&local_50);
  FUN_006f2e00(&local_3c);
  if ((local_2c != '\0') && (local_2c = '\0', local_3c != 0)) {
    FUN_00415ff0(&local_3c);
  }
  if ((local_40 != '\0') && (local_40 = '\0', local_50 != 0)) {
    FUN_00415ff0(&local_50);
  }
  if ((local_7c != '\0') && (local_7c = 0, local_8c != 0)) {
    FUN_00415ff0(&local_8c);
  }
  ExceptionList = local_10;
  return;
}

