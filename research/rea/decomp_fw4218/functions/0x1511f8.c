// rea decompile_all
// name: FUN_001511f8
// address: 0x1511f8
// body: available
// range: 0x1511f8-0x1512c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001511f8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_001c6b14(0x18,DAT_001512c4);
    iVar4 = DAT_001512c8;
    if (piVar2 != (int *)0x0) {
      piVar2[1] = 0;
      *piVar2 = iVar4;
      piVar2[2] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[3] = 0;
      FUN_000298e0(piVar2 + 3);
      iVar4 = *(int *)(iVar3 + 0x10);
      if (iVar4 != 0) {
        piVar2[4] = iVar4;
        if (piVar2[5] != 0) {
          FUN_001c6a64();
        }
        uVar1 = DAT_001512c4;
        piVar2[5] = 0;
        iVar4 = FUN_001c6a94(iVar4,uVar1);
        piVar2[5] = iVar4;
        if (iVar4 == 0) {
          (**(code **)(*piVar2 + 4))(piVar2);
          piVar2 = (int *)0x0;
        }
        else {
          FUN_000039e0(iVar4,*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x10));
        }
      }
    }
    return piVar2;
  }
  iVar3 = FUN_0014d0d4();
  *(int *)(param_1 + 0x3c) = iVar3;
  FUN_000298e0(iVar3 + 0xc);
  return *(int **)(param_1 + 0x3c);
}

