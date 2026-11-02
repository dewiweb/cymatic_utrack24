// rea decompile_all
// name: FUN_000471d8
// address: 0x471d8
// body: available
// range: 0x471d8-0x472ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000471d8(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_18;
  
  local_18 = param_4;
  iVar1 = FUN_001ff7bc(param_1,0,0x8000);
  if (iVar1 == 0) {
    iVar1 = 200;
    do {
      FUN_001d0130(10);
      iVar3 = FUN_001f3414(param_1,0,&local_18);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    } while (((local_18 & 0x8000) != 0) && (iVar1 = iVar1 + -1, iVar1 != 0));
    if ((local_18 & 0x8000) == 0) {
      if (param_2 == 0) {
        FUN_00002898(s_Setting_MII_mode_for_DP83640_PHY_00047330);
      }
      else {
        FUN_00002898(s_Setting_RMII_mode_for_DP83640_PH_0004730c);
      }
      iVar1 = FUN_001f3414(param_1,0x17,&local_18);
      if (iVar1 == 0) {
        if (param_2 == 0) {
          local_18 = local_18 & 0xffdf;
        }
        else {
          local_18 = local_18 & 0xffff | 0x20;
        }
        iVar1 = FUN_001ff7bc(param_1,0x17,local_18);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_00002898(s_Failed_resetting_the_PHY__000472f0);
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

