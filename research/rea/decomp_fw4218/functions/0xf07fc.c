// rea decompile_all
// name: FUN_000f07fc
// address: 0xf07fc
// body: available
// range: 0xf07fc-0xf0957 inclusive
// range: 0xf0ba8-0xf0cab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f07fc(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int local_1c;
  code *local_18;
  
  iVar2 = FUN_00003d18(*param_2,&DAT_000f0958);
  pcVar3 = _DAT_000f0960;
  if (iVar2 == 0) {
    if (*_DAT_000f0960 == '\0') {
      uVar4 = FUN_00011c78();
      FUN_00003b88(_DAT_000f0cac,uVar4,0x68);
      FUN_00011cc8(_DAT_000f0cac);
      *pcVar3 = '\x01';
    }
    iVar2 = FUN_001d1330(param_2 + 1,param_3 + -1,0,&local_18);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_001d1330(param_2 + 1,param_3 + -1,1,&local_1c);
    if (iVar2 == 0) {
      return 0;
    }
    if (local_18 == entry) {
      if (local_1c == 2) {
        *(undefined1 *)(_DAT_000f0cac + 0x25) = 1;
        goto LAB_000f0c7c;
      }
    }
    else if (local_18 == (code *)0x4) {
      if (local_1c == 3) {
        *(undefined1 *)(_DAT_000f0cac + 0x24) = 1;
LAB_000f0c7c:
        FUN_00011cc8(_DAT_000f0cac);
        return 0;
      }
      if (local_1c == 4) {
        *(undefined1 *)(_DAT_000f0cac + 0x26) = 1;
        goto LAB_000f0c7c;
      }
    }
    pcVar3 = s_invalid_port_selection___u_to__u_000f0ce8;
  }
  else {
    iVar2 = FUN_00003d18(*param_2,s_F__reset_000f0961 + 3);
    if (iVar2 == 0) {
      uVar4 = FUN_00011c78();
      FUN_00003b88(_DAT_000f0cac,uVar4,0x68);
      FUN_00011cc8(_DAT_000f0cac);
      *pcVar3 = '\x01';
      return 0;
    }
    iVar2 = FUN_00003d18(*param_2,&DAT_000f096c);
    if (iVar2 != 0) {
      return 6;
    }
    FUN_00002898(s_Switch_Matrix_registers__000f0974);
    FUN_00002898(s__________________________000f0990);
    puVar1 = DAT_000f09ac;
    FUN_00002898(s_0x_08x__MtxGpioGroupA___0x_08x_000f09b0,DAT_000f09ac,*DAT_000f09ac);
    FUN_00002898(s_0x_08x__MtxGpioGroupB___0x_08x_000f09d4,puVar1 + 1,puVar1[1]);
    FUN_00002898(s_0x_08x__MtxGpioGroupC___0x_08x_000f09f8,puVar1 + 2,puVar1[2]);
    FUN_00002898(s_0x_08x__MtxGpioGroupD___0x_08x_000f0a1c,puVar1 + 3,puVar1[3]);
    FUN_00002898(s_0x_08x__MtxGpioGroupE___0x_08x_000f0a40,puVar1 + 4,puVar1[4]);
    FUN_00002898(s_0x_08x__MtxGpioGroupF___0x_08x_000f0a64,puVar1 + 5,puVar1[5]);
    FUN_00002898(s_0x_08x__MtxUSB___0x_08x_000f0a88,puVar1 + 8,puVar1[8]);
    FUN_00002898(s_0x_08x__MtxEthernet___0x_08x_000f0aac,puVar1 + 9,puVar1[9]);
    FUN_00002898(s_0x_08x__MtxWild___0x_08x_000f0ad0,puVar1 + 10,puVar1[10]);
    FUN_00002898(s_0x_08x__MtxOthers___0x_08x_000f0af4,puVar1 + 0xb,puVar1[0xb]);
    FUN_00002898(s_0x_08x__MtxAllIns___0x_08x_000f0b18,puVar1 + 0xc,puVar1[0xc]);
    FUN_00002898(s_0x_08x__MtxAvLoop___0x_08x_000f0b3c,puVar1 + 0xd,puVar1[0xd]);
    FUN_00002898(s_0x_08x__MtxTestBusSel___0x_08x_000f0b60,puVar1 + 0x10,puVar1[0x10]);
    local_1c = puVar1[0x11];
    local_18 = (code *)(puVar1 + 0x11);
    pcVar3 = s_0x_08x__MtxTestBusEnable___0x_08_000f0b84;
  }
  FUN_00002898(pcVar3,local_18,local_1c);
  return 0;
}

