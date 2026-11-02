// rea decompile_all
// name: FUN_0003fa60
// address: 0x3fa60
// body: available
// range: 0x3fa60-0x3faff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0003fa60(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  FUN_00025cca(param_3[8]);
  iVar3 = FUN_001c6fe0();
  iVar6 = param_3[8];
  iVar8 = param_3[5];
  piVar7 = *(int **)(iVar3 * 4 + param_2 + 0x14);
  while ((piVar7 != (int *)0x0 &&
         ((piVar7[1] != iVar8 || (iVar3 = FUN_000400ea(piVar7[4],iVar6), iVar3 == 0))))) {
    piVar7 = (int *)*piVar7;
  }
  piVar2 = DAT_0003fb00;
  if (piVar7 != (int *)0x0) {
    iVar3 = piVar7[2];
    piVar1 = piVar7 + 2;
    while (iVar3 != 0) {
      piVar4 = (int *)*piVar1;
      if (piVar4 == param_3) {
        if (*piVar2 != 0) {
          uVar5 = FUN_00028288(param_3 + 1,param_3[9] + 4,param_1 + 0x37);
          FUN_0002a1c6(3,DAT_0003fb08,uVar5);
        }
        iVar3 = *(int *)*piVar1;
        *piVar1 = iVar3;
      }
      else {
        iVar3 = *piVar4;
        piVar1 = piVar4;
      }
    }
    piVar7[3] = (int)piVar1;
    return (int)piVar7;
  }
  uVar5 = FUN_00028288(param_3 + 1,param_3[9] + 4,param_1 + 0x37);
  FUN_0002a1c6(0,DAT_0003fb04,uVar5);
  return 0;
}

