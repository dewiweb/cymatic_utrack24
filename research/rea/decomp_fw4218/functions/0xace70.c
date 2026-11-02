// rea decompile_all
// name: FUN_000ace70
// address: 0xace70
// body: available
// range: 0xace70-0xad5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000ace70(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  iStack_38 = param_1;
  piStack_34 = param_2;
  iStack_30 = param_3;
  uStack_2c = param_4;
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  if (param_3 == 0) goto LAB_000ad5c0;
  (**(code **)(*param_2 + 0x34))(&iStack_30,param_2);
  iVar2 = FUN_001bece0(&iStack_30);
  iVar3 = iVar2 - DAT_000ad5c4;
  if (iVar2 == DAT_000ad5c4) goto LAB_000ad3fc;
  if (iVar2 < DAT_000ad5c4) {
    iVar3 = iVar2 - DAT_000ad5c8;
    if (iVar2 == DAT_000ad5c8) {
      FUN_000f4e84(iVar3);
      uVar1 = FUN_000f5144();
      FUN_000b6878(uVar1,*(undefined2 *)(param_3 + 4));
      goto LAB_000ad5c0;
    }
    if (iVar2 < DAT_000ad5c8) {
      iVar3 = iVar2 - DAT_000ad5cc;
      if (iVar2 == DAT_000ad5cc) {
        FUN_000f4e84(iVar3);
        uVar1 = FUN_000f5150();
        FUN_000b8208(uVar1,*(undefined2 *)(param_3 + 4));
        goto LAB_000ad5c0;
      }
      if (iVar2 < DAT_000ad5cc) {
        if (iVar2 == 0xb000) {
          FUN_0009321c(uVar1,*(ushort *)(param_3 + 4) & 0xff);
          goto LAB_000ad5c0;
        }
        if (iVar2 == 0xb001) {
          FUN_000945d8(uVar1,*(ushort *)(param_3 + 4) & 0xff);
          goto LAB_000ad5c0;
        }
        if (iVar2 == 0xb003) {
          FUN_000957bc(uVar1,*(short *)(param_3 + 4) != 0);
          goto LAB_000ad5c0;
        }
        if (iVar2 == 0xb102) {
          FUN_000f4e84(0);
          uVar1 = FUN_000f5150();
          FUN_000b810c(uVar1,*(undefined2 *)(param_3 + 4));
          goto LAB_000ad5c0;
        }
      }
      else {
        if (iVar3 == 1) {
          FUN_000f4e84(1);
          uVar1 = FUN_000f5150();
          FUN_000b830c(uVar1,*(undefined2 *)(param_3 + 4));
          goto LAB_000ad5c0;
        }
        if (iVar3 == 2) {
          FUN_000f4e84(2);
          uVar1 = FUN_000f5150();
          FUN_000b800c(uVar1,*(short *)(param_3 + 4) != 0);
          goto LAB_000ad5c0;
        }
        if (iVar3 == 0xfd) {
          FUN_000f4e84(0xfd);
          uVar1 = FUN_000f5144();
          FUN_000b6404(uVar1,*(short *)(param_3 + 4) != 0);
          goto LAB_000ad5c0;
        }
        if (iVar3 == 0x100) {
          FUN_000f4e84(0x100);
          uVar1 = FUN_000f5144();
          FUN_000b6634(uVar1,(int)(char)*(undefined2 *)(param_3 + 4));
          goto LAB_000ad5c0;
        }
      }
    }
    else {
      if (iVar3 == 0xfd) {
        FUN_00092b08(uVar1,*(short *)(param_3 + 4) != 0);
        goto LAB_000ad5c0;
      }
      if (iVar3 < 0xfe) {
        if (iVar3 == 1) {
          FUN_000f4e84(1);
          uVar1 = FUN_000f5144();
          FUN_000b6730(uVar1,*(undefined2 *)(param_3 + 4));
          goto LAB_000ad5c0;
        }
        if (iVar3 == 2) {
          FUN_000f4e84(2);
          uVar1 = FUN_000f5144();
          FUN_000b6af4(uVar1,*(short *)(param_3 + 4) != 0);
          goto LAB_000ad5c0;
        }
        if (iVar3 == 3) {
          FUN_000f4e84(3);
          uVar1 = FUN_000f5144();
          FUN_000b6bfc(uVar1,*(short *)(param_3 + 4) != 0);
          goto LAB_000ad5c0;
        }
        if (iVar3 == 0xfc) {
          FUN_00092cb0(uVar1,*(short *)(param_3 + 4) != 0);
          goto LAB_000ad5c0;
        }
      }
      else {
        if (iVar3 == 0xfe) {
          FUN_00092bfc(uVar1,*(short *)(param_3 + 4) != 0);
          goto LAB_000ad5c0;
        }
        if ((iVar3 == 0x10c) || (iVar3 == 0x10d)) goto LAB_000ad3fc;
      }
    }
    goto switchD_000acfa4_default;
  }
  if (iVar3 == 0x1e) {
LAB_000ad448:
    FUN_000931e4(uVar1,iVar2 + -0xb330,*(undefined2 *)(param_3 + 4));
    goto LAB_000ad5c0;
  }
  if (0x1e < iVar3) {
    iVar5 = iVar3 - DAT_000ad5d0;
    if (iVar3 == DAT_000ad5d0) {
      FUN_00236674(&iStack_38,param_1 + 0x8e0);
      while( true ) {
        FUN_00236654(&piStack_34,param_1 + 0x8e0);
        iVar2 = FUN_0022d878(&iStack_38,&piStack_34);
        if (iVar2 == 0) break;
        puVar4 = (undefined4 *)FUN_0022d844(&iStack_38);
        (**(code **)(*(int *)*puVar4 + 8))
                  ((int *)*puVar4,*(undefined4 *)(DAT_000ad5d4 + (uint)*(ushort *)(param_3 + 4) * 4)
                  );
        FUN_00232c10(&iStack_38);
      }
      goto LAB_000ad5c0;
    }
    if (iVar3 < DAT_000ad5d0) {
      if ((iVar3 == 0x1f) || (iVar3 == 0x20)) goto LAB_000ad448;
      if (iVar3 == 0xcf1) {
        FUN_000ab3f8(param_1,*(undefined2 *)(param_3 + 4));
        goto LAB_000ad5c0;
      }
      if (iVar3 == 0xcf2) goto LAB_000ad5c0;
    }
    else {
      if (iVar5 == 8) {
        if ((*(char *)(param_1 + 0x666) == '\x03') || (*(char *)(param_1 + 0x666) == '\x04')) {
          *(undefined2 *)(DAT_000ad5d8 + param_1) = *(undefined2 *)(param_3 + 4);
          *(undefined1 *)(param_1 + 0x846) = 1;
        }
        else {
          FUN_000946e4(uVar1,*(undefined2 *)(param_3 + 4));
        }
        goto LAB_000ad5c0;
      }
      if (iVar5 == 9) {
        FUN_0009366c(uVar1);
        goto LAB_000ad5c0;
      }
      if (iVar5 == 0x88) {
        FUN_000f4e84(iVar3);
        FUN_000f4fc0();
        FUN_00094420();
        goto LAB_000ad5c0;
      }
    }
    goto switchD_000acfa4_default;
  }
  switch(iVar3) {
  case 0:
    break;
  case 1:
    goto LAB_000ad3fc;
  case 2:
    goto LAB_000ad3fc;
  case 3:
    goto LAB_000ad3fc;
  case 4:
    goto LAB_000ad3fc;
  case 5:
LAB_000ad3fc:
    FUN_00093910(uVar1,iVar2 + -0xb310,*(undefined2 *)(param_3 + 4));
    goto LAB_000ad5c0;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    goto LAB_000ad424;
  case 0xf:
    goto LAB_000ad424;
  case 0x10:
    goto LAB_000ad424;
  case 0x11:
LAB_000ad424:
    FUN_0009398c(uVar1,iVar2 + -0xb320,*(undefined2 *)(param_3 + 4));
    goto LAB_000ad5c0;
  }
switchD_000acfa4_default:
  if ((iVar2 < DAT_000ad5dc) || (DAT_000ad5dc + 0x17 < iVar2)) {
    if ((DAT_000ad5e0 <= iVar2) && (iVar2 <= DAT_000ad5e0 + 0x17)) {
      uVar6 = iVar2 - 0xd030;
      *(ushort *)(param_1 + 0x7a0 + uVar6 * 2) =
           (ushort)(*(short *)(param_1 + 0x7a0 + uVar6 * 2) == 0);
      uVar1 = FUN_000b0158(param_1,*(undefined2 *)(param_1 + 0x740 + uVar6 * 2));
      iVar2 = *(ushort *)(param_1 + 0x770 + uVar6 * 2) - 0x8000;
      FUN_001282fc(&iStack_38,uVar1,
                   (int)((iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x18)) * 0x10000) >> 0x18,
                   *(short *)(param_1 + 0x7a0 + uVar6 * 2) != 0);
      uVar1 = FUN_000f6910(*(undefined4 *)(param_1 + 300));
      FUN_00069f60(uVar1,uVar6 & 0xff,&iStack_38,0);
    }
  }
  else if (*(short *)(param_1 + 2000 + (iVar2 - 0xd010U) * 2) == 0) {
    uVar1 = FUN_000f6910(*(undefined4 *)(param_1 + 300));
    FUN_0006a6d4(uVar1,0);
    uVar1 = FUN_000f6910(*(undefined4 *)(param_1 + 300));
    FUN_0006a654(uVar1,iVar2 - 0xd010U & 0xff,0);
  }
  else {
    uVar1 = FUN_000f6910(*(undefined4 *)(param_1 + 300));
    FUN_0006a6d4(uVar1,0);
  }
LAB_000ad5c0:
  return CONCAT44(piStack_34,iStack_38);
}

