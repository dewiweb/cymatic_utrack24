// rea decompile_all
// name: FUN_0022aff0
// address: 0x22aff0
// body: available
// range: 0x22aff0-0x22b09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0022aff0(int *param_1,int param_2,code *param_3,uint param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_60 [52];
  int local_2c;
  int *piStack_28;
  int iStack_24;
  code *local_20;
  uint uStack_1c;
  
  piStack_28 = param_1;
  iStack_24 = param_2;
  local_20 = param_3;
  uStack_1c = param_4;
  iVar1 = FUN_001b27ec(param_1);
  if (iVar1 == 0) {
    local_2c = param_2;
    FUN_00205568(auStack_60,&local_2c,local_20,uStack_1c);
    (**(code **)(*param_1 + 0x2c))(param_1,auStack_60,0xffffffff);
    FUN_00205500(auStack_60);
    uVar3 = FUN_0012efd8(auStack_60);
  }
  else {
    piVar4 = (int *)(param_2 + ((int)uStack_1c >> 1));
    pcVar2 = local_20;
    if ((uStack_1c & 1) != 0) {
      pcVar2 = *(code **)(local_20 + *piVar4);
    }
    uVar3 = (*pcVar2)(piVar4);
  }
  return uVar3;
}

