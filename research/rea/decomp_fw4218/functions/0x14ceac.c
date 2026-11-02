// rea decompile_all
// name: FUN_0014ceac
// address: 0x14ceac
// body: available
// range: 0x14ceac-0x14cf8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0014ceac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 auStack_4c [64];
  
  local_64 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_5c = 0;
  local_56 = 0;
  local_54 = 0;
  local_4e = 0;
  iVar1 = FUN_001727f0(auStack_4c);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_0015111c(iVar1 + -0x1c);
  uVar2 = FUN_001be138(param_1);
  FUN_00150260(&local_68,uVar2,param_1 + 0x6c,param_1 + 0x60,*(undefined2 *)(param_1 + 0x78),
               *(undefined2 *)(param_1 + 0x7a),*(undefined2 *)(param_1 + 0x7c),
               *(undefined2 *)(param_1 + 0x7e),*(undefined2 *)(param_1 + 0x80),param_1 + 0x88,
               param_1 + 0x98);
  iVar1 = FUN_0015d7e4(param_1,&local_68,0);
  if (iVar1 == 0) {
    FUN_0015da00(param_1,1);
  }
  FUN_0015111c(&local_68);
  FUN_0014ca10(&local_54);
  FUN_0014ca10(&local_5c);
  return;
}

