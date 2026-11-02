// rea decompile_all
// name: FUN_0000dc10
// address: 0xdc10
// body: available
// range: 0xdc10-0xdcfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000dc10(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[2] + 0x118;
  FUN_001f00bc(iVar4);
  if (param_1[0x1c] != param_2) {
    (**(code **)(*param_1 + 0x74))(param_1);
    (**(code **)(*param_1 + 0x1b0))(param_1);
    iVar5 = param_1[7];
    if (*(int *)(iVar5 + 0xcc) != 0) {
      FUN_001dae58();
      *(undefined4 *)(iVar5 + 0xcc) = 0;
    }
    param_1[0x1c] = param_2;
    if (param_2 != 0xff) {
      uVar1 = FUN_0004cf1c(param_2,0);
      uVar2 = FUN_0000a390(param_1 + 1);
      uVar3 = FUN_0004cf1c(uVar2,0);
      if (uVar1 < uVar3) {
        param_1[0x1c] = 0xff;
        FUN_001f06d4(iVar4);
        return 0;
      }
    }
  }
  FUN_001f06d4(iVar4);
  return 1;
}

