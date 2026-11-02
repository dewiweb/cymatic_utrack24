// rea decompile_all
// name: FUN_0017e59c
// address: 0x17e59c
// body: available
// range: 0x17e59c-0x17e88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017e59c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (((*DAT_0017e88c & 1) == 0) &&
     (iVar5 = FUN_0016ddfa(DAT_0017e88c), uVar2 = DAT_0017e894, puVar1 = DAT_0017e890, iVar5 != 0))
  {
    DAT_0017e890[1] = s_shell_0017e898;
    puVar1[2] = s_shell___b__i__o__s____shell_conf_0017e8a0;
    puVar1[3] = uVar2;
    puVar1[4] = 1;
    uVar2 = DAT_0017e8d0;
    *puVar1 = DAT_0017e8cc;
    FUN_0016dd44(puVar1,DAT_0017e8d4,uVar2);
  }
  FUN_0014d890(DAT_0017e890,0);
  if (((*DAT_0017e8d8 & 1) == 0) &&
     (iVar5 = FUN_0016ddfa(DAT_0017e8d8), puVar1 = DAT_0017e8dc, iVar5 != 0)) {
    DAT_0017e8dc[1] = s_clear_0017e8e0;
    puVar1[2] = s_clear_shell_history_0017e8e8;
    puVar1[3] = &DAT_0017e8fc;
    puVar1[4] = 0;
    uVar2 = DAT_0017e8d0;
    *puVar1 = DAT_0017e900;
    FUN_0016dd44(puVar1,DAT_0017e904,uVar2);
  }
  FUN_0014d890(DAT_0017e8dc,0);
  if (((*DAT_0017e908 & 1) == 0) &&
     (iVar5 = FUN_0016ddfa(DAT_0017e908), puVar1 = DAT_0017e90c, iVar5 != 0)) {
    DAT_0017e90c[1] = &DAT_0017e910;
    puVar1[2] = s_pwd___shows_the_complete_current_0017e914;
    puVar1[3] = s_usage__pwd_0017e944;
    puVar1[4] = 0;
    uVar2 = DAT_0017e8d0;
    *puVar1 = DAT_0017e954;
    FUN_0016dd44(puVar1,DAT_0017e958,uVar2);
  }
  FUN_0014d890(DAT_0017e90c,0);
  uVar2 = DAT_0017e960;
  if (((*DAT_0017e95c & 1) == 0) &&
     (iVar6 = FUN_0016ddfa(DAT_0017e95c), iVar5 = DAT_0017e968, puVar1 = DAT_0017e964, iVar6 != 0))
  {
    iVar6 = DAT_0017e968 + -300;
    DAT_0017e964[1] = &DAT_0017e96c;
    puVar1[2] = iVar5;
    puVar1[3] = iVar6;
    puVar1[4] = 0;
    uVar3 = DAT_0017e8d0;
    *puVar1 = DAT_0017e970;
    puVar1[6] = 0;
    uVar4 = DAT_0017e974;
    puVar1[5] = uVar2;
    FUN_0016dd44(puVar1,uVar4,uVar3);
  }
  FUN_0014d890(DAT_0017e964,0);
  if (((*DAT_0017e978 & 1) == 0) &&
     (iVar6 = FUN_0016ddfa(DAT_0017e978), iVar5 = DAT_0017e980, puVar1 = DAT_0017e97c, iVar6 != 0))
  {
    iVar6 = DAT_0017e980 + -0xec;
    DAT_0017e97c[1] = &DAT_0017e984;
    puVar1[2] = iVar5;
    puVar1[3] = iVar6;
    puVar1[4] = 0;
    uVar3 = DAT_0017e8d0;
    *puVar1 = DAT_0017e988;
    puVar1[6] = 0;
    uVar4 = DAT_0017e98c;
    puVar1[5] = uVar2;
    FUN_0016dd44(puVar1,uVar4,uVar3);
  }
  FUN_0014d890(DAT_0017e97c,0);
  if (((*DAT_0017e990 & 1) == 0) &&
     (iVar5 = FUN_0016ddfa(DAT_0017e990), uVar3 = DAT_0017e998, puVar1 = DAT_0017e994, iVar5 != 0))
  {
    DAT_0017e994[1] = &DAT_0017e99c;
    puVar1[2] = s_ls___r__n__e__v____shows_content_0017e9a0;
    puVar1[3] = uVar3;
    puVar1[4] = 0;
    uVar3 = DAT_0017e8d0;
    *puVar1 = DAT_0017e9d8;
    puVar1[6] = 0;
    uVar4 = DAT_0017e9dc;
    puVar1[5] = uVar2;
    FUN_0016dd44(puVar1,uVar4,uVar3);
  }
  FUN_0014d890(DAT_0017e994,0);
  if (((*DAT_0017e9e0 & 1) == 0) &&
     (iVar5 = FUN_0016ddfa(DAT_0017e9e0), uVar3 = DAT_0017e9e8, puVar1 = DAT_0017e9e4, iVar5 != 0))
  {
    DAT_0017e9e4[1] = &DAT_0017e9ec;
    puVar1[2] = s_cd_<dir>___changes_current_direc_0017e9f0;
    puVar1[3] = uVar3;
    puVar1[4] = 0;
    uVar3 = DAT_0017e8d0;
    *puVar1 = DAT_0017ea20;
    puVar1[6] = 0;
    uVar4 = DAT_0017ea24;
    puVar1[5] = uVar2;
    FUN_0016dd44(puVar1,uVar4,uVar3);
  }
  FUN_0014d890(DAT_0017e9e4,0);
  return 0;
}

