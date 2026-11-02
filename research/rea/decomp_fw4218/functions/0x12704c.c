// rea decompile_all
// name: FUN_0012704c
// address: 0x12704c
// body: available
// range: 0x12704c-0x127213 inclusive
// range: 0x130424-0x130443 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0012704c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *param_1 = DAT_00127214;
  FUN_001f00bc(param_1 + 1);
  puVar2 = (undefined4 *)param_1[0x18];
  if ((undefined4 *)param_1[0x19] != puVar2) {
    do {
      piVar3 = (int *)*puVar2;
      if (piVar3 != (int *)0x0) {
        *puVar2 = 0;
        FUN_001d0130(1);
        (**(code **)(*piVar3 + 0xc))(piVar3);
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      puVar2 = puVar2 + 1;
    } while ((undefined4 *)param_1[0x19] != puVar2);
  }
  piVar3 = (int *)param_1[0x14];
  if ((int *)param_1[0x15] != piVar3) {
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 4))();
      }
      piVar3 = piVar3 + 1;
    } while ((int *)param_1[0x15] != piVar3);
  }
  puVar2 = (undefined4 *)param_1[0x1b];
  if ((undefined4 *)param_1[0x1c] != puVar2) {
    do {
      piVar3 = (int *)*puVar2;
      if (piVar3 != (int *)0x0) {
        FUN_001d0130(1);
        *puVar2 = 0;
        (**(code **)(*piVar3 + 0xc))(piVar3);
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      puVar2 = puVar2 + 1;
    } while ((undefined4 *)param_1[0x1c] != puVar2);
  }
  FUN_001f06d4(param_1 + 1);
  FUN_001f01ac(param_1 + 0x1f);
  FUN_00173a54(param_1[0x1b],(int)(param_1[0x1d] - param_1[0x1b]) >> 2,0);
  FUN_00173a54(param_1[0x18],(int)(param_1[0x1a] - param_1[0x18]) >> 2,0);
  FUN_00173a54(param_1[0x14],(int)(param_1[0x16] - param_1[0x14]) >> 2,0);
  puVar4 = (undefined4 *)param_1[0x12];
  for (puVar2 = (undefined4 *)param_1[0x11]; puVar2 != puVar4; puVar2 = puVar2 + 8) {
    (**(code **)*puVar2)(puVar2);
  }
  iVar1 = param_1[0x11];
  FUN_00173a54(iVar1,param_1[0x13] - iVar1 >> 5,0);
  *param_1 = DAT_00130444;
  FUN_001f01ac(param_1 + 1);
  return param_1;
}

