// rea decompile_all
// name: FUN_0009b7e4
// address: 0x9b7e4
// body: available
// range: 0x9b7e4-0x9b8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009b7e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined8 uVar4;
  
  FUN_0009b6fc();
  if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
    FUN_00002898(s_W__ERROR__MidiFileDecoder__setup_0009b8e5 + 3);
  }
  else {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x34))();
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    uVar4 = FUN_0009a074(param_1,param_1 + 0x204);
    iVar1 = DAT_0009b8dc;
    iVar3 = (int)uVar4;
    uVar2 = DAT_0009b8e0;
    if (iVar3 == 0) {
      FUN_0009ac58(param_1,(int)((ulonglong)uVar4 >> 0x20));
      iVar3 = FUN_0009b018(param_1);
      uVar2 = DAT_0009b920;
      if (iVar3 == 0) {
        *(undefined1 *)(iVar1 + 0x21) = 0;
        *(undefined1 *)(iVar1 + 0x20) = 1;
        uVar2 = 0;
        if (*(int *)(*(int *)(param_1 + 0x204) + -4) != 0) {
          FUN_0005f0c0(param_1,0,0,0,0,0xffffffff);
          uVar2 = extraout_r1;
        }
        goto LAB_0009b8c0;
      }
    }
    FUN_00002898(uVar2,iVar3);
    if (iVar3 == 8) {
      *(undefined1 *)(iVar1 + 0x21) = 1;
      uVar2 = 8;
LAB_0009b8c0:
      if (*(char *)(param_1 + 0x3c) != '\0') {
        FUN_0005f154(param_1,uVar2);
      }
      return 1;
    }
    FUN_00002898(_DAT_0009b8e4);
  }
  return 0;
}

