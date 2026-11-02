// rea decompile_all
// name: FUN_00074140
// address: 0x74140
// body: available
// range: 0x74140-0x7460b inclusive
// range: 0x74710-0x74a7f inclusive
// range: 0x74b5c-0x74bcf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00074140(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint auStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  iVar1 = FUN_00073758(param_1,auStack_3c);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar6 = 10;
    do {
      FUN_000028a4(s_0x_08x_000746ec,auStack_3c[uVar6]);
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
    return;
  }
  if ((uStack_18 & 0x3fffffff) >> 0x1b == 4) {
    FUN_000028a4(DAT_0007460c,param_1);
    FUN_000028a4(DAT_00074610,uStack_18 >> 0x1e,(uStack_18 & 0x3fffffff) >> 0x1b,
                 (uStack_18 & 0x7ffffff) >> 0x15);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Flags0_00074614,uStack_18);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Flags1_00074630,uStack_14);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Upper_Fifo_Thd_00074638,uStack_1c);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Lower_Fifo_Thd_00074648,iStack_20);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Fifo_Read_Ptr_00074658,uStack_24);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Fifo_Write_Ptr_00074668,uStack_28);
    FUN_000028a4(s___18_18s__0x_04x_00074688,s_Read_Counter_00074678,uStack_2c._2_2_);
    FUN_000028a4(s___18_18s__0x_04x_00074688,s_Write_Counter_0007469c,(undefined2)uStack_2c);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_AHB_Read_Addr_000746ac,auStack_3c[3]);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_AHB_Write_Addr_000746bc,auStack_3c[2]);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Old_Read_Ptr_000746cc,auStack_3c[1]);
    pcVar2 = s_Old_Write_Ptr_000746dc;
    pcVar4 = s___18_18s__0x_08x_0007461c;
    uVar6 = auStack_3c[0];
    goto LAB_00074b98;
  }
  if ((uStack_18 & 0x3fffffff) >> 0x1b == 7) {
    FUN_000028a4(DAT_000746f4,param_1);
    FUN_000028a4(_DAT_000746f8,uStack_18 >> 0x1e,(uStack_18 & 0x3fffffff) >> 0x1b,
                 (uStack_18 & 0x7ffffff) >> 0x15);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Flags0_00074614,uStack_18);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Flags1_00074630,uStack_14);
    FUN_000028a4(s___18_18s__0x_04x_00074688,s_Old_Read_Ptr_000746cc + 4,uStack_24);
    FUN_000028a4(s___18_18s__0x_04x_00074688,s_Old_Write_Ptr_000746dc + 4,uStack_28);
    FUN_000028a4(s___18_18s__0x_04x_00074688,s_Read_Counter_00074678,uStack_2c._2_2_);
    FUN_000028a4(s___18_18s__0x_04x_00074688,s_Write_Counter_0007469c,(undefined2)uStack_2c);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_AHB_Read_Addr_000746ac,auStack_3c[3]);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_AHB_Write_Addr_000746bc,auStack_3c[2]);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Old_Read_Ptr_000746cc,auStack_3c[1]);
    pcVar2 = s_Old_Write_Ptr_000746dc;
    pcVar4 = s___18_18s__0x_08x_0007461c;
    uVar6 = auStack_3c[0];
    goto LAB_00074b98;
  }
  if ((uStack_18 & 0x20000000) != 0) {
    FUN_000028a4(s___unimplemented_mode_000746fa + 2);
    return;
  }
  uVar6 = (uStack_18 & 0x3fffffff) >> 0x1b;
  if (uVar6 == 0) {
    puVar3 = &DAT_00074a80;
  }
  else if (uVar6 == 1) {
    puVar3 = &DAT_00074a88;
  }
  else if (uVar6 == 2) {
    puVar3 = &DAT_00074a98;
  }
  else {
    puVar3 = &DAT_00074a90;
  }
  FUN_000028a4(DAT_00074aa0,puVar3,param_1);
  FUN_000028a4(DAT_00074aa4,uStack_18 >> 0x1e,(uStack_18 & 0x3fffffff) >> 0x1b,
               (uStack_18 & 0x7ffffff) >> 0x15);
  FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Flags0_00074614,uStack_18);
  FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Flags1_00074630,uStack_14);
  if (uVar6 == 2) {
    pcVar4 = s_ReadXCnt_00074aa8;
  }
  else {
    pcVar4 = s_WriteXCnt_00074ab4;
  }
  if ((uStack_14 & 0x8000) == 0) {
    FUN_000028a4(s___18_18s__0x_04x_00074688,pcVar4,(uStack_1c & 0xffff) >> 6);
  }
  else {
    FUN_000028a4(s___18_18s__0x_04x_00074688,pcVar4,(uStack_1c & 0x1fff) >> 6);
  }
  if (uVar6 == 3) {
    FUN_000028a4(s___18_18s__0x_04x__0x_04x__00074ac0,s_Upper_Fifo_Thd_00074638,uStack_1c & 0x3f,
                 iStack_20 + ((uStack_1c & 0x3f) << ((uStack_14 & 0x1ffffff) >> 0x17)) * 8);
    FUN_000028a4(s___18_18s__0x_04x_00074688,s_Lower_Fifo_Thd_00074648,iStack_20);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Old_Read_Ptr_000746cc + 4,uStack_24);
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_Old_Write_Ptr_000746dc + 4,uStack_28);
  }
  if ((uStack_18 & 0x8000) == 0) {
    if (uVar6 == 3 || uVar6 == 1) {
      FUN_000028a4(s___18_18s___x_00074afc,&DAT_00074af8,uStack_2c >> 0x1f);
      FUN_000028a4(s___18_18s___u_00074b14,s_VFifo_00074b0c,(uStack_2c & 0xfffff) >> 0x10);
      if (uVar6 != 3) goto LAB_000749b0;
LAB_000749b8:
      pcVar2 = s_Shadow_Counter_00074b24;
      uStack_2c = uStack_2c & 0xffff;
      pcVar4 = s___18_18s___u_00074b14;
      goto LAB_000749cc;
    }
LAB_000749b0:
    if (uVar6 == 2) goto LAB_000749b8;
  }
  else {
    FUN_000028a4(s___18_18s__0x_04x_00074688,s_Line_Thd_00074adc,uStack_2c >> 0x16);
    pcVar2 = s_Block_Offset_00074ae8;
    uStack_2c = uStack_2c & 0x3fffff;
    pcVar4 = s___18_18s__0x_08x_0007461c;
LAB_000749cc:
    FUN_000028a4(pcVar4,pcVar2,uStack_2c);
  }
  if (uVar6 < 2) {
    FUN_000028a4(_DAT_00074bdc,s_Read_Ptr_00074bd0,auStack_3c[3]);
    if (uVar6 != 0) goto LAB_000749ec;
LAB_00074b70:
    FUN_000028a4(_DAT_00074bdc,s__Write_Ptr_00074bdf + 1,auStack_3c[2]);
  }
  else {
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_AHB_Read_Addr_000746ac,auStack_3c[3]);
LAB_000749ec:
    if (uVar6 == 2) goto LAB_00074b70;
    FUN_000028a4(s___18_18s__0x_08x_0007461c,s_AHB_Write_Addr_000746bc,auStack_3c[2]);
  }
  if ((uStack_18 & 0x8000) == 0) {
    pcVar2 = s_Counter_00074bec;
    uVar6 = auStack_3c[0] & 0xffff;
    pcVar4 = DAT_00074bf4;
  }
  else {
    if ((uStack_14 & 0x8000) == 0) {
      uVar5 = auStack_3c[0] & 0x3f;
      uVar8 = (auStack_3c[0] & 0xffff) >> 6;
      uVar7 = auStack_3c[1] & 0x3f;
      uVar6 = (auStack_3c[1] & 0xffff) >> 6;
    }
    else {
      uVar5 = (auStack_3c[0] & 0xffff) >> 6;
      uVar8 = auStack_3c[0] & 0x3f;
      uVar7 = (auStack_3c[1] & 0xffff) >> 6;
      uVar6 = auStack_3c[1] & 0x3f;
    }
    FUN_000028a4(s___18_18s___u_00074b14,s_Y_Counter_00074b34,uVar5);
    FUN_000028a4(s___18_18s___u_00074b14,s_X_Counter_00074b40,uVar8);
    FUN_000028a4(s___18_18s___u_00074b14,s_Y_Thd_00074b4c,uVar7);
    pcVar2 = s_X_Thd_00074b54;
    pcVar4 = s___18_18s___u_00074b14;
  }
LAB_00074b98:
  FUN_000028a4(pcVar4,pcVar2,uVar6);
  return;
}

