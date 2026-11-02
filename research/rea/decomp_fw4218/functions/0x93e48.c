// rea decompile_all
// name: FUN_00093e48
// address: 0x93e48
// body: available
// range: 0x93e48-0x93f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00093e48(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_80;
  undefined1 auStack_7c [60];
  undefined4 local_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [16];
  
  iVar4 = param_1;
  if (param_2 < 3) {
    uVar1 = FUN_00178f04();
    FUN_00178180(uVar1,param_2,*(undefined1 *)(param_1 + 0x1ec + param_2));
    piVar2 = (int *)FUN_0022bc9c(param_1 + 0xf4);
    local_40 = FUN_00201f28(auStack_3c,0);
    uVar1 = FUN_001aaf10(auStack_34,s_sds___cne_AppSettings_Adat_Outpu_00093f78,local_40);
    iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,uVar1,param_1 + 0xe8);
    FUN_001aafac(auStack_34);
    iVar4 = FUN_00201f54(auStack_3c);
    if (iVar3 == 1) {
      if (param_3 != 0) {
        FUN_000028cc(auStack_7c,s___Outgroup_02d__02d_00093fa2 + 2,param_2 * 8 + 1,param_2 * 8 + 8);
        local_80 = (uint)(*(char *)(param_1 + 0x1ec + param_2) != '\0');
        iVar4 = FUN_00201118(&local_80,auStack_7c,param_1 + 0xe8);
        if (iVar4 == 0) {
          iVar4 = FUN_00002898(DAT_00093fb8,auStack_7c);
        }
      }
    }
    else {
      iVar4 = FUN_00002898(_DAT_00093fa0);
    }
  }
  return iVar4;
}

