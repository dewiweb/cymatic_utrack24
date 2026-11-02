// rea decompile_all
// name: FUN_001f3598
// address: 0x1f3598
// body: available
// range: 0x1f3598-0x1f362b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001f3598(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  bool bVar5;
  uint uVar6;
  
  iVar2 = DAT_001f3630;
  piVar1 = DAT_001f362c;
  uVar6 = 0;
  if ((param_2 == 0) && (param_1 != 0)) {
    if (*DAT_001f362c != DAT_001f3630) {
      FUN_000449d4();
    }
  }
  else {
    iVar3 = FUN_001f0220(param_2,1,unaff_lr,0);
    if (iVar3 != 0) {
      if (param_1 != 0) {
        FUN_000039e0(iVar3,param_1,param_2);
        bVar5 = (~uVar6 & 0x1f) != 0;
        iVar4 = 0;
        if (bVar5) {
          iVar4 = *piVar1;
        }
        if (bVar5 && iVar4 != iVar2) {
          FUN_000449d4(param_1);
        }
      }
      return iVar3;
    }
  }
  return 0;
}

