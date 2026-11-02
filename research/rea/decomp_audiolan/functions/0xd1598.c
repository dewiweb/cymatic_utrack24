// rea decompile_all
// name: FUN_000d1598
// address: 0xd1598
// body: available
// range: 0xd1598-0xd1643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d1598(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined1 auStack_30 [16];
  int *local_20;
  
  FUN_000cf680(param_1,4);
  uVar1 = FUN_000b9aac();
  FUN_00159f54(auStack_30,uVar1);
  uVar5 = 0;
  piVar4 = (int *)*local_20;
  if (piVar4 != local_20) {
    do {
      iVar2 = FUN_00159c48(uVar1,piVar4[2]);
      if (uVar5 < 0x40) {
        iVar3 = param_1 + uVar5;
        uVar5 = uVar5 + 1 & 0xfffeffff;
        *(undefined1 *)(iVar3 + 0x610) = *(undefined1 *)(iVar2 + 0x61);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != local_20);
  }
  (**(code **)(**(int **)(param_1 + 0x118) + 0x7c))
            (*(int **)(param_1 + 0x118),param_2,uVar5,param_1 + 0x610,0);
  FUN_001dd150(auStack_30);
  return;
}

