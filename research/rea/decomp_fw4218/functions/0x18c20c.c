// rea decompile_all
// name: FUN_0018c20c
// address: 0x18c20c
// body: available
// range: 0x18c20c-0x18c357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018c20c(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 == (int *)0x0) {
    return;
  }
  for (piVar3 = (int *)piVar4[0x41]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x41]) {
    piVar4 = piVar3;
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    FUN_001727f0(auStack_50);
    (**(code **)(*(int *)piVar4[0x18] + 0xd4))(auStack_30);
    FUN_0017274c(auStack_20,auStack_30,(short)piVar4[0x24]);
    sVar1 = *(short *)((int)piVar4 + 0x76);
    while (sVar1 != 0) {
      FUN_0018f390(auStack_40,piVar4 + 0x1b);
      FUN_00172810(auStack_50,auStack_40);
      iVar2 = FUN_001beecc(auStack_50);
      if (iVar2 != 0) break;
      iVar2 = FUN_001bef00(auStack_50,piVar4 + 0x3c);
      if (iVar2 != 0) {
        FUN_00172810(piVar4 + 0x3c,DAT_0018c358);
      }
      uVar5 = 0;
      while ((uVar5 < *(ushort *)(piVar4 + 0x11) &&
             (piVar3 = *(int **)(piVar4[0x10] + uVar5 * 4), piVar3 != (int *)0x0))) {
        (**(code **)(*piVar3 + 4))(piVar3,*(int *)(*piVar4 + -0x14) + (int)piVar4,auStack_50,1);
        uVar5 = uVar5 + 1 & 0xfffeffff;
      }
      FUN_00189a14(piVar4[0x18]);
      sVar1 = *(short *)((int)piVar4 + 0x76);
    }
    FUN_0018f470(piVar4 + 0x1b);
    piVar4 = (int *)FUN_0022c17c(param_1,piVar4);
    if (piVar4 == (int *)0x0) {
      return;
    }
  } while( true );
}

