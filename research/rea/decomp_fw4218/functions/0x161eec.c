// rea decompile_all
// name: FUN_00161eec
// address: 0x161eec
// body: available
// range: 0x161eec-0x161fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00161eec(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = DAT_00161fe8;
  if ((*(char *)(param_1 + 0x240) != '\0') &&
     (*(char *)(*(int *)(param_1 + 0x230) + 0xc04) == '\x01')) {
    uVar4 = uVar3;
    if ((*(uint *)(param_2 + 0x10) < 5) || ((*(byte *)(*(int *)(param_2 + 0x14) + 2) & 0xc0) < 0xc0)
       ) {
      FUN_001f00bc(param_1 + 0x1dc);
      FUN_00152224(param_2);
      if (param_2 != 0) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined4 *)(param_2 + 8) = 0;
        if (*(int *)(param_1 + 0x1d0) == 0) {
          *(int *)(param_1 + 0x1cc) = param_2;
        }
        else {
          *(int *)(param_2 + 4) = *(int *)(param_1 + 0x1d0);
          *(int *)(*(int *)(param_1 + 0x1d0) + 8) = param_2;
        }
        *(int *)(param_1 + 0x1d0) = param_2;
        *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
      }
      uVar2 = *(uint *)(param_1 + 0x1d4);
      if (*(uint *)(param_1 + 0x1d4) <= *(uint *)(param_1 + 0x228)) {
        uVar2 = *(uint *)(param_1 + 0x228);
      }
      *(uint *)(param_1 + 0x228) = uVar2;
      FUN_001f06d4(param_1 + 0x1dc);
      if (*(char *)(param_1 + 0x241) != '\0') {
        thunk_EXT_FUN_0040010c(param_1 + 0x208);
      }
    }
    else {
      iVar1 = FUN_00154a30(*(int *)(param_1 + 0x230) + 0x20,param_2);
      uVar4 = DAT_00161fec;
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
        uVar4 = uVar3;
      }
    }
  }
  return uVar4;
}

