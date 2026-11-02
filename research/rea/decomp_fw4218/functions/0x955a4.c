// rea decompile_all
// name: FUN_000955a4
// address: 0x955a4
// body: available
// range: 0x955a4-0x9571f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000955a4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_20;
  undefined4 uStack_1c;
  
  iStack_20 = param_3;
  uStack_1c = param_4;
  FUN_001a2920(&iStack_20,param_1);
  if (param_2 < 3) {
    if (*(int *)(param_1 + 0x1f0 + param_2 * 4) != param_3) {
      *(int *)(param_1 + 0x1f0 + param_2 * 4) = param_3;
      if (param_2 == 0) {
        iVar3 = FUN_00200f9c(param_1 + 0x1f0,s_sds___cne_AppSettings_AnalogInpu_00095720);
        if (iVar3 == 0) {
          FUN_00002898(_DAT_00095750);
        }
      }
      else if (param_2 == 1) {
        iVar3 = FUN_00200f9c(param_1 + 500,s___sds___cne_AppSettings_AnalogIn_00095752 + 2);
        if (iVar3 == 0) {
          FUN_00002898(_DAT_00095784);
        }
      }
      else if ((param_2 == 2) &&
              (iVar3 = FUN_00200f9c(param_1 + 0x1f8,s___sds___cne_AppSettings_AnalogIn_00095786 + 2)
              , iVar3 == 0)) {
        FUN_00002898(DAT_000957b8);
      }
      if (*(int *)(param_1 + 0x1f0 + param_2 * 4) == param_2) {
        uVar2 = FUN_00178f04();
        FUN_00177910(uVar2,param_2,0);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x1fc);
        if (cVar1 == '\x01') {
          uVar2 = FUN_00178f04(1);
          FUN_001778ec(uVar2,param_2 << 3,(*(int *)(param_1 + 0x1f0 + param_2 * 4) + -3) * 8);
        }
        else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
          uVar2 = FUN_00178f04(cVar1);
          FUN_00177910(uVar2,param_2,1);
        }
      }
    }
    uVar2 = FUN_001a2938(&iStack_20);
  }
  else {
    uVar2 = FUN_001a2938(&iStack_20);
  }
  return uVar2;
}

