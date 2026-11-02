// rea decompile_all
// name: FUN_0022b178
// address: 0x22b178
// body: available
// range: 0x22b178-0x22b25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0022b178(int *param_1,int param_2,code *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  undefined1 auStack_74 [60];
  int local_38;
  int *piStack_34;
  int iStack_30;
  code *local_2c;
  uint local_28;
  
  piStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar1 = FUN_001b27ec(param_1);
  if (iVar1 == 0) {
    local_38 = param_2;
    FUN_002049ac(auStack_74,&local_38,local_2c,local_28,param_5,param_6);
    (**(code **)(*param_1 + 0x2c))(param_1,auStack_74,0xffffffff);
    pbVar4 = (byte *)FUN_00204938(auStack_74);
    uVar3 = (uint)*pbVar4;
    FUN_000f0eac(auStack_74);
  }
  else {
    piVar5 = (int *)(param_2 + ((int)local_28 >> 1));
    pcVar2 = local_2c;
    if ((local_28 & 1) != 0) {
      pcVar2 = *(code **)(local_2c + *piVar5);
    }
    uVar3 = (*pcVar2)(piVar5,param_5,param_6);
  }
  return uVar3;
}

