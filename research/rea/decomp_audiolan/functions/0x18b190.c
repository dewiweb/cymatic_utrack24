// rea decompile_all
// name: FUN_0018b190
// address: 0x18b190
// body: available
// range: 0x18b190-0x18b3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0018b190(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 auStack_14 [2];
  
  iVar1 = FUN_00041c14(param_1,auStack_14);
  if (iVar1 != 0) {
    uVar2 = 0;
    iVar1 = FUN_00048ef8(auStack_14[0],s_IsMaster_0018b3f4,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_IsMaster_0018b3f4);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)param_2 = iStack_18 != 0;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_DataWidth_0018b438,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_DataWidth_0018b438);
      uVar2 = 0xffffffff;
    }
    else {
      *(char *)(param_2 + 1) = (char)iStack_18;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_ClockPolarity_0018b444,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_ClockPolarity_0018b444);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 2) = iStack_18 != 0;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_ClockPhase_0018b454,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_ClockPhase_0018b454);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 3) = iStack_18 != 0;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_ChipSelectPolarity_0018b460,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_ChipSelectPolarity_0018b460);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_18 != 0;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_Baudrate_0018b474,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_Baudrate_0018b474);
      uVar2 = 0xffffffff;
    }
    else {
      *(int *)(param_2 + 0xc) = iStack_18;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_MSBFirst_0018b480,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_MSBFirst_0018b480);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 5) = iStack_18 != 0;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_BufferSize_0018b48c,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_BufferSize_0018b48c);
      uVar2 = 0xffffffff;
    }
    else {
      *(int *)(param_2 + 8) = iStack_18;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_FilterReceivedNOPCharacters_0018b498,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,
                   s_FilterReceivedNOPCharacters_0018b498);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 6) = iStack_18 != 0;
    }
    iVar1 = FUN_00048ef8(auStack_14[0],s_NOPCharacter_0018b4b4,&iStack_18);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__halGetSPIInitSettingsFrom_0018b400,s_NOPCharacter_0018b4b4);
      uVar2 = 0xffffffff;
    }
    else {
      *(int *)(param_2 + 0x10) = iStack_18;
    }
    FUN_00041dd4(auStack_14[0]);
    return uVar2;
  }
  return 0xffffffff;
}

