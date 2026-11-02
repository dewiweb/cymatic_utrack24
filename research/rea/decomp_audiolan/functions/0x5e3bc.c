// rea decompile_all
// name: FUN_0005e3bc
// address: 0x5e3bc
// body: available
// range: 0x5e3bc-0x5e543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005e3bc(int *param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  ushort local_244 [2];
  undefined1 auStack_240 [512];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  if (0x13 < param_4) {
    local_40 = *param_3;
    local_3f = param_3[1];
    local_3e = param_3[2];
    local_3d = param_3[3];
    local_3c = param_3[4];
    local_244[0] = 5;
    FUN_00077824(auStack_34,param_3,local_244);
    FUN_00077824(auStack_38,param_3,local_244);
    local_3b = param_3[local_244[0]];
    local_244[0] = local_244[0] + 1;
    FUN_00077824(auStack_30,param_3,local_244);
    FUN_00077bd0(auStack_240,param_3,local_244,0x100);
    uVar1 = (uint)local_244[0];
    if (uVar1 < param_4) {
      uVar2 = uVar1 + 1 & 0xfffeffff;
      uVar5 = 0;
      local_244[0] = (ushort)uVar2;
      if ((param_3[uVar1] & 1) != 0) {
        if (param_4 < uVar2 + 7) goto LAB_0005e524;
        uVar5 = 1;
        FUN_00077a14(auStack_2c,param_3,local_244);
        FUN_00077a80(auStack_28,param_3,local_244);
      }
      piVar4 = (int *)param_1[1];
      uVar3 = FUN_001d9b54(auStack_24,auStack_240,auStack_20);
      (**(code **)(*piVar4 + 0x98))(piVar4,param_2,&local_40,uVar3,uVar5,auStack_2c,auStack_28);
      FUN_001d9cc8(auStack_24);
      return;
    }
  }
LAB_0005e524:
                    /* WARNING: Could not recover jumptable at 0x0005e540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_2,6);
  return;
}

