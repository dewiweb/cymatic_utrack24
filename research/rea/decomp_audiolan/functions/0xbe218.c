// rea decompile_all
// name: FUN_000be218
// address: 0xbe218
// body: available
// range: 0xbe218-0xbe463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000be218(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if ((param_2 == 0) && (iVar2 = FUN_000ba618(param_3,param_4,param_5), iVar2 == 0)) {
    FUN_000028a4(_DAT_000be4b8,local_2c,local_28,param_5);
    return 0;
  }
  iVar2 = FUN_00041c14(s__cfg_Networking_IpCfg_Config0_000be464,&local_40);
  if (iVar2 != 0) {
    iVar2 = FUN_00048f94(local_40,s_DHCPClient_000be484,param_2);
    iVar3 = FUN_00042a98(local_40,&DAT_000be490,local_2c);
    local_3c = FUN_00042a98(local_40,&DAT_000be494,local_28);
    local_38 = FUN_00042a98(local_40,s_DefGW_000be49c,param_5);
    if (param_6 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_00042a98(local_40,s_DNSSrv1_000be4a4,param_6);
    }
    if (param_7 == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = FUN_00042a98(local_40,s_DNSSrv2_000be4ac,param_7);
    }
    FUN_00041dd4(local_40);
    uVar1 = DAT_000be4b4;
    if (iVar2 != 0) {
      if (iVar3 == 0) {
        FUN_000028a4(s__ERROR__RavennaConfiguration__Co_000be4bb + 1,&DAT_000be490);
        return 0;
      }
      if (local_3c == 0) {
        FUN_000028a4(s__ERROR__RavennaConfiguration__Co_000be4bb + 1,&DAT_000be494);
        return 0;
      }
      if (local_38 == 0) {
        FUN_000028a4(s__ERROR__RavennaConfiguration__Co_000be4bb + 1,s_DefGW_000be49c);
        return 0;
      }
      if (iVar4 != 0) {
        if (iVar5 == 0) {
          FUN_000028a4(s__ERROR__RavennaConfiguration__Co_000be4bb + 1,s_DNSSrv2_000be4ac);
          return 0;
        }
        FUN_001a0700();
        *(char *)(param_1 + 0x22e) = (char)param_2;
        FUN_001da458(param_1 + 0x230,local_2c);
        FUN_001da458(param_1 + 0x238,local_28);
        FUN_001da458(param_1 + 0x240,param_5);
        if (param_6 != 0) {
          FUN_001da458(param_1 + 0x248,param_6);
        }
        if (param_7 != 0) {
          FUN_001da458(param_1 + 0x24c,param_7);
        }
        *(undefined1 *)(param_1 + 0x250) = 1;
        FUN_001a0d18(uVar1);
        return 1;
      }
      FUN_000028a4(s__ERROR__RavennaConfiguration__Co_000be4bb + 1,s_DNSSrv1_000be4a4);
      return 0;
    }
  }
  FUN_000028a4(s__ERROR__RavennaConfiguration__Co_000be4bb + 1,s_DHCPClient_000be484);
  return 0;
}

