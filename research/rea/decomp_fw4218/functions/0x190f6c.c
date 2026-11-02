// rea decompile_all
// name: FUN_00190f6c
// address: 0x190f6c
// body: available
// range: 0x190f6c-0x19106f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00190f6c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  if (piVar5 != (int *)0x0) {
    do {
      (**(code **)(*piVar5 + 0x38))(piVar5);
      iVar2 = piVar5[9];
      uVar4 = *(uint *)(iVar2 + 0x5f8);
      *(uint *)(iVar2 + 0x5f8) = uVar4 + 1;
      *(uint *)(iVar2 + 0x5fc) = *(int *)(iVar2 + 0x5fc) + (uint)(0xfffffffe < uVar4);
      if ((int *)piVar5[0x13] == (int *)0x0) {
        if ((*(byte *)((int)piVar5 + 0x62) & 2) != 0) {
          *(byte *)((int)piVar5 + 0x62) = *(byte *)((int)piVar5 + 0x62) & 0xfd;
          FUN_0019ce0c(piVar5[0x12],*(int *)(*piVar5 + -0x14) + (int)piVar5,0);
        }
      }
      else {
        uVar4 = 0;
        iVar2 = (**(code **)(*(int *)piVar5[0x13] + 0x48))();
        if (iVar2 != 0) {
          do {
            bVar1 = *(byte *)(piVar5[0x19] + uVar4);
            if ((bVar1 & 2) != 0) {
              *(byte *)(piVar5[0x19] + uVar4) = bVar1 & 0xfd;
              FUN_0019ce0c(piVar5[0x12],*(int *)(*piVar5 + -0x14) + (int)piVar5,
                           uVar4 + 1 & 0xfffeffff);
            }
            uVar4 = uVar4 + 1 & 0xfffeffff;
            uVar3 = (**(code **)(*(int *)piVar5[0x13] + 0x48))();
          } while (uVar4 < uVar3);
        }
      }
      (**(code **)(*piVar5 + 0x3c))(piVar5);
      piVar5 = (int *)piVar5[0x1a];
    } while (piVar5 != (int *)0x0);
    return;
  }
  return;
}

