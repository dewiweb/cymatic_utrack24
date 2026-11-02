// rea decompile_all
// name: FUN_0018ea30
// address: 0x18ea30
// body: available
// range: 0x18ea30-0x18eb1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0018ea30(int *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_18 [12];
  
  if (param_1[0x10] == 0) {
    if (param_1[0x11] == 0) {
      return 0;
    }
    uVar2 = (uint)*(ushort *)((int)param_1 + 0x4a);
    bVar3 = uVar2 == DAT_0018eb1c;
    if (bVar3) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x13);
    }
    if (bVar3 && uVar2 == DAT_0018eb1c) {
      FUN_00171e90(auStack_18);
      (*(code *)**(undefined4 **)param_1[0x11])
                ((undefined4 *)param_1[0x11],*(int *)(*param_1 + -0x14) + (int)param_1,0,auStack_18)
      ;
      (*(code *)**(undefined4 **)param_1[0x11])
                ((undefined4 *)param_1[0x11],*(int *)(*param_1 + -0x14) + (int)param_1,
                 *(short *)((int)param_1 + 0x3e) + -1,auStack_18);
      FUN_00171ea4(auStack_18);
    }
    uVar1 = *(ushort *)((int)param_1 + 0x4a);
  }
  else {
    uVar1 = *(ushort *)(param_1[0x10] + 4);
  }
  if (uVar1 != param_2) {
    return 0;
  }
  return 1;
}

