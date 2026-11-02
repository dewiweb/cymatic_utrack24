// rea decompile_all
// name: FUN_000b2158
// address: 0xb2158
// body: available
// range: 0xb2158-0xb226f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000b2158(int *param_1,int *param_2,undefined2 param_3,int *param_4)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  
  piVar4 = DAT_000b2270;
  piVar8 = param_1 + 3;
  *param_1 = *(int *)(*param_4 + -4) + 0x42;
  *(undefined2 *)(param_1 + 2) = param_3;
  iVar2 = *param_4;
  if (*(int *)(iVar2 + -0xc) == -1) {
    uVar7 = *(uint *)(iVar2 + -4);
    if (0xfffffff1 < uVar7) {
      FUN_0010f7cc(8,DAT_000b2274,DAT_000b2274,uVar7,0xfffffff1);
    }
    if (uVar7 != 0) {
      piVar4 = (int *)FUN_0010f82c(uVar7 + 0xe,0);
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
      }
      piVar4[1] = uVar7;
      piVar4[2] = uVar7;
      puVar6 = (undefined1 *)((int)piVar4 + uVar7 + 0xc);
      *piVar4 = 0;
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
      }
    }
    *piVar8 = (int)(piVar4 + 3);
    FUN_00003628(piVar4 + 3,*param_4,uVar7);
  }
  else {
    *piVar8 = iVar2;
    piVar3 = (int *)(iVar2 + -0xc);
    if (piVar3 != piVar4) {
      *piVar3 = *piVar3 + 1;
    }
  }
  uVar5 = FUN_0017bfc0();
  uVar1 = (ulonglong)DAT_000b2278;
  uVar7 = (uint)(uVar5 * uVar1 >> 0x26);
  param_1[4] = uVar7;
  param_1[5] = uVar7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = *param_2;
  FUN_000b1e04(piVar8,param_1 + 5,(int)(uVar5 * uVar1));
  return param_1;
}

