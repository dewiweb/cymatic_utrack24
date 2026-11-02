// rea decompile_all
// name: FUN_0011da94
// address: 0x11da94
// body: available
// range: 0x11da94-0x11df67 inclusive
// range: 0x11dfbc-0x11e11f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0011da94(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_64;
  uint local_60;
  undefined1 auStack_5c [4];
  undefined1 local_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  uint local_4c;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  FUN_0011eda0();
  iVar1 = FUN_000a0f3c();
  if (iVar1 == 0x10) {
    FUN_000f4e84();
    uVar2 = FUN_000f4fc0();
    if (*DAT_0011df68 == '\0') {
      iVar1 = FUN_0022ed3c(param_1 + 0x25);
      if (iVar1 != 3) {
        uVar3 = FUN_0023299c(auStack_50,auStack_54);
        FUN_0024331c(param_1 + 0x25,3,uVar3);
        FUN_002329f0(auStack_50);
        uVar3 = FUN_0023299c(auStack_50,auStack_54);
        FUN_0024331c(param_1 + 0x28,3,uVar3);
        FUN_002329f0(auStack_50);
        uVar3 = FUN_0023299c(auStack_50,auStack_54);
        FUN_0024331c(param_1 + 0x2b,3,uVar3);
        FUN_002329f0(auStack_50);
      }
    }
    else {
      iVar1 = FUN_0022ed3c(param_1 + 0x25);
      if (iVar1 != 5) {
        uVar3 = FUN_0023299c(auStack_50,auStack_54);
        FUN_0024331c(param_1 + 0x25,5,uVar3);
        FUN_002329f0(auStack_50);
        uVar3 = FUN_0023299c(auStack_50,auStack_54);
        FUN_0024331c(param_1 + 0x28,5,uVar3);
        FUN_002329f0(auStack_50);
        uVar3 = FUN_0023299c(auStack_50,auStack_54);
        FUN_0024331c(param_1 + 0x2b,5,uVar3);
        FUN_002329f0(auStack_50);
      }
    }
    FUN_000028f8(auStack_48,0x1e,&DAT_0011df6c,param_1[0x36]);
    uVar3 = FUN_00232964(auStack_24,s_Firmware_0011df70,auStack_28);
    uVar4 = FUN_00243490(param_1 + 0x25,0);
    FUN_00232a4c(uVar4,uVar3);
    FUN_002329f0(auStack_24);
    uVar3 = FUN_00232964(auStack_24,auStack_48,auStack_28);
    uVar4 = FUN_00243490(param_1 + 0x28,0);
    FUN_00232a4c(uVar4,uVar3);
    FUN_002329f0(auStack_24);
    local_4c = FUN_001b5414(uVar2);
    local_60 = local_4c >> 0x18;
    local_64 = local_4c >> 0x10 & 0xff;
    FUN_000028f8(auStack_48,0x1e,s__d__d__d__d_0011df7c,local_4c & 0xff,local_4c >> 8 & 0xff);
    uVar3 = FUN_00232964(auStack_24,s_IP_Address_0011df88,auStack_28);
    uVar4 = FUN_00243490(param_1 + 0x25,1);
    FUN_00232a4c(uVar4,uVar3);
    FUN_002329f0(auStack_24);
    uVar3 = FUN_00232964(auStack_24,auStack_48,auStack_28);
    uVar4 = FUN_00243490(param_1 + 0x2b,1);
    FUN_00232a4c(uVar4,uVar3);
    FUN_002329f0(auStack_24);
    uVar3 = FUN_00232964(auStack_24,s_Device_Name_0011df94,auStack_28);
    uVar4 = FUN_00243490(param_1 + 0x25,2);
    FUN_00232a4c(uVar4,uVar3);
    FUN_002329f0(auStack_24);
    FUN_001b550c(auStack_24,uVar2);
    uVar3 = FUN_00243490(param_1 + 0x2b,2);
    FUN_00232a4c(uVar3,auStack_24);
    FUN_002329f0(auStack_24);
    if (*DAT_0011df68 != '\0') {
      uVar3 = FUN_00232964(auStack_50,&DAT_0011dfa0,auStack_54);
      uVar4 = FUN_00243490(param_1 + 0x25,3);
      FUN_00232a4c(uVar4,uVar3);
      FUN_002329f0(auStack_50);
      FUN_0011d960(auStack_50,param_1);
      uVar3 = FUN_00243490(param_1 + 0x2b,3);
      FUN_00232a4c(uVar3,auStack_50);
      FUN_002329f0(auStack_50);
      iVar1 = FUN_001b57c8(uVar2);
      if (iVar1 == 1) {
        uVar2 = FUN_00232964(auStack_5c,s_Madi_Version_0011dfa4,&local_60);
        uVar3 = FUN_00243490(param_1 + 0x25,4);
        FUN_00232a4c(uVar3,uVar2);
        FUN_002329f0(auStack_5c);
        uVar2 = FUN_00178f04();
        FUN_00178164(uVar2,local_58);
        FUN_000028cc(auStack_48,&DAT_0011dfb4,local_58[0]);
        FUN_00232964(&local_64,auStack_48,&local_60);
        uVar2 = FUN_00243490(param_1 + 0x2b,4);
        FUN_00232a4c(uVar2,&local_64);
        FUN_002329f0(&local_64);
      }
      else if (iVar1 == 2) {
        uVar2 = FUN_00232964(auStack_5c,s_Adat_Version_0011e120,&local_60);
        uVar3 = FUN_00243490(param_1 + 0x25,4);
        FUN_00232a4c(uVar3,uVar2);
        FUN_002329f0(auStack_5c);
        uVar2 = FUN_00178f04();
        FUN_00178148(uVar2,local_58);
        FUN_000028cc(auStack_48,&DAT_0011dfb4,local_58[0]);
        FUN_00232964(&local_64,auStack_48,&local_60);
        uVar2 = FUN_00243490(param_1 + 0x2b,4);
        FUN_00232a4c(uVar2,&local_64);
        FUN_002329f0(&local_64);
      }
      else if (iVar1 == 3) {
        uVar2 = FUN_00232964(auStack_5c,s_Audiolan_Card_0011e130,&local_60);
        uVar3 = FUN_00243490(param_1 + 0x25,4);
        FUN_00232a4c(uVar3,uVar2);
        FUN_002329f0(auStack_5c);
      }
      else {
        uVar2 = FUN_00232964(auStack_5c,s_No_Digital_Card_0011e140,&local_60);
        uVar3 = FUN_00243490(param_1 + 0x25,4);
        FUN_00232a4c(uVar3,uVar2);
        FUN_002329f0(auStack_5c);
      }
    }
    iVar1 = (**(code **)(*param_1 + 0x74))(param_1,0);
  }
  return iVar1;
}

