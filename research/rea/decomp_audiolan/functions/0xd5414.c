// rea decompile_all
// name: FUN_000d5414
// address: 0xd5414
// body: available
// range: 0xd5414-0xd54f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d5414(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_14 [8];
  int *local_c;
  
  puVar1 = (undefined4 *)FUN_0008b800(auStack_14);
  *puVar1 = _DAT_000d54f4;
  uVar2 = FUN_0008cf78();
  iVar3 = FUN_0008ce54(uVar2,s_0__DataStreamControl_000d54f5 + 3,auStack_14);
  if (iVar3 == 0) {
    FUN_000028a4(DAT_000d550c);
    FUN_0008b818(auStack_14);
    return;
  }
  (**(code **)(*local_c + 0x34))(local_c,param_1 + 300);
  iVar3 = FUN_000a7b84();
  if (iVar3 == 0) {
    FUN_000028a4(DAT_000d5510);
  }
  else {
    FUN_000a7a44(iVar3,param_1 + 0x128);
  }
  uVar4 = (**(code **)(**(int **)(param_1 + 0x11c) + 100))();
  *(bool *)(param_1 + 0x472) = uVar4 < 2;
  *(bool *)(param_1 + 0x475) = uVar4 == 0;
  (**(code **)(**(int **)(param_1 + 0x118) + 0xd0))
            (*(int **)(param_1 + 0x118),0,0,uVar4 < 2,uVar4 == 0);
  FUN_0008b818(auStack_14);
  return;
}

