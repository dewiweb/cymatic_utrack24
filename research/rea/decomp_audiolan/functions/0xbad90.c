// rea decompile_all
// name: FUN_000bad90
// address: 0xbad90
// body: available
// range: 0xbad90-0xbae3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000bad90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  int iStack_14;
  undefined1 auStack_10 [4];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1d0) + 8);
  if (iVar3 != *(int *)(param_1 + 0x1d0)) {
    do {
      if (*(int *)(iVar3 + 0x14) != 0) {
        FUN_00061d2c();
        FUN_0019f30c();
      }
      iVar1 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar1 = *(int *)(iVar3 + 4);
        while (iVar2 = iVar1, iVar3 == *(int *)(iVar2 + 0xc)) {
          iVar3 = iVar2;
          iVar1 = *(int *)(iVar2 + 4);
        }
        if (*(int *)(iVar3 + 0xc) != iVar2) {
          iVar3 = iVar2;
        }
      }
      else {
        do {
          iVar3 = iVar1;
          iVar1 = *(int *)(iVar3 + 8);
        } while (*(int *)(iVar3 + 8) != 0);
      }
    } while (iVar3 != *(int *)(param_1 + 0x1d0));
  }
  iStack_14 = *(int *)(param_1 + 0x1d0);
  local_18 = *(undefined4 *)(iStack_14 + 8);
  FUN_001cdde0(auStack_10,param_1 + 0x1c0,&local_18,&iStack_14);
  return;
}

