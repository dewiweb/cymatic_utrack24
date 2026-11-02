// rea decompile_all
// name: FUN_001a74c0
// address: 0x1a74c0
// body: available
// range: 0x1a74c0-0x1a7783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a74c0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = 0;
  if (((param_4 == 0) || (*(int **)(param_4 + 0x4c) == (int *)0x0)) ||
     (**(int **)(param_4 + 0x4c) == 0)) {
    return -2;
  }
  if ((code *)*DAT_001a7784 == entry) {
    iVar1 = FUN_0019b388(DAT_001a7788);
  }
  else {
    iVar1 = (*(code *)*DAT_001a7784)();
  }
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return -4;
  }
  FUN_000038a0(iVar1,DAT_001a7788);
  uVar2 = FUN_001a4490(0);
  *(undefined4 *)(*param_1 + 0x30) = uVar2;
  FUN_001a48b6(param_3);
  *(undefined4 *)(*param_1 + 4) = *(undefined4 *)(param_3 + 0x1c);
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  FUN_001a48ba(param_3);
  *(char *)(*param_1 + 0x44) = (char)param_2;
  *(undefined4 *)(*param_1 + 0x48) = 0;
  *(undefined4 *)(*param_1 + 0x4c) = 0;
  *(undefined4 *)(*param_1 + 0x50) = 0;
  *(undefined4 *)(*param_1 + 0x54) = 0;
  *(int *)(*param_1 + 0x40) = param_3;
  iVar1 = FUN_001a4bdc(param_4 + 0xb0,0);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_001a6d94(*(undefined4 *)(iVar1 + 0x40),iVar1);
      FUN_001a73b4(iVar1);
    }
    *param_1 = 0;
    return -5;
  }
  iVar3 = *param_1;
  if (iVar3 == 0) {
    iVar1 = -2;
  }
  else {
    iVar1 = FUN_001a87ec(iVar1,iVar3 + 0xc);
    if (iVar1 == 0) {
      iVar1 = *param_1;
      if (iVar1 == 0) {
        iVar3 = -2;
      }
      else {
        iVar3 = FUN_001a3ee4(*(undefined4 *)(param_4 + 0x7c),iVar1 + 0x10);
        if (iVar3 == 0) {
          iVar1 = *param_1;
          if (iVar1 == 0) {
            iVar3 = -2;
          }
          else {
            iVar3 = FUN_001a71c8(*(undefined4 *)(param_4 + 0xac),iVar1 + 0x14);
            if (iVar3 == 0) {
              iVar1 = *param_1;
              if (iVar1 == 0) {
                iVar3 = -2;
              }
              else {
                iVar3 = FUN_001a2c4c(*(undefined4 *)(param_4 + 0x4c),iVar1 + 0x18);
                if (iVar3 == 0) {
                  iVar1 = *param_1;
                  if (iVar1 == 0) {
                    iVar3 = -2;
                  }
                  else {
                    iVar3 = FUN_001a3798(*(undefined4 *)(param_4 + 0x70),iVar1 + 0x1c);
                    if (iVar3 == 0) {
                      *(undefined4 *)(*param_1 + 0x20) = 0;
                      if ((code *)*DAT_001a7784 == entry) {
                        iVar1 = FUN_0019b388(0x10);
                      }
                      else {
                        iVar1 = (*(code *)*DAT_001a7784)(0x10);
                      }
                      *(int *)(*param_1 + 8) = iVar1;
                      iVar3 = *param_1;
                      if (iVar1 == 0) {
                        if (iVar3 != 0) {
                          FUN_001a6d94(*(undefined4 *)(iVar3 + 0x40),iVar3);
                          FUN_001a73b4(iVar3);
                        }
                        *param_1 = 0;
                        return -4;
                      }
                      FUN_001a3e80();
                      if (param_2 == 0) {
                        *(undefined1 *)(*param_1 + 0x2c) = 0;
                        iVar1 = FUN_0016e5fc(*param_1 + 0x48,param_3,param_4);
                        if (iVar1 == 0) {
                          FUN_0016e04c(param_3,*param_1);
                          return 0;
                        }
                        iVar3 = *param_1;
                        if (iVar3 != 0) {
                          FUN_001a6d94(*(undefined4 *)(iVar3 + 0x40),iVar3);
                          FUN_001a73b4(iVar3);
                        }
                        *param_1 = 0;
                        return iVar1;
                      }
                      if (param_2 == 1) {
                        *(undefined1 *)(*param_1 + 0x2c) = 5;
                        iVar1 = FUN_0016e8b0(*param_1 + 0x4c,param_3,param_4);
                        if (iVar1 == 0) {
                          FUN_0016e05c(param_3,*param_1);
                          return 0;
                        }
                        iVar3 = *param_1;
                      }
                      else if (param_2 == 2) {
                        *(undefined1 *)(*param_1 + 0x2c) = 10;
                        iVar1 = FUN_0016ed94(*param_1 + 0x50,param_3,param_4);
                        if (iVar1 == 0) {
                          FUN_0016e06c(param_3,*param_1);
                          return 0;
                        }
                        iVar3 = *param_1;
                      }
                      else {
                        *(undefined1 *)(*param_1 + 0x2c) = 0xf;
                        iVar1 = FUN_0016f01c(*param_1 + 0x54,param_3,param_4);
                        if (iVar1 == 0) {
                          FUN_0016e07c(param_3,*param_1);
                          return 0;
                        }
                        iVar3 = *param_1;
                      }
                      goto joined_r0x001a756c;
                    }
                    *(undefined4 *)(iVar1 + 0x1c) = 0;
                  }
                  iVar1 = *param_1;
                  goto joined_r0x001a7638;
                }
                *(undefined4 *)(iVar1 + 0x18) = 0;
              }
              iVar1 = *param_1;
              goto joined_r0x001a7638;
            }
            *(undefined4 *)(iVar1 + 0x14) = 0;
          }
          iVar1 = *param_1;
          goto joined_r0x001a7638;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      iVar1 = *param_1;
joined_r0x001a7638:
      if (iVar1 != 0) {
        FUN_001a6d94(*(undefined4 *)(iVar1 + 0x40),iVar1);
        FUN_001a73b4(iVar1);
      }
      *param_1 = 0;
      return iVar3;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  iVar3 = *param_1;
joined_r0x001a756c:
  if (iVar3 != 0) {
    FUN_001a6d94(*(undefined4 *)(iVar3 + 0x40),iVar3);
    FUN_001a73b4(iVar3);
  }
  *param_1 = 0;
  return iVar1;
}

