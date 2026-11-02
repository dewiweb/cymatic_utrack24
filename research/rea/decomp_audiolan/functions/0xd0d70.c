// rea decompile_all
// name: FUN_000d0d70
// address: 0xd0d70
// body: available
// range: 0xd0d70-0xd0e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d0d70(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 1;
  uVar2 = FUN_000b9aac();
  cVar1 = param_3[3];
  if (param_3[2] != '\0') {
    if (cVar1 == '\x10') {
      uVar4 = 0x10;
    }
    else if (cVar1 == '\x18') {
      uVar4 = 0x18;
    }
    else {
      if (cVar1 != ' ') {
                    /* WARNING: Could not recover jumptable at 0x000d0dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,6);
        return;
      }
      uVar4 = 0x20;
    }
    iVar3 = FUN_000b9d64(uVar2,uVar4);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
  }
  if ((*param_3 != '\0') && (iVar3 = FUN_000bb290(uVar2,param_3[1]), iVar3 == 0)) {
    uVar5 = 0;
  }
  if ((param_3[4] != '\0') && (iVar3 = FUN_000ba52c(uVar2,*(undefined4 *)(param_3 + 8)), iVar3 == 0)
     ) {
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000d0e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar5 ^ 1);
  return;
}

