// rea decompile_all
// name: FUN_0010e870
// address: 0x10e870
// body: available
// range: 0x10e870-0x10ec47 inclusive
// range: 0x10ecac-0x10eeaf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0010e870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  undefined1 *local_68;
  undefined4 local_64;
  undefined1 auStack_60 [4];
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [4];
  undefined1 *local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [4];
  undefined1 *local_44;
  undefined4 local_40;
  byte *local_3c;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  iVar2 = FUN_0010fce8(param_1,param_2,param_3,param_4,param_5,param_6);
  piVar3 = (int *)FUN_00143204(iVar2 + 0xd4);
  iVar2 = _DAT_0010ec48;
  piVar3[-0x35] = _DAT_0010ec48;
  piVar3[-0x2f] = iVar2 + 0xa8;
  *piVar3 = iVar2 + 0xb8;
  *(undefined1 *)(piVar3 + 1) = 0;
  *(undefined1 *)((int)piVar3 + 0xb) = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  uVar4 = FUN_00230cf8(auStack_28);
  iVar2 = FUN_00244410(piVar3 + 4,uVar4);
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(iVar2 + 0xd) = 0;
  uVar4 = FUN_00178f04();
  local_3c = (byte *)FUN_00177ba0(uVar4,0);
  *(char *)(iVar2 + 0xd) = (char)((int)(*local_3c & 0x70) >> 4);
  local_44 = auStack_30;
  uVar4 = FUN_00232964(auStack_2c,s___Clock_Source_0010ec4a + 2,local_44);
  FUN_002433a8(iVar2 + -0x50,uVar4);
  FUN_002329f0(auStack_2c);
  local_34 = 0x20;
  FUN_002443b0(iVar2,&local_34);
  local_44 = auStack_30;
  uVar4 = FUN_00232964(auStack_2c,s_FootSwitch_0010ec5c,local_44);
  FUN_002433a8(iVar2 + -0x50,uVar4);
  FUN_002329f0(auStack_2c);
  local_34 = 0x23;
  FUN_002443b0(iVar2,&local_34);
  local_44 = auStack_30;
  uVar4 = FUN_00232964(auStack_2c,s_Device_Mode_0010ec68,local_44);
  FUN_002433a8(iVar2 + -0x50,uVar4);
  FUN_002329f0(auStack_2c);
  local_34 = 0x22;
  FUN_002443b0(iVar2,&local_34);
  local_44 = auStack_30;
  uVar4 = FUN_00232964(auStack_2c,s_Recording_0010ec74,local_44);
  FUN_002433a8(iVar2 + -0x50,uVar4);
  FUN_002329f0(auStack_2c);
  local_34 = 0x24;
  FUN_002443b0(iVar2,&local_34);
  local_44 = auStack_30;
  uVar4 = FUN_00232964(auStack_2c,s_Playback_0010ec80,local_44);
  FUN_002433a8(iVar2 + -0x50,uVar4);
  FUN_002329f0(auStack_2c);
  local_34 = 0x25;
  FUN_002443b0(iVar2,&local_34);
  FUN_00178f04();
  iVar5 = FUN_001bf388();
  if (iVar5 != 0) {
    local_50 = auStack_48;
    uVar4 = FUN_00232964(&local_44,&DAT_0010ec8c,local_50);
    FUN_002433a8(iVar2 + -0x50,uVar4);
    FUN_002329f0(&local_44);
    local_4c = 0x34;
    FUN_002443b0(iVar2,&local_4c);
  }
  cVar1 = *(char *)(iVar2 + 0xd);
  if (cVar1 == '\x01') {
    local_50 = auStack_48;
    uVar4 = FUN_00232964(&local_44,s_Inputs_0010ec94,local_50);
    FUN_002433a8(iVar2 + -0x50,uVar4);
    FUN_002329f0(&local_44);
    local_4c = 0x28;
    FUN_002443b0(iVar2,&local_4c);
    local_50 = auStack_48;
    uVar4 = FUN_00232964(&local_44,&DAT_0010ec9c,local_50);
    FUN_002433a8(iVar2 + -0x50,uVar4);
    FUN_002329f0(&local_44);
    local_4c = 0x29;
    FUN_002443b0(iVar2,&local_4c);
  }
  else if (cVar1 == '\x02') {
    local_5c = auStack_54;
    uVar4 = FUN_00232964(&local_50,s_Inputs_0010ec94,local_5c);
    FUN_002433a8(iVar2 + -0x50,uVar4);
    FUN_002329f0(&local_50);
    local_58 = 0x28;
    FUN_002443b0(iVar2,&local_58);
    local_5c = auStack_54;
    uVar4 = FUN_00232964(&local_50,&DAT_0010eca4,local_5c);
    FUN_002433a8(iVar2 + -0x50,uVar4);
    FUN_002329f0(&local_50);
    local_58 = 0x2b;
    FUN_002443b0(iVar2,&local_58);
  }
  else if (cVar1 == '\x03') {
    FUN_00178f04(3);
    iVar5 = FUN_001bf388();
    if (iVar5 == 0) {
      uVar4 = FUN_00232964(&local_68,s_AudioLan_Card_0010eeb0,auStack_6c);
      FUN_002433a8(iVar2 + -0x50,uVar4);
      FUN_002329f0(&local_68);
      local_70 = 0x2d;
      FUN_002443b0(iVar2,&local_70);
    }
    local_68 = auStack_60;
    uVar4 = FUN_00232964(&local_5c,s_Inputs_0010ec94,local_68);
    FUN_002433a8(iVar2 + -0x50,uVar4);
    FUN_002329f0(&local_5c);
    local_64 = 0x28;
    FUN_002443b0(iVar2,&local_64);
  }
  local_44 = auStack_30;
  uVar4 = FUN_00232964(auStack_2c,s_Utilities_0010eec0,local_44);
  FUN_002433a8(iVar2 + -0x50,uVar4);
  FUN_002329f0(auStack_2c);
  local_34 = 0x2e;
  FUN_002443b0(iVar2,&local_34);
  local_44 = auStack_30;
  uVar4 = FUN_00232964(auStack_2c,s_Load_Settings_0010eecc,local_44);
  FUN_002433a8(iVar2 + -0x50,uVar4);
  FUN_002329f0(auStack_2c);
  local_34 = 0x31;
  FUN_002443b0(iVar2,&local_34);
  local_44 = auStack_30;
  uVar4 = FUN_00232964(auStack_2c,s_Save_Settings_0010eedc,local_44);
  FUN_002433a8(iVar2 + -0x50,uVar4);
  FUN_002329f0(auStack_2c);
  local_34 = 0x32;
  FUN_002443b0(iVar2,&local_34);
  local_44 = auStack_30;
  uVar4 = FUN_0023299c(auStack_38,local_44);
  FUN_0024331c(iVar2 + -0x44,0xc,uVar4);
  FUN_002329f0(auStack_38);
  uVar4 = FUN_000f4e84();
  FUN_000f4e44(uVar4,iVar2 + -0x10);
  FUN_000f4e84();
  uVar4 = FUN_000f4fc0();
  local_40 = FUN_001b557c(uVar4);
  FUN_000be04c(iVar2 + -0xcc,local_40);
  return iVar2 + -0xe4;
}

