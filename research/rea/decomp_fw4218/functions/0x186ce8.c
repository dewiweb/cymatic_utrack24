// rea decompile_all
// name: FUN_00186ce8
// address: 0x186ce8
// body: available
// range: 0x186ce8-0x186e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00186ce8(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  
  piVar5 = *(int **)(param_1 + 4);
  if (piVar5 == (int *)0x0) {
    return;
  }
  for (piVar2 = (int *)piVar5[0x10]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x10]) {
    piVar5 = piVar2;
  }
  if (piVar5 != (int *)0x0) {
    do {
      (**(code **)(*piVar5 + 0x84))(piVar5);
      *(undefined1 *)((int)piVar5 + 0xeb) = 1;
      uVar7 = 0;
      if ((short)piVar5[0x19] != 0) {
        do {
          FUN_001c00bc(auStack_40,piVar5 + 0x15,uVar7);
          iVar3 = FUN_001725e0(auStack_40,param_2);
          if (iVar3 != 0) {
            FUN_0017277c(auStack_30,auStack_40);
            uStack_2c = param_3;
            FUN_00191fb0(piVar5 + 0x15,auStack_40,auStack_30);
            uVar6 = 0;
            while ((uVar6 < *(ushort *)(piVar5 + 0x23) &&
                   (puVar4 = *(undefined4 **)(piVar5[0x22] + uVar6 * 4), puVar4 != (undefined4 *)0x0
                   ))) {
              bVar8 = piVar5 != (int *)0x0;
              iVar3 = 0;
              if (bVar8) {
                iVar3 = *piVar5;
              }
              if (bVar8) {
                iVar3 = *(int *)(iVar3 + -0x14);
              }
              if (bVar8) {
                iVar3 = iVar3 + (int)piVar5;
              }
              (**(code **)*puVar4)(puVar4,iVar3,auStack_30,1);
              uVar6 = uVar6 + 1 & 0xfffeffff;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(piVar5 + 0x19));
      }
      if (piVar5 == (int *)0x0) {
        piVar5 = *(int **)(param_1 + 4);
        if (piVar5 == (int *)0x0) {
          return;
        }
        for (piVar2 = (int *)piVar5[0x10]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x10]) {
          piVar5 = piVar2;
        }
      }
      else {
        pbVar1 = (byte *)(piVar5 + 0x12);
        piVar5 = (int *)piVar5[0x11];
        piVar2 = piVar5;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            piVar5 = piVar2;
            if (piVar5 == (int *)0x0) {
              return;
            }
            piVar2 = (int *)piVar5[0x10];
          } while ((int *)piVar5[0x10] != (int *)0x0);
        }
      }
    } while (piVar5 != (int *)0x0);
    return;
  }
  return;
}

