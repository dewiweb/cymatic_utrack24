// rea decompile_all
// name: FUN_001212b8
// address: 0x1212b8
// body: available
// range: 0x1212b8-0x1213bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001212b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_1c [8];
  
  FUN_001a2920(auStack_1c,param_1 + 4);
  if (*(int *)(param_1 + 0x7f34) == 0) {
LAB_001213a4:
    FUN_001a2938(auStack_1c);
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar4 = 0;
      do {
        iVar1 = uVar5 * 0x100 + param_1 + uVar4 * 8;
        iVar3 = *(int *)(iVar1 + 0x34);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x30) + 0x50))
                            (*(int **)(param_1 + 0x30),uVar5,uVar4,*(undefined1 *)(iVar3 + 5),
                             *(undefined1 *)(iVar3 + 6),*(undefined4 *)(iVar3 + 0xc),
                             *(undefined4 *)(iVar3 + 0x10),*(undefined1 *)(iVar3 + 0x14),
                             *(undefined4 *)(iVar3 + 0x18),*(undefined1 *)(iVar3 + 0x1c),
                             *(undefined1 *)(iVar3 + 0x1d),0);
          if (iVar3 == 0) goto LAB_001213a4;
          *(undefined1 *)(*(int *)(iVar1 + 0x34) + 0x1e) = 1;
        }
        iVar3 = *(int *)(iVar1 + 0xb4);
        if ((iVar3 != 0) && (*(char *)(iVar3 + 6) != '\x02')) {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x30) + 0x50))
                            (*(int **)(param_1 + 0x30),uVar5,uVar4,*(undefined1 *)(iVar3 + 5),
                             *(char *)(iVar3 + 6),*(undefined4 *)(iVar3 + 0xc),
                             *(undefined4 *)(iVar3 + 0x10),*(undefined1 *)(iVar3 + 0x14),
                             *(undefined4 *)(iVar3 + 0x18),*(undefined1 *)(iVar3 + 0x1c),
                             *(undefined1 *)(iVar3 + 0x1d),0);
          if (iVar3 == 0) goto LAB_001213a4;
          *(undefined1 *)(*(int *)(iVar1 + 0xb4) + 0x1e) = 1;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 0x10);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x7f);
    FUN_001a2938(auStack_1c);
    uVar2 = 1;
  }
  return uVar2;
}

