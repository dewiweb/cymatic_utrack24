// rea decompile_all
// name: FUN_0017d0a0
// address: 0x17d0a0
// body: available
// range: 0x17d0a0-0x17d257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017d0a0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  param_1[5] = param_2;
  if (param_1[5] == 0) {
    FUN_00002898(DAT_0017d258,param_1[8]);
    uVar1 = 0;
  }
  else {
    param_1[1] = param_1[5];
    param_1[2] = param_1[5] + 0xe;
    param_1[3] = param_1[2] + 0x28;
    if ((char)param_1[10] == '\x18') {
      param_1[4] = param_1[3];
    }
    else {
      param_1[4] = param_1[3] + param_1[0xb];
    }
    uVar1 = DAT_0017d25c;
    puVar2 = (undefined1 *)param_1[1];
    *puVar2 = (char)DAT_0017d25c;
    puVar2[1] = (char)((uint)uVar1 >> 8);
    FUN_00003df4(param_1[8],param_1[1] + 2);
    iVar3 = param_1[1];
    *(undefined1 *)(iVar3 + 6) = 0;
    *(undefined1 *)(iVar3 + 7) = 0;
    iVar3 = param_1[1];
    *(undefined1 *)(iVar3 + 8) = 0;
    *(undefined1 *)(iVar3 + 9) = 0;
    FUN_00003df4(param_1[0xb] + 0x36,param_1[1] + 10);
    FUN_00003df4(0x28,param_1[2]);
    FUN_00003df4(param_1[7],param_1[2] + 4);
    FUN_00003df4(param_1[6],param_1[2] + 8);
    iVar3 = param_1[2];
    *(undefined1 *)(iVar3 + 0xc) = 1;
    *(undefined1 *)(iVar3 + 0xd) = 0;
    iVar3 = param_1[2];
    *(char *)(iVar3 + 0xe) = (char)param_1[10];
    *(undefined1 *)(iVar3 + 0xf) = 0;
    FUN_00003df4(0,param_1[2] + 0x10);
    FUN_00003df4(0,param_1[2] + 0x14);
    FUN_00003df4(DAT_0017d260,param_1[2] + 0x18);
    FUN_00003df4(DAT_0017d260,param_1[2] + 0x1c);
    FUN_00003df4(0,param_1[2] + 0x20);
    FUN_00003df4(0,param_1[2] + 0x24);
    FUN_00003df4(0xffffff,param_1[3]);
    FUN_00003df4(0,param_1[3] + 4);
    (**(code **)(*param_1 + 8))(param_1);
    uVar1 = 1;
  }
  return uVar1;
}

