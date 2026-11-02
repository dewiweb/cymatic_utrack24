// rea decompile_all
// name: FUN_0000f7ec
// address: 0xf7ec
// body: available
// range: 0xf7ec-0xf9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0000f7ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,undefined1 param_9
            ,undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13,
            undefined1 param_14,undefined1 param_15)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1[2];
  piVar3 = param_1;
  FUN_001a0700();
  (**(code **)(*param_1 + 0x19c))(param_1);
  FUN_0000e540(param_1);
  if (((param_8 != 0xff) && (param_8 < 0x1f)) &&
     ((param_13 == 0 || (iVar2 = FUN_00009350(param_1[2],param_5), iVar2 == 0)))) {
    *(char *)((int)param_1 + 0x331) = (char)param_13;
    *(undefined1 *)((int)param_1 + 0x332) = param_14;
    *(undefined1 *)((int)param_1 + 0x333) = param_15;
    iVar2 = FUN_0000a4b0(param_1 + 1,0,0,2,param_2,param_3,param_5,param_6,param_7,param_11,param_12
                         ,param_10,0x10,piVar3);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1,param_11,param_12);
      (**(code **)(*param_1 + 0x28))(param_1,param_10);
      FUN_0000f530(param_1);
      *(undefined1 *)(param_1[7] + 0xd0) = param_9;
      (**(code **)(*param_1 + 0x48))(param_1,0xfffffffe);
      (**(code **)(*param_1 + 0x108))(param_1,param_8);
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
      if ((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_4), iVar2 != 0)) {
        *(undefined1 *)(param_1 + 9) = 1;
        FUN_001a0d18(iVar1 + 0x118);
        return 1;
      }
    }
  }
  FUN_001a0d18(iVar1 + 0x118);
  return 0;
}

