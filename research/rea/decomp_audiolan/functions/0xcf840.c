// rea decompile_all
// name: FUN_000cf840
// address: 0xcf840
// body: available
// range: 0xcf840-0xcf93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000cf840(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  uVar1 = 6;
  if ((param_3 != 0) && (param_3 < 0x21)) {
    uVar6 = 0;
    do {
      iVar3 = param_1 + uVar6 * 0xc;
      iVar2 = *(int *)(iVar3 + 0x1bc);
      if (iVar2 == 0) break;
      uVar4 = *(uint *)(iVar3 + 0x1b8);
      if ((uVar4 <= param_3 - 1) && (param_3 - 1 < iVar2 + uVar4)) {
        iVar2 = *param_4;
        piVar5 = (int *)(param_1 + uVar6 * 0xc + 0x1c0);
        if (*(int *)(iVar2 + -0xc) == -1) {
          if (piVar5 != param_4) {
            FUN_001d982c(piVar5,0,*(undefined4 *)(*piVar5 + -4),iVar2,*(undefined4 *)(iVar2 + -4),0,
                         *(undefined4 *)(iVar2 + -4));
          }
        }
        else {
          if ((int *)(iVar2 + -0xc) != DAT_000cf93c) {
            *(int *)(iVar2 + -0xc) = *(int *)(iVar2 + -0xc) + 1;
          }
          FUN_001d9b00(piVar5);
          *piVar5 = *param_4;
        }
        uVar1 = 0;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x000cf938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar1);
  return;
}

