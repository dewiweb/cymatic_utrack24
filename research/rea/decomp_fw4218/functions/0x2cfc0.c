// rea decompile_all
// name: FUN_0002cfc0
// address: 0x2cfc0
// body: available
// range: 0x2cfc0-0x2d1b1 inclusive
// range: 0x2d1c0-0x2d24b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0002cfc0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  
  uVar1 = DAT_0002d28c;
  uVar4 = DAT_0002d24c;
  iVar2 = *param_1;
  iVar6 = *(int *)(iVar2 + 0x274);
  if ((*(int *)(param_2 + 4) == 0) || (pbVar8 = *(byte **)(param_2 + 0xc), pbVar8 == (byte *)0x0)) {
    iVar2 = FUN_000366e0(DAT_0002d28c);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(3,s_FRM__data_ptr_or_payload_ptr____N_0002d290);
    }
    return 0;
  }
  if (*(char *)(param_2 + 0x10) == *(char *)(iVar2 + 0x3b4)) {
    iVar3 = FUN_000366e0(_DAT_0002d2cc);
    if (iVar3 != 0) {
      FUN_0002f9bc(_DAT_0002d2cc);
      FUN_0002f9fc(6,s__FRM__Frame_received_on_port__d_0002d2cf + 1,*(undefined2 *)(*param_1 + 2));
    }
    uVar4 = DAT_0002d24c;
    if (*(uint *)(param_2 + 8) < 0x22) {
      iVar2 = FUN_000366e0(DAT_0002d24c);
      if (iVar2 == 0) goto LAB_0002d242;
      FUN_0002f9bc(uVar4);
      pcVar7 = s_FRM__Received_frame_discarded__f_0002d2f0;
      goto LAB_0002d084;
    }
    if ((pbVar8[1] & 0xf) != 2) {
      iVar2 = FUN_000366e0(DAT_0002d24c);
      if (iVar2 != 0) {
        FUN_0002f9bc(uVar4);
        FUN_0002f9fc(4,s_FRM__Received_frame_discarded__v_0002d320);
      }
      goto LAB_0002d242;
    }
    if (pbVar8[4] != *(byte *)(iVar6 + 0x13)) {
      iVar2 = FUN_000366e0(DAT_0002d24c);
      if (iVar2 != 0) {
        FUN_0002f9bc(uVar4);
        FUN_0002f9fc(4,s_FRM__Received_Frame_discarded__d_0002d354);
      }
      goto LAB_0002d242;
    }
    if (((*(char *)(param_2 + 0x10) == '\x01') && (*(char *)(*param_1 + 0x3ba) == '\x02')) &&
       (*pbVar8 >> 4 != 0)) {
      FUN_0003c808(*param_1 + 0x3bc);
      *(undefined1 *)(*param_1 + 0x3b9) = 1;
    }
    uVar5 = 0;
    do {
      if (pbVar8[uVar5 + 0x14] != *(byte *)(iVar2 + 0x250 + uVar5)) goto LAB_0002d19a;
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 8);
    iVar6 = FUN_000366e0(DAT_0002d24c);
    if (iVar6 != 0) {
      FUN_0002f9bc(DAT_0002d24c);
      FUN_0002f9fc(4,s_FRM__message_was_requested_from_s_0002d38c);
    }
    uVar4 = DAT_0002d28c;
    if ((pbVar8[0x1c] != *(byte *)(iVar2 + 600)) || (pbVar8[0x1d] != *(byte *)(iVar2 + 0x259))) {
      iVar2 = FUN_000366e0(DAT_0002d28c);
      if (iVar2 != 0) {
        FUN_0002f9bc(uVar4);
        FUN_0002f9fc(3,_DAT_0002d3bc);
      }
LAB_0002d19a:
      uVar4 = DAT_0002d28c;
      switch(*pbVar8 & 0xf) {
      case 0:
        FUN_000380dc(param_1 + 1,param_2);
        break;
      case 1:
        FUN_00036cac(param_1 + 1,param_2);
        break;
      case 2:
        FUN_0003765c(param_1 + 1,param_2);
        break;
      case 3:
        FUN_00037c64(param_1 + 1,param_2);
        break;
      default:
        iVar2 = FUN_000366e0(DAT_0002d28c);
        if (iVar2 == 0) goto LAB_0002d242;
        FUN_0002f9bc(uVar4);
        pcVar7 = s___FRM__Received_Frame_discarded__0002d3be + 2;
        goto LAB_0002d23c;
      case 8:
        FUN_000371f4(param_1 + 1,param_2);
        break;
      case 9:
        FUN_00036e8c(param_1 + 1,param_2);
        break;
      case 10:
        FUN_00037838(param_1 + 1,param_2);
        break;
      case 0xb:
        FUN_00036a0c(param_1 + 1,param_2);
        break;
      case 0xc:
        FUN_000380d0(param_1 + 1,param_2);
        break;
      case 0xd:
        FUN_0002fa38(param_1 + 0x14,param_2);
      }
      return 1;
    }
    iVar2 = FUN_000366e0(DAT_0002d28c);
    if (iVar2 == 0) goto LAB_0002d242;
    FUN_0002f9bc(uVar4);
    pcVar7 = DAT_0002d3b8;
LAB_0002d23c:
    uVar4 = 3;
  }
  else {
    iVar2 = FUN_000366e0(DAT_0002d24c);
    if (iVar2 == 0) goto LAB_0002d242;
    FUN_0002f9bc(uVar4);
    pcVar7 = s_FRM__Received_Frame_discarded__w_0002d250;
LAB_0002d084:
    uVar4 = 4;
  }
  FUN_0002f9fc(uVar4,pcVar7);
LAB_0002d242:
  FUN_000365f4(param_2);
  return 0;
}

