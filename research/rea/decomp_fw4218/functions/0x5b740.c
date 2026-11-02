// rea decompile_all
// name: FUN_0005b740
// address: 0x5b740
// body: available
// range: 0x5b740-0x5b8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0005b740(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  undefined *puStack_3c;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  if (*DAT_0005b8dc == '\0') {
    FUN_00002898(s_No_SDS_available_0005b8ec);
  }
  else {
    if (param_3 == 0) {
      return 2;
    }
    uVar3 = 0;
    do {
      iVar2 = FUN_00003738(param_2[uVar3]);
      uVar1 = DAT_0005b8e0;
      if (*(char *)(param_2[uVar3] + iVar2 + -1) == '*') {
        iVar2 = (**(code **)(*param_1 + 0x20))(param_1,9,param_2,param_3);
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
    iStack_44 = 0;
    uStack_48 = DAT_0005b8e0;
    uVar3 = 1;
    FUN_00063a90(&uStack_48,*param_2);
    if (1 < param_3) {
      do {
        iStack_2c = DAT_0005b8e4;
        if (iStack_44 != 0) {
          iStack_2c = iStack_44;
        }
        auStack_30[0] = 2;
        auStack_40[0] = 2;
        puStack_3c = &DAT_0005b8e8;
        FUN_00063aa8(&uStack_48,auStack_30,auStack_40);
        auStack_40[0] = 2;
        puStack_3c = (undefined *)DAT_0005b8e4;
        if (iStack_44 != 0) {
          puStack_3c = (undefined *)iStack_44;
        }
        iStack_2c = param_2[uVar3];
        uVar3 = uVar3 + 1;
        auStack_30[0] = 2;
        FUN_00063aa8(&uStack_48,auStack_40,auStack_30);
      } while (uVar3 < param_3);
    }
    iVar2 = iStack_44;
    if (iStack_44 == 0) {
      iVar2 = DAT_0005b8e4;
    }
    iVar2 = FUN_000ed93c(param_1,iVar2,0);
    if (iVar2 != 6) {
      uStack_48 = uVar1;
      FUN_001eecc8(iStack_44);
      return iVar2;
    }
    uStack_48 = uVar1;
    FUN_001eecc8(iStack_44);
  }
  return 0;
}

