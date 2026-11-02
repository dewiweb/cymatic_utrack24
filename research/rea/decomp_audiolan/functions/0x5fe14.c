// rea decompile_all
// name: FUN_0005fe14
// address: 0x5fe14
// body: available
// range: 0x5fe14-0x5ff1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005fe14(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  ushort local_230 [2];
  undefined1 auStack_22c [4];
  undefined1 auStack_228 [512];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  if (param_4 != 0) {
    local_230[0] = 0;
    FUN_00077bd0(auStack_228,param_3,local_230,0x100);
    uVar1 = (uint)local_230[0];
    uVar5 = 0;
    uVar3 = DAT_0005ff1c;
    if (uVar1 < param_4) {
      uVar2 = uVar1 + 1 & 0xfffeffff;
      local_230[0] = (ushort)uVar2;
      if ((*(byte *)(param_3 + uVar1) & 1) == 0) {
LAB_0005feac:
        piVar4 = (int *)param_1[1];
        uVar3 = FUN_001d9b54(auStack_24,auStack_228,auStack_20);
        (**(code **)(*piVar4 + 0x5c))(piVar4,param_2,uVar3,uVar5,auStack_22c,auStack_28);
        FUN_001d9cc8(auStack_24);
        return;
      }
      uVar3 = DAT_0005ff20;
      if (uVar2 + 7 <= param_4) {
        uVar5 = 1;
        FUN_00077a14(auStack_22c,param_3,local_230);
        FUN_00077a80(auStack_28,param_3,local_230);
        goto LAB_0005feac;
      }
    }
    FUN_000028a4(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0005ff18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_2,6);
  return;
}

