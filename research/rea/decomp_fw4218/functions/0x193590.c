// rea decompile_all
// name: FUN_00193590
// address: 0x193590
// body: available
// range: 0x193590-0x19362f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00193590(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 auStack_28 [16];
  
  uVar4 = 0;
  if (*(short *)((int)param_1 + 6) != 0) {
    do {
      piVar3 = *(int **)(*param_1 + uVar4 * 4);
      (**(code **)(*piVar3 + 0x48))(auStack_28,piVar3);
      iVar2 = FUN_001bed7c(auStack_28,param_2);
      bVar1 = 0;
      if (iVar2 != 0) {
        bVar1 = *(byte *)(piVar3 + 0x18);
      }
      if (iVar2 != 0 && (bVar1 & 8) != 0) {
        if (piVar3 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*piVar3 + -0x14) + (int)piVar3;
        }
        FUN_0019a3a8(piVar3 + 0x12,1,iVar2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)param_1 + 6));
    return;
  }
  return;
}

