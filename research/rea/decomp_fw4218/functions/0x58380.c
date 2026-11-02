// rea decompile_all
// name: FUN_00058380
// address: 0x58380
// body: available
// range: 0x58380-0x5850b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00058380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_54;
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [8];
  uint local_2c;
  uint local_28;
  
  FUN_001a2920(auStack_34,param_1 + 0x2c);
  iVar4 = 0;
  FUN_000ed2b8(auStack_50,0xffffffff,0,0,0,0,0xffffffff);
  iVar5 = 0;
  while( true ) {
    iVar1 = FUN_001c0b3c(param_2);
    if (iVar1 <= iVar5) {
      FUN_000649c4(param_3,0);
      FUN_000649bc(param_3,0);
      FUN_000649cc(param_3,iVar4);
      piVar2 = (int *)FUN_0022bc6c(param_1 + 0x20);
      local_2c = FUN_001c08d4(param_2,0);
      local_28 = local_2c & 0xffff;
      (**(code **)(*piVar2 + 0x28))(piVar2,&local_28,auStack_50,param_4,param_5,1);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_001ba36c(auStack_50);
      }
      FUN_000649d4(param_3,uVar3);
      FUN_001a2938(auStack_34);
      return 1;
    }
    local_54 = FUN_001c08d4(param_2,iVar5);
    piVar2 = (int *)FUN_0022bc6c(param_1 + 0x20);
    iVar1 = (**(code **)(*piVar2 + 0x28))(piVar2,&local_54,auStack_50,param_4,param_5,1);
    if (iVar1 == 0) break;
    iVar1 = FUN_001ba360(auStack_50);
    iVar4 = iVar4 + iVar1;
    iVar5 = iVar5 + 1;
  }
  FUN_00002898(s_ERROR__LCDDisplay__getTextRect__C_0005850c);
  FUN_001a2938(auStack_34);
  return 0;
}

