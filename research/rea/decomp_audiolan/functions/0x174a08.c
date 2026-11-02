// rea decompile_all
// name: FUN_00174a08
// address: 0x174a08
// body: available
// range: 0x174a08-0x174bbd inclusive
// range: 0x174bc0-0x174bc7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00174a08(int *param_1,int param_2,int *param_3,int param_4,int param_5,undefined4 param_6,
                int param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_d0;
  int local_cc;
  undefined4 uStack_c8;
  char local_c4 [68];
  char local_80 [68];
  undefined1 local_3c [12];
  undefined1 auStack_30 [12];
  int *piStack_24;
  int iStack_20;
  int *piStack_1c;
  int local_18;
  
  if (*param_1 < 1) {
    return -10;
  }
  local_80[0] = '\0';
  local_3c[0] = 0;
  piStack_24 = param_1;
  iStack_20 = param_2;
  piStack_1c = param_3;
  local_18 = param_4;
  if ((code *)param_1[0x17] != entry) {
    local_d0 = 10;
    (*(code *)param_1[0x17])(param_1,local_80,0x41,local_3c);
  }
  local_d0 = local_18;
  local_cc = param_5;
  uStack_c8 = param_6;
  iVar1 = FUN_00174c00(param_1,param_3,s_REGISTER_00174bc8,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_000038a0(local_c4,0x44);
  FUN_00175564(param_1,param_1[0xb],local_c4,0x31);
  if (local_c4[0] == '\0') {
    FUN_001a52e0(*param_3);
    *param_3 = 0;
    return -10;
  }
  if (param_7 != 0) {
    FUN_001a5d38(*param_3,param_7);
    goto LAB_00174a82;
  }
  local_cc = 0;
  local_d0 = 0;
  iVar1 = FUN_001a321c(&local_cc);
  if (iVar1 == 0) {
    iVar1 = FUN_001a7a88(&local_d0);
  }
  *(int *)(local_cc + 4) = local_d0;
  if (((iVar1 == 0) && (*(int *)(*param_3 + 0x7c) != 0)) &&
     (iVar1 = *(int *)(*(int *)(*param_3 + 0x7c) + 4), iVar1 != 0)) {
    if (*(int *)(iVar1 + 4) != 0) {
      uVar2 = FUN_001a6f50();
      *(undefined4 *)(local_d0 + 4) = uVar2;
      if ((*(int *)(*param_3 + 0x7c) == 0) || (*(int *)(*(int *)(*param_3 + 0x7c) + 4) == 0))
      goto LAB_00174bc0;
    }
    if ((local_80[0] == '\0') || (*(int *)(*(int *)(*param_3 + 4) + 0xc) == 0)) {
      uVar2 = FUN_001a6f50(local_c4);
      *(undefined4 *)(local_d0 + 0xc) = uVar2;
      uVar2 = FUN_001a6f50(local_3c);
      *(undefined4 *)(local_d0 + 0x10) = uVar2;
    }
    else {
      uVar2 = FUN_001a6f50(local_80);
      *(undefined4 *)(local_d0 + 0xc) = uVar2;
      uVar2 = FUN_001a6f50(local_3c);
      *(undefined4 *)(local_d0 + 0x10) = uVar2;
    }
    if ((local_18 != 0) && (iVar1 = FUN_001a6f04(local_18,&DAT_00174be4), iVar1 != 0)) {
      uVar2 = FUN_001a6f50(local_18);
      uVar3 = FUN_001a6f50(s_transport_00174be8);
      FUN_001a7adc(local_d0 + 0x14,uVar3,uVar2);
    }
    if (*(char *)(param_2 + 0x18) != '\0') {
      uVar2 = FUN_001a6f50(param_2 + 0x18);
      uVar3 = FUN_001a6f50(&DAT_00174bf4);
      FUN_001a7adc(local_d0 + 0x14,uVar3,uVar2);
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      uVar2 = FUN_001a6f50(param_2 + 0x28);
      uVar3 = FUN_001a6f50(&DAT_00174bfc);
      FUN_001a7adc(local_cc + 8,uVar3,uVar2);
    }
    FUN_001a4a80(*param_3 + 0x58,local_cc,0xffffffff);
  }
  else {
LAB_00174bc0:
    FUN_001a3214(local_cc);
  }
LAB_00174a82:
  FUN_000027f4(auStack_30,9,&DAT_00174bd4,param_8);
  FUN_001a6054(*param_3,s_Expires_00174bd8,auStack_30);
  FUN_001a5dfc(*param_3,&DAT_00174be0);
  return 0;
}

