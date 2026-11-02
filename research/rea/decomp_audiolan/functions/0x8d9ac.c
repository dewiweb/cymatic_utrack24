// rea decompile_all
// name: FUN_0008d9ac
// address: 0x8d9ac
// body: available
// range: 0x8d9ac-0x8da67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0008d9ac(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auStack_20 [8];
  int *local_18;
  
  if (*(int *)(param_1 + 0x328) != 0) {
    puVar1 = (undefined4 *)FUN_0008b800(auStack_20);
    *puVar1 = _DAT_0008da68;
    uVar2 = FUN_0008cf78();
    uVar7 = FUN_0008ce54(uVar2,s_0__WarpDeframerService_0008da69 + 3,auStack_20);
    psVar5 = (short *)((ulonglong)uVar7 >> 0x20);
    bVar6 = (int)uVar7 != 0;
    if (bVar6) {
      psVar5 = *(short **)(param_1 + 0x1c);
    }
    if (bVar6 && psVar5 != (short *)0x0) {
      (**(code **)(*local_18 + 0x18))(local_18,(int)*psVar5);
    }
    piVar3 = *(int **)(param_1 + 0x328);
    if (piVar3 != (int *)0x0) {
      iVar4 = (int)((ulonglong)((longlong)DAT_0008da80 * (longlong)(piVar3[2] - *piVar3)) >> 0x20);
      FUN_0010fa20(*piVar3,(iVar4 >> 1) - (iVar4 >> 0x1f),0);
      FUN_0019f30c(piVar3);
    }
    *(undefined4 *)(param_1 + 0x328) = 0;
    FUN_0008b818(auStack_20);
  }
  *(undefined1 *)(param_1 + 0x32c) = 0;
  return 1;
}

