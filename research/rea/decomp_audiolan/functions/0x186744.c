// rea decompile_all
// name: FUN_00186744
// address: 0x186744
// body: available
// range: 0x186744-0x186a41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00186744(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34 [2];
  int local_2c [2];
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  if (((param_2 < 0) || (param_3 < 0x65)) || (DAT_00186a44 < param_3)) {
    FUN_001a52e0(param_4);
    return 0xfffffffe;
  }
  if (param_2 < 1) {
LAB_001867a4:
    FUN_001a52e0(param_4);
    return 0xfffffffa;
  }
  local_50 = &local_40;
  FUN_001726b2(param_1,param_2,&local_44,&local_48);
  if (((local_48 == 0) || (local_40 == 0)) ||
     ((*(int *)(local_40 + 0x20) == 0 ||
      (iVar2 = *(int *)(*(int *)(local_40 + 0x20) + 8), iVar2 == 0)))) goto LAB_001867a4;
  if (((param_4 == 0) && (iVar2 = FUN_001a6f04(iVar2,s_INVITE_00186a48), iVar2 == 0)) &&
     (param_3 - 200U < 100)) {
LAB_00186814:
    FUN_001a52e0(param_4);
    return 0xfffffffe;
  }
  cVar1 = *(char *)(local_40 + 0x2c);
  if ((((cVar1 == '\a') || (cVar1 == '\b')) || (cVar1 == '\t')) ||
     ((cVar1 == '\x12' || (cVar1 == '\x13')))) {
    FUN_001a52e0(param_4);
    return 0xfffffffd;
  }
  uVar3 = *(undefined4 *)(*(int *)(local_40 + 0x20) + 8);
  if (param_4 == 0) {
    iVar2 = FUN_001a6f04(uVar3,s_INVITE_00186a48);
    if (iVar2 == 0) {
      local_50 = &local_3c;
      local_4c = 1;
      uVar3 = FUN_0017184c(local_24,local_44,local_48,param_3);
      return uVar3;
    }
    goto LAB_00186814;
  }
  iVar2 = FUN_001a6f04(uVar3,s_INVITE_00186a48);
  if (((iVar2 != 0) &&
      (iVar2 = FUN_001a6f04(*(undefined4 *)(*(int *)(local_40 + 0x20) + 8),s_UPDATE_00186a50),
      iVar2 != 0)) || ((99 < *(int *)(param_4 + 0xc) - 200U || (local_48 == 0)))) goto LAB_001869ea;
  local_3c = 0;
  for (iVar2 = FUN_001a56f2(param_4,s_supported_00186a58,0,&local_3c); -1 < iVar2;
      iVar2 = FUN_001a56f2(param_4,s_supported_00186a58,iVar2 + 1,&local_3c)) {
    if (local_3c == 0) goto LAB_001869ea;
    if ((*(int *)(local_3c + 4) != 0) &&
       (iVar4 = FUN_00003374(*(int *)(local_3c + 4),s_timer_00186a64), iVar4 != 0)) break;
    local_3c = 0;
  }
  if (local_3c == 0) goto LAB_001869ea;
  local_34[0] = 0;
  FUN_001a56f2(*(undefined4 *)(local_40 + 0x20),s_session_expires_00186a6c,0,local_34);
  if ((local_34[0] == 0) &&
     (FUN_001a56f2(*(undefined4 *)(local_40 + 0x20),&DAT_00186a7c,0,local_34), local_34[0] == 0))
  goto LAB_001869ea;
  local_38 = 0;
  FUN_001a4528(local_34[0],&local_38);
  if (local_38 == 0) goto LAB_001869ea;
  local_50 = (int *)0x0;
  FUN_001a2f74(&local_50);
  if (local_50 == (int *)0x0) {
    FUN_001a4594(local_38);
LAB_0018692c:
    if (local_50 != (int *)0x0) {
      FUN_001a2f30();
    }
  }
  else {
    FUN_001a3268(local_50,*(undefined4 *)(local_34[0] + 4));
    if (*local_50 != 0) {
      local_2c[0] = 0;
      FUN_001a7c44(local_50 + 1,s_refresher_00186a80,local_2c);
      if (local_2c[0] == 0) {
        uVar3 = FUN_001a6f50(&DAT_00186a8c);
        uVar5 = FUN_001a6f50(s_refresher_00186a80);
        FUN_001a7adc(local_50 + 1,uVar5,uVar3);
        if (*(int *)(local_38 + 4) != 0) {
          if ((code *)*_DAT_00186a90 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*_DAT_00186a90)();
          }
        }
        *(undefined4 *)(local_38 + 4) = 0;
        FUN_001a302c(local_50,local_38 + 4);
        *(undefined4 *)(local_48 + 0x10) = 0;
      }
      else {
        iVar2 = FUN_001a6f04(*(undefined4 *)(local_2c[0] + 4),&DAT_00186a8c);
        if (iVar2 == 0) {
          *(undefined4 *)(local_48 + 0x10) = 0;
        }
        else {
          *(undefined4 *)(local_48 + 0x10) = 1;
        }
      }
      uVar3 = FUN_001a4490(0);
      *(undefined4 *)(local_48 + 8) = uVar3;
      iVar2 = FUN_0000317c(*local_50);
      *(int *)(local_48 + 0xc) = iVar2;
      if (iVar2 < 0x5b) {
        iVar2 = 0x5a;
      }
      *(int *)(local_48 + 0xc) = iVar2;
      FUN_001a4a80(param_4 + 0xc0,local_38,0);
      goto LAB_0018692c;
    }
    FUN_001a2f30();
    FUN_001a4594(local_38);
  }
  local_50 = (int *)0x0;
  for (iVar2 = FUN_001a56f2(*(undefined4 *)(local_40 + 0x20),s_supported_00186a58,0,&local_3c);
      -1 < iVar2;
      iVar2 = FUN_001a56f2(*(undefined4 *)(local_40 + 0x20),s_supported_00186a58,iVar2 + 1,&local_3c
                          )) {
    if (local_3c == 0) goto LAB_001869ea;
    if ((*(int *)(local_3c + 4) != 0) &&
       (iVar4 = FUN_00003374(*(int *)(local_3c + 4),s_timer_00186a64), iVar4 != 0)) break;
    local_3c = 0;
  }
  if (local_3c != 0) {
    FUN_001a6054(param_4,s_2__Require_00186a91 + 3,s_timer_00186a64);
  }
LAB_001869ea:
  iVar2 = FUN_001a6f04(*(undefined4 *)(*(int *)(local_40 + 0x20) + 8),s_INVITE_00186a48);
  if ((((iVar2 == 0) && (*(int *)(param_4 + 0xc) - 200U < 100)) && (local_48 != 0)) &&
     (param_3 - 200U < 100)) {
    FUN_00173b7c(local_48,param_4);
    FUN_001a3c88(*(undefined4 *)(local_48 + 4),0x15);
  }
  iVar2 = FUN_001a688c(param_4);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(local_40 + 4);
  FUN_001a7216(local_40,iVar2);
  FUN_001799e4(local_24);
  FUN_00179b24(local_24);
  return 0;
}

