// rea decompile_all
// name: FUN_0001c994
// address: 0x1c994
// body: available
// range: 0x1c994-0x1cca9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001c994(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_2 != 0) {
    iVar2 = param_1 + DAT_0001ccac;
    do {
      iVar3 = *(int *)(param_2 + 0x2c);
      if (((((iVar3 != 0) && ((*(byte *)(iVar3 + 4) & 0x3f) >> 2 != 0)) &&
           ((*(int *)(iVar3 + 0x2c) == 0 ||
            ((*(byte *)(*(int *)(iVar3 + 0x2c) + 4) & 0x3f) >> 2 != 0)))) &&
          (((*(int *)(iVar3 + 0x30) == 0 ||
            ((*(byte *)(*(int *)(iVar3 + 0x30) + 4) & 0x3f) >> 2 != 0)) &&
           ((*(int *)(iVar3 + 0x34) == 0 ||
            ((*(byte *)(*(int *)(iVar3 + 0x34) + 4) & 0x3f) >> 2 != 0)))))) &&
         (((*(int *)(iVar3 + 0x1c) == *DAT_0001ccb0 || (*(int *)(iVar3 + 0x1c) == param_4)) &&
          (*(int *)(iVar3 + 0xa4) == 0)))) {
        if ((int *)*param_3 != (int *)(iVar3 + 0xa4)) {
          *(int *)*param_3 = iVar3;
          iVar4 = param_2;
          if ((param_2 != 0) && (*(int *)(param_2 + 0xac) != 0)) {
            iVar4 = *(int *)(param_2 + 0xac);
          }
          *(int *)(iVar3 + 0xac) = iVar4;
          *param_3 = (int *)(iVar3 + 0xa4);
        }
      }
      iVar3 = *(int *)(param_2 + 0x30);
      if ((((((iVar3 != 0) && ((*(byte *)(iVar3 + 4) & 0x3f) >> 2 != 0)) &&
            ((*(int *)(iVar3 + 0x2c) == 0 ||
             ((*(byte *)(*(int *)(iVar3 + 0x2c) + 4) & 0x3f) >> 2 != 0)))) &&
           ((*(int *)(iVar3 + 0x30) == 0 ||
            ((*(byte *)(*(int *)(iVar3 + 0x30) + 4) & 0x3f) >> 2 != 0)))) &&
          ((*(int *)(iVar3 + 0x34) == 0 ||
           ((*(byte *)(*(int *)(iVar3 + 0x34) + 4) & 0x3f) >> 2 != 0)))) &&
         (((*(int *)(iVar3 + 0x1c) == *DAT_0001ccb0 || (*(int *)(iVar3 + 0x1c) == param_4)) &&
          (*(int *)(iVar3 + 0xa4) == 0)))) {
        if ((int *)*param_3 != (int *)(iVar3 + 0xa4)) {
          *(int *)*param_3 = iVar3;
          iVar4 = param_2;
          if ((param_2 != 0) && (*(int *)(param_2 + 0xac) != 0)) {
            iVar4 = *(int *)(param_2 + 0xac);
          }
          *(int *)(iVar3 + 0xac) = iVar4;
          *param_3 = (int *)(iVar3 + 0xa4);
        }
      }
      sVar1 = *(short *)(param_2 + 6);
      if (sVar1 == 0x21) {
        for (piVar5 = *(int **)(&DAT_00001fb8 + param_1); piVar5 != (int *)0x0;
            piVar5 = (int *)*piVar5) {
          if (((((*(short *)((int)piVar5 + 6) == 1) || (*(short *)((int)piVar5 + 6) == 0x1c)) &&
               (((*(byte *)(piVar5 + 1) & 0x3f) >> 2 != 0 &&
                ((piVar5[0xb] == 0 || ((*(byte *)(piVar5[0xb] + 4) & 0x3f) >> 2 != 0)))))) &&
              ((piVar5[0xc] == 0 || ((*(byte *)(piVar5[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
             ((((piVar5[0xd] == 0 || ((*(byte *)(piVar5[0xd] + 4) & 0x3f) >> 2 != 0)) &&
               ((piVar5[7] == *DAT_0001ccb0 || (piVar5[7] == param_4)))) &&
              (((*(int *)(param_2 + 0x18) == piVar5[5] &&
                (iVar3 = FUN_000400ea(*(int *)(param_2 + 0x24) + 10,piVar5[8]), iVar3 != 0)) &&
               (piVar5[0x29] == 0)))))) {
            if ((int *)*param_3 != piVar5 + 0x29) {
              *(int *)*param_3 = (int)piVar5;
              iVar3 = param_2;
              if ((param_2 != 0) && (*(int *)(param_2 + 0xac) != 0)) {
                iVar3 = *(int *)(param_2 + 0xac);
              }
              piVar5[0x2b] = iVar3;
              *param_3 = piVar5 + 0x29;
            }
          }
        }
      }
      else if ((sVar1 == 1) || (sVar1 == 0x1c)) {
        for (piVar5 = *(int **)(&DAT_00001fb8 + param_1); piVar5 != (int *)0x0;
            piVar5 = (int *)*piVar5) {
          if ((((((*(short *)((int)piVar5 + 6) == 1) || (*(short *)((int)piVar5 + 6) == 0x1c)) &&
                ((*(byte *)(piVar5 + 1) & 0x3f) >> 2 != 0)) &&
               ((piVar5[0xb] == 0 || ((*(byte *)(piVar5[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
              (((piVar5[0xc] == 0 || ((*(byte *)(piVar5[0xc] + 4) & 0x3f) >> 2 != 0)) &&
               ((piVar5[0xd] == 0 || ((*(byte *)(piVar5[0xd] + 4) & 0x3f) >> 2 != 0)))))) &&
             (((piVar5[7] == *DAT_0001ccb0 || (piVar5[7] == param_4)) &&
              (((*(int *)(param_2 + 0x14) == piVar5[5] &&
                (iVar3 = FUN_000400ea(*(undefined4 *)(param_2 + 0x20),piVar5[8]), iVar3 != 0)) &&
               (piVar5[0x29] == 0)))))) {
            if ((int *)*param_3 != piVar5 + 0x29) {
              *(int *)*param_3 = (int)piVar5;
              iVar3 = param_2;
              if ((param_2 != 0) && (*(int *)(param_2 + 0xac) != 0)) {
                iVar3 = *(int *)(param_2 + 0xac);
              }
              piVar5[0x2b] = iVar3;
              *param_3 = piVar5 + 0x29;
            }
          }
        }
      }
      else if (((((sVar1 == 0xc) && (((byte)(&DAT_00001c58)[param_1] & 0x3f) >> 2 != 0)) &&
                ((*(int *)(&DAT_00001c80 + param_1) == 0 ||
                 ((*(byte *)(*(int *)(&DAT_00001c80 + param_1) + 4) & 0x3f) >> 2 != 0)))) &&
               (((*(int *)(&DAT_00001c84 + param_1) == 0 ||
                 ((*(byte *)(*(int *)(&DAT_00001c84 + param_1) + 4) & 0x3f) >> 2 != 0)) &&
                ((*(int *)(&DAT_00001c88 + param_1) == 0 ||
                 ((*(byte *)(*(int *)(&DAT_00001c88 + param_1) + 4) & 0x3f) >> 2 != 0)))))) &&
              ((((*(int *)(&DAT_00001c70 + param_1) == *DAT_0001ccb0 ||
                 (*(int *)(&DAT_00001c70 + param_1) == param_4)) &&
                (iVar3 = FUN_00040098(*(int *)(param_2 + 0x24) + 4,
                                      *(undefined4 *)(&DAT_00001c74 + param_1)), iVar3 != 0)) &&
               ((*(int *)(iVar2 + 0xa4) == 0 && ((int *)*param_3 != (int *)(iVar2 + 0xa4))))))) {
        *(int *)*param_3 = iVar2;
        iVar3 = param_2;
        if ((param_2 != 0) && (*(int *)(param_2 + 0xac) != 0)) {
          iVar3 = *(int *)(param_2 + 0xac);
        }
        *(int *)(iVar2 + 0xac) = iVar3;
        *param_3 = (int *)(iVar2 + 0xa4);
      }
      param_2 = *(int *)(param_2 + 0xa4);
    } while (param_2 != 0);
    return;
  }
  return;
}

