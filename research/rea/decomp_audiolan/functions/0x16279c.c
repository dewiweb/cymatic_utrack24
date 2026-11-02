// rea decompile_all
// name: FUN_0016279c
// address: 0x16279c
// body: available
// range: 0x16279c-0x162897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016279c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  
  piVar3 = (int *)(param_1 + -0xc);
  iVar4 = *(int *)(param_1 + 0x60) + param_3 * 0x1c;
  if (param_5 == 0x1011) {
    FUN_0010e240(iVar4 + 0xc,param_6);
    FUN_000e66bc(piVar3,*(int *)(iVar4 + 8) + 1,4,0);
    return;
  }
  if (param_5 == 0x1021) {
    iVar4 = FUN_00003318(param_6,0x2f);
    if (iVar4 != 0) {
      FUN_0010e7e0(auStack_20);
      FUN_0010e274(auStack_20,param_6,iVar4 - param_6 & 0xffff);
      sVar1 = FUN_0000317c(iVar4 + 1);
      if (sVar1 != 0) {
        uVar2 = FUN_0015e89c(auStack_20);
        (**(code **)(*piVar3 + 0xac))(piVar3,*(undefined4 *)(param_1 + 0x84),param_3,uVar2);
      }
      FUN_0010e7f4(auStack_20);
      return;
    }
    return;
  }
  return;
}

