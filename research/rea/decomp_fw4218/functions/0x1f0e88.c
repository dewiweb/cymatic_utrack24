// rea decompile_all
// name: FUN_001f0e88
// address: 0x1f0e88
// body: available
// range: 0x1f0e88-0x1f0f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001f0e88(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 == (undefined4 *)0x0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001f0f44,
                 s_pbuf_copy_partial__invalid_buf_001f0f24,DAT_001f0f20,DAT_001f0f1c,0,0,param_2,
                 param_3,param_4);
    return 0;
  }
  if (param_2 != 0) {
    uVar2 = 0;
    for (; (param_3 != 0 && (param_1 != (undefined4 *)0x0)); param_1 = (undefined4 *)*param_1) {
      if ((param_4 == 0) || (param_4 < *(ushort *)((int)param_1 + 10))) {
        uVar1 = *(ushort *)((int)param_1 + 10) - param_4 & 0xffff;
        if (param_3 < uVar1) {
          uVar1 = param_3;
        }
        FUN_000039e0(param_2 + uVar2,param_1[1] + param_4,uVar1);
        uVar3 = uVar3 + uVar1 & 0xffff;
        uVar2 = uVar2 + uVar1 & 0xffff;
        param_3 = param_3 - uVar1 & 0xffff;
        param_4 = 0;
      }
      else {
        param_4 = param_4 - *(ushort *)((int)param_1 + 10) & 0xffff;
      }
    }
    return uVar3;
  }
  FUN_00013290(s_Assertion___s__failed_at_line__d_001f0f44,
               s_pbuf_copy_partial__invalid_datap_001f0f7c,DAT_001f0f78,DAT_001f0f1c,0,param_1,0,
               param_3,param_4);
  return 0;
}

