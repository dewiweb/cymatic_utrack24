// rea decompile_all
// name: FUN_00051d90
// address: 0x51d90
// body: available
// range: 0x51d90-0x51eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00051d90(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = (param_1[0x43] & 0xf0U) == 0xe0;
  if (bVar5) {
    iVar4 = 0x40;
  }
  else {
    iVar4 = 0x20;
  }
  iVar1 = FUN_0019dc00(iVar4,0x11,0);
  param_1[0x3b] = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0xb0) = 500;
  if (iVar4 == 0x20) {
    *(byte *)(*(int *)(param_1[0x3b] + 4) + 8) = *(byte *)(*(int *)(param_1[0x3b] + 4) + 8) | 4;
  }
  if (bVar5) {
    iVar4 = *DAT_00051eb8;
    param_1[0x3e] = DAT_00051eb8[1];
    param_1[0x3d] = iVar4;
    *(undefined1 *)((int)param_1 + 0xfd) = 0;
    uVar3 = 0;
    iVar4 = param_1[0x3b];
    piVar2 = param_1 + 0x43;
  }
  else {
    iVar4 = DAT_00051eb8[3];
    param_1[0x3d] = DAT_00051eb8[2];
    param_1[0x3e] = iVar4;
    *(undefined1 *)((int)param_1 + 0xfd) = 1;
    uVar3 = (undefined2)param_1[0x45];
    iVar4 = param_1[0x3b];
    piVar2 = DAT_00051ebc;
  }
  iVar4 = FUN_0019d4b4(iVar4,piVar2,uVar3);
  if (iVar4 == 0) {
    if ((bVar5) && (iVar4 = FUN_0019dc00(0x20,0), iVar4 != 0)) {
      FUN_0019daa8(iVar4,param_1 + 0x43,0);
      FUN_0019d660(iVar4);
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    (**(code **)(*param_1 + 8))(param_1);
    return 1;
  }
  return 0;
}

