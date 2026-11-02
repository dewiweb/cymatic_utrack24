// rea decompile_all
// name: FUN_001dd168
// address: 0x1dd168
// body: available
// range: 0x1dd168-0x1dd29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001dd168(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_00203e2c(&uStack_20);
  uVar1 = FUN_000b4964();
  iVar2 = FUN_000b4840(uVar1,s_AudioHWService_001dd29c,&uStack_20);
  if (iVar2 == 0) {
    FUN_00002898(s_ECC108_i2c_enable__Could_NOT_get_001dd2ac);
    uVar1 = FUN_000d04f8(&uStack_20);
  }
  else {
    piVar3 = (int *)FUN_0022bc60(&uStack_20);
    uVar4 = (**(code **)(*piVar3 + 0x80))(piVar3,8,0xd);
    uVar1 = s_8T__ECC108_i2c_enable__Could_NOT_001dd2e0._0_4_;
    *(undefined4 *)s_8T__ECC108_i2c_enable__Could_NOT_001dd2e0._0_4_ = uVar4;
    if (*(int *)uVar1 == 0) {
      FUN_00002898(s_8T__ECC108_i2c_enable__Could_NOT_001dd2e0 + 4);
      uVar1 = FUN_000d04f8(&uStack_20);
    }
    else {
      piVar3 = (int *)FUN_0022bc60(&uStack_20);
      uVar4 = (**(code **)(*piVar3 + 0x80))(piVar3,8,0xe);
      uVar1 = s_<T__ECC108_i2c_enable:_Could_NOT_001dd314._0_4_;
      *(undefined4 *)s_<T__ECC108_i2c_enable:_Could_NOT_001dd314._0_4_ = uVar4;
      if (*(int *)uVar1 == 0) {
        FUN_00002898(s_<T__ECC108_i2c_enable:_Could_NOT_001dd314 + 4);
        uVar1 = FUN_000d04f8(&uStack_20);
      }
      else {
        FUN_000967ec(*(undefined4 *)s_8T__ECC108_i2c_enable__Could_NOT_001dd2e0._0_4_);
        FUN_00096760(*(undefined4 *)s_8T__ECC108_i2c_enable__Could_NOT_001dd2e0._0_4_);
        FUN_00096734(*(undefined4 *)s_8T__ECC108_i2c_enable__Could_NOT_001dd2e0._0_4_);
        FUN_000967ec(*(undefined4 *)s_<T__ECC108_i2c_enable:_Could_NOT_001dd314._0_4_);
        FUN_00096760(*(undefined4 *)s_<T__ECC108_i2c_enable:_Could_NOT_001dd314._0_4_);
        FUN_00096734(*(undefined4 *)s_<T__ECC108_i2c_enable:_Could_NOT_001dd314._0_4_);
        uVar1 = FUN_000d04f8(&uStack_20);
      }
    }
  }
  return CONCAT44(uStack_20,uVar1);
}

