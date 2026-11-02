// rea decompile_all
// name: FUN_001f2974
// address: 0x1f2974
// body: available
// range: 0x1f2974-0x1f2a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001f2974(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_3a4 [4];
  undefined1 auStack_3a0 [8];
  undefined4 local_398;
  undefined2 local_394;
  undefined2 local_392;
  byte abStack_24d [257];
  byte local_14c [4];
  byte local_148;
  undefined1 auStack_147 [267];
  int local_3c;
  int local_30;
  int local_2c;
  int iStack_24;
  int local_20;
  undefined4 local_1c;
  int iStack_18;
  
  if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0)) {
    local_30 = param_1 + 0x1a40;
    local_2c = param_1 + 0x1b40;
    local_3c = (uint)(byte)(&DAT_00001a54)[param_1] + (uint)(byte)(&DAT_00001b54)[param_1] + 2;
    iStack_24 = param_1;
    local_20 = param_2;
    local_1c = param_3;
    iStack_18 = param_4;
    FUN_001e9a9c(auStack_3a4,0,0,0xd,0,2,0,0,0);
    pbVar3 = (byte *)(param_1 + DAT_001f2a90);
    pbVar1 = abStack_24d + 1;
    for (pbVar2 = pbVar1; (pbVar2 < local_14c && (uVar6 = (uint)*pbVar2, uVar6 < 0x40));
        pbVar2 = pbVar2 + uVar6 + 1) {
      if (uVar6 == 0) {
        uVar6 = (uint)(pbVar2 + (1 - (int)pbVar1)) & 0xffff;
        goto LAB_001f29e0;
      }
    }
    uVar6 = 0x101;
LAB_001f29e0:
    uVar5 = (uint)*pbVar3;
    if ((uVar5 < 0x40) && (abStack_24d + uVar5 + uVar6 + 2 <= local_14c)) {
      pbVar2 = abStack_24d + uVar6;
      pbVar4 = pbVar3 + -1;
      if ((uVar5 & 1) != 1) {
        abStack_24d[uVar6] = *pbVar3;
        pbVar2 = pbVar1 + uVar6;
        pbVar4 = pbVar3;
      }
      for (uVar6 = *pbVar3 + 1 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        pbVar3 = pbVar4 + 1;
        pbVar4 = pbVar4 + 2;
        *pbVar2 = *pbVar3;
        pbVar2[1] = *pbVar4;
        pbVar2 = pbVar2 + 2;
      }
      *pbVar2 = 0;
    }
    FUN_0001d794(pbVar1,param_4 + DAT_001f2a94);
    local_398 = 0;
    FUN_001e57d8(&local_148,param_1 + DAT_001f2a98,*(byte *)(local_30 + 0x14) + 1);
    FUN_001e57d8(auStack_147 + local_148,param_1 + DAT_001f2a9c,*(byte *)(local_2c + 0x14) + 1);
    local_394 = (undefined2)local_3c;
    local_392 = local_394;
    param_3 = FUN_0003ef54(local_20,local_1c,local_20 + 10,auStack_3a0,0,param_5);
  }
  return param_3;
}

