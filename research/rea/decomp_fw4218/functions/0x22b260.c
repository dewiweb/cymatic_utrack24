// rea decompile_all
// name: FUN_0022b260
// address: 0x22b260
// body: available
// range: 0x22b260-0x22b32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0022b260(int *param_1,int param_2,code *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  undefined1 auStack_6c [56];
  int local_34;
  int *piStack_30;
  int iStack_2c;
  code *local_28;
  uint uStack_24;
  
  piStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  uStack_24 = param_4;
  iVar1 = FUN_001b27ec(param_1);
  if (iVar1 == 0) {
    local_34 = param_2;
    FUN_002047e4(auStack_6c,&local_34,local_28,uStack_24,param_5);
    (**(code **)(*param_1 + 0x2c))(param_1,auStack_6c,0xffffffff);
    pbVar4 = (byte *)FUN_00204774(auStack_6c);
    uVar3 = (uint)*pbVar4;
    FUN_000f0df0(auStack_6c);
  }
  else {
    piVar5 = (int *)(param_2 + ((int)uStack_24 >> 1));
    pcVar2 = local_28;
    if ((uStack_24 & 1) != 0) {
      pcVar2 = *(code **)(local_28 + *piVar5);
    }
    uVar3 = (*pcVar2)(piVar5,param_5);
  }
  return uVar3;
}

