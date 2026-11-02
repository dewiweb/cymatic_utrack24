// rea decompile_all
// name: FUN_00007bd8
// address: 0x7bd8
// body: available
// range: 0x7bd8-0x7cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00007bd8(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_28 [2];
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x118;
  iStack_20 = param_1;
  uStack_1c = param_2;
  FUN_001f00bc(iVar3);
  FUN_00233cc4(local_28,param_1 + 0x15c,&uStack_1c);
  if (local_28[0] != *(int *)(param_1 + 0x16c)) {
    iVar2 = *(int *)(local_28[0] + 0x14);
    *(undefined1 *)(local_28[0] + 0x34) = 0;
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x20);
    }
    if (iVar2 != 0 && cVar1 != '\x02') {
      thunk_EXT_FUN_0040010c(*(undefined4 *)(local_28[0] + 0x38));
    }
    else {
      iVar2 = FUN_00007a50(param_1,local_28[0] + 0x14);
      if ((iVar2 == 0) || (iVar2 = FUN_00007898(param_1,local_28[0] + 0x14), iVar2 == 0))
      goto LAB_00007c68;
      thunk_EXT_FUN_0040010c(*(undefined4 *)(local_28[0] + 0x38));
    }
    FUN_001f06d4(iVar3);
    return 1;
  }
LAB_00007c68:
  FUN_001f06d4(iVar3);
  return 0;
}

