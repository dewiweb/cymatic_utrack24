// rea decompile_all
// name: FUN_00186968
// address: 0x186968
// body: available
// range: 0x186968-0x186af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00186968(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 == (int *)0x0) {
    return;
  }
  for (piVar2 = (int *)piVar4[0x10]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x10]) {
    piVar4 = piVar2;
  }
  if (piVar4 != (int *)0x0) {
    do {
      (**(code **)(*piVar4 + 0x84))(piVar4);
      *(undefined1 *)((int)piVar4 + 0xeb) = 1;
      uVar7 = 0;
      if ((short)piVar4[0x19] != 0) {
        do {
          FUN_001c00bc(auStack_30,piVar4 + 0x15,uVar7);
          iVar3 = FUN_001725e0(param_2,auStack_30);
          if (iVar3 != 0) {
            uVar6 = 0;
            while ((uVar6 < *(ushort *)(piVar4 + 0x23) &&
                   (puVar5 = *(undefined4 **)(piVar4[0x22] + uVar6 * 4), puVar5 != (undefined4 *)0x0
                   ))) {
              FUN_001c00bc(auStack_40,piVar4 + 0x15,uVar7);
              if (piVar4 == (int *)0x0) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(*piVar4 + -0x14) + (int)piVar4;
              }
              (**(code **)*puVar5)(puVar5,iVar3,auStack_40,1);
              uVar6 = uVar6 + 1 & 0xfffeffff;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(piVar4 + 0x19));
      }
      if (piVar4 == (int *)0x0) {
        piVar4 = *(int **)(param_1 + 4);
        if (piVar4 == (int *)0x0) {
          return;
        }
        for (piVar2 = (int *)piVar4[0x10]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x10]) {
          piVar4 = piVar2;
        }
      }
      else {
        pbVar1 = (byte *)(piVar4 + 0x12);
        piVar4 = (int *)piVar4[0x11];
        piVar2 = piVar4;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            piVar4 = piVar2;
            if (piVar4 == (int *)0x0) {
              return;
            }
            piVar2 = (int *)piVar4[0x10];
          } while ((int *)piVar4[0x10] != (int *)0x0);
        }
      }
    } while (piVar4 != (int *)0x0);
    return;
  }
  return;
}

