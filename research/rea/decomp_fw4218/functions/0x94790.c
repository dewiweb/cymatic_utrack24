// rea decompile_all
// name: FUN_00094790
// address: 0x94790
// body: available
// range: 0x94790-0x94933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00094790(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_80;
  undefined1 auStack_7c [64];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [16];
  
  iVar1 = FUN_001fff90(param_1 + 0x1b4,s_sds___cne_AppSettings_Adat_Input_00094934);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_00094958);
  }
  if (param_2 != 0) {
    uVar2 = FUN_00178f04();
    FUN_00177c0c(uVar2,*(undefined4 *)(param_1 + 0x1b4));
  }
  piVar3 = (int *)FUN_0022bc9c(param_1 + 0xf4);
  uVar2 = FUN_00201f28(auStack_3c,0);
  uVar2 = FUN_001aaf10(auStack_34,s___sds___cne_AppSettings_Adat_Out_0009495a + 2,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3,uVar2,param_1 + 0xe8);
  FUN_001aafac(auStack_34);
  FUN_00201f54(auStack_3c);
  if (iVar1 == 1) {
    local_80 = 0;
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      FUN_000028cc(auStack_7c,s___Outgroup_02d__02d_00094986 + 2,iVar1 * 8 + 1,iVar1 * 8 + 8);
      iVar4 = FUN_0020010c(&local_80,auStack_7c,param_1 + 0xe8);
      if (iVar4 == 0) {
        FUN_00002898(_DAT_0009499c,auStack_7c);
        local_80 = 0;
      }
      *(bool *)(param_1 + 0x1ec + iVar1) = local_80 != 0;
      FUN_00093e48(param_1,iVar1,0);
    }
    iVar1 = FUN_001fff90(&local_80,s___sds___cne_AppSettings_Adat_Out_0009499e + 2);
    if (iVar1 == 0) {
      FUN_00002898(DAT_000949d4);
    }
    *(bool *)(param_1 + 0x1ef) = local_80 != 0;
    uVar2 = FUN_00094140(param_1,0);
  }
  else {
    uVar2 = FUN_00002898(_DAT_00094984);
  }
  return uVar2;
}

