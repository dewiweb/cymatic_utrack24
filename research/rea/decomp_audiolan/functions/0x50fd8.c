// rea decompile_all
// name: FUN_00050fd8
// address: 0x50fd8
// body: available
// range: 0x50fd8-0x510a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00050fd8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iStack_28 = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  FUN_001bbbd0(&iStack_28);
  uVar1 = FUN_0008cf78();
  iVar2 = FUN_0008ce54(uVar1,s_AudioHWService_000510a4,&iStack_28);
  if (iVar2 == 0) {
    FUN_000028a4(s_ERROR__no_AudioHWService_000510b4);
    FUN_000a4714(&iStack_28);
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_001d75e4(&iStack_28);
    uVar1 = FUN_0018afd4();
    uVar1 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,param_3);
    *(undefined4 *)(param_1 + param_2 * 4) = uVar1;
    if (*(int *)(param_1 + param_2 * 4) == 0) {
      FUN_000028a4(s_ERROR__setupGPIOoutput__cannot_g_000510d0,param_3);
      FUN_000a4714(&iStack_28);
      uVar1 = 0;
    }
    else {
      FUN_00086480(*(undefined4 *)(param_1 + param_2 * 4));
      FUN_000863b4(*(undefined4 *)(param_1 + param_2 * 4));
      FUN_00086388(*(undefined4 *)(param_1 + param_2 * 4));
      FUN_000a4714(&iStack_28);
      uVar1 = 1;
    }
  }
  return CONCAT44(iStack_28,uVar1);
}

