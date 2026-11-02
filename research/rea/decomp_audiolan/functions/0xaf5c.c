// rea decompile_all
// name: FUN_0000af5c
// address: 0xaf5c
// body: available
// range: 0xaf5c-0xb26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000af5c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  iVar2 = FUN_0016deb0(param_2,DAT_0000b274,DAT_0000b278,0xffffffff);
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_0016deb0(local_28,DAT_0000b274,DAT_0000b270,0xffffffff);
    if (piVar3 != (int *)0x0) {
      if ((*(int *)(param_1 + 0x18) != 0) && (*(char *)(*(int *)(param_1 + 0x18) + 0x65) == '\0')) {
        iVar2 = (**(code **)(*piVar3 + 0x40))(piVar3);
        if (iVar2 != 0) {
          uVar4 = (**(code **)(*piVar3 + 8))(piVar3);
          FUN_000028a4(DAT_0000b27c,uVar4);
          return 0;
        }
        iVar2 = (**(code **)(*piVar3 + 0x28))(piVar3);
        if (iVar2 == 0) {
          uVar4 = (**(code **)(*piVar3 + 8))(piVar3);
          FUN_000028a4(DAT_0000b280,uVar4);
          return 0;
        }
        iVar5 = (**(code **)(*piVar3 + 0x3c))(piVar3);
        iVar5 = FUN_0000a450(param_1,*(int *)(param_1 + 0x2c) + iVar5);
        if (iVar5 != 0) {
          iVar5 = 0;
          if (0 < iVar2) {
            do {
              iVar6 = (**(code **)(*piVar3 + 0x2c))(piVar3,iVar5);
              if (iVar6 == 0) {
                uVar4 = (**(code **)(*piVar3 + 8))(piVar3);
                FUN_000028a4(DAT_0000b288,iVar5,uVar4);
                return 0;
              }
              iVar6 = FUN_00154ddc();
              iVar8 = *(int *)(param_1 + 0x18);
              if (iVar8 != 0) {
                uVar10 = (uint)*(byte *)(param_1 + 0x21);
                uVar4 = DAT_0000b28c;
                if (uVar10 == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar10 & 1;
                  iVar9 = 0;
                  if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
                    do {
                      if (*(int *)(iVar8 + iVar9 * 4 + 0x68) == iVar6) goto LAB_0000b1bc;
                      iVar9 = iVar9 + 1;
                    } while (iVar9 < (int)uVar7);
                  }
                }
                if (uVar7 < uVar10) {
                  do {
                    if ((*(int *)(iVar8 + uVar7 * 4 + 0x68) == iVar6) ||
                       (*(int *)(iVar8 + uVar7 * 4 + 0x6c) == iVar6)) goto LAB_0000b1bc;
                    uVar7 = uVar7 + 2;
                  } while ((int)uVar7 < (int)uVar10);
                }
              }
              if (iVar8 == 0) {
                FUN_000028a4(DAT_0000a918);
                uVar4 = DAT_0000b290;
LAB_0000b1bc:
                FUN_000028a4(uVar4,iVar6);
                return 0;
              }
              uVar10 = (uint)*(byte *)(param_1 + 0x21);
              if (0xf < uVar10) {
                FUN_000028a4(DAT_0000a914,uVar10,0x10);
                uVar4 = DAT_0000b290;
                goto LAB_0000b1bc;
              }
              *(int *)(iVar8 + uVar10 * 4 + 0x68) = iVar6;
              iVar5 = iVar5 + 1;
              if (*(char *)(param_1 + 0x21) == '\0') {
                *(int *)(param_1 + 0x24) = iVar6;
              }
              *(char *)(param_1 + 0x21) = *(char *)(param_1 + 0x21) + '\x01';
            } while (iVar5 < iVar2);
          }
          if (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 2 == 0) {
            iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
            if (iVar2 == 0) {
              return 0;
            }
            cVar1 = (char)*(undefined4 *)(iVar2 + 0x114);
            if ((*(int *)(param_1 + 0x18) != 0 && cVar1 != -1) && (cVar1 != -2)) {
              *(char *)(param_1 + 0x2a) = cVar1;
            }
            uVar4 = FUN_00154ddc(iVar2);
            *(undefined4 *)(param_1 + 0x24) = uVar4;
          }
          goto LAB_0000b250;
        }
        FUN_000028a4(DAT_0000b284);
      }
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x18) + 0x65) != '\0') {
      return 0;
    }
    FUN_0000a3d0(param_1,*(int *)(param_1 + 0x34) + 1);
  }
LAB_0000b250:
  local_30 = local_28;
  FUN_001df908(param_1 + 0x48,&local_30);
  return 1;
}

