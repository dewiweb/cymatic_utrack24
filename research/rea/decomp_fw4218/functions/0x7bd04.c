// rea decompile_all
// name: FUN_0007bd04
// address: 0x7bd04
// body: available
// range: 0x7bd04-0x7be67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0007bd04(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  uint local_24;
  
  uStack_28 = param_3;
  local_24 = param_4;
  iVar1 = FUN_00003d18(*param_2,&DAT_0007be68);
  if (iVar1 == 0) {
    FUN_00178f04();
    FUN_001776c0();
    FUN_00178f04();
    uVar2 = FUN_00178208();
    FUN_00178f04();
    uVar3 = FUN_001781f8();
    FUN_00002898(s_Analog_Board_Id_is__d_Digital_Bo_0007be70,uVar3,uVar2);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00003d18(*param_2,&DAT_0007bea4);
    if ((iVar1 == 0) && (param_3 == 2)) {
      FUN_00002fec(param_2[1],&DAT_0007bea8,&local_24);
      uVar2 = FUN_00178f04();
      iVar1 = FUN_00177894(uVar2,local_24 & 0xff,&uStack_28,2);
      if (iVar1 == 0) {
        FUN_00002898(s___Adat_read_FAILED_________0007beac);
      }
      else {
        FUN_00002898(s_Adat_Register__x_____x_0007bec8,local_24,uStack_28._1_1_);
      }
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_00003d18(*param_2,s_source_0007bee4);
      if ((iVar1 == 0) && (param_3 == 2)) {
        FUN_00002fec(param_2[1],&DAT_0007bea8,&local_24);
        uVar2 = FUN_00178f04();
        iVar1 = FUN_00177c0c(uVar2,local_24);
        if (iVar1 == 0) {
          FUN_00002898(s_Setting_Adat_Input_source_FAILED_0007beec);
        }
        else {
          FUN_00002898(s_Adat_Input_source_port_set_to__d_0007bf10,local_24);
        }
        uVar2 = 0;
      }
      else {
        uVar2 = 6;
      }
    }
  }
  return uVar2;
}

