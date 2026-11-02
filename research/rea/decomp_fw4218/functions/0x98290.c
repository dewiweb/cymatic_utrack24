// rea decompile_all
// name: FUN_00098290
// address: 0x98290
// body: available
// range: 0x98290-0x984c3 inclusive
// range: 0x984e0-0x984f7 inclusive
// range: 0x9866c-0x98697 inclusive
// range: 0x986f0-0x9871b inclusive
// range: 0x98774-0x9883b inclusive
// range: 0x988a0-0x9890f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00098290(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  local_28 = FUN_001d24ec(DAT_000984f8);
  if (local_28 != -1) {
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    FUN_001d2040(local_28,DAT_000984fc,&local_68,0x40);
    iVar1 = FUN_00003d18(&local_68,DAT_00098500);
    if (iVar1 == 0) {
      param_1[10] = 2;
    }
    else {
      iVar1 = FUN_00003d18(&local_68,DAT_00098504);
      if (iVar1 == 0) {
        param_1[10] = 1;
      }
      else {
        iVar1 = FUN_00003d18(&local_68,DAT_00098508);
        if (iVar1 == 0) {
          param_1[10] = 3;
        }
        else {
          FUN_00002898(DAT_0009850c,&local_68);
          param_1[10] = 1;
        }
      }
    }
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    FUN_001d2040(local_28,DAT_00098510,&local_68,0x40);
    iVar1 = FUN_00003d18(&local_68,DAT_00098514);
    if (iVar1 == 0) {
      param_1[9] = 0;
    }
    else {
      iVar1 = FUN_00003d18(&local_68,_DAT_00098518);
      if (iVar1 == 0) {
        param_1[9] = 1;
      }
      else {
        FUN_00002898(s_R__ERROR__InterfaceConfig__readF_00098519 + 3,&local_68);
      }
    }
    iVar1 = FUN_001d222c(local_28,s_uS__ERROR__InterfaceConfig__read_0009855c._0_4_);
    if (iVar1 == 2) {
      *param_1 = 0;
    }
    else {
      *param_1 = 1;
      if (iVar1 != 8) {
        FUN_00002898(s_uS__ERROR__InterfaceConfig__read_0009855c + 4);
      }
    }
    iVar1 = FUN_001d222c(local_28,_DAT_000985a0);
    if (iVar1 == 0) {
      param_1[1] = 0;
    }
    else if (iVar1 == 1) {
      param_1[1] = 1;
    }
    else if (iVar1 == 2) {
      param_1[1] = 2;
    }
    else {
      param_1[1] = 1;
      FUN_00002898(s_S__ERROR__InterfaceConfig__readF_000985a1 + 3);
    }
    iVar1 = FUN_001d222c(local_28,DAT_000985e4);
    if (iVar1 == 0) {
      param_1[2] = 0;
    }
    else if (iVar1 == 1) {
      param_1[2] = 1;
    }
    else {
      FUN_00002898(DAT_000985e8);
      param_1[2] = 0;
    }
    uVar2 = FUN_001d222c(local_28,_DAT_000985ec);
    switch(uVar2) {
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
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      FUN_00002898(DAT_00098910,uVar2,2);
      param_1[3] = 2;
      uVar2 = FUN_001d222c(local_28,DAT_00098914);
      switch(uVar2) {
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
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    FUN_00002898(DAT_00098918,uVar2,2);
    param_1[4] = 2;
    uVar2 = FUN_001d222c(local_28,DAT_0009891c);
    switch(uVar2) {
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
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00002898(DAT_00098920,uVar2,2);
    param_1[5] = 2;
    iVar1 = FUN_001d222c(local_28,DAT_00098924);
    if (iVar1 == 0) {
      param_1[6] = 0;
    }
    else if (iVar1 == 1) {
      param_1[6] = 1;
    }
    else {
      FUN_00002898(DAT_00098928,iVar1,0);
      param_1[6] = 0;
    }
    iVar1 = FUN_001d222c(local_28,DAT_0009892c);
    if (iVar1 == 0) {
      param_1[7] = 0;
    }
    else if (iVar1 == 1) {
      param_1[7] = 1;
    }
    else {
      FUN_00002898(DAT_00098930,iVar1,0);
      param_1[7] = 0;
    }
    iVar1 = FUN_001d222c(local_28,DAT_00098934);
    if (iVar1 == 0) {
      param_1[8] = 0;
    }
    else if (iVar1 == 1) {
      param_1[8] = 1;
    }
    else {
      FUN_00002898(DAT_00098938,iVar1,0);
      param_1[8] = 0;
    }
    uVar2 = FUN_001d222c(local_28,DAT_0009893c);
    switch(uVar2) {
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
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    FUN_00002898(s_ERROR__InterfaceConfig__readFrom_00098944,uVar2);
    iVar1 = FUN_001d222c(local_28,_DAT_00098980);
    if (iVar1 == 0) {
      param_1[0x10] = 0;
    }
    else if (iVar1 == 1) {
      param_1[0x10] = 1;
    }
    else if (iVar1 == 2) {
      param_1[0x10] = 2;
    }
    else if (iVar1 == 3) {
      param_1[0x10] = 3;
    }
    else {
      param_1[0x10] = 0;
      FUN_00002898(s_S__ERROR__InterfaceConfig__readF_00098981 + 3);
    }
    FUN_001d1ef4(local_28);
    return 0;
  }
  FUN_00002898(s_S__ERROR__InterfaceConfig__readF_000985ed + 3,DAT_000984f8);
  return 0;
}

