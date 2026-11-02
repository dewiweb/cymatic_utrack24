// rea decompile_all
// name: FUN_0013e194
// address: 0x13e194
// body: available
// range: 0x13e194-0x13e24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0013e194(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 auStack_4c [3];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  uVar4 = 0;
  iVar1 = FUN_0016d7a4(0xf0,DAT_0013e24c);
  if (iVar1 != 0) {
    auStack_4c[0] = param_5;
    piVar2 = (int *)FUN_00140450(iVar1,0,param_1,param_2,param_4);
    if (piVar2 != (int *)0x0) {
      uVar4 = FUN_0010f674(auStack_30,param_3,0);
      FUN_00116ec0(auStack_4c,param_1 + 0x1e0);
      uVar3 = FUN_0010f674(auStack_40,auStack_4c,0);
      uVar4 = FUN_00123048(piVar2,8,0x80,uVar3,uVar4);
      (**(code **)(*piVar2 + 0x3c))(piVar2);
    }
  }
  return uVar4;
}

