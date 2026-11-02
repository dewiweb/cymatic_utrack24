// rea decompile_all
// name: FUN_001d70fc
// address: 0x1d70fc
// body: available
// range: 0x1d70fc-0x1d71bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001d70fc(int *param_1,int param_2,code *param_3,uint param_4,undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 local_58;
  int local_54;
  code *local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined1 auStack_40 [28];
  byte local_24 [8];
  
  piVar3 = (int *)FUN_0017b3e4();
  uVar2 = DAT_001d71c0;
  if (piVar3 != param_1 + 1) {
    local_58 = DAT_001d71c0;
    uStack_48 = param_5;
    local_54 = param_2;
    local_50 = param_3;
    uStack_4c = param_4;
    FUN_001bcd8c(&local_44);
    (**(code **)(*param_1 + 0x2c))(param_1,&local_58,0xffffffff);
    iVar5 = thunk_EXT_FUN_004001ec(auStack_40,0xffffffff);
    if (iVar5 == 0) {
      pbVar6 = local_24;
    }
    else {
      pbVar6 = (byte *)0x0;
    }
    bVar1 = *pbVar6;
    local_44 = DAT_001d71c4;
    local_58 = uVar2;
    FUN_0017a254(auStack_40);
    return (uint)bVar1;
  }
  piVar3 = (int *)(param_2 + ((int)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *piVar3);
  }
  uVar4 = (*param_3)(piVar3,param_5);
  return uVar4;
}

