// rea decompile_all
// name: FUN_00187d6c
// address: 0x187d6c
// body: available
// range: 0x187d6c-0x187e81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00187d6c(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [2];
  int local_34;
  int local_30;
  int local_2c [3];
  undefined4 local_20;
  int iStack_1c;
  int *piStack_18;
  
  local_34 = 0;
  local_40 = 0;
  *param_3 = 0;
  if (param_2 < 1) {
    return -2;
  }
  local_20 = param_1;
  iStack_1c = param_2;
  piStack_18 = param_3;
  FUN_001794d8(param_1,param_2,&local_40,&local_34);
  if (local_34 == 0) {
    return -6;
  }
  iVar2 = FUN_001746cc(local_40);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x2c);
    if ((((cVar1 != '\x0e') && (cVar1 != '\x13')) && (cVar1 != '\r')) && (cVar1 != '\x12')) {
      return -3;
    }
    if ((*(int *)(iVar2 + 0x20) != 0) &&
       (puVar3 = (undefined *)FUN_0017998e(), puVar3 != (undefined *)0x0)) goto LAB_00187dd2;
  }
  puVar3 = &DAT_00187e84;
LAB_00187dd2:
  iVar4 = FUN_00171930(local_20,param_3,s_SUBSCRIBE_00187e88,*(undefined4 *)(local_34 + 4),puVar3);
  if (iVar4 != 0) {
    return iVar4;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
    local_30 = 0;
    local_2c[0] = 0;
    iVar4 = FUN_001a56f2(*(int *)(iVar2 + 0x20),s_supported_00187e94,0,&local_30);
    while (((-1 < iVar4 && (local_30 != 0)) &&
           (iVar5 = FUN_001a4528(local_30,&local_44), iVar5 == 0))) {
      FUN_001a4a80(*param_3 + 0xc0,local_44,0xffffffff);
      local_30 = 0;
      iVar4 = FUN_001a56f2(*(undefined4 *)(iVar2 + 0x20),s_supported_00187e94,iVar4 + 1,&local_30);
    }
    iVar4 = FUN_001a5500(*(undefined4 *)(iVar2 + 0x20),0,local_2c);
    while (((-1 < iVar4 && (local_2c[0] != 0)) &&
           (iVar5 = FUN_001a2eb4(local_2c[0],local_3c), iVar5 == 0))) {
      FUN_001a4a80(*param_3 + 0x50,local_3c[0],0xffffffff);
      local_2c[0] = 0;
      iVar4 = FUN_001a5500(*(undefined4 *)(iVar2 + 0x20),iVar4 + 1,local_2c);
    }
  }
  FUN_001712b4(local_20,*param_3,0);
  return 0;
}

