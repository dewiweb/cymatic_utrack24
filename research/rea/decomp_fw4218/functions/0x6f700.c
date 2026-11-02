// rea decompile_all
// name: FUN_0006f700
// address: 0x6f700
// body: available
// range: 0x6f700-0x6f87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0006f700(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  undefined1 auStack_48 [4];
  int local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  uint local_3c;
  uint local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  *param_1 = DAT_0006f87c;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  param_1[1] = 0;
  puStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  FUN_001eed34(param_2,auStack_48);
  if ((param_6 != DAT_0006f880) && ((local_38 & 1) == 0)) {
    local_44 = param_6;
  }
  if ((param_7 != DAT_0006f880) && ((local_38 & 2) == 0)) {
    local_40 = (undefined1)param_7;
  }
  if ((param_8 != DAT_0006f880) && ((local_38 & 0x10) == 0)) {
    local_3c = (uint)(param_8 != 0);
  }
  if ((param_4 != DAT_0006f880) && ((local_38 & 4) == 0)) {
    local_3f = (undefined1)param_4;
  }
  if ((param_5 != DAT_0006f880) && ((local_38 & 8) == 0)) {
    local_3e = (undefined1)param_5;
  }
  iVar1 = FUN_001f01c4(local_44,local_40);
  if (iVar1 == 0) {
    *(undefined1 *)((int)param_1 + 0xbd) = 1;
  }
  else {
    FUN_00003c08(iVar1,local_44,0x32);
    iVar1 = FUN_001cf8e8(param_1 + 1,local_30,DAT_0006f884,param_1,iVar1,local_44,local_3f,local_3e,
                         local_3c,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x2f) = 1;
      if (param_3 != 0) {
        *(undefined1 *)(param_1 + 0x2f) = 3;
        iVar1 = FUN_001d003c(param_1 + 1);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x2f) = 1;
          *(undefined1 *)((int)param_1 + 0xbd) = 1;
        }
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0xbd) = 1;
      param_1[1] = 0;
    }
  }
  return param_1;
}

