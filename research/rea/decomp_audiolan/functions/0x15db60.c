// rea decompile_all
// name: FUN_0015db60
// address: 0x15db60
// body: available
// range: 0x15db60-0x15dd17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0015db60(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x24);
  iVar1 = 0x18;
  if ((uVar3 & 0x100) != 0) {
    iVar1 = (*(ushort *)(param_1 + 0x3e) + 2 & 0xfffeffff) + 0x18;
  }
  uVar2 = iVar1 + 3U & 0xfffffffc;
  if ((uVar3 & 0x800000) != 0) {
    uVar2 = uVar2 + 8;
  }
  if ((uVar3 & 0x8000000) != 0) {
    uVar2 = uVar2 + 8;
  }
  if ((uVar3 & 0x1000) != 0) {
    uVar2 = uVar2 + 10;
  }
  uVar2 = uVar2 + 3 & 0xfffffffc;
  if ((uVar3 & 0x2000) != 0) {
    uVar2 = uVar2 + 8;
  }
  if ((uVar3 & 0x4000) != 0) {
    uVar2 = uVar2 + 8;
  }
  if ((uVar3 & 0x8000) != 0) {
    uVar2 = uVar2 + 0xc;
  }
  if ((uVar3 & 0x10000000) != 0) {
    uVar2 = uVar2 + 10;
  }
  if ((uVar3 & 0x20000) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((uVar3 & 0x40000) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((uVar3 & 0x80000) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((uVar3 & 0x100000) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((uVar3 & 0x200000) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((uVar3 & 0x400000) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((uVar3 & 0x20000000) != 0) {
    uVar2 = uVar2 + 0x1c;
  }
  if ((uVar3 & 0x200) != 0) {
    uVar2 = uVar2 + (*(ushort *)(param_1 + 0x46) + 2 & 0xfffeffff);
  }
  if ((uVar3 & 0x400) != 0) {
    uVar2 = (uVar2 + 1 & 0xfffffffe) + (*(ushort *)(param_1 + 0x4e) + 2 & 0xfffeffff);
  }
  if ((uVar3 & 0x800) != 0) {
    uVar2 = (uVar2 + 1 & 0xfffffffe) + (*(ushort *)(param_1 + 0x56) + 2 & 0xfffeffff);
  }
  uVar2 = uVar2 + 3 & 0xfffffffc;
  if ((uVar3 & 0x10000) != 0) {
    uVar2 = uVar2 + 4;
  }
  if ((uVar3 & 0x1000000) != 0) {
    uVar2 = uVar2 + 0xc;
  }
  if ((uVar3 & 0x2000000) != 0) {
    uVar2 = uVar2 + 0xc;
  }
  if ((uVar3 & 0x4000000) != 0) {
    uVar2 = uVar2 + 0xc;
  }
  if ((uVar3 & 0x40000000) != 0) {
    uVar2 = uVar2 + (uint)*(ushort *)(param_1 + 0xcc) * 2 + 2;
  }
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0xce);
    uVar2 = uVar2 + 2;
    if (uVar4 != 0) {
      iVar1 = 0;
      do {
        uVar4 = uVar4 - 1;
        uVar2 = (uVar2 + 1 & 0xfffffffe) +
                (*(ushort *)(*(int *)(*(int *)(param_1 + 0xdc) + iVar1 * 4) + 6) + 2 & 0xfffeffff);
        iVar1 = iVar1 + 1;
      } while (uVar4 != 0);
    }
  }
  if ((uVar3 & 0x80) != 0) {
    uVar2 = uVar2 + 2 + (uint)*(ushort *)(param_1 + 0xd0);
  }
  if ((uVar3 & 0x10000) != 0) {
    return (uVar2 + 1 & 0xfffffffe) + 8;
  }
  return uVar2;
}

