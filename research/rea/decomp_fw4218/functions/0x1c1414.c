// rea decompile_all
// name: FUN_001c1414
// address: 0x1c1414
// body: available
// range: 0x1c1414-0x1c14fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001c1414(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_r7;
  bool bVar5;
  
  bVar5 = param_2 == (int *)0x0;
  if (bVar5) {
    param_2 = DAT_001c14fc;
  }
  piVar2 = param_1 + 3;
  iVar3 = *param_2;
  if (bVar5) {
    unaff_r7 = 1;
  }
  *param_1 = iVar3;
  if (!bVar5) {
    unaff_r7 = 0;
  }
  *(int *)((int)param_1 + *(int *)(iVar3 + -0xc)) = param_2[8];
  param_1[2] = param_2[9];
  param_1[3] = DAT_001c1500;
  if ((param_1[7] & 1U) != 0) {
    FUN_00173a54(param_1[5],param_1[6],0);
  }
  *piVar2 = DAT_001c1504;
  iVar3 = param_1[0xe];
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x1c) + -1;
    *(int *)(iVar3 + 0x1c) = iVar4;
    if ((iVar4 == 0) && (puVar1 = (undefined4 *)param_1[0xe], puVar1 != (undefined4 *)0x0)) {
      FUN_001eecc8(puVar1[6]);
      FUN_001eecc8(puVar1[2]);
      FUN_001c70fa(*puVar1,DAT_001c1508);
      FUN_001eecc8();
      FUN_001eecc8(puVar1);
    }
  }
  if (param_2 == (int *)0xfffffffc) {
    piVar2 = (int *)FUN_001c1c56(piVar2);
  }
  if (unaff_r7 == 0) {
    return piVar2 + -3;
  }
  iVar3 = FUN_001c1c56(piVar2 + 0xc);
  return (int *)(iVar3 + -0x3c);
}

