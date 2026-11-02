// rea decompile_all
// name: FUN_0000d3a4
// address: 0xd3a4
// body: available
// range: 0xd3a4-0xd483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000d3a4(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = param_1[2];
  FUN_001f00bc();
  (**(code **)(*param_1 + 0x74))(param_1);
  (**(code **)(*param_1 + 0x1b0))(param_1);
  if (param_1[0x1c] == 0xff) {
    iVar4 = FUN_0000a390(param_1 + 1);
    if (iVar4 != param_2) {
      iVar6 = param_1[7];
      if (iVar6 != 0) {
        iVar4 = *(int *)(iVar6 + 0xcc);
      }
      if (iVar6 != 0 && iVar4 != 0) {
        FUN_001dae58();
        *(undefined4 *)(iVar6 + 0xcc) = 0;
      }
    }
  }
  else {
    uVar2 = FUN_0004cf1c(param_1[0x1c],0);
    uVar3 = FUN_0004cf1c(param_2,0);
    if (uVar2 < uVar3) {
      FUN_001f06d4(iVar1 + 0x118);
      return 0;
    }
  }
  uVar5 = FUN_0000a850(param_1 + 1,param_2);
  FUN_001f06d4(iVar1 + 0x118);
  return uVar5;
}

