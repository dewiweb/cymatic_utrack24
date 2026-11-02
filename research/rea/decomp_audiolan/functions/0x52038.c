// rea decompile_all
// name: FUN_00052038
// address: 0x52038
// body: available
// range: 0x52038-0x5217f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00052038(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
                 undefined2 param_5,undefined4 param_6,int param_7,int param_8,undefined4 *param_9,
                 undefined2 param_10,undefined4 *param_11,undefined2 param_12,undefined4 param_13,
                 undefined4 *param_14,undefined1 param_15,undefined1 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                 undefined4 param_22)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)
           FUN_0006e06c(param_1,*param_14,0,param_18,param_19,param_20,param_21,param_22);
  *(undefined1 *)((int)puVar1 + 0xbe) = param_2;
  *(undefined1 *)((int)puVar1 + 0xbf) = param_16;
  *(undefined1 *)(puVar1 + 0x30) = param_15;
  *(undefined1 *)((int)puVar1 + 0xc1) = param_3;
  *(undefined2 *)((int)puVar1 + 0xc2) = param_4;
  *(undefined2 *)(puVar1 + 0x31) = param_5;
  puVar1[0x33] = param_7;
  puVar1[0x34] = param_8;
  puVar1[0x35] = param_17;
  puVar1[0x32] = param_6;
  puVar1[0x36] = param_13;
  puVar1[0x37] = 0;
  puVar1[0x38] = param_8 - param_7;
  puVar1[0x39] = 0xfffffff;
  puVar1[0x3a] = 0;
  uVar2 = DAT_00052180;
  puVar1[0x3b] = 0;
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 0x3c) = 0;
  uVar2 = DAT_00052184[1];
  puVar1[0x3d] = *DAT_00052184;
  puVar1[0x3e] = uVar2;
  *(undefined1 *)(puVar1 + 0x3f) = 7;
  *(undefined1 *)((int)puVar1 + 0xfd) = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = param_17;
  puVar1[0x42] = 0;
  puVar1[0x43] = *param_9;
  puVar1[0x44] = *param_11;
  *(undefined2 *)(puVar1 + 0x45) = param_10;
  *(undefined2 *)((int)puVar1 + 0x116) = param_12;
  return;
}

