// rea decompile_all
// name: FUN_00075b90
// address: 0x75b90
// body: available
// range: 0x75b90-0x75ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00075b90(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
    return 0;
  }
  param_1[2] = param_2;
  *(undefined4 *)param_1[4] = param_3;
  if (param_1[10] == 0) {
    puVar1 = (undefined1 *)FUN_001f01c4(0x14,1);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0xff;
      puVar1[1] = 0xff;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1[8] = 1;
      *(undefined4 *)(puVar1 + 0xc) = 0x3f;
      puVar1[0x10] = 1;
      puVar1[0x11] = 0;
    }
    param_1[10] = (int)puVar1;
    if (puVar1 == (undefined1 *)0x0) {
      return 0;
    }
  }
  if (param_1[1] == -1) {
    iVar2 = FUN_00074aac(param_1 + 1,2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = FUN_00074a44();
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (param_1[8] == -1) {
    param_1[8] = param_1[1];
  }
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (iVar2 != 0) {
    FUN_000749b0();
    FUN_00074934(param_1[1]);
    return 1;
  }
  FUN_00074b58(param_1[1]);
  FUN_00074a28(param_1[1]);
  param_1[1] = -1;
  if (param_1[7] != -1) {
    FUN_00074a7c();
    param_1[7] = -1;
  }
  return 0;
}

