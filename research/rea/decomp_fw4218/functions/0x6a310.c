// rea decompile_all
// name: FUN_0006a310
// address: 0x6a310
// body: available
// range: 0x6a310-0x6a533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0006a310(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 local_78;
  uint local_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [20];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [16];
  
  iVar1 = FUN_001b6c4c(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_0013879c(auStack_48);
    piVar3 = (int *)FUN_0022bc9c(param_2);
    local_78 = FUN_00201f28(auStack_3c,0);
    uVar2 = FUN_001aaf10(auStack_34,s_sds___cne_AppSettings_MixerContr_0006a534,local_78);
    local_74 = (**(code **)(*piVar3 + 0x20))(piVar3,uVar2,auStack_48);
    local_74 = local_74 ^ 1;
    FUN_001aafac(auStack_34);
    FUN_00201f54(auStack_3c);
    if (local_74 == 0) {
      uVar2 = 1;
      FUN_001a2920(auStack_70,param_1 + 0x144);
      for (uVar6 = 0; uVar5 = FUN_0022e594(param_1 + 0xc0), uVar6 < uVar5; uVar6 = uVar6 + 1 & 0xff)
      {
        FUN_000028cc(auStack_68,s___CH_02d_Fader_dB_0006a55a + 2,uVar6 + 1);
        iVar1 = FUN_001ffee4(&local_4c,auStack_68,auStack_48);
        if (iVar1 == 0) {
          FUN_00002898(DAT_0006a56c,auStack_68);
          uVar2 = 0;
        }
        else {
          puVar4 = (undefined4 *)FUN_0023d888(param_1 + 0xc0,uVar6);
          *puVar4 = local_4c;
        }
        FUN_000028cc(auStack_68,s_CH_02d_Pan_0006a570,uVar6 + 1);
        iVar1 = FUN_0020010c(local_50,auStack_68,auStack_48);
        if (iVar1 == 0) {
          FUN_00002898(DAT_0006a56c,auStack_68);
          uVar2 = 0;
        }
        else {
          iVar1 = FUN_0023d888(param_1 + 0xc0,uVar6);
          *(char *)(iVar1 + 4) = local_50[0];
        }
        FUN_000028cc(auStack_68,s_CH_02d_Mute_0006a57c,uVar6 + 1);
        iVar1 = FUN_001ffcbc(local_54,auStack_68,auStack_48);
        if (iVar1 == 0) {
          FUN_00002898(DAT_0006a56c,auStack_68);
          uVar2 = 0;
        }
        else {
          iVar1 = FUN_0023d888(param_1 + 0xc0,uVar6);
          *(undefined1 *)(iVar1 + 5) = local_54[0];
        }
        FUN_00243d78(&local_80,param_1 + 0x100,uVar6);
        local_78 = local_80;
        local_74 = uStack_7c;
        FUN_00243d16(&local_78,1);
      }
      FUN_001a2938(auStack_70);
      FUN_001387a8(auStack_48);
    }
    else {
      FUN_00002898(_DAT_0006a558);
      FUN_001387a8(auStack_48);
      uVar2 = 0;
    }
  }
  return uVar2;
}

