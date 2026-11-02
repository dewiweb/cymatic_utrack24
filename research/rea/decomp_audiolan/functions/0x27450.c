// rea decompile_all
// name: FUN_00027450
// address: 0x27450
// body: available
// range: 0x27450-0x27641 inclusive
// range: 0x27650-0x276db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00027450(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  
  uVar1 = DAT_0002771c;
  uVar4 = DAT_000276dc;
  iVar2 = *param_1;
  iVar6 = *(int *)(iVar2 + 0x274);
  if ((*(int *)(param_2 + 4) == 0) || (pbVar8 = *(byte **)(param_2 + 0xc), pbVar8 == (byte *)0x0)) {
    iVar2 = FUN_00030b90(DAT_0002771c);
    if (iVar2 != 0) {
      FUN_00029e6c(uVar1);
      FUN_00029eac(3,s_FRM__data_ptr_or_payload_ptr____N_00027720);
    }
    return 0;
  }
  if (*(char *)(param_2 + 0x10) == *(char *)(iVar2 + 0x3b4)) {
    iVar3 = FUN_00030b90(_DAT_0002775c);
    if (iVar3 != 0) {
      FUN_00029e6c(_DAT_0002775c);
      FUN_00029eac(6,s__FRM__Frame_received_on_port__d_0002775f + 1,*(undefined2 *)(*param_1 + 2));
    }
    uVar4 = DAT_000276dc;
    if (*(uint *)(param_2 + 8) < 0x22) {
      iVar2 = FUN_00030b90(DAT_000276dc);
      if (iVar2 == 0) goto LAB_000276d2;
      FUN_00029e6c(uVar4);
      pcVar7 = s_FRM__Received_frame_discarded__f_00027780;
      goto LAB_00027514;
    }
    if ((pbVar8[1] & 0xf) != 2) {
      iVar2 = FUN_00030b90(DAT_000276dc);
      if (iVar2 != 0) {
        FUN_00029e6c(uVar4);
        FUN_00029eac(4,s_FRM__Received_frame_discarded__v_000277b0);
      }
      goto LAB_000276d2;
    }
    if (pbVar8[4] != *(byte *)(iVar6 + 0x13)) {
      iVar2 = FUN_00030b90(DAT_000276dc);
      if (iVar2 != 0) {
        FUN_00029e6c(uVar4);
        FUN_00029eac(4,s_FRM__Received_Frame_discarded__d_000277e4);
      }
      goto LAB_000276d2;
    }
    if (((*(char *)(param_2 + 0x10) == '\x01') && (*(char *)(*param_1 + 0x3ba) == '\x02')) &&
       (*pbVar8 >> 4 != 0)) {
      FUN_00036b54(*param_1 + 0x3bc);
      *(undefined1 *)(*param_1 + 0x3b9) = 1;
    }
    uVar5 = 0;
    do {
      if (pbVar8[uVar5 + 0x14] != *(byte *)(iVar2 + 0x250 + uVar5)) goto LAB_0002762a;
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 8);
    iVar6 = FUN_00030b90(DAT_000276dc);
    if (iVar6 != 0) {
      FUN_00029e6c(DAT_000276dc);
      FUN_00029eac(4,s_FRM__message_was_requested_from_s_0002781c);
    }
    uVar4 = DAT_0002771c;
    if ((pbVar8[0x1c] != *(byte *)(iVar2 + 600)) || (pbVar8[0x1d] != *(byte *)(iVar2 + 0x259))) {
      iVar2 = FUN_00030b90(DAT_0002771c);
      if (iVar2 != 0) {
        FUN_00029e6c(uVar4);
        FUN_00029eac(3,_DAT_0002784c);
      }
LAB_0002762a:
      uVar4 = DAT_0002771c;
      switch(*pbVar8 & 0xf) {
      case 0:
        FUN_00032554(param_1 + 1,param_2);
        break;
      case 1:
        FUN_0003115c(param_1 + 1,param_2);
        break;
      case 2:
        FUN_00031af0(param_1 + 1,param_2);
        break;
      case 3:
        FUN_000320dc(param_1 + 1,param_2);
        break;
      default:
        iVar2 = FUN_00030b90(DAT_0002771c);
        if (iVar2 == 0) goto LAB_000276d2;
        FUN_00029e6c(uVar4);
        pcVar7 = s_u__FRM__Received_Frame_discarded_0002784d + 3;
        goto LAB_000276cc;
      case 8:
        FUN_00031688(param_1 + 1,param_2);
        break;
      case 9:
        FUN_00031320(param_1 + 1,param_2);
        break;
      case 10:
        FUN_00031cb0(param_1 + 1,param_2);
        break;
      case 0xb:
        FUN_00030ebc(param_1 + 1,param_2);
        break;
      case 0xc:
        FUN_00032548(param_1 + 1,param_2);
        break;
      case 0xd:
        FUN_00029ee8(param_1 + 0x14,param_2);
      }
      return 1;
    }
    iVar2 = FUN_00030b90(DAT_0002771c);
    if (iVar2 == 0) goto LAB_000276d2;
    FUN_00029e6c(uVar4);
    pcVar7 = DAT_00027848;
LAB_000276cc:
    uVar4 = 3;
  }
  else {
    iVar2 = FUN_00030b90(DAT_000276dc);
    if (iVar2 == 0) goto LAB_000276d2;
    FUN_00029e6c(uVar4);
    pcVar7 = s_FRM__Received_Frame_discarded__w_000276e0;
LAB_00027514:
    uVar4 = 4;
  }
  FUN_00029eac(uVar4,pcVar7);
LAB_000276d2:
  FUN_00030aa4(param_2);
  return 0;
}

