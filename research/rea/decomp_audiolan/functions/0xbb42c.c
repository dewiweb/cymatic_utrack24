// rea decompile_all
// name: FUN_000bb42c
// address: 0xbb42c
// body: available
// range: 0xbb42c-0xbb51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000bb42c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 local_74;
  int *local_70;
  code *local_6c;
  uint uStack_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined1 auStack_48 [28];
  byte local_2c [4];
  undefined4 local_28;
  
  pcVar6 = (code *)*DAT_000bb520;
  uVar7 = DAT_000bb520[1];
  local_28 = param_4;
  piVar3 = (int *)FUN_0017b3e4();
  uVar2 = DAT_000bb524;
  if (piVar3 != param_1 + 1) {
    local_74 = DAT_000bb524;
    local_64 = (undefined1)param_2;
    local_5c = local_28;
    uStack_58 = param_5;
    uStack_54 = param_6;
    uStack_50 = param_7;
    local_70 = param_1;
    local_6c = pcVar6;
    uStack_68 = uVar7;
    local_60 = param_3;
    FUN_001bcd8c(&local_4c);
    (**(code **)(*param_1 + 0x2c))(param_1,&local_74,0xffffffff);
    iVar4 = thunk_EXT_FUN_004001ec(auStack_48,0xffffffff);
    if (iVar4 == 0) {
      pbVar5 = local_2c;
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    bVar1 = *pbVar5;
    local_4c = DAT_000bb528;
    local_74 = uVar2;
    FUN_0017a254(auStack_48);
    return (uint)bVar1;
  }
  param_1 = (int *)((int)param_1 + ((int)uVar7 >> 1));
  if ((uVar7 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *param_1);
  }
  uVar7 = (*pcVar6)(param_1,param_2,param_3,local_28,param_5,param_6,param_7);
  return uVar7;
}

