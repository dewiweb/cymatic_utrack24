// rea decompile_all
// name: FUN_00234e08
// address: 0x234e08
// body: available
// range: 0x234e08-0x234f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00234e08(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  if (param_1 != param_2) {
    FUN_002349a0(auStack_18,param_1);
    FUN_00234980(auStack_1c,param_1);
    local_20 = FUN_0022dda4(param_2);
    local_24 = FUN_0022dd88(param_2);
    while ((iVar1 = FUN_0022d648(auStack_18,auStack_1c), iVar1 != 0 &&
           (iVar1 = FUN_0022d5f4(&local_20,&local_24), iVar1 != 0))) {
      uVar2 = FUN_0022d5c0(&local_20);
      uVar3 = FUN_0022d614(auStack_18);
      FUN_000039e0(uVar3,uVar2,3);
      FUN_00232abc(auStack_18);
      FUN_00232a94(&local_20);
    }
    iVar1 = FUN_0022d5d0(&local_20,&local_24);
    if (iVar1 == 0) {
      uVar2 = FUN_00232ab0(auStack_28,auStack_1c);
      FUN_00234be0(param_1,uVar2,local_20,local_24);
    }
    else {
      uVar2 = FUN_00232ab0(auStack_30,auStack_1c);
      uVar3 = FUN_00232ab0(auStack_2c,auStack_18);
      FUN_00234acc(auStack_28,param_1,uVar3,uVar2);
    }
  }
  return param_1;
}

