// rea decompile_all
// name: FUN_000a96bc
// address: 0xa96bc
// body: available
// range: 0xa96bc-0xa9783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000a96bc(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_1 + 0x98);
  uVar5 = 0xffffffff;
  uVar4 = param_4;
  if (cVar1 != '\b') {
    if (cVar1 == '\x10') {
      if ((param_3 & 1) != 0) {
        return 0xffffffff;
      }
      uVar4 = param_4 >> 1;
    }
    else {
      if (cVar1 != ' ' || (param_3 & 3) != 0) {
        return 0xffffffff;
      }
      uVar4 = param_4 >> 2;
    }
  }
  iVar3 = FUN_0017afd4(param_1 + 0x14,*(undefined4 *)(param_1 + 8));
  if (iVar3 == 0) {
    *DAT_000a9784 = 0xc00;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(uint *)(param_1 + 0x80) = uVar4;
    thunk_EXT_FUN_00400100(param_1 + 0x50);
    *(uint *)(param_1 + 0x78) = param_3;
    puVar2 = DAT_000a9788;
    *DAT_000a9788 = 0x400;
    iVar3 = thunk_EXT_FUN_004001ec(param_1 + 0x50,*(undefined4 *)(param_1 + 0xc));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *puVar2 = 0x800;
      param_4 = uVar5;
    }
    uVar5 = param_4;
    FUN_0017b0f0(param_1 + 0x14);
  }
  return uVar5;
}

