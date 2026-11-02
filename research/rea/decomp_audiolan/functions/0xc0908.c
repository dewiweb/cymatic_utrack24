// rea decompile_all
// name: FUN_000c0908
// address: 0xc0908
// body: available
// range: 0xc0908-0xc0af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000c0a18) */
/* WARNING: Removing unreachable block (ram,0x000c0a1c) */

int FUN_000c0908(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int local_28 [2];
  int *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  piVar2 = (int *)FUN_00045280();
  puVar1 = DAT_000c0af4;
  if (piVar2 == (int *)0x0) {
    return -0x18;
  }
  piVar3 = (int *)FUN_000b369c(*DAT_000c0af4,*(undefined4 *)(*local_20 + 4),1);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,local_1c,local_20,piVar2,1);
    if (iVar4 != 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      return iVar4;
    }
    piVar3 = (int *)FUN_000b369c(*puVar1,*(undefined4 *)(*local_20 + 0xc),0);
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,local_1c,local_20,piVar2,0);
      if (iVar4 != 0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        return iVar4;
      }
      local_28[0] = 0;
      iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,local_28);
      if (iVar4 != 0) {
        iVar4 = 0;
        if (0 < local_28[0]) {
          do {
            iVar5 = (**(code **)(*piVar2 + 8))(piVar2);
            piVar3 = local_20;
            if (iVar5 == 0) {
              if (piVar2 == (int *)0x0) {
                return -0x2d;
              }
              goto LAB_000c09d6;
            }
            piVar14 = local_20 + 1;
            piVar6 = (int *)local_20[2];
            if (piVar6 == (int *)local_20[3]) {
              uVar13 = (int)piVar6 - *piVar14 >> 2;
              if (uVar13 < (uint)(local_20[3] - *piVar14 >> 2)) {
                local_20[2] = (int)(piVar6 + 1);
                if (piVar6 != (int *)0x0) {
                  *piVar6 = piVar6[-1];
                }
                goto LAB_000c0a34;
              }
              uVar9 = (uVar13 >> 1) + uVar13 + (uVar13 >> 3);
              uVar7 = uVar13 + 1;
              if (uVar13 + 1 <= uVar9) {
                uVar7 = uVar9;
              }
              piVar8 = (int *)FUN_0010f82c(uVar7 * 4,0);
              piVar12 = piVar8;
              for (piVar10 = (int *)*piVar14; piVar10 != piVar6; piVar10 = piVar10 + 1) {
                if (piVar12 != (int *)0x0) {
                  *piVar12 = *piVar10;
                }
                piVar12 = piVar12 + 1;
              }
              piVar10 = (int *)(((int)piVar6 - *piVar14 & 0xfffffffcU) + (int)piVar8);
              if (piVar10 != (int *)0x0) {
                *piVar10 = iVar5;
              }
              piVar12 = (int *)piVar3[2];
              piVar10 = (int *)(((int)piVar6 - *piVar14 & 0xfffffffcU) + (int)piVar8);
              for (; piVar6 != piVar12; piVar6 = piVar6 + 1) {
                piVar10 = piVar10 + 1;
                if (piVar10 != (int *)0x0) {
                  *piVar10 = *piVar6;
                }
              }
              iVar11 = piVar3[2];
              iVar5 = *piVar14;
              FUN_0010fa20(iVar5,piVar3[3] - iVar5 >> 2,0);
              *piVar14 = (int)piVar8;
              piVar3[2] = (int)(piVar8 + (iVar11 - iVar5 >> 2) + 1);
              piVar3[3] = (int)(piVar8 + uVar7);
            }
            else {
              local_20[2] = (int)(piVar6 + 1);
              if (piVar6 != (int *)0x0) {
LAB_000c0a34:
                *piVar6 = iVar5;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_28[0]);
          if (piVar2 == (int *)0x0) {
            return 0;
          }
        }
        (**(code **)(*piVar2 + 4))(piVar2);
        return 0;
      }
LAB_000c09d6:
      (**(code **)(*piVar2 + 4))(piVar2);
      return -0x2d;
    }
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  return -0xf;
}

