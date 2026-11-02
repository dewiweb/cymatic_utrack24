// rea decompile_all
// name: FUN_001a0cb4
// address: 0x1a0cb4
// body: available
// range: 0x1937d0-0x1938c7 inclusive
// range: 0x1a0cb4-0x1a0cbf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a0cb4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [16];
  
  uVar6 = 0;
  if (*(short *)(param_1 + 0x6ae) != 0) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x6a8) + uVar6 * 4);
      iVar1 = FUN_001725e0(iVar5 + 100,param_2);
      if (iVar1 != 0) {
        if ((*(byte *)(iVar5 + 200) & 2) != 0) {
          *(byte *)(iVar5 + 200) = *(byte *)(iVar5 + 200) & 0xfd;
          uVar2 = FUN_001726d4(auStack_34,iVar5 + 100);
          uVar4 = 0;
          if (*(short *)(param_1 + 0x6ae) != 0) {
            do {
              piVar3 = *(int **)(*(int *)(param_1 + 0x6a8) + uVar4 * 4);
              (**(code **)(*piVar3 + 0x48))(auStack_40,piVar3);
              iVar1 = FUN_001bed7c(auStack_40,uVar2);
              if (iVar1 != 0) {
                if (piVar3 == (int *)0x0) {
                  iVar1 = 0;
                }
                else {
                  iVar1 = *(int *)(*piVar3 + -0x14) + (int)piVar3;
                }
                FUN_00199f08(piVar3 + 0x12,1,iVar1);
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(ushort *)(param_1 + 0x6ae));
          }
        }
        *(undefined1 *)(iVar5 + 0xc9) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0x6ae));
    return;
  }
  return;
}

