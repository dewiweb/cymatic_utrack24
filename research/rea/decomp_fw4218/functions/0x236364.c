// rea decompile_all
// name: FUN_00236364
// address: 0x236364
// body: available
// range: 0x236364-0x2363eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00236364(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  piVar2 = (int *)param_1[1];
  iVar6 = param_1[4];
  if (piVar2 == (int *)0x0) {
    if (param_1[2] == param_1[3]) {
      uVar5 = 1;
      if (*param_1 != 0) {
        uVar4 = *(uint *)(*param_1 + 4);
        uVar1 = (uVar4 >> 1) + uVar4 + (uVar4 >> 3);
        uVar5 = uVar4 + 1;
        if (uVar4 + 1 <= uVar1) {
          uVar5 = uVar1;
        }
      }
      piVar2 = (int *)FUN_00173860(0xc,0);
      iVar3 = FUN_00173860(uVar5 * 0x10,0);
      piVar2[2] = iVar3;
      iVar3 = *param_1;
      piVar2[1] = uVar5;
      *piVar2 = iVar3;
      *param_1 = (int)piVar2;
      iVar3 = piVar2[2];
      param_1[2] = iVar3;
      param_1[3] = iVar3 + uVar5 * 0x10;
    }
    piVar2 = (int *)param_1[2];
    param_1[2] = (int)(piVar2 + 4);
  }
  else {
    param_1[1] = *piVar2;
  }
  if (piVar2 + 2 != (int *)0x0) {
    iVar3 = param_2[1];
    piVar2[2] = *param_2;
    piVar2[3] = iVar3;
  }
  *piVar2 = iVar6;
  piVar2[1] = *(int *)(iVar6 + 4);
  **(undefined4 **)(iVar6 + 4) = piVar2;
  *(int **)(iVar6 + 4) = piVar2;
  param_1[5] = param_1[5] + 1;
  return;
}

