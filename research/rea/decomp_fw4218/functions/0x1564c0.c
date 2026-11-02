// rea decompile_all
// name: FUN_001564c0
// address: 0x1564c0
// body: available
// range: 0x1564c0-0x1565bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001564c0(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  iVar3 = FUN_001c6b14(8,DAT_001565c0);
  if (iVar3 != 0) {
    iVar4 = FUN_00171d94(iVar3,param_2);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = param_1[0x37];
    }
    if (iVar4 != 0 && iVar3 != 0) {
      if (0x400 < (*(ushort *)(iVar4 + 6) + 2 & 0xfffeffff) + (iVar2 + 1U & 0xfffffffe)) {
LAB_001565ac:
        FUN_00171ea4(iVar4);
        FUN_001c6a78();
        return 0;
      }
      if ((uint)*(ushort *)((int)param_1 + 0xce) == (uint)*(ushort *)(param_1 + 0x35)) {
        iVar2 = FUN_001c6a94((uint)*(ushort *)(param_1 + 0x35) * 4 + 0x28,DAT_001565c0);
        if (iVar2 == 0) goto LAB_001565ac;
        FUN_00003b88(iVar2,param_1[0x37],(uint)*(ushort *)(param_1 + 0x35) << 2);
        FUN_001c6a78(param_1[0x37]);
        param_1[0x37] = iVar2;
        *(short *)(param_1 + 0x35) = (short)param_1[0x35] + 10;
      }
      uVar1 = *(ushort *)((int)param_1 + 0xce);
      *(ushort *)((int)param_1 + 0xce) = uVar1 + 1;
      *(int *)(param_1[0x37] + (uint)uVar1 * 4) = iVar4;
      *(undefined1 *)(param_1 + 0x44) = 1;
      return 1;
    }
  }
  return 0;
}

