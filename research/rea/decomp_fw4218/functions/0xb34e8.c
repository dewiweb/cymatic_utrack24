// rea decompile_all
// name: FUN_000b34e8
// address: 0xb34e8
// body: available
// range: 0xb34e8-0xb364f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000b34e8(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  piVar7 = (int *)0x0;
  piVar10 = (int *)**(int **)(param_1 + 0x24);
  piVar8 = (int *)(*(int **)(param_1 + 0x24))[1];
  iVar9 = 0;
  bVar2 = false;
  piVar6 = piVar10;
  do {
    if ((piVar8 == piVar6) || (bVar2)) {
      if (iVar9 != 0) {
        piVar6 = (int *)**(undefined4 **)(param_1 + 0x28);
        piVar7 = (int *)(*(undefined4 **)(param_1 + 0x28))[1];
        if (piVar7 != piVar6) {
          do {
            if (*(char *)(*piVar6 + 4) == *(char *)(iVar9 + 4)) {
              iVar4 = *piVar6;
              if (iVar4 == 0) {
                return 0;
              }
              *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(iVar9 + 0x15);
              *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(iVar4 + 0x15);
              return *(undefined1 *)(iVar9 + 4);
            }
            piVar6 = piVar6 + 1;
          } while (piVar7 != piVar6);
        }
      }
      return 0;
    }
    cVar1 = *(char *)(*piVar6 + 4);
    iVar11 = 0;
    iVar4 = 0;
    for (piVar5 = piVar10; piVar8 != piVar5; piVar5 = piVar5 + 1) {
      if (*(char *)(*piVar5 + 4) == cVar1) {
        iVar11 = *piVar5;
        break;
      }
    }
    piVar3 = (int *)(*(uint **)(param_1 + 0x28))[1];
    for (piVar5 = (int *)**(uint **)(param_1 + 0x28); piVar3 != piVar5; piVar5 = piVar5 + 1) {
      if (*(char *)(*piVar5 + 4) == cVar1) {
        iVar4 = *piVar5;
        break;
      }
    }
    if (iVar11 == 0 || iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(iVar4 + 8);
      piVar5 = *(int **)(iVar11 + 8);
      if ((int)*(int **)(iVar11 + 8) <= (int)piVar3) {
        piVar5 = piVar3;
      }
    }
    if (0 < (int)piVar5) {
      piVar3 = *(int **)(param_1 + 0x3c);
    }
    iVar4 = 0;
    if (0 < (int)piVar5) {
      do {
        if (piVar3 <= piVar7) {
          bVar2 = true;
          iVar9 = *piVar6;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar7 = (int *)((int)piVar7 + 1);
      } while (iVar4 < (int)piVar5);
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

