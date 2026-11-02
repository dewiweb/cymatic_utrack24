// rea decompile_all
// name: FUN_000c99f8
// address: 0xc99f8
// body: available
// range: 0xc99f8-0xc9d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000c99f8(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  uVar13 = *DAT_000c9d30;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x5c))();
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x44) = 100;
  if (uVar3 != 0) {
    do {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x60))(*(int **)(param_1 + 0x40),uVar10);
      if ((((iVar4 != 0) && (*(char *)(iVar4 + 0x35) == '\0')) &&
          (uVar11 = *(uint *)(iVar4 + 4), uVar11 < 3)) &&
         ((uVar13 & 2 << ((uVar11 & 0x7f) << 1)) != 0)) {
        iVar12 = param_1 + uVar11;
        if (*(char *)(iVar12 + 0x20) == '\0') {
          if (*(char *)(iVar12 + 0x1e) == '\0') {
            bVar14 = *(int *)(DAT_000c9d34 + uVar11 * 0x10) != 0;
            iVar5 = FUN_0016deb0(iVar4,DAT_000c9d3c,DAT_000c9d38,0xffffffff);
            iVar2 = DAT_000c9d44;
            if (iVar5 == 0) {
              iVar4 = FUN_0016deb0(iVar4,DAT_000c9d3c,DAT_000c9d48,0xffffffff);
              if ((iVar4 != 0) && (!bVar14)) {
                iVar4 = param_1 + uVar10 * 4;
                *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
              }
            }
            else if (bVar14) {
              iVar4 = *(int *)(iVar4 + 0x10);
              if (*(char *)(iVar12 + 0x1a) == '\0') {
                lVar1 = (ulonglong)(iVar4 * (uint)*(byte *)(param_1 + 0x18)) *
                        (ulonglong)DAT_000c9d40;
                uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
              }
              else {
                lVar1 = (ulonglong)(iVar4 * (uint)*(byte *)(param_1 + 0x19)) *
                        (ulonglong)DAT_000c9d40;
                uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
              }
              uVar9 = uVar9 >> 5;
              uVar6 = FUN_000a4650(uVar9,(int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
              uVar7 = FUN_00158b2c(uVar6,uVar11);
              if ((uVar7 < iVar4 - uVar9) || (uVar9 + iVar4 < uVar7)) {
                bVar14 = false;
              }
            }
            else {
              iVar4 = param_1 + uVar10 * 4;
              if (*(uint *)(iVar4 + 0x30) < 8) {
                *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) + 1;
              }
              else {
                *(undefined4 *)(iVar4 + 0x30) = 0;
                iVar4 = iVar2 + uVar10 * 0x80;
                uVar9 = *(uint *)(iVar4 + 0x148);
                *(uint *)(iVar4 + 0x148) = uVar9 | 0x10000000;
                *(undefined4 *)(iVar2 + uVar11 * 0x80 + 300) = 0x6a0000;
                *(uint *)(iVar4 + 0x148) = uVar9 & 0xefffffff;
              }
            }
          }
          else {
            bVar14 = false;
            *(undefined1 *)(iVar12 + 0x1e) = 0;
          }
        }
        else {
          bVar14 = true;
        }
        if ((bool)*(char *)(iVar12 + 0x1a) == bVar14) {
          *(undefined4 *)(param_1 + uVar11 * 4 + 0x28) = 0;
          iVar4 = *(int *)(param_1 + 0x44);
joined_r0x000c9d24:
          iVar12 = 100;
          if (100 < iVar4) {
LAB_000c9d28:
            iVar4 = iVar12;
          }
        }
        else {
          if (bVar14 != false) {
            iVar4 = param_1 + uVar11 * 4;
            *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1;
          }
          iVar4 = param_1 + uVar11 * 4;
          if ((4 < *(uint *)(iVar4 + 0x28)) || (bVar14 == false)) {
            *(bool *)(iVar12 + 0x1a) = bVar14;
            *(undefined1 *)(iVar12 + 0x1c) = 1;
            *(undefined1 *)(param_1 + 0x22) = 1;
            *(undefined4 *)(iVar4 + 0x28) = 0;
          }
          if ((*(char *)(iVar12 + 0x1a) != '\0') || (bVar14 == false)) {
            iVar4 = *(int *)(param_1 + 0x44);
            goto joined_r0x000c9d24;
          }
          iVar4 = *(int *)(param_1 + 0x44);
          iVar12 = 10;
          if (10 < iVar4) goto LAB_000c9d28;
        }
        *(int *)(param_1 + 0x44) = iVar4;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    if (*(char *)(param_1 + 0x24) != '\0') {
      *(undefined1 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    }
    if (*(code **)(param_1 + 8) != entry) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  iVar12 = *(int *)(param_1 + 0x44);
  iVar4 = *(int *)(param_1 + 4);
  if (iVar12 != 0) {
    piVar8 = *(int **)(iVar4 + 0x60);
    (**(code **)(*piVar8 + 0x2c))(piVar8,0);
    piVar8 = *(int **)(iVar4 + 0x60);
    (**(code **)(*piVar8 + 0x24))(piVar8,0,0,iVar12);
    return;
  }
  return;
}

