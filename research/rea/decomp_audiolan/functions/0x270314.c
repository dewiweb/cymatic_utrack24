// rea decompile_all
// name: FUN_00270314
// address: 0x270314
// body: available
// range: 0x270314-0x2703ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00270314(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r6;
  uint uVar4;
  int *unaff_r8;
  bool bVar5;
  
  uVar4 = 0;
  uVar1 = FUN_00270224();
  bVar5 = *(int *)(param_1 + 0xc) == 0;
  if (!bVar5) {
    unaff_r6 = 0;
    unaff_r8 = DAT_002703f0;
  }
  *(undefined2 *)(param_1 + 8) = 1;
  if (bVar5) {
    FUN_0027023c(uVar1);
  }
  else {
    do {
      iVar3 = *(int *)(param_1 + 0xc);
      if (*(int *)(iVar3 + 0x7c) == iVar3) {
        *(undefined4 *)(param_1 + 0xc) = unaff_r6;
      }
      else {
        *(int *)(param_1 + 0xc) = *(int *)(iVar3 + 0x7c);
        *(undefined4 *)(*(int *)(iVar3 + 0x7c) + 0x80) = *(undefined4 *)(iVar3 + 0x80);
        *(undefined4 *)(*(int *)(iVar3 + 0x80) + 0x7c) = *(undefined4 *)(iVar3 + 0x7c);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      *(undefined4 *)(iVar3 + 0x74) = unaff_r6;
      if (*(int *)(iVar3 + 0x70) == 0) {
        *(undefined4 *)(iVar3 + 0x58) = unaff_r6;
      }
      else {
        thunk_EXT_FUN_60182100(iVar3 + 0x58);
      }
      *(undefined4 *)(iVar3 + 0x90) = unaff_r6;
      *unaff_r8 = *unaff_r8 + 1;
      uVar2 = thunk_EXT_FUN_60181700(iVar3);
      uVar4 = uVar4 | uVar2;
    } while (*(int *)(param_1 + 0x10) != 0);
    if (*(short *)(param_1 + 10) != 0) {
      *(short *)(param_1 + 8) = (short)unaff_r6;
    }
    FUN_0027023c(uVar1);
    if (uVar4 != 0) {
      thunk_EXT_FUN_6001779c();
    }
  }
  return 0;
}

