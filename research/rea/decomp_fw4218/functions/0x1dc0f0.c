// rea decompile_all
// name: FUN_001dc0f0
// address: 0x1dc0f0
// body: available
// range: 0x1dc0f0-0x1dc353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001dc0f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 auStack_14 [2];
  
  iVar1 = FUN_000466b0(param_1,auStack_14);
  if (iVar1 != 0) {
    uVar2 = 0;
    iVar1 = FUN_0004febc(auStack_14[0],s_IsMaster_001dc354,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_IsMaster_001dc354);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)param_2 = iStack_18 != 0;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_DataWidth_001dc398,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_DataWidth_001dc398);
      uVar2 = 0xffffffff;
    }
    else {
      *(char *)(param_2 + 1) = (char)iStack_18;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_ClockPolarity_001dc3a4,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_ClockPolarity_001dc3a4);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 2) = iStack_18 != 0;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_ClockPhase_001dc3b4,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_ClockPhase_001dc3b4);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 3) = iStack_18 != 0;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_ChipSelectPolarity_001dc3c0,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_ChipSelectPolarity_001dc3c0);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_18 != 0;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_Baudrate_001dc3d4,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_Baudrate_001dc3d4);
      uVar2 = 0xffffffff;
    }
    else {
      *(int *)(param_2 + 0xc) = iStack_18;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_MSBFirst_001dc3e0,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_MSBFirst_001dc3e0);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 5) = iStack_18 != 0;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_BufferSize_001dc3ec,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_BufferSize_001dc3ec);
      uVar2 = 0xffffffff;
    }
    else {
      *(int *)(param_2 + 8) = iStack_18;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_FilterReceivedNOPCharacters_001dc3f8,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,
                   s_FilterReceivedNOPCharacters_001dc3f8);
      uVar2 = 0xffffffff;
    }
    else {
      *(bool *)(param_2 + 6) = iStack_18 != 0;
    }
    iVar1 = FUN_0004febc(auStack_14[0],s_NOPCharacter_001dc414,&iStack_18);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__halGetSPIInitSettingsFrom_001dc360,s_NOPCharacter_001dc414);
      uVar2 = 0xffffffff;
    }
    else {
      *(int *)(param_2 + 0x10) = iStack_18;
    }
    FUN_00046b8c(auStack_14[0]);
    return uVar2;
  }
  return 0xffffffff;
}

