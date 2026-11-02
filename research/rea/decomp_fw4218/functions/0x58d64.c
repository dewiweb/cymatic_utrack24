// rea decompile_all
// name: FUN_00058d64
// address: 0x58d64
// body: available
// range: 0x58d64-0x58ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00058d64(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined4 local_14;
  
  iStack_18 = param_1;
  local_14 = param_2;
  FUN_001a2920(auStack_20,param_1 + 0x2c);
  if (*DAT_00058ea8 == 0) {
    FUN_001a2938(auStack_20);
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_0017d0a0(*DAT_00058ea8,local_14);
    if (iVar1 != 0) {
      for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
        for (iVar4 = 0; iVar4 < 0xd8; iVar4 = iVar4 + 1) {
          iVar2 = FUN_001b5edc(param_1 + 0x10,iVar4,iVar1);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*(int *)*DAT_00058ea8 + 4))(*DAT_00058ea8,iVar4,iVar1,0);
            if (iVar2 == 0) {
              FUN_00002898(DAT_00058eac);
              FUN_001a2938(auStack_20);
              return 0;
            }
          }
          else {
            iVar2 = (**(code **)(*(int *)*DAT_00058ea8 + 4))(*DAT_00058ea8,iVar4,iVar1,1);
            if (iVar2 == 0) {
              FUN_00002898(DAT_00058eac);
              FUN_001a2938(auStack_20);
              return 0;
            }
          }
        }
      }
      FUN_0017d44c(*DAT_00058ea8,&local_14);
    }
    FUN_001a2938(auStack_20);
    uVar3 = 1;
  }
  return uVar3;
}

