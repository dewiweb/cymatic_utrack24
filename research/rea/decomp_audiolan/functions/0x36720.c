// rea decompile_all
// name: FUN_00036720
// address: 0x36720
// body: available
// range: 0x36720-0x3680b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036720(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r2;
  int extraout_r3;
  undefined8 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  int local_28;
  int local_24;
  
  uVar1 = DAT_00036850;
  uVar4 = _DAT_00036810;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 1;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 1;
  if (param_2 == 0) {
    iVar2 = FUN_00030b90(DAT_00036850);
    if (iVar2 != 0) {
      FUN_00029e6c(uVar1);
      FUN_00029eac(3,s_TIME__0_division_00036854);
      return;
    }
  }
  else {
    if (DAT_0003680c < param_2) {
      iVar2 = FUN_00030b90(_DAT_00036810);
      if (iVar2 != 0) {
        FUN_00029e6c(uVar4);
        FUN_00029eac(6,s__TIME__Bad_precision_because_div_00036813 + 1);
      }
    }
    iVar2 = *param_1;
    local_28 = param_1[1];
    local_24 = local_28;
    uVar5 = FUN_0000243c(iVar2,local_28,param_2,0);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_30 = (undefined4)uVar5;
    FUN_0000243c(iVar2,local_28,param_2,0);
    if ((extraout_r2 != 0 || extraout_r3 != 0) && (local_24 != 0 || iVar2 != 0)) {
      iVar3 = FUN_00002754(local_30,uVar4,param_2,0);
      local_38 = FUN_00006158(DAT_0003680c,param_2);
      FUN_00036868(&local_40,iVar2 - iVar3);
    }
    local_50 = local_30;
    local_4c = uVar4;
    FUN_000363bc(&local_40,&local_40,&local_50);
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 1;
    local_48 = FUN_00006158(param_1[2],param_2);
    local_34 = (undefined1)param_1[3];
    local_44 = (undefined1)param_1[3];
    FUN_000363bc(param_1,&local_50,&local_40);
  }
  return;
}

