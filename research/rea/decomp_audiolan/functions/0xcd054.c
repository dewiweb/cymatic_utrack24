// rea decompile_all
// name: FUN_000cd054
// address: 0xcd054
// body: available
// range: 0xcd054-0xcd0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000cd054(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 1;
  do {
    iVar2 = param_1 + uVar3 * 8;
    cVar1 = *(char *)(iVar2 + 0x350);
    *(undefined1 *)(iVar2 + 0x350) = 0;
    if (cVar1 == '\x01') {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x48))(*(int **)(param_1 + 0x11c),uVar3);
joined_r0x000cd0a4:
      if (iVar2 == 0) {
        uVar4 = 0;
      }
    }
    else if (cVar1 == '\x02') {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x44))(*(int **)(param_1 + 0x11c),uVar3);
      goto joined_r0x000cd0a4;
    }
    uVar3 = uVar3 + 1 & 0xff;
    if (0x1f < uVar3) {
      *(undefined1 *)(param_1 + 0x482) = 0;
      *(undefined1 *)(param_1 + 0x481) = 0;
                    /* WARNING: Could not recover jumptable at 0x000cd0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar4 ^ 1);
      return;
    }
  } while( true );
}

