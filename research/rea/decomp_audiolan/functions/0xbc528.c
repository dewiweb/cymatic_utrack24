// rea decompile_all
// name: FUN_000bc528
// address: 0xbc528
// body: available
// range: 0xbc528-0xbc603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000bc528(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 local_58;
  int *local_54;
  code *pcStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [28];
  byte local_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  pcVar5 = (code *)*DAT_000bc604;
  uVar6 = DAT_000bc604[1];
  piVar1 = (int *)FUN_0017b3e4();
  uVar2 = DAT_000bc608;
  if (piVar1 == param_1 + 1) {
    param_1 = (int *)((int)param_1 + ((int)uVar6 >> 1));
    if ((uVar6 & 1) != 0) {
      pcVar5 = *(code **)(pcVar5 + *param_1);
    }
    uVar2 = FUN_001da358(auStack_20,param_2,auStack_1c);
    uVar6 = (*pcVar5)(param_1,uVar2);
    FUN_001da314(auStack_20);
  }
  else {
    local_58 = DAT_000bc608;
    local_54 = param_1;
    pcStack_50 = pcVar5;
    uStack_4c = uVar6;
    local_48 = param_2;
    FUN_001bcd8c(&local_44);
    (**(code **)(*param_1 + 0x2c))(param_1,&local_58,0xffffffff);
    iVar3 = thunk_EXT_FUN_004001ec(auStack_40,0xffffffff);
    if (iVar3 == 0) {
      pbVar4 = local_24;
    }
    else {
      pbVar4 = (byte *)0x0;
    }
    uVar6 = (uint)*pbVar4;
    local_44 = DAT_000bc60c;
    local_58 = uVar2;
    FUN_0017a254(auStack_40);
  }
  return uVar6;
}

