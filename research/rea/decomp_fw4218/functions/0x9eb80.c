// rea decompile_all
// name: FUN_0009eb80
// address: 0x9eb80
// body: available
// range: 0x9eb80-0x9ec7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0009eb80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  if ((char)param_1[0x2b] != '\0') {
    FUN_00170f3c(&uStack_18,0);
    piVar1 = (int *)FUN_000f8ee0();
    iVar2 = (**(code **)(*piVar1 + 0x80))(piVar1,&uStack_18);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__Clear_Next_files_failed_0009ec7c);
    }
    FUN_00170f3c(&piStack_20,1);
    piVar1 = (int *)FUN_000f8ee0();
    iVar2 = (**(code **)(*piVar1 + 0x80))(piVar1,&piStack_20);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__Clear_Next_Midi_files_fai_0009ec9c);
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *DAT_0009ecc8 = *DAT_0009ecc4;
    (**(code **)(*param_1 + 0x7c))(param_1,0);
    FUN_00170f78(&piStack_20);
    FUN_00170f78(&uStack_18);
  }
  iVar2 = FUN_00083bc0(param_1 + 5,*DAT_0009ecc4);
  if (iVar2 == 0) {
    FUN_00084330(param_1 + 5,0);
  }
  else {
    FUN_00084330(param_1 + 5,1);
  }
  return CONCAT44(uStack_1c,piStack_20);
}

