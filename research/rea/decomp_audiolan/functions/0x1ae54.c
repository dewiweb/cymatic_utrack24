// rea decompile_all
// name: FUN_0001ae54
// address: 0x1ae54
// body: available
// range: 0x1ae54-0x1b0bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ae54(int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [148];
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  iVar9 = *(int *)(param_1 + 0x138);
  if ((((param_3 == 0) || (*(short *)(iVar9 + 0x230) == 5)) || (*(char *)(param_2 + 4) == -0x10)) ||
     (*(short *)(param_2 + 6) != 5)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  if (*(char *)(iVar9 + 0xb8) == '\0') {
    pcVar10 = (code *)(iVar9 + 0x240);
    uVar5 = param_1 + 0xc0;
    if (*(int *)(iVar9 + 0x244) == 0) goto LAB_0001af06;
    iVar6 = iVar9 + 0x80;
    if (*(int *)(iVar9 + 0xb4) == 0) goto LAB_0001af06;
    bVar11 = *(char *)(iVar9 + 0x24c) == '\0';
LAB_0001aef4:
    if (((!bVar11) && (*(char *)(param_2 + 4) == -0x10)) &&
       (-1 < *(int *)(uVar5 + 0x1c) - *(int *)(iVar6 + 0x3c))) {
LAB_0001af06:
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(uVar5 + 0x1c);
      if (local_18 == 1) {
        if ((*(int *)(iVar9 + 0x38) == 0) && (*(int *)(param_2 + 0x40) != iVar9)) {
          if (*(int *)(param_2 + 0x40) == 0) {
            *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
          }
          *(int *)(param_2 + 0x40) = iVar9;
          FUN_0003f53c(param_1,param_2);
        }
LAB_0001af42:
        if ((*(int *)(iVar9 + 0x238) != 0) || ((int)((uint)*(byte *)(param_2 + 4) << 0x1b) < 0)) {
LAB_0001af5e:
          piVar1 = DAT_0001b0c4;
          if (((0 < *(int *)(iVar9 + 0x10)) && (*(int *)(iVar9 + 0x38) == 0)) &&
             ((*(short *)(iVar9 + 0x12e) == 0 || (*(int *)(iVar9 + 0x234) == 0)))) {
            *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(uVar5 + 0x1c);
            *(undefined4 *)(iVar9 + 0xac) = *(undefined4 *)(uVar5 + 0x1c);
            *(undefined4 *)(iVar9 + 0x1c) = 0;
            *(int *)(iVar9 + 0x10) = *piVar1 * 0xe10;
            *(undefined4 *)(iVar9 + 0xa8) = 0;
            *(undefined1 *)(iVar9 + 0xd8) = 0;
          }
        }
      }
      else if (local_18 == 2) {
        if (*(int *)(iVar9 + 0xa8) == 0) goto LAB_0001af5e;
      }
      else if (local_18 == 1) goto LAB_0001af42;
      bVar11 = *(int *)(param_2 + 0x34) == 0;
      while (bVar11) {
        if (*(char *)(param_2 + 4) != -0x10) {
          uVar7 = (uint)*(ushort *)(iVar9 + 0x230);
          if (uVar7 == 0x2f) goto LAB_0001afe4;
          if (*(short *)(param_2 + 6) != 0x2f) goto LAB_0001afe4;
          if (0xfe < uVar7) goto LAB_0001afe4;
          if (((uint)*(byte *)(*(int *)(param_2 + 0x24) + (*(ushort *)(iVar9 + 0x230) >> 3) + 4) &
              0x80U >> (uVar7 & 7)) != 0) goto LAB_0001afe4;
        }
        bVar12 = local_18 == 0;
        iVar6 = local_18;
        do {
          bVar11 = true;
          if (bVar12) goto LAB_0001aef4;
          bVar11 = true;
          iVar6 = 0;
          if (*(int *)pcVar10 == 0) goto LAB_0001aef4;
LAB_0001afe4:
          if ((*(int *)(pcVar10 + 0x18) != 0) && (*(char *)(iVar9 + 0xfe) == '\0')) {
            if ((bVar2) && (*(int *)pcVar10 == 0)) break;
            uVar7 = *(int *)(param_1 + 0x30) + 1;
            *(uint *)(param_1 + 0x30) = uVar7;
            if (*(uint *)(param_1 + 0x2c) != uVar7) {
              FUN_00024642(0,s____s__Locking_Failure__mDNS_busy_0001b0ca + 2,_DAT_0001b0c8);
              uVar5 = uVar7;
            }
            uVar7 = (uint)*(ushort *)(iVar9 + 0x230);
            if ((((uVar7 == 0x2f) || (*(short *)(param_2 + 6) != 0x2f)) || (0xfe < uVar7)) ||
               (((uint)*(byte *)(*(int *)(param_2 + 0x24) + (*(ushort *)(iVar9 + 0x230) >> 3) + 4) &
                0x80U >> (uVar7 & 7)) != 0)) {
              pcVar10 = *(code **)(pcVar10 + 0x18);
              (*pcVar10)(param_1,iVar9,param_2 + 4,local_18);
              uVar7 = uVar5;
            }
            else {
              FUN_00024968(param_1,auStack_b8,iVar9 + 0x130,*(undefined4 *)(iVar9 + 4),uVar7,
                           *(undefined2 *)(iVar9 + 0x232),1,*(undefined4 *)(param_2 + 0x1c),
                           *(undefined4 *)(iVar9 + 200));
              pcVar10 = *(code **)(pcVar10 + 0x18);
              (*pcVar10)(param_1,iVar9,auStack_b4,local_18);
            }
            uVar8 = *(uint *)(param_1 + 0x30);
            uVar5 = uVar7;
            if (*(uint *)(param_1 + 0x2c) != uVar8) {
              FUN_00024642(0,s__s__Unlocking_Failure__mDNS_busy_0001b10c,_DAT_0001b0c8);
              uVar5 = uVar8;
            }
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
          }
          bVar12 = true;
          iVar6 = 0;
        } while (!bVar2);
        bVar11 = false;
        if (*(int *)(param_1 + 0x138) == iVar9) {
          FUN_0001b360(param_1,iVar9,param_2 + 4);
          return;
        }
      }
    }
  }
  else if (*DAT_0001b0bc != 0) {
    uVar3 = FUN_0002272c(param_2 + 4,*(int *)(param_2 + 0x24) + 4,param_1 + 0x37);
    uVar4 = FUN_000203e4(*(undefined2 *)(iVar9 + 0x230));
    FUN_00024642(3,DAT_0001b0c0,iVar9,iVar9 + 0x130,uVar4,uVar3,*(undefined1 *)(iVar9 + 0xb8));
  }
  return;
}

