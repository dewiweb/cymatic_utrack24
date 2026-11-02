// rea decompile_all
// name: FUN_00074f7c
// address: 0x74f7c
// body: available
// range: 0x74f7c-0x75447 inclusive
// range: 0x7554c-0x758bb inclusive
// range: 0x75998-0x75a0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00074f7c(undefined4 param_1,int param_2)

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
  
  iVar1 = FUN_00074594(param_1,auStack_3c);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar6 = 10;
    do {
      FUN_00002898(s_0x_08x_00075528,auStack_3c[uVar6]);
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
    return;
  }
  if ((uStack_18 & 0x3fffffff) >> 0x1b == 4) {
    FUN_00002898(DAT_00075448,param_1);
    FUN_00002898(DAT_0007544c,uStack_18 >> 0x1e,(uStack_18 & 0x3fffffff) >> 0x1b,
                 (uStack_18 & 0x7ffffff) >> 0x15);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Flags0_00075450,uStack_18);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Flags1_0007546c,uStack_14);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Upper_Fifo_Thd_00075474,uStack_1c);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Lower_Fifo_Thd_00075484,iStack_20);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Fifo_Read_Ptr_00075494,uStack_24);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Fifo_Write_Ptr_000754a4,uStack_28);
    FUN_00002898(s___18_18s__0x_04x_000754c4,s_Read_Counter_000754b4,uStack_2c._2_2_);
    FUN_00002898(s___18_18s__0x_04x_000754c4,s_Write_Counter_000754d8,(undefined2)uStack_2c);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_AHB_Read_Addr_000754e8,auStack_3c[3]);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_AHB_Write_Addr_000754f8,auStack_3c[2]);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Old_Read_Ptr_00075508,auStack_3c[1]);
    pcVar2 = s_Old_Write_Ptr_00075518;
    pcVar4 = s___18_18s__0x_08x_00075458;
    uVar6 = auStack_3c[0];
    goto LAB_000759d4;
  }
  if ((uStack_18 & 0x3fffffff) >> 0x1b == 7) {
    FUN_00002898(DAT_00075530,param_1);
    FUN_00002898(_DAT_00075534,uStack_18 >> 0x1e,(uStack_18 & 0x3fffffff) >> 0x1b,
                 (uStack_18 & 0x7ffffff) >> 0x15);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Flags0_00075450,uStack_18);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Flags1_0007546c,uStack_14);
    FUN_00002898(s___18_18s__0x_04x_000754c4,s_Old_Read_Ptr_00075508 + 4,uStack_24);
    FUN_00002898(s___18_18s__0x_04x_000754c4,s_Old_Write_Ptr_00075518 + 4,uStack_28);
    FUN_00002898(s___18_18s__0x_04x_000754c4,s_Read_Counter_000754b4,uStack_2c._2_2_);
    FUN_00002898(s___18_18s__0x_04x_000754c4,s_Write_Counter_000754d8,(undefined2)uStack_2c);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_AHB_Read_Addr_000754e8,auStack_3c[3]);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_AHB_Write_Addr_000754f8,auStack_3c[2]);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Old_Read_Ptr_00075508,auStack_3c[1]);
    pcVar2 = s_Old_Write_Ptr_00075518;
    pcVar4 = s___18_18s__0x_08x_00075458;
    uVar6 = auStack_3c[0];
    goto LAB_000759d4;
  }
  if ((uStack_18 & 0x20000000) != 0) {
    FUN_00002898(s___unimplemented_mode_00075536 + 2);
    return;
  }
  uVar6 = (uStack_18 & 0x3fffffff) >> 0x1b;
  if (uVar6 == 0) {
    puVar3 = &DAT_000758bc;
  }
  else if (uVar6 == 1) {
    puVar3 = &DAT_000758c4;
  }
  else if (uVar6 == 2) {
    puVar3 = &DAT_000758d4;
  }
  else {
    puVar3 = &DAT_000758cc;
  }
  FUN_00002898(DAT_000758dc,puVar3,param_1);
  FUN_00002898(DAT_000758e0,uStack_18 >> 0x1e,(uStack_18 & 0x3fffffff) >> 0x1b,
               (uStack_18 & 0x7ffffff) >> 0x15);
  FUN_00002898(s___18_18s__0x_08x_00075458,s_Flags0_00075450,uStack_18);
  FUN_00002898(s___18_18s__0x_08x_00075458,s_Flags1_0007546c,uStack_14);
  if (uVar6 == 2) {
    pcVar4 = s_ReadXCnt_000758e4;
  }
  else {
    pcVar4 = s_WriteXCnt_000758f0;
  }
  if ((uStack_14 & 0x8000) == 0) {
    FUN_00002898(s___18_18s__0x_04x_000754c4,pcVar4,(uStack_1c & 0xffff) >> 6);
  }
  else {
    FUN_00002898(s___18_18s__0x_04x_000754c4,pcVar4,(uStack_1c & 0x1fff) >> 6);
  }
  if (uVar6 == 3) {
    FUN_00002898(s___18_18s__0x_04x__0x_04x__000758fc,s_Upper_Fifo_Thd_00075474,uStack_1c & 0x3f,
                 iStack_20 + ((uStack_1c & 0x3f) << ((uStack_14 & 0x1ffffff) >> 0x17)) * 8);
    FUN_00002898(s___18_18s__0x_04x_000754c4,s_Lower_Fifo_Thd_00075484,iStack_20);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Old_Read_Ptr_00075508 + 4,uStack_24);
    FUN_00002898(s___18_18s__0x_08x_00075458,s_Old_Write_Ptr_00075518 + 4,uStack_28);
  }
  if ((uStack_18 & 0x8000) == 0) {
    if (uVar6 == 3 || uVar6 == 1) {
      FUN_00002898(s___18_18s___x_00075938,&DAT_00075934,uStack_2c >> 0x1f);
      FUN_00002898(s___18_18s___u_00075950,s_VFifo_00075948,(uStack_2c & 0xfffff) >> 0x10);
      if (uVar6 != 3) goto LAB_000757ec;
LAB_000757f4:
      pcVar2 = s_Shadow_Counter_00075960;
      uStack_2c = uStack_2c & 0xffff;
      pcVar4 = s___18_18s___u_00075950;
      goto LAB_00075808;
    }
LAB_000757ec:
    if (uVar6 == 2) goto LAB_000757f4;
  }
  else {
    FUN_00002898(s___18_18s__0x_04x_000754c4,s_Line_Thd_00075918,uStack_2c >> 0x16);
    pcVar2 = s_Block_Offset_00075924;
    uStack_2c = uStack_2c & 0x3fffff;
    pcVar4 = s___18_18s__0x_08x_00075458;
LAB_00075808:
    FUN_00002898(pcVar4,pcVar2,uStack_2c);
  }
  if (uVar6 < 2) {
    FUN_00002898(_DAT_00075a18,s_Read_Ptr_00075a0c,auStack_3c[3]);
    if (uVar6 != 0) goto LAB_00075828;
LAB_000759ac:
    FUN_00002898(_DAT_00075a18,s__Write_Ptr_00075a1b + 1,auStack_3c[2]);
  }
  else {
    FUN_00002898(s___18_18s__0x_08x_00075458,s_AHB_Read_Addr_000754e8,auStack_3c[3]);
LAB_00075828:
    if (uVar6 == 2) goto LAB_000759ac;
    FUN_00002898(s___18_18s__0x_08x_00075458,s_AHB_Write_Addr_000754f8,auStack_3c[2]);
  }
  if ((uStack_18 & 0x8000) == 0) {
    pcVar2 = s_Counter_00075a28;
    uVar6 = auStack_3c[0] & 0xffff;
    pcVar4 = DAT_00075a30;
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
    FUN_00002898(s___18_18s___u_00075950,s_Y_Counter_00075970,uVar5);
    FUN_00002898(s___18_18s___u_00075950,s_X_Counter_0007597c,uVar8);
    FUN_00002898(s___18_18s___u_00075950,s_Y_Thd_00075988,uVar7);
    pcVar2 = s_X_Thd_00075990;
    pcVar4 = s___18_18s___u_00075950;
  }
LAB_000759d4:
  FUN_00002898(pcVar4,pcVar2,uVar6);
  return;
}

