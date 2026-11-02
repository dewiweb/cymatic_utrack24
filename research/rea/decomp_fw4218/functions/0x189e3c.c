// rea decompile_all
// name: FUN_00189e3c
// address: 0x189e3c
// body: available
// range: 0x189e3c-0x189f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00189e3c(int *param_1)

{
  int iVar1;
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [68];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  int iStack_28;
  
  if (*(char *)((int)param_1 + 0x4d) != '\x02') {
    return;
  }
  iVar1 = FUN_001a1558(*(int *)param_1[0x1f] + 0x4a0);
  if (iVar1 != 0) {
    FUN_001512cc(auStack_a0);
    (**(code **)(*param_1 + 0x100))(auStack_48,param_1,1);
    iStack_28 = param_1[0x1e];
    (**(code **)(*param_1 + 0xe8))(auStack_34,param_1);
    (**(code **)(*param_1 + 0xd4))(auStack_40,param_1);
    FUN_0014f3a0(auStack_a0,auStack_40,auStack_34,iStack_28);
    FUN_00171ea4(auStack_48);
    FUN_001a2410(*(int *)param_1[0x1f] + 0x4a0,auStack_a0,0);
    FUN_0015111c(auStack_a0);
    FUN_0014ca10(auStack_8c);
    FUN_0014ca10(auStack_94);
    return;
  }
  return;
}

