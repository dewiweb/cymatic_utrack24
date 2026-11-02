// rea decompile_all
// name: FUN_001e8844
// address: 0x1e8844
// body: available
// range: 0x1e8844-0x1e8915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001e8844(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,char *param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_7 == *DAT_001e8918) {
    uVar4 = 2;
  }
  else if (param_7 == *DAT_001e891c) {
    uVar4 = 3;
  }
  else if ((param_7 == *DAT_001e8920) && (param_10 != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_001e9a9c(param_2,0,param_7,0x21,0x78,2,uVar4,param_8,param_9,param_1,param_2);
  iVar2 = FUN_000243c4(param_2 + 0x158,param_3,param_4,param_5);
  if (iVar2 != 0) {
    *(undefined2 *)(*(int *)(param_2 + 0x24) + 4) = 0;
    puVar1 = DAT_001e8924;
    *(undefined2 *)(*(int *)(param_2 + 0x24) + 6) = 0;
    *(undefined2 *)(*(int *)(param_2 + 0x24) + 8) = *puVar1;
    if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
      *(undefined1 *)(param_2 + 0x44) = 1;
    }
    else {
      uVar3 = FUN_00025d12(param_6,param_6 + 0x100);
      if (uVar3 < 0x101) {
        FUN_001e57d8(*(int *)(param_2 + 0x24) + 10,param_6,uVar3);
      }
      else {
        *(undefined1 *)(*(int *)(param_2 + 0x24) + 10) = 0;
      }
    }
    FUN_001e8170(param_1,DAT_001e892c);
    uVar4 = FUN_001e8d78(param_1,param_2);
    FUN_001eac48(param_1,DAT_001e892c);
    return uVar4;
  }
  return DAT_001e8928;
}

