// rea decompile_all
// name: FUN_00061650
// address: 0x61650
// body: available
// range: 0x61650-0x61727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00061650(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 8);
  if (iVar2 != *(int *)(param_1 + 0x38)) {
    do {
      iVar3 = *(int *)(iVar2 + 0x14);
      if (iVar3 != 0) {
        FUN_00232920(iVar3 + 0x2c);
        FUN_00232920(iVar3 + 0x28);
        FUN_00232920(iVar3 + 0x24);
        FUN_00232920(iVar3 + 0x20);
        FUN_00232920(iVar3 + 0x1c);
        FUN_001eecc8(iVar3);
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar3 = *(int *)(iVar2 + 4);
        while (iVar1 = iVar3, iVar2 == *(int *)(iVar1 + 0xc)) {
          iVar2 = iVar1;
          iVar3 = *(int *)(iVar1 + 4);
        }
        if (*(int *)(iVar2 + 0xc) != iVar1) {
          iVar2 = iVar1;
        }
      }
      else {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
    } while (iVar2 != *(int *)(param_1 + 0x38));
  }
  iStack_1c = *(int *)(param_1 + 0x38);
  local_20 = *(undefined4 *)(iStack_1c + 8);
  FUN_002202f0(auStack_18,param_1 + 0x28,&local_20,&iStack_1c);
  return;
}

