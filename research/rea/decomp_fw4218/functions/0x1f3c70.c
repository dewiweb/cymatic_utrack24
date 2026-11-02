// rea decompile_all
// name: FUN_001f3c70
// address: 0x1f3c70
// body: available
// range: 0x1f3c70-0x1f3dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f3c70(int param_1,int param_2,undefined2 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int iStack_20;
  int iStack_1c;
  undefined2 *local_18;
  
  iVar2 = param_1 + DAT_001f3dc0;
  iVar4 = param_2 + 0x130;
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  if (*(int *)(param_2 + 0xf8) != 0) {
    uVar3 = FUN_00025930(*(undefined2 *)(param_2 + 0x230));
    FUN_0002a1c6(0,s_sendChallengeResponse__ERROR____q_001f3dc4,iVar4,uVar3);
    return;
  }
  if ((*(int *)(param_2 + 0x34) != 0) && (*(int *)(*(int *)(param_2 + 0x34) + 8) != 0)) {
    uVar3 = FUN_00025930(*(undefined2 *)(param_2 + 0x230));
    FUN_0002a1c6(0,s_sendChallengeResponse__ERROR____P_001f3e04,iVar4,uVar3);
    return;
  }
  sVar1 = *(short *)(param_2 + 0x108);
  *(short *)(param_2 + 0x108) = sVar1 + 1;
  iVar5 = param_1 + 0xc0;
  if (sVar1 == 3) {
    FUN_0002a1c6(0,s_sendChallengeResponse___d_failed_001f3e3c,3,iVar4);
  }
  else {
    if (param_3 == (undefined2 *)0x0) {
      local_3c = 1;
      local_3a = 1;
      local_38 = 0;
      local_30 = *(undefined4 *)(param_2 + 0x110);
      local_34 = *(undefined4 *)(param_2 + 0x10c);
      local_2c = *(undefined4 *)(param_2 + 0x100);
      local_18 = &local_3c;
    }
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xdc);
    if (*(int *)(param_2 + 0xf8) == 0) {
      iVar4 = *DAT_001f3e74 * *(short *)(param_2 + 0x108) * 2;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_2 + 0x10) = iVar4;
    FUN_00044250(param_1,param_2);
    local_28 = param_1 + DAT_001f3e7c;
    FUN_000291f8(local_28,*(undefined2 *)(param_2 + 0x12e),*DAT_001f3e78);
    iVar2 = FUN_001f2aa0(local_28,iVar2,param_2,local_18);
    if (iVar2 != 0) {
      iVar2 = FUN_001e5b84(param_1,local_28,iVar2,*DAT_001f3e80,*(undefined4 *)(param_2 + 0xc0),
                           param_2 + 0xe0,*(undefined2 *)(param_2 + 0xf4),0,0);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(param_2 + 0xf8) == 0) {
        pcVar6 = &DAT_001f3e8c;
      }
      else {
        pcVar6 = s__TCP__001f3e84;
      }
      FUN_0002a1c6(0,s_sendChallengeResponse__mDNSSendD_001f3e90,pcVar6);
      return;
    }
  }
  *(undefined1 *)(param_2 + 0xff) = 4;
  iVar2 = *DAT_001f3e74;
  *(int *)(param_2 + 0x10) = iVar2 * 3;
  *(int *)(param_2 + 0xc) = *(int *)(iVar5 + 0x1c) + iVar2 * -3 + 1;
  FUN_00044250(param_1,param_2);
  return;
}

