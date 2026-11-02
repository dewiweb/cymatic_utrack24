// rea decompile_all
// name: FUN_000a426c
// address: 0xa426c
// body: available
// range: 0xa426c-0xa45b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000a426c(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_1 + 0x29) != '\0') {
    uVar1 = *(ushort *)(param_1 + 0xe6) + 1 & 0xfffeffff;
    *(short *)(param_1 + 0xe6) = (short)uVar1;
    if (*(byte *)(param_1 + 8) <= uVar1) {
      *(undefined2 *)(param_1 + 0xe6) = 0;
    }
    uVar4 = *(int *)(param_1 + 0xd0) * (uint)*(byte *)(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 0xdc);
    iVar5 = *(int *)(param_1 + 200) +
            (*(uint *)(param_1 + 0xc) >> 2) * (uint)*(ushort *)(param_1 + 0xe6) * 4;
    *(int *)(param_1 + 0xcc) = iVar5;
    if (uVar1 <= uVar4 && uVar4 - uVar1 != 0) {
      *(uint *)(param_1 + 0xdc) = uVar1 + *(int *)(param_1 + 0xd4);
    }
    goto LAB_000a45ac;
  }
  iVar5 = param_1 + (uint)*(ushort *)(param_1 + 0xe6) * 0x28;
  if (*(char *)(iVar5 + 0x10c) == '\0') {
    *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 1;
    FUN_0005f628(param_1,1,*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xd0),1,0);
  }
  else {
    if (*(char *)(iVar5 + 0x10d) == '\0') {
      FUN_00002898(DAT_000a45bc,*(undefined1 *)(iVar5 + 0x10e));
    }
    else {
      if (*(int *)(iVar5 + 0x11c) == *(int *)(iVar5 + 0x118)) {
        FUN_0012c7bc(iVar5 + 0xfc,0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x90),
                     *(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xe8));
        *(undefined4 *)(iVar5 + 0x108) = *(undefined4 *)(param_1 + 0xe0);
        iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))
                          (*(int **)(param_1 + 0x24),iVar5 + 0xfc,0);
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 1;
          *(undefined1 *)(iVar5 + 0x10c) = 1;
          *(undefined1 *)(iVar5 + 0x10d) = 1;
          *(undefined4 *)(iVar5 + 0x11c) = 0;
          *(undefined4 *)(iVar5 + 0x118) = 0;
          FUN_0005f628(param_1,1,*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xd0),0,0
                      );
        }
        else {
          uVar3 = *(short *)(param_1 + 0xe6) + 1;
          *(ushort *)(param_1 + 0xe6) = uVar3;
          if (*(byte *)(param_1 + 8) <= uVar3) {
            *(undefined2 *)(param_1 + 0xe6) = 0;
          }
          uVar1 = *(int *)(param_1 + 0xec) + 1;
          *(uint *)(param_1 + 0xec) = uVar1;
          *(uint *)(param_1 + 0xcc) =
               *(int *)(param_1 + 200) +
               (*(uint *)(param_1 + 0xc) >> 2) * (uint)*(ushort *)(param_1 + 0xe6) * 4;
          if (uVar1 < *(uint *)(param_1 + 0xf0)) {
            if (*(ushort *)(param_1 + 0x278) < 8) {
              *(ushort *)(param_1 + 0x278) = *(ushort *)(param_1 + 0x278) + 1;
            }
            else if (*(char *)(param_1 + 0x24c) != '\0') {
              *(undefined2 *)(param_1 + 0x278) = 0;
              FUN_0012367c(param_1 + 0x23c,0,*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x90));
              iVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 4))
                                (*(int **)(param_1 + 0x24),param_1 + 0x23c,0);
              if (iVar5 == 0) {
                *(undefined1 *)(param_1 + 0x24c) = 1;
              }
            }
          }
          else if (*(int *)(param_1 + 0x94) < 0) {
            FUN_0005f6a0(param_1);
            FUN_0005f628(param_1,0,*(undefined4 *)(param_1 + 0xe0),0,0,0);
          }
          else {
            *(undefined4 *)(param_1 + 0xd4) = 0;
            FUN_000ec110(param_1 + 0x254,*(int *)(param_1 + 0x26c) + 0xc0,
                         *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x90));
            iVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 4))
                              (*(int **)(param_1 + 0x24),param_1 + 0x254,0);
            if (iVar5 == 0) {
              thunk_FUN_00002898(DAT_000a45c0);
            }
            FUN_0005f628(param_1,4,*(undefined4 *)(param_1 + 0xe0),0,0,0);
            *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xd4);
            if (*(int *)(param_1 + 0x14) == 0) {
              *(undefined4 *)(param_1 + 0xd8) = 0;
            }
            FUN_001452dc(*(undefined4 *)(param_1 + 0x26c),*(undefined1 *)(param_1 + 4),
                         *(undefined4 *)(param_1 + 0x90),param_1 + 0xa8,
                         *(undefined2 *)(param_1 + 0x27a),param_1 + 0x27c);
            *(undefined2 *)(param_1 + 0x27a) = 0;
            *(undefined4 *)(param_1 + 0xec) = 0;
            uVar6 = *(undefined4 *)(param_1 + 0x94);
            *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x90) = uVar6;
          }
        }
        goto LAB_000a45a8;
      }
      FUN_00002898(DAT_000a45b8);
    }
    FUN_0005f6a0(param_1);
    FUN_0005f628(param_1,2,*(undefined4 *)(iVar5 + 0x108),*(undefined4 *)(param_1 + 0xd0),0,0);
  }
LAB_000a45a8:
  iVar5 = *(int *)(param_1 + 0xcc);
LAB_000a45ac:
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return iVar5;
}

