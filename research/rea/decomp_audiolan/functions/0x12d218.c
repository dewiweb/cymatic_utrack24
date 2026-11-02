// rea decompile_all
// name: FUN_0012d218
// address: 0x12d218
// body: available
// range: 0x12d218-0x12d337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0012d218(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [20];
  
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = 0;
  if (iVar2 != 0) {
    for (iVar4 = *(int *)(iVar2 + 0xf8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xf8)) {
      iVar2 = iVar4;
    }
    for (; iVar2 != 0; iVar2 = FUN_001d7a54(param_1,iVar2)) {
      iVar4 = 0;
      FUN_00116c1c(iVar2);
      uVar3 = 0;
      *(byte *)(iVar2 + 0xf6) = *(byte *)(iVar2 + 0xf6) | 1;
      if (*(short *)(iVar2 + 0x50) != 0) {
        do {
          FUN_00160270(auStack_30,iVar2 + 0x40,uVar3);
          iVar1 = FUN_0010f544(param_2,auStack_30);
          if (iVar1 != 0) {
            iVar5 = 1;
            iVar4 = iVar5;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(iVar2 + 0x50));
      }
      uVar3 = 0;
      if (*(short *)(iVar2 + 100) != 0) {
        do {
          FUN_00160270(auStack_30,iVar2 + 0x54,uVar3);
          iVar1 = FUN_0010f544(param_2,auStack_30);
          if (iVar1 != 0) {
            iVar5 = 1;
            iVar4 = iVar5;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(iVar2 + 100));
      }
      if (iVar4 != 0) {
        FUN_00116640(iVar2,param_2);
      }
    }
  }
  return iVar5;
}

