// rea decompile_all
// name: FUN_00059fd4
// address: 0x59fd4
// body: available
// range: 0x59fd4-0x5a073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00059fd4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *local_20;
  
  local_20 = param_4;
  puVar1 = (undefined4 *)FUN_001a0808(0x10,1);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1[3] = 0;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(puVar1 + 2) = param_5;
  local_20 = puVar1;
  iVar2 = FUN_000034d0(param_6);
  uVar4 = FUN_001a0808(iVar2 + 1,1);
  iVar2 = (int)uVar4;
  uVar3 = (int)((ulonglong)uVar4 >> 0x20);
  if (iVar2 != 0) {
    uVar3 = param_6;
  }
  puVar1[3] = iVar2;
  if (iVar2 != 0) {
    thunk_FUN_00003418(iVar2,uVar3);
  }
  FUN_001dfb78(param_2 + 0x10,&local_20);
  FUN_001e20fc(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),DAT_0005a074);
  return local_20;
}

