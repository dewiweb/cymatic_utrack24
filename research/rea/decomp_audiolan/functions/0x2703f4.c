// rea decompile_all
// name: FUN_002703f4
// address: 0x2703f4
// body: available
// range: 0x2703f4-0x2704eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_002703f4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00270224();
  if (*(short *)(param_1 + 8) == 0) {
    if (param_2 != 0) {
      iVar4 = *DAT_002704ec;
      *(undefined4 *)(iVar4 + 0x74) = DAT_002704f0;
      *(int *)(iVar4 + 0x78) = param_1;
      if (*(int *)(param_1 + 0xc) == 0) {
        *(int *)(param_1 + 0xc) = iVar4;
        *(int *)(iVar4 + 0x7c) = iVar4;
        *(int *)(iVar4 + 0x80) = iVar4;
      }
      else {
        *(int *)(iVar4 + 0x7c) = *(int *)(param_1 + 0xc);
        *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x80);
        *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x80) + 0x7c) = iVar4;
        *(int *)(*(int *)(param_1 + 0xc) + 0x80) = iVar4;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      piVar1 = DAT_002704f4;
      *(undefined4 *)(iVar4 + 0x44) = 1;
      *(undefined4 *)(iVar4 + 0x3c) = 0xd;
      *piVar1 = *piVar1 + 1;
      *(int *)(iVar4 + 0x58) = param_2;
      FUN_0027023c(uVar2);
      if (param_2 != -1) {
        thunk_EXT_FUN_60181f50(iVar4 + 0x58);
      }
      thunk_EXT_FUN_60181a28(iVar4);
      return *(undefined4 *)(iVar4 + 0x90);
    }
    uVar3 = 0xd;
  }
  else {
    uVar3 = 0;
    if (*(short *)(param_1 + 10) != 0) {
      *(undefined2 *)(param_1 + 8) = 0;
    }
  }
  FUN_0027023c(uVar2);
  return uVar3;
}

