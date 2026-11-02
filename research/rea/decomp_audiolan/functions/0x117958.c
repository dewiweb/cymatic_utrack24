// rea decompile_all
// name: FUN_00117958
// address: 0x117958
// body: available
// range: 0x117958-0x1179cf inclusive
// range: 0x12ecbc-0x12ed83 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00117958(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  uVar6 = 0;
  while ((uVar6 < *(ushort *)(param_1 + 0xe) &&
         (puVar1 = *(undefined4 **)(param_1[0xd] + uVar6 * 4), puVar1 != (undefined4 *)0x0))) {
    (**(code **)*puVar1)(puVar1,*(int *)(*param_1 + -0x10) + (int)param_1);
    uVar6 = uVar6 + 1 & 0xfffeffff;
  }
  iVar2 = param_1[9];
  FUN_001a0700(iVar2 + 0x830);
  piVar4 = *(int **)(iVar2 + 0x85c);
  if (piVar4 != (int *)0x0) {
    *(short *)(piVar4 + 1) = (short)piVar4[1] + 1;
  }
  FUN_001a0d18(iVar2 + 0x830);
  if (piVar4 != (int *)0x0) {
    do {
      if ((int *)piVar4[5] == param_1) {
        *(undefined1 *)((int *)piVar4[5] + 0xf) = 1;
        *(undefined1 *)(piVar4 + 7) = 1;
        piVar4[6] = 0;
      }
      piVar5 = (int *)0x0;
      FUN_001a0700(iVar2 + 0x830);
      if (piVar4 != (int *)0x0) {
        piVar5 = (int *)piVar4[2];
        if (piVar5 != (int *)0x0) {
          *(short *)(piVar5 + 1) = (short)piVar5[1] + 1;
        }
        sVar3 = (short)piVar4[1] + -1;
        *(short *)(piVar4 + 1) = sVar3;
        if (sVar3 == 0) {
          (**(code **)(*piVar4 + 4))();
        }
      }
      FUN_001a0d18(iVar2 + 0x830);
      piVar4 = piVar5;
    } while (piVar5 != (int *)0x0);
    return;
  }
  return;
}

