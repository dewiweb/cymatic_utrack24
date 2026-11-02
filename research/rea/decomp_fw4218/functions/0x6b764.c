// rea decompile_all
// name: FUN_0006b764
// address: 0x6b764
// body: available
// range: 0x6b764-0x6b86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006b764(int param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*param_4 == *(int *)(param_1 + 0x1b0)) && (param_4[1] == *(int *)(param_1 + 0x1b4))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    return;
  }
  piVar5 = *(int **)(param_1 + 0x10);
  bVar1 = false;
  piVar3 = (int *)*piVar5;
  if (piVar3 != piVar5) {
    do {
      if (piVar3[2] == param_2) {
        if (piVar3[4] != param_3) {
          return;
        }
        bVar1 = true;
        piVar3[3] = param_3;
      }
      piVar3 = (int *)*piVar3;
      piVar5 = *(int **)(param_1 + 0x10);
    } while (piVar3 != piVar5);
  }
  for (piVar3 = (int *)*piVar5; piVar3 != piVar5; piVar3 = (int *)*piVar3) {
    if (piVar3[3] != piVar3[4]) {
      return;
    }
  }
  if (!bVar1) {
    return;
  }
  FUN_00063758(param_1 + 300);
  uVar7 = *(undefined4 *)(DAT_0006b870 + 0x30);
  uVar6 = *(undefined4 *)(DAT_0006b870 + 0x34);
  puVar4 = (undefined4 *)FUN_001f01c4(0x10,1);
  uVar2 = DAT_0006b874;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[3] = uVar6;
    *puVar4 = uVar2;
    puVar4[1] = param_1;
    puVar4[2] = uVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x0006b86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0x2c))((int *)(param_1 + 0x18),puVar4,0xffffffff);
  return;
}

