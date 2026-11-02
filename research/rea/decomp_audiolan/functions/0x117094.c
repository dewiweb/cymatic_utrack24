// rea decompile_all
// name: FUN_00117094
// address: 0x117094
// body: available
// range: 0x117094-0x117213 inclusive
// range: 0x1174e0-0x117623 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00117094(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 in_stack_00000014;
  undefined1 auStack_c0 [100];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  int iStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uStack_28 = param_4;
  iVar1 = param_3 - DAT_00117624;
  if (param_3 == DAT_00117624) {
    return;
  }
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  if ((int)DAT_00117624 < (int)param_3) {
    iVar3 = iVar1 - DAT_0011762c;
    if (iVar1 == DAT_0011762c) {
      return;
    }
    if (DAT_0011762c < iVar1) {
      if (iVar3 != 0x3ffa) {
        if (iVar3 == 0x3ffc) {
          switch(param_4) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
            return;
          }
        }
        if (iVar3 != 0x4001) goto LAB_0011717c;
      }
      iVar1 = FUN_000e9810(**(int **)(*(int *)(param_1 + 4) + 0x7c) + 0x484,DAT_00117634);
      if (iVar1 == 0) {
        return;
      }
      do {
        if ((*(ushort *)(iVar1 + 0x90) == param_3) &&
           ((*(char *)(iVar1 + 0x94) == '\0' || (*(ushort *)(iVar1 + 0x92) == uStack_28)))) {
          if (*(char *)(iVar1 + 0x95) != '\0') {
            FUN_0015e8b8(auStack_50,in_stack_00000014);
            (**(code **)(**(int **)(iVar1 + 0x60) + 0x48))(auStack_5c);
            FUN_0015e8b8(auStack_c0,auStack_5c);
            iVar3 = FUN_0015e940(auStack_c0,auStack_50);
            if (iVar3 != 0) goto LAB_001175b0;
            if (*(char *)(iVar1 + 0x95) != '\0') goto LAB_001175e8;
          }
          (**(code **)(**(int **)(iVar1 + 0x60) + 0x48))(auStack_44);
          iVar3 = FUN_0015e940(auStack_44,in_stack_00000014);
          if (iVar3 != 0) {
LAB_001175b0:
            FUN_0013cb50(iVar1,in_stack_00000014,param_3,uStack_28);
            FUN_000fbaac(iVar1);
            return;
          }
        }
LAB_001175e8:
        iVar3 = FUN_000e9734(**(int **)(*(int *)(param_1 + 4) + 0x7c) + 0x484,iVar1);
        FUN_000fbaac(iVar1);
        iVar1 = iVar3;
        if (iVar3 == 0) {
          return;
        }
      } while( true );
    }
    iVar3 = iVar1 + -0xe2d;
    bVar6 = iVar3 != 0;
    bVar7 = iVar3 != 0x1e0;
    if (bVar6 && bVar7) {
      iVar3 = iVar1 + -0xdfe;
    }
    if ((!bVar6 || !bVar7) || iVar3 == 0x2200) {
      return;
    }
  }
  else {
    iVar1 = param_3 - DAT_00117628;
    if (param_3 == DAT_00117628) {
      return;
    }
    if ((int)DAT_00117628 < (int)param_3) {
      if ((iVar1 == 1 || iVar1 == 2) || iVar1 == 3) {
        return;
      }
    }
    else {
      bVar6 = param_3 == 0x1203;
      iVar1 = 0;
      if (!bVar6) {
        iVar1 = param_3 - 0x2020;
        bVar6 = iVar1 == 0;
      }
      if (bVar6) {
        return;
      }
      if (iVar1 == 0x11 || iVar1 == 0x12) {
        return;
      }
    }
  }
LAB_0011717c:
  uVar5 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 0x10) <= uVar5) {
      return;
    }
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xc) + uVar5 * 4);
    if (puVar2 == (undefined4 *)0x0) break;
    piVar4 = (int *)**(int **)(*(int *)(param_1 + 4) + 0x7c);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
    }
    (**(code **)*puVar2)(puVar2,piVar4,param_3,uStack_28);
    uVar5 = uVar5 + 1 & 0xfffeffff;
  }
  return;
}

