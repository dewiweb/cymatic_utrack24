// rea decompile_all
// name: FUN_000872b0
// address: 0x872b0
// body: available
// range: 0x872b0-0x875af inclusive
// range: 0x8768c-0x876a7 inclusive
// range: 0x87784-0x8779f inclusive
// range: 0x8787c-0x87afb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000872b0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_58 [2];
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = FUN_00041c14(DAT_00087afc,local_58);
  if (iVar2 == 0) {
    FUN_000028a4(DAT_00087afc + 0x3b0);
    return 0;
  }
  local_50 = 0;
  local_44 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_1c = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_00180f0c(local_58[0],DAT_00087b00,&local_50,0x40);
  cVar1 = param_1[10];
  if (cVar1 == '\x01') {
    iVar2 = FUN_00003960(&local_50,DAT_00087b04);
    if (iVar2 != 0) {
      FUN_0018144c(local_58[0],DAT_00087b04 + 0x28);
    }
  }
  else if (cVar1 == '\x02') {
    iVar2 = FUN_00003960(&local_50,DAT_00087b08);
    if (iVar2 != 0) {
      FUN_0018144c(local_58[0],DAT_00087b08 + -0x13);
    }
  }
  else if ((cVar1 == '\x03') && (iVar2 = FUN_00003960(&local_50,DAT_00087b0c), iVar2 != 0)) {
    FUN_0018144c(local_58[0],DAT_00087b0c + 0x1f);
  }
  local_50 = 0;
  local_44 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_1c = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_00180f0c(local_58[0],DAT_00087b10,&local_50,0x40);
  if (param_1[9] == '\0') {
    iVar2 = FUN_00003960(&local_50,DAT_00087b14);
    if (iVar2 != 0) {
      FUN_0018144c(local_58[0],DAT_00087b14 + 0x40);
    }
  }
  else if ((param_1[9] == '\x01') && (iVar2 = FUN_00003960(&local_50,DAT_00087b18), iVar2 != 0)) {
    FUN_0018144c(local_58[0],DAT_00087b18 + -10);
  }
  iVar2 = FUN_001810f8(local_58[0],DAT_00087b1c);
  if (*param_1 == '\0') {
    if (iVar2 != 2) {
      FUN_001814b8(local_58[0],DAT_00087b1c,2);
    }
  }
  else if ((*param_1 == '\x01') && (iVar2 != 8)) {
    FUN_001814b8(local_58[0],DAT_00087b1c,8);
  }
  iVar2 = FUN_001810f8(local_58[0],DAT_00087b20);
  if (param_1[1] == '\0') {
    if (iVar2 != 0) {
      FUN_001814b8(local_58[0],DAT_00087b20,0);
    }
  }
  else if ((param_1[1] == '\x01') && (iVar2 != 1)) {
    FUN_001814b8(local_58[0],DAT_00087b20,1);
  }
  iVar2 = FUN_001810f8(local_58[0],DAT_00087b24);
  if (param_1[2] == '\0') {
    if (iVar2 != 0) {
      FUN_001814b8(local_58[0],DAT_00087b24,0);
    }
  }
  else if ((param_1[2] == '\x01') && (iVar2 != 1)) {
    FUN_001814b8(local_58[0],DAT_00087b24,1);
  }
  FUN_001810f8(local_58[0],DAT_00087b28);
  switch(param_1[3]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x06':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_001810f8(local_58[0],DAT_00087b2c);
  switch(param_1[4]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x06':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_001810f8(local_58[0],DAT_00087b30);
  switch(param_1[5]) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x06':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = FUN_001810f8(local_58[0],DAT_00087b34);
  if (param_1[6] == '\0') {
    if (iVar2 != 0) {
      FUN_001814b8(local_58[0],DAT_00087b34,0);
    }
  }
  else if ((param_1[6] == '\x01') && (iVar2 != 1)) {
    FUN_001814b8(local_58[0],DAT_00087b34,1);
  }
  iVar2 = FUN_001810f8(local_58[0],DAT_00087b38);
  if (param_1[7] == '\0') {
    if (iVar2 != 0) {
      FUN_001814b8(local_58[0],DAT_00087b38,0);
    }
  }
  else if ((param_1[7] == '\x01') && (iVar2 != 1)) {
    FUN_001814b8(local_58[0],DAT_00087b38,1);
  }
  iVar2 = FUN_001810f8(local_58[0],DAT_00087b3c);
  if (param_1[8] == '\0') {
    if (iVar2 != 0) {
      FUN_001814b8(local_58[0],DAT_00087b3c,0);
    }
  }
  else if ((param_1[8] == '\x01') && (iVar2 != 1)) {
    FUN_001814b8(local_58[0],DAT_00087b3c,1);
  }
  iVar2 = FUN_001810f8(local_58[0],DAT_00087b40);
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 4) {
    if (iVar2 != 4) goto LAB_000879f0;
  }
  else if (iVar3 < 4) {
    if (iVar3 == 0) {
      if (iVar2 != 0) goto LAB_000879f0;
    }
    else if (iVar3 == 1) {
      if (iVar2 != 1) goto LAB_000879f0;
    }
    else if (iVar3 == 2) {
      if (iVar2 != 2) goto LAB_000879f0;
    }
    else if ((iVar3 == 3) && (iVar2 != 3)) goto LAB_000879f0;
  }
  else if (iVar3 == 5) {
    if (iVar2 != 5) goto LAB_000879f0;
  }
  else if (iVar3 == 6) {
    if (iVar2 != 6) goto LAB_000879f0;
  }
  else if ((iVar3 == 0x1f400f4) && (iVar2 != 7)) {
LAB_000879f0:
    FUN_001814b8(local_58[0],DAT_00087b40);
  }
  iVar2 = FUN_001810f8(local_58[0],DAT_00087b44);
  cVar1 = param_1[0x10];
  if (cVar1 == '\0') {
    if (iVar2 == 0) goto LAB_00087ab8;
  }
  else if (cVar1 == '\x01') {
    if (iVar2 == 1) goto LAB_00087ab8;
  }
  else if (cVar1 == '\x02') {
    if (iVar2 == 2) goto LAB_00087ab8;
  }
  else if ((cVar1 != '\x03') || (iVar2 == 3)) goto LAB_00087ab8;
  FUN_001814b8(local_58[0],DAT_00087b44);
LAB_00087ab8:
  FUN_00041dd4(local_58[0]);
  return 1;
}

