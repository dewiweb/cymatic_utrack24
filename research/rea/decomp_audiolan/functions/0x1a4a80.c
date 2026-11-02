// rea decompile_all
// name: FUN_001a4a80
// address: 0x1a4a80
// body: available
// range: 0x1a4a80-0x1a4b69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001a4a80(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  uVar1 = *param_1;
  pcVar4 = (code *)*DAT_001a4b6c;
  if (uVar1 == 0) {
    if (pcVar4 == entry) {
      uVar1 = FUN_0019b388(8);
    }
    else {
      uVar1 = (*pcVar4)(8);
    }
    param_1[1] = uVar1;
    if (uVar1 != 0) {
      *(int *)(uVar1 + 4) = param_2;
      *(undefined4 *)param_1[1] = 0;
      uVar1 = *param_1;
      *param_1 = uVar1 + 1;
      return uVar1 + 1;
    }
  }
  else {
    if ((param_3 == 0xffffffff) || ((int)uVar1 <= (int)param_3)) {
      param_3 = uVar1;
    }
    piVar6 = (int *)param_1[1];
    if (param_3 == 0) {
      if (pcVar4 == entry) {
        uVar1 = FUN_0019b388(8);
      }
      else {
        uVar1 = (*pcVar4)(8);
      }
      param_1[1] = uVar1;
      if (uVar1 != 0) {
        *(int *)(uVar1 + 4) = param_2;
        *(int **)param_1[1] = piVar6;
        uVar1 = *param_1;
        *param_1 = uVar1 + 1;
        return uVar1 + 1;
      }
      param_1[1] = (uint)piVar6;
    }
    else {
      if (0 < (int)(param_3 - 1)) {
        if ((param_3 & 1) != 1) {
          piVar6 = (int *)*piVar6;
        }
        for (iVar5 = (int)(param_3 - 1) >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          piVar6 = *(int **)*piVar6;
        }
      }
      if (uVar1 == param_3) {
        if (pcVar4 == entry) {
          puVar2 = (undefined4 *)FUN_0019b388(8);
        }
        else {
          puVar2 = (undefined4 *)(*pcVar4)(8);
        }
        *piVar6 = (int)puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = param_2;
          uVar1 = *param_1;
          *param_1 = uVar1 + 1;
          return uVar1 + 1;
        }
      }
      else {
        iVar5 = *piVar6;
        if (pcVar4 == entry) {
          piVar3 = (int *)FUN_0019b388(8);
        }
        else {
          piVar3 = (int *)(*pcVar4)(8);
        }
        *piVar6 = (int)piVar3;
        if (piVar3 != (int *)0x0) {
          *piVar3 = iVar5;
          piVar3[1] = param_2;
          uVar1 = *param_1;
          *param_1 = uVar1 + 1;
          return uVar1 + 1;
        }
        *piVar6 = iVar5;
      }
    }
  }
  return 0xfffffffc;
}

