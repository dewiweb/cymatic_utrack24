// rea decompile_all
// name: FUN_0002c678
// address: 0x2c678
// body: available
// range: 0x2c678-0x2c6a3 inclusive
// range: 0x2c6c0-0x2caa3 inclusive
// range: 0x2cb38-0x2cb7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c678(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined2 local_60 [4];
  byte local_58 [4];
  undefined4 local_54;
  int local_50;
  short local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  if (param_1 == 0) {
    return;
  }
  iVar4 = FUN_0003b1f8(local_58);
  pcVar3 = DAT_0002cb34;
  uVar2 = DAT_0002cad8;
  uVar5 = DAT_0002caa4;
  if (iVar4 == 0) goto LAB_0002cb46;
  if (local_58[0] < 0x1b) {
    cVar1 = (char)local_34;
    switch(local_58[0]) {
    case 0:
      iVar4 = *(int *)(param_1 + 0xa4);
      if (iVar4 == 0) {
        iVar4 = FUN_000366e0(DAT_0002cad8);
        if (iVar4 != 0) {
          FUN_0002f9bc(uVar2);
          FUN_0002f9fc(4,s_ENV__No_PTP_Port_instance_for_th_0002cadc);
        }
      }
      else {
        if (*(short *)(iVar4 + 2) == local_38) {
          FUN_0003ac9a(iVar4,&local_54);
          break;
        }
        iVar4 = FUN_000366e0(DAT_0002caa4);
        if (iVar4 != 0) {
          FUN_0002f9bc(uVar5);
          FUN_0002f9fc(3,s_ENV__Got_wrong_port_number__rece_0002caa8,local_38,
                       *(undefined2 *)(*(int *)(param_1 + 0xa4) + 2));
        }
      }
LAB_0002c716:
      FUN_000365f4(&local_54);
      break;
    case 1:
      goto LAB_0002ca90;
    case 2:
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_0003ae50();
      }
      iVar4 = FUN_0003c8ac(param_1 + 0x88);
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 0x87) = 1;
      }
      break;
    case 3:
      if (local_50 != 0) {
        FUN_0002db68(param_1,local_50,local_54);
        goto LAB_0002c716;
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0xa4) != 0) {
        if (*(char *)(param_1 + 0x26) != '\0') {
          if ((local_34 & 0xff) == 0) {
            FUN_00039968(auStack_20,3);
          }
          else {
            FUN_00039968(auStack_20,2);
            FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_20);
            FUN_00039968(auStack_20,0xd);
          }
          FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_20);
          FUN_0003ae08(*(undefined4 *)(param_1 + 0xa4));
          if (*(int *)(param_1 + 0xa4) == 0) goto LAB_0002c7aa;
        }
        FUN_0003ac28(*(undefined4 *)(param_1 + 0xa4),local_34 & 0xff);
      }
LAB_0002c7aa:
      uVar5 = FUN_001e11e8((int)*(char *)(*(int *)(param_1 + 0xa4) + 0x268));
      FUN_0003c79c(param_1 + 0x88,uVar5,0);
      FUN_0003c808(param_1 + 0x88);
      break;
    case 5:
      if (*(int *)(param_1 + 0xa4) == 0) {
        iVar4 = FUN_000366e0(DAT_0002cad8);
        if (iVar4 != 0) {
          FUN_0002f9bc(uVar2);
          FUN_0002f9fc(4,s_ENV__No_PTP_Port_instance_for_th_0002cadc);
        }
      }
      else if (*(short *)(*(int *)(param_1 + 0xa4) + 2) == local_38) {
        if ((local_34 & 0xff) == 0) {
          FUN_00039968(auStack_28,1);
          FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_28);
          FUN_0003ae08(*(undefined4 *)(param_1 + 0xa4));
          *(undefined1 *)(param_1 + 0x26) = 0;
        }
        else if (*(char *)(param_1 + 0x26) == '\0') {
          *(undefined1 *)(param_1 + 0x26) = 1;
          FUN_00039968(auStack_28);
          FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_28);
          FUN_00039968(auStack_28,0xd);
          FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_28);
          if (**(char **)(param_1 + 0xa4) == '\0') {
            FUN_00039968(auStack_28,3);
            FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_28);
          }
          FUN_0003ae08(*(undefined4 *)(param_1 + 0xa4));
          iVar4 = FUN_000366e0(_DAT_0002cb18);
          if (iVar4 != 0) {
            FUN_0002f9bc(_DAT_0002cb18);
            FUN_0002f9fc(6,s__ENV__LinkUp_port__d_0002cb1b + 1,local_38);
          }
        }
      }
      else {
        iVar4 = FUN_000366e0(DAT_0002caa4);
        if (iVar4 != 0) {
          FUN_0002f9bc(DAT_0002caa4);
          FUN_0002f9fc(3,s_ENV__Got_wrong_port_number__rece_0002caa8,local_38,
                       *(undefined2 *)(*(int *)(param_1 + 0xa4) + 2));
        }
      }
      uVar5 = FUN_001e11e8((int)*(char *)(*(int *)(param_1 + 0xa4) + 0x268));
      FUN_0003c79c(param_1 + 0x88,uVar5,0);
      FUN_0003c808(param_1 + 0x88);
      break;
    case 6:
      *DAT_0002cb34 = cVar1;
      pcVar3[1] = (char)(local_34 >> 8);
      pcVar3[2] = (char)(local_34 >> 0x10);
      pcVar3[3] = (char)(local_34 >> 0x18);
      FUN_00039a2c();
      break;
    case 7:
      if (*(int *)(param_1 + 0xa4) != 0) {
        if ((local_34 & 0xff) == 1) {
          *(undefined1 *)(param_1 + 0x46) = 0xff;
        }
        else {
          local_68[0] = 0;
          local_64[0] = 0;
          local_60[0] = 0;
          FUN_0002b4d8(local_68,local_64,local_60);
          *(undefined1 *)(param_1 + 0x46) = local_68[0];
        }
        *(char *)(param_1 + 0x54) = (char)local_34;
      }
      break;
    case 8:
      *(char *)(param_1 + 0x44) = cVar1;
      break;
    case 9:
      *(char *)(param_1 + 0x4a) = cVar1;
      break;
    case 10:
      FUN_0002c3d0(param_1 + 0x40,local_34 & 0xff);
      break;
    case 0xb:
      if (*(int *)(param_1 + 0xa4) != 0) {
        *(char *)(*(int *)(param_1 + 0xa4) + 0x3e0) = cVar1;
      }
      break;
    case 0xc:
      if (*(int *)(param_1 + 0xa4) != 0) {
        *(char *)(*(int *)(param_1 + 0xa4) + 0x3b4) = cVar1;
      }
      break;
    case 0xd:
      if (*(int *)(param_1 + 0xa4) != 0) {
        *(short *)(*(int *)(param_1 + 0xa4) + 0x3b6) = (short)local_34;
      }
      break;
    case 0xe:
      if (*(int *)(param_1 + 0xa4) != 0) {
        *(char *)(*(int *)(param_1 + 0xa4) + 0x3b8) = cVar1;
      }
      break;
    case 0xf:
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_0003b028(*(int *)(param_1 + 0xa4),(int)cVar1);
      }
      break;
    case 0x10:
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_0003af9c(*(int *)(param_1 + 0xa4),local_34 & 0xff);
      }
      break;
    case 0x11:
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_0003b11e(*(int *)(param_1 + 0xa4),(int)cVar1);
      }
      break;
    case 0x12:
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_0003b0da(*(int *)(param_1 + 0xa4),(int)cVar1);
      }
      break;
    case 0x13:
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_0003b090(*(int *)(param_1 + 0xa4),(int)cVar1);
      }
      break;
    case 0x14:
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_0003afe2(*(int *)(param_1 + 0xa4),local_34 & 0xff);
      }
      break;
    case 0x15:
      if (*(int *)(param_1 + 0xa4) != 0) {
        *(char *)(*(int *)(param_1 + 0xa4) + 0x3ba) = cVar1;
      }
      break;
    case 0x16:
      FUN_0002bbb4();
      break;
    case 0x17:
      FUN_0002bbc4(param_1 + 0x40);
      iVar4 = *(int *)(param_1 + 0xa4);
      if (iVar4 != 0) {
        FUN_0002bbd4(*(undefined2 *)(iVar4 + 2),iVar4 + 0x250);
      }
      break;
    case 0x18:
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_0003afce(*(int *)(param_1 + 0xa4),
                     (uint)(&switchD_0002c6a2::switchdataD_0002c6a4)[local_58[0]] * 2,local_30,
                     local_2c);
      }
      break;
    case 0x19:
      FUN_0002c3dc(param_1 + 0x40,local_34 & 0xff);
      break;
    case 0x1a:
      FUN_0002c3c8(param_1 + 0x40,local_34 >> 0x18,(local_34 & 0xffffff) >> 0x10,local_34 & 0xffff);
    }
  }
  else {
LAB_0002ca90:
    iVar4 = FUN_000366e0(DAT_0002caa4);
    if (iVar4 != 0) {
      FUN_0002f9bc(uVar5);
      FUN_0002f9fc(3,s_ENV__Environment_event_not_defin_0002cb80);
    }
  }
  FUN_0002c406(local_58);
LAB_0002cb46:
  uVar5 = _DAT_0002cba4;
  if (*(char *)(param_1 + 0x87) == '\x01') {
    iVar4 = FUN_000366e0(_DAT_0002cba4);
    if (iVar4 != 0) {
      FUN_0002f9bc(uVar5);
      FUN_0002f9fc(6,s__ENV__State_Decision_Event_is_pr_0002cba7 + 1);
    }
    *(undefined1 *)(param_1 + 0x87) = 0;
    FUN_001f2624(param_1);
  }
  if (*(char *)(param_1 + 0x86) != '\0') {
    FUN_0002cc74(param_1);
  }
  return;
}

