// rea decompile_all
// name: FUN_001dcfd4
// address: 0x1dcfd4
// body: available
// range: 0x1dcfd4-0x1dd14f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001dcfd4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (int *)FUN_0010f82c(0xc,0);
  iVar2 = FUN_0010f82c(0xc,0);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 1;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0xc;
  param_1[4] = iVar2;
  param_1[2] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(int *)(param_1[4] + 4) = param_1[4];
  piVar7 = *(int **)(param_2 + 0x10);
  iVar2 = *(int *)param_1[4];
  for (piVar1 = (int *)*piVar7; piVar1 != piVar7; piVar1 = (int *)*piVar1) {
    piVar3 = (int *)param_1[1];
    if (piVar3 == (int *)0x0) {
      if (param_1[2] == param_1[3]) {
        uVar6 = 1;
        if (*param_1 != 0) {
          uVar4 = *(uint *)(*param_1 + 4);
          uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (uVar6 < uVar4 + 1) {
            uVar6 = uVar4 + 1;
          }
        }
        piVar3 = (int *)FUN_0010f82c(0xc,0);
        iVar5 = FUN_0010f82c(uVar6 * 0xc,0);
        piVar3[2] = iVar5;
        *piVar3 = *param_1;
        piVar3[1] = uVar6;
        *param_1 = (int)piVar3;
        iVar5 = piVar3[2];
        param_1[2] = iVar5;
        param_1[3] = iVar5 + uVar6 * 0xc;
      }
      piVar3 = (int *)param_1[2];
      param_1[2] = (int)(piVar3 + 3);
    }
    else {
      param_1[1] = *piVar3;
    }
    if (piVar3 + 2 != (int *)0x0) {
      piVar3[2] = piVar1[2];
    }
    *piVar3 = iVar2;
    piVar3[1] = *(int *)(iVar2 + 4);
    **(undefined4 **)(iVar2 + 4) = piVar3;
    *(int **)(iVar2 + 4) = piVar3;
    param_1[5] = param_1[5] + 1;
  }
  return param_1;
}

