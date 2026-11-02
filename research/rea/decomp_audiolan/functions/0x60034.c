// rea decompile_all
// name: FUN_00060034
// address: 0x60034
// body: available
// range: 0x60034-0x601c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00060034(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  uint uVar4;
  undefined4 local_30;
  ushort local_2c [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [2];
  ushort local_1c [2];
  
  if (6 < param_4) {
    local_2c[0] = 0;
    FUN_000777e0(local_20,param_3,local_2c);
    uVar1 = DAT_000601c8;
    local_30 = DAT_000601c8;
    FUN_00077c0c(&local_30,param_3,local_2c,param_4 - local_2c[0] & 0xffff);
    if (local_2c[0] < param_4) {
      local_28 = uVar1;
      FUN_00077c0c(&local_28,param_3,local_2c,param_4 - local_2c[0] & 0xffff);
      if (local_2c[0] < param_4) {
        local_24 = uVar1;
        FUN_00077c0c(&local_24,param_3,local_2c,param_4 - local_2c[0] & 0xffff);
        if (local_2c[0] < param_4) {
          FUN_000777e0(local_1c,param_3,local_2c);
          uVar2 = (uint)local_2c[0];
          if (uVar2 <= param_4) {
            uVar3 = (uint)local_1c[0];
            uVar4 = extraout_r2;
            if (uVar3 != 0) {
              uVar4 = uVar2 + uVar3;
            }
            if (uVar3 == 0 || uVar4 == param_4) {
              (**(code **)(*(int *)param_1[1] + 0x158))
                        ((int *)param_1[1],param_2,local_20[0],&local_30,&local_28,&local_24,uVar3,
                         uVar2 + param_3);
              FUN_001da44c(&local_24);
              FUN_001da44c(&local_28);
              FUN_001da44c(&local_30);
              return;
            }
          }
        }
        FUN_001da44c(&local_24);
      }
      FUN_001da44c(&local_28);
      FUN_001da44c(&local_30);
    }
    else {
      FUN_001da44c(&local_30);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00060104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_2,6);
  return;
}

