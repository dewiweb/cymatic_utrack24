// rea decompile_all
// name: FUN_000080b4
// address: 0x80b4
// body: available
// range: 0x80b4-0x822f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000080b4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  uint local_18;
  
  iStack_1c = param_1;
  local_18 = param_2;
  FUN_001a0700(param_1 + 0x118);
  iVar1 = FUN_001dbd40(param_1 + 0x15c,&local_18);
  if (((local_18 != 0xffffffff) && (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 2 == 0)) &&
     (*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2 == 0)) {
    local_24 = *(int *)(param_1 + 0x16c);
    iVar1 = *(int *)(*(int *)(param_1 + 0x16c) + 4);
    while (iVar1 != 0) {
      if (*(uint *)(iVar1 + 0x10) < local_18) {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
      else {
        local_24 = iVar1;
        iVar1 = *(int *)(iVar1 + 8);
      }
    }
    local_28 = *(int *)(param_1 + 0x16c);
    iVar1 = *(int *)(*(int *)(param_1 + 0x16c) + 4);
    while (iVar2 = local_24, iVar1 != 0) {
      if (local_18 < *(uint *)(iVar1 + 0x10)) {
        local_28 = iVar1;
        iVar1 = *(int *)(iVar1 + 8);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
    }
    while (iVar2 != local_28) {
      iVar1 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) == 0) {
        for (iVar1 = *(int *)(iVar2 + 4); iVar2 == *(int *)(iVar1 + 0xc);
            iVar1 = *(int *)(iVar1 + 4)) {
          iVar2 = iVar1;
        }
        if (*(int *)(iVar2 + 0xc) != iVar1) {
          iVar2 = iVar1;
        }
      }
      else {
        do {
          iVar2 = iVar1;
          iVar1 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
    }
    FUN_001d1974(auStack_20,param_1 + 0x15c,&local_24,&local_28);
  }
  FUN_001a0d18(param_1 + 0x118);
  return;
}

