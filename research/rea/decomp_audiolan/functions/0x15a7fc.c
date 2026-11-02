// rea decompile_all
// name: FUN_0015a7fc
// address: 0x15a7fc
// body: available
// range: 0x15a7fc-0x15a8df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015a7fc(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [32];
  
  uVar1 = _DAT_0015a8e0;
  FUN_001a0700();
  FUN_000028a4(s____OutgoingStreamSIPInfo__p___0015a8e1 + 3,param_1);
  FUN_000028a4(s_valid__u_0015a900,*param_1);
  FUN_000028a4(s_active__u_0015a914,param_1[1]);
  FUN_000028a4(s_bidirectional__u_0015a928,param_1[2]);
  FUN_000028a4(s_did__d_0015a93c,*(undefined4 *)(param_1 + 4));
  FUN_000028a4(s_cid__d_0015a950,*(undefined4 *)(param_1 + 8));
  uVar2 = FUN_0018e4b4(param_1 + 0xc,auStack_30,0x20);
  FUN_000028a4(s_ipDestAddr__s_0015a964,uVar2);
  FUN_000028a4(s_ipDestPort__u_0015a978,*(undefined2 *)(param_1 + 0x10));
  FUN_000028a4(s_ipSourcePort__u_0015a98c,*(undefined2 *)(param_1 + 0x12));
  uVar2 = FUN_00039554(param_1[0x14]);
  FUN_000028a4(s_payloadFormat__u_0015a9a0,uVar2);
  FUN_000028a4(s_payloadType__u_0015a9b4,param_1[0x15]);
  FUN_000028a4(s_from_URL__s_0015a9c8,*(undefined4 *)(param_1 + 0x18));
  FUN_001a0d18(uVar1);
  return;
}

