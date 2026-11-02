// rea decompile_all
// name: FUN_000c0228
// address: 0xc0228
// body: available
// range: 0xc0228-0xc041b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000c0228(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  wchar16 *pwVar6;
  undefined1 auStack_470 [32];
  undefined1 auStack_450 [4];
  undefined1 auStack_44c [512];
  undefined1 auStack_24c [512];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_38 = 0;
  local_3c = 0;
  local_30 = param_1;
  uStack_2c = param_2;
  iStack_28 = param_3;
  uVar1 = FUN_000bfe18(param_1);
  local_40 = FUN_000beb60(local_30);
  local_40 = local_40 & 0xff;
  uVar2 = FUN_000bda98(local_30);
  local_44 = FUN_000bdc24(local_30);
  local_48 = 0;
  local_4c = 0x7fffffff;
  uVar4 = param_2;
  if (param_3 == 0) {
    pwVar6 = u_Take_000c0460;
    iVar3 = FUN_00002934(auStack_24c,0x100,u__ls__ls_04d_000c0448,u_MultiTrack_000c0430,
                         u_Take_000c0460,param_2);
  }
  else {
    pwVar6 = u__TempTake_000c041c;
    iVar3 = FUN_00002934(auStack_24c,0x100,u__ls__ls_04d_000c0448,u_MultiTrack_000c0430,
                         u__TempTake_000c041c,param_2);
  }
  FUN_00002934(auStack_24c + iVar3 * 2,0xff - iVar3,&DAT_000c0470,&DAT_000c046c,pwVar6,uVar4);
  FUN_00002934(auStack_44c,0x100,u__ls_ls_04d__04d__s_000c0480,auStack_24c,u_Take_000c0460,param_2,1
               ,&DAT_000c0478);
  uVar4 = FUN_00230e4c(auStack_34);
  FUN_00231ef4(auStack_450,auStack_44c,uVar4);
  uVar4 = FUN_000bdc24(local_30);
  FUN_00081050(*_DAT_000c04c8,s_SR__d_depth__d__ActiveTracks__d_000c04a8,uVar4,uVar2,uVar1);
  FUN_00147cf8(auStack_470,local_38,local_40,local_3c,uVar1,uVar2,8,0x300000,local_44,auStack_450,1,
               local_48,local_4c);
  piVar5 = (int *)FUN_000f8ee0();
  iVar3 = (**(code **)(*piVar5 + 0x80))(piVar5,auStack_470);
  if (iVar3 != 0) {
    FUN_00147d8c(auStack_470);
    FUN_00232190(auStack_450);
  }
  else {
    FUN_00002898(s____ERROR__ERROR_in_configuring_E_000c04c9 + 3);
    FUN_00081050(*_DAT_000c04c8,s_Error__Could_not_configure_Encod_000c04f4);
    FUN_00147d8c(auStack_470);
    FUN_00232190(auStack_450);
  }
  return iVar3 != 0;
}

