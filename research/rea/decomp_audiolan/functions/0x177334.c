// rea decompile_all
// name: FUN_00177334
// address: 0x177334
// body: available
// range: 0x177334-0x1775af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00177334(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  int local_24;
  int iStack_20;
  int *local_1c;
  int *piStack_18;
  
  local_30 = 0;
  local_34 = 0;
  if ((param_3 == (int *)0x0) ||
     ((((param_2 != 0 && (*(int *)(param_2 + 0x2c) == 0)) || (iVar4 = *param_3, iVar4 == 0)) ||
      ((*(int *)(iVar4 + 0x20) == 0 || (*(int *)(iVar4 + 0x24) == 0)))))) {
    return -2;
  }
  if ((param_4 != (int *)0x0) && (2 < *param_4)) {
    return -1;
  }
  local_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  piStack_18 = param_4;
  iVar1 = FUN_001a4d9c(*(int *)(iVar4 + 0x20),&local_34);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_001a4bdc(local_34 + 0xb0,0);
  if (((iVar1 == 0) || (*(int *)(local_34 + 0x70) == 0)) ||
     (*(int *)(*(int *)(local_34 + 0x70) + 4) == 0)) goto LAB_00177508;
  iVar1 = FUN_0000317c();
  if (*(int *)(*(int *)(local_34 + 0x70) + 4) != 0) {
    if ((code *)*DAT_001775b0 == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*DAT_001775b0)();
    }
  }
  iVar1 = FUN_00179370(&DAT_001775b4,iVar1 + 1);
  *(int *)(*(int *)(local_34 + 0x70) + 4) = iVar1;
  if (iVar1 == 0) {
    FUN_001a52e0(local_34);
    return -4;
  }
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 4), iVar1 != 0)) {
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  }
  iVar1 = FUN_00179ab4(local_34);
  if (iVar1 != 0) goto LAB_00177538;
  FUN_001a4d54(local_34 + 0x44,_DAT_001775b8);
  FUN_001a4d54(local_34 + 0x94,_DAT_001775b8);
  iVar1 = *(int *)(iVar4 + 0x24);
  if ((iVar1 == 0) || ((*(int *)(iVar1 + 0xc) != 0x191 && (*(int *)(iVar1 + 0xc) != 0x197)))) {
    iVar1 = 0;
  }
  FUN_001712b4(local_24,local_34,iVar1);
  if (*(int *)(iVar4 + 0x24) != 0) {
    if (*(int *)(*(int *)(iVar4 + 0x24) + 0xc) == 0x19c) {
      iVar5 = 0;
      iVar1 = FUN_001a4bc4(local_34 + 0xc0,0);
      if (iVar1 == 0) {
        do {
          puVar2 = (undefined4 *)FUN_001a4bdc(local_34 + 0xc0,iVar5);
          if ((puVar2 != (undefined4 *)0x0) &&
             (iVar1 = FUN_001a6f04(*puVar2,s__sip_if_match_001775bb + 1), iVar1 == 0)) {
            FUN_001a4cbc(local_34 + 0xc0,iVar5);
            FUN_001a4594(puVar2);
            break;
          }
          iVar5 = iVar5 + 1;
          iVar1 = FUN_001a4bc4(local_34 + 0xc0,iVar5);
        } while (iVar1 == 0);
        if (iVar4 == 0) goto LAB_001774f4;
      }
      if (*(int *)(iVar4 + 0x24) == 0) goto LAB_001774f4;
    }
    if (*(int *)(*(int *)(iVar4 + 0x24) + 0xc) == 0x1a7) {
      FUN_001a56f2(local_34,s_expires_001775cc,0,&local_38);
      FUN_001a56f2(*(undefined4 *)(iVar4 + 0x24),s_min_expires_001775d4,0,local_2c);
      if ((((local_38 == 0) || (*(int *)(local_38 + 4) == 0)) || (local_2c[0] == 0)) ||
         (*(int *)(local_2c[0] + 4) == 0)) {
LAB_00177508:
        FUN_001a52e0(local_34);
        return -5;
      }
      if ((code *)*DAT_001775b0 == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_001775b0)();
      }
      uVar3 = FUN_001a6f50(*(undefined4 *)(local_2c[0] + 4));
      *(undefined4 *)(local_38 + 4) = uVar3;
    }
  }
LAB_001774f4:
  FUN_001a52cc(local_34);
  iVar1 = local_24;
  if ((*(int *)(local_34 + 0xc) == 0) &&
     (iVar5 = FUN_00003960(*(undefined4 *)(local_34 + 8),s_INVITE_001775e0), iVar5 == 0)) {
    local_38 = local_34;
    iVar1 = FUN_0017994c(local_24,&local_30,0,*(undefined4 *)(iVar1 + 0xa4));
  }
  else {
    local_38 = local_34;
    iVar1 = FUN_0017994c(local_24,&local_30,2,*(undefined4 *)(iVar1 + 0xa4));
  }
  if (iVar1 == 0) {
    iVar1 = local_24 + 0x9c;
    if ((*(int *)(local_34 + 0xc) == 0) &&
       (iVar5 = FUN_00003960(*(undefined4 *)(local_34 + 8),s_PUBLISH_001775e8), iVar5 == 0)) {
      FUN_001a4a80(iVar1,iVar4,0);
      *local_1c = local_30;
    }
    else {
      FUN_001a4a80(iVar1,local_30,0);
    }
    uVar3 = FUN_001a688c(local_34);
    FUN_001a7216(local_30,uVar3);
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 1;
    }
    FUN_001799e4(local_24);
    return 0;
  }
LAB_00177538:
  FUN_001a52e0(local_34);
  return iVar1;
}

