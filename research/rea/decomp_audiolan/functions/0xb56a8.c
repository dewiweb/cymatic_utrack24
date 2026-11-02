// rea decompile_all
// name: FUN_000b56a8
// address: 0xb56a8
// body: available
// range: 0xb56a8-0xb5803 inclusive
// range: 0xb5a54-0xb5b57 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b56a8(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int local_1c;
  code *local_18;
  
  iVar2 = FUN_00003960(*param_2,&DAT_000b5804);
  pcVar3 = _DAT_000b580c;
  if (iVar2 == 0) {
    if (*_DAT_000b580c == '\0') {
      uVar4 = FUN_000117e8();
      FUN_000037d0(_DAT_000b5b58,uVar4,0x68);
      FUN_000118b4(_DAT_000b5b58);
      *pcVar3 = '\x01';
    }
    iVar2 = FUN_0017de98(param_2 + 1,param_3 + -1,0,&local_18);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_0017de98(param_2 + 1,param_3 + -1,1,&local_1c);
    if (iVar2 == 0) {
      return 0;
    }
    if (local_18 == entry) {
      if (local_1c == 2) {
        *(undefined1 *)(_DAT_000b5b58 + 0x25) = 1;
        goto LAB_000b5b28;
      }
    }
    else if (local_18 == (code *)0x4) {
      if (local_1c == 3) {
        *(undefined1 *)(_DAT_000b5b58 + 0x24) = 1;
LAB_000b5b28:
        FUN_000118b4(_DAT_000b5b58);
        return 0;
      }
      if (local_1c == 4) {
        *(undefined1 *)(_DAT_000b5b58 + 0x26) = 1;
        goto LAB_000b5b28;
      }
    }
    pcVar3 = s_invalid_port_selection___u_to__u_000b5b94;
  }
  else {
    iVar2 = FUN_00003960(*param_2,s_0__reset_000b580d + 3);
    if (iVar2 == 0) {
      uVar4 = FUN_000117e8();
      FUN_000037d0(_DAT_000b5b58,uVar4,0x68);
      FUN_000118b4(_DAT_000b5b58);
      *pcVar3 = '\x01';
      return 0;
    }
    iVar2 = FUN_00003960(*param_2,&DAT_000b5818);
    if (iVar2 != 0) {
      return 6;
    }
    FUN_000028a4(s_Switch_Matrix_registers__000b5820);
    FUN_000028a4(s__________________________000b583c);
    puVar1 = DAT_000b5858;
    FUN_000028a4(s_0x_08x__MtxGpioGroupA___0x_08x_000b585c,DAT_000b5858,*DAT_000b5858);
    FUN_000028a4(s_0x_08x__MtxGpioGroupB___0x_08x_000b5880,puVar1 + 1,puVar1[1]);
    FUN_000028a4(s_0x_08x__MtxGpioGroupC___0x_08x_000b58a4,puVar1 + 2,puVar1[2]);
    FUN_000028a4(s_0x_08x__MtxGpioGroupD___0x_08x_000b58c8,puVar1 + 3,puVar1[3]);
    FUN_000028a4(s_0x_08x__MtxGpioGroupE___0x_08x_000b58ec,puVar1 + 4,puVar1[4]);
    FUN_000028a4(s_0x_08x__MtxGpioGroupF___0x_08x_000b5910,puVar1 + 5,puVar1[5]);
    FUN_000028a4(s_0x_08x__MtxUSB___0x_08x_000b5934,puVar1 + 8,puVar1[8]);
    FUN_000028a4(s_0x_08x__MtxEthernet___0x_08x_000b5958,puVar1 + 9,puVar1[9]);
    FUN_000028a4(s_0x_08x__MtxWild___0x_08x_000b597c,puVar1 + 10,puVar1[10]);
    FUN_000028a4(s_0x_08x__MtxOthers___0x_08x_000b59a0,puVar1 + 0xb,puVar1[0xb]);
    FUN_000028a4(s_0x_08x__MtxAllIns___0x_08x_000b59c4,puVar1 + 0xc,puVar1[0xc]);
    FUN_000028a4(s_0x_08x__MtxAvLoop___0x_08x_000b59e8,puVar1 + 0xd,puVar1[0xd]);
    FUN_000028a4(s_0x_08x__MtxTestBusSel___0x_08x_000b5a0c,puVar1 + 0x10,puVar1[0x10]);
    local_1c = puVar1[0x11];
    local_18 = (code *)(puVar1 + 0x11);
    pcVar3 = s_0x_08x__MtxTestBusEnable___0x_08_000b5a30;
  }
  FUN_000028a4(pcVar3,local_18,local_1c);
  return 0;
}

