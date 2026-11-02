// rea decompile_all
// name: FUN_00018e64
// address: 0x18e64
// body: available
// range: 0x18e64-0x193b3 inclusive
// range: 0x19404-0x1941b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00018e64(int *param_1,char *param_2,int param_3,uint param_4,undefined4 param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  char *pcStack_48;
  byte *pbStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int *piStack_34;
  char *pcStack_30;
  int iStack_2c;
  uint uStack_28;
  
  if ((char)param_1[0x13c] == '\0') {
    return 4;
  }
  if (param_4 == 0) {
    bVar1 = *(byte *)(param_1[0x132] + 0x12) & 2;
  }
  else {
    bVar1 = *(byte *)(param_1[0x132] + 0x12) & 1;
  }
  piStack_34 = param_1;
  pcStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (bVar1 != 0) {
    FUN_00095e34(param_1,param_4);
    param_1[0x111] = param_1[0x111] + 1;
    return 4;
  }
  uStack_3c = (uint)(byte)param_2[8];
  uVar8 = *(int *)(param_2 + 0xc) - param_3;
  if (*(uint *)(param_2 + 0x10) < (uint)(*(int *)(param_2 + 0xc) - param_3)) {
    uStack_3c = 0;
    uVar8 = *(uint *)(param_2 + 0x10);
  }
  pcStack_48 = *(char **)(param_2 + 0x814);
  pcVar9 = (char *)(param_1[0x132] + param_4 * 4 + 0x20);
  uVar12 = uVar8 & 0xfffffffc;
  uVar11 = uVar8 - uVar12;
  if ((pcStack_48 == (char *)0x0) && (pcStack_48 = param_2 + 0x14, 0x3f < uVar12)) {
    thunk_EXT_FUN_00400100(param_1 + 0xd4);
    piVar4 = DAT_00019884;
    iVar7 = param_1[0xd1];
    *(char **)(iVar7 + 0x18) = pcStack_48 + param_3;
    *(char **)(*piVar4 + *(int *)(iVar7 + 4) * 0x40 + 0xc) = pcStack_48 + param_3;
    iVar7 = param_1[0xd1];
    *(char **)(iVar7 + 0x1c) = pcVar9;
    *(char **)(*piVar4 + *(int *)(iVar7 + 4) * 0x40 + 8) = pcVar9;
    iVar7 = param_1[0xd1];
    if (*(char *)(iVar7 + 0xc) == '\x01') {
      FUN_0018a24c(*(undefined4 *)(iVar7 + 0x18),uVar12);
    }
    if (*(char *)(iVar7 + 0xd) == '\x01') {
      FUN_0018a24c(*(undefined4 *)(iVar7 + 0x1c),uVar12);
    }
    *(uint *)(*DAT_00019888 + *(int *)(iVar7 + 4) * 4 + 0x400) =
         uVar12 >> *(sbyte *)(iVar7 + 0x20) & 0xffff | *(int *)(iVar7 + 0x14) << 0x10;
    iVar7 = thunk_EXT_FUN_004001ec(param_1 + 0xd4,5);
    if (iVar7 != 0) {
      param_1[0x10c] = param_1[0x10c] + 1;
      return 1;
    }
    thunk_EXT_FUN_00400100(param_1 + 0xd4);
    param_3 = param_3 + uVar12;
    param_1[0x10b] = param_1[0x10b] + 1;
  }
  else if (uVar12 != 0) {
    uVar8 = uVar8 >> 2;
    pcVar6 = pcStack_48 + param_3;
    if (((uint)pcVar6 & 3) == 0) {
      if (uVar8 < 0x80000000) {
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        iVar7 = 1;
        if (1 < uVar8 + 1) {
          do {
            iVar7 = iVar7 + 1;
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
          } while (iVar7 < (int)(uVar8 + 1));
        }
      }
      else {
        do {
          uVar8 = uVar8 - 1;
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
        } while (uVar8 != 0);
      }
    }
    else if (uVar8 < 0x80000000) {
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      iVar7 = 1;
      if (1 < uVar8 + 1) {
        do {
          uVar3 = *(undefined4 *)pcVar6;
          iVar7 = iVar7 + 1;
          pcVar6 = pcVar6 + 4;
          *(undefined4 *)pcVar9 = uVar3;
        } while (iVar7 < (int)(uVar8 + 1));
      }
    }
    else {
      do {
        uVar3 = *(undefined4 *)pcVar6;
        uVar8 = uVar8 - 1;
        pcVar6 = pcVar6 + 4;
        *(undefined4 *)pcVar9 = uVar3;
      } while (uVar8 != 0);
    }
    param_3 = param_3 + uVar12;
  }
  if (uVar11 != 0) {
    pcVar6 = pcStack_48 + param_3;
    if (uVar11 < 0x80000000) {
      if ((int)uVar11 < 2) {
        uVar11 = 1;
      }
      iVar7 = 1;
      if (1 < (int)(uVar11 + 1)) {
        do {
          iVar7 = iVar7 + 1;
          *pcVar9 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (iVar7 < (int)(uVar11 + 1));
      }
    }
    else {
      do {
        uVar11 = uVar11 - 1;
        *pcVar9 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (uVar11 != 0);
    }
  }
  if (param_4 == 0) {
    FUN_001b714c(&uStack_40);
    uVar2 = *(ushort *)(param_1[0x132] + 0x12);
    FUN_001b7160(uStack_40);
    uVar5 = uVar2 & 0xff;
    uVar10 = uVar2 & 0xff00 | uVar5 | 2;
    if (param_1[0xc5] == 0) {
      if (((1 < *(byte *)((int)param_1 + 0xcd)) && (*(byte *)((int)param_1 + 0xcd) == 2)) &&
         ((uStack_3c != 0 || (*pcStack_30 == '\x03')))) {
        param_1[0x34] = 0;
        uVar10 = uVar2 & 0xff00 | uVar5 | 10;
        *(undefined1 *)((int)param_1 + 0xcd) = 0;
      }
    }
    else {
      if (*pcStack_30 == '\x02') {
        uVar5 = uVar5 | 10;
      }
      else {
        uVar5 = uVar2 & 0xf7 | 2;
      }
      if (*pcStack_30 == '\x03') {
        uVar5 = uVar5 | 0x40;
      }
      else {
        uVar5 = uVar5 & 0xffbf;
      }
      uVar10 = uVar5 | (uVar2 >> 8 | 8) << 8;
    }
    *(undefined1 *)(param_1 + 0xe2) = 0;
    FUN_001b714c(&pcStack_48);
    iVar7 = param_1[0x132];
    *(char *)(iVar7 + 0x12) = (char)uVar10;
    *(char *)(iVar7 + 0x13) = (char)(uVar10 >> 8);
    FUN_001b7160(pcStack_48);
  }
  else {
    *(char *)(param_1 + 0xe2) = (char)param_4;
    FUN_001b714c(&pcStack_48);
    *(byte *)(param_1[0x132] + 0x12) = *(byte *)(param_1[0x132] + 0x12) | 1;
    FUN_001b7160(pcStack_48);
  }
  param_1[0x109] = param_1[0x109] + 1;
  pbStack_44 = (byte *)0x0;
  if ((char)param_1[0x13c] != '\0') {
    iVar7 = thunk_EXT_FUN_004002f0(param_1[0xe5] + 0x10,&pbStack_44,param_5);
    if (iVar7 != 0) {
      FUN_00095e34(param_1,param_4);
      *(undefined1 *)(param_1 + 0xe2) = 0xff;
      param_1[0x112] = param_1[0x112] + 1;
      if (pbStack_44 != (byte *)0x0) {
        FUN_00179ff4();
      }
      *(undefined1 *)(param_1 + 0x180) = 0;
      (**(code **)(*param_1 + 0x74))(param_1);
      return 1;
    }
    if (*pbStack_44 != param_4) {
      param_1[0x113] = param_1[0x113] + 1;
    }
    switch(*(undefined4 *)(pbStack_44 + 4)) {
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
    default:
      FUN_00179ff4(pbStack_44);
      return 4;
    }
  }
  FUN_00095e34(param_1,param_4);
  *(undefined1 *)(param_1 + 0xe2) = 0xff;
  return 3;
}

