// rea decompile_all
// name: FUN_000d0558
// address: 0xd0558
// body: available
// range: 0xd0558-0xd0647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d0558(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_20;
  
  local_20 = param_4;
  uVar1 = FUN_00013224(s__dev_uart1_000d0648,0);
  for (uVar4 = 0xb0; uVar4 < 0xc0; uVar4 = uVar4 + 1) {
    local_20 = CONCAT31((int3)((uint)DAT_000d0654 >> 8),(char)uVar4);
    FUN_00013374(uVar1,&local_20,3);
  }
  uVar3 = 1;
  if (*param_2 != '\x01') {
    for (uVar4 = 0; uVar4 < 0x10; uVar4 = uVar4 + 1) {
      for (uVar5 = 0; uVar5 < 0x80; uVar5 = uVar5 + 1) {
        local_20._2_2_ = (undefined2)((uint)DAT_000d0658 >> 0x10);
        local_20._0_2_ = CONCAT11((char)uVar5,(char)uVar4 + -0x80);
        iVar2 = FUN_00013374(uVar1,&local_20,3);
        if (iVar2 < 3) {
          FUN_001d0130(5);
          FUN_00013374(uVar1,(int)&local_20 + iVar2,3 - iVar2);
        }
        else {
          FUN_001d0130(1);
        }
      }
    }
    uVar3 = FUN_0001320c(uVar1);
  }
  return uVar3;
}

