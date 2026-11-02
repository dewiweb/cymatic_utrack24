// rea decompile_all
// name: FUN_00171cd0
// address: 0x171cd0
// body: available
// range: 0x171cd0-0x171f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00171cd0(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 auStack_2c [8];
  int local_24;
  undefined4 *puStack_20;
  int iStack_1c;
  int iStack_18;
  
  *param_2 = 0;
  if (param_5 == 0) {
    return -2;
  }
  local_24 = param_1;
  puStack_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  iVar1 = FUN_001a5740(&local_40);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((code *)*DAT_00171f2c == entry) {
    iVar1 = FUN_0019b388(8);
  }
  else {
    iVar1 = (*(code *)*DAT_00171f2c)(8);
  }
  *local_40 = iVar1;
  if (iVar1 == 0) {
    FUN_001a52e0(local_40);
    return -4;
  }
  FUN_000028d8(iVar1,s_SIP_2_0_00171f30);
  FUN_001a6730(local_40,param_4);
  if (*(int *)(param_5 + 0xc) == 0) {
    iVar1 = FUN_00003960(*(undefined4 *)(param_5 + 8),s_NOTIFY_00171f38);
    if ((iVar1 == 0) && (param_4 == 0x1e1)) {
      iVar1 = FUN_001a6f50(s_Subscription_Does_Not_Exist_00171f40);
      local_40[4] = iVar1;
    }
    else {
      if ((*(int *)(param_5 + 0xc) != 0) ||
         ((iVar1 = FUN_00003960(*(undefined4 *)(param_5 + 8),s_SUBSCRIBE_00171f5c), iVar1 != 0 ||
          (param_4 != 0xca)))) goto LAB_00171d6c;
      iVar1 = FUN_001a6f50(s_Accepted_subscription_00171f68);
      local_40[4] = iVar1;
    }
  }
  else {
LAB_00171d6c:
    FUN_001a55bc(param_4);
    iVar1 = FUN_001a6f50();
    local_40[4] = iVar1;
    if (iVar1 == 0) {
      if (local_40[3] == 0x65) {
        iVar1 = FUN_001a6f50(s_Dialog_Establishement_00171f90);
        local_40[4] = iVar1;
      }
      else {
        iVar1 = FUN_001a6f50(s_Unknown_code_00171f80);
        local_40[4] = iVar1;
      }
    }
    local_40[1] = 0;
    local_40[2] = 0;
  }
  if (local_40[4] == 0) {
    FUN_001a52e0();
    return -4;
  }
  local_34 = FUN_001a71c8(*(undefined4 *)(param_5 + 0xac),local_40 + 0x2b);
  if (local_34 != 0) {
    FUN_001a52e0();
    return local_34;
  }
  iVar1 = FUN_001a7c44(local_40[0x2b] + 8,&DAT_00171fa8,auStack_2c);
  if (iVar1 != 0) {
    if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
      if (param_4 == 100) goto LAB_00171e3a;
      uVar2 = FUN_00175c28();
      uVar3 = FUN_001a6f50(&DAT_00171fa8);
      iVar1 = local_40[0x2b];
    }
    else {
      uVar2 = FUN_001a6f50();
      uVar3 = FUN_001a6f50(&DAT_00171fa8);
      iVar1 = local_40[0x2b];
    }
    FUN_001a7adc(iVar1 + 8,uVar3,uVar2);
  }
LAB_00171e3a:
  iVar1 = FUN_001a3ee4(*(undefined4 *)(param_5 + 0x7c),local_40 + 0x1f);
  if (iVar1 == 0) {
    local_30 = param_5 + 0xb0;
    iVar1 = 0;
    while (iVar4 = FUN_001a4bc4(local_30,iVar1), iVar4 == 0) {
      uVar2 = FUN_001a4bdc(local_30,iVar1);
      iVar4 = FUN_001a87ec(uVar2,&local_3c);
      if (iVar4 != 0) {
        FUN_001a52e0(local_40);
        return iVar4;
      }
      FUN_001a4a80(local_40 + 0x2c,local_3c,0xffffffff);
      iVar1 = iVar1 + 1;
    }
    iVar1 = FUN_001a2c4c(*(undefined4 *)(param_5 + 0x4c),local_40 + 0x13);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_001a3798(*(undefined4 *)(param_5 + 0x70),local_40 + 0x1c), iVar1 == 0)) {
      if ((*(int *)(param_5 + 0xc) == 0) &&
         (iVar1 = FUN_00003960(*(undefined4 *)(param_5 + 8),s_SUBSCRIBE_00171f5c), iVar1 == 0)) {
        FUN_001a56f2(param_5,s_event_00171fac,0,&local_38);
        if ((local_38 == 0) || (pcVar5 = *(char **)(local_38 + 4), pcVar5 == (char *)0x0)) {
          pcVar5 = s_presence_00171fc4;
        }
        FUN_001a6054(local_40,s_Event_00171fb4,pcVar5);
        FUN_001a56f2(param_5,s_expires_00171fbc,0,&local_3c);
        if ((local_3c == 0) && (FUN_001a4528(0,&local_34), local_34 != 0)) {
          FUN_001a4a80(local_40 + 0x30,local_34,0);
        }
      }
      FUN_001a6054(local_40,s_User_Agent_00171fd0,*(undefined4 *)(local_24 + 0x84));
      *param_2 = local_40;
      return 0;
    }
  }
  FUN_001a52e0(local_40);
  return iVar1;
}

