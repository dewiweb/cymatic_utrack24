// rea decompile_all
// name: FUN_00189bf8
// address: 0x189bf8
// body: available
// range: 0x189bf8-0x189e11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00189bf8(undefined4 param_1,byte *param_2,undefined4 param_3,byte *param_4,byte *param_5,
                 undefined4 param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  char cVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte local_88 [15];
  byte local_79;
  byte local_78 [15];
  byte local_69;
  byte local_68 [8];
  undefined1 auStack_60 [7];
  byte local_59;
  byte local_58 [15];
  byte local_49;
  undefined4 uStack_24;
  byte *local_20;
  undefined4 local_1c;
  byte *local_18;
  
  pbVar8 = local_88;
  pbVar12 = local_88;
  uStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_0003aabc();
  FUN_0003a0e8(DAT_00189e14,local_78);
  pbVar11 = &local_79;
  iVar6 = 8;
  pbVar4 = DAT_00189e18;
  do {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 2;
    pbVar11[1] = pbVar11[1] ^ *pbVar1;
    pbVar11[2] = pbVar11[2] ^ *pbVar4;
    pbVar11 = pbVar11 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_88[0] = *local_20 ^ local_78[0];
  bVar9 = local_20[1];
  iVar6 = 7;
  pbVar4 = local_20;
  pbVar11 = local_78;
  bVar3 = local_78[1];
  do {
    bVar5 = pbVar4[2];
    bVar2 = pbVar11[2];
    pbVar8[1] = bVar9 ^ bVar3;
    bVar9 = pbVar4[3];
    bVar3 = pbVar11[3];
    pbVar8 = pbVar8 + 2;
    iVar6 = iVar6 + -1;
    *pbVar8 = bVar5 ^ bVar2;
    pbVar4 = pbVar4 + 2;
    pbVar11 = pbVar11 + 2;
  } while (iVar6 != 0);
  local_79 = local_20[0xf] ^ local_69;
  FUN_0003a0e8(local_88,local_58);
  local_88[0] = local_58[0] ^ local_78[0];
  iVar6 = 7;
  pbVar4 = local_58;
  pbVar8 = local_78;
  bVar9 = local_78[1];
  do {
    bVar3 = pbVar4[2];
    bVar5 = pbVar8[2];
    pbVar12[1] = local_58[1] ^ bVar9;
    local_58[1] = pbVar4[3];
    bVar9 = pbVar8[3];
    pbVar12 = pbVar12 + 2;
    iVar6 = iVar6 + -1;
    *pbVar12 = bVar3 ^ bVar5;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (iVar6 != 0);
  local_79 = local_49 ^ local_69 ^ 1;
  FUN_0003a0e8(local_88,local_68);
  local_68[0] = local_68[0] ^ local_78[0];
  iVar6 = 7;
  pbVar4 = local_68;
  pbVar8 = local_78;
  bVar9 = local_78[1];
  do {
    bVar3 = pbVar8[2];
    pbVar4[1] = pbVar4[1] ^ bVar9;
    bVar9 = pbVar8[3];
    pbVar4[2] = pbVar4[2] ^ bVar3;
    pbVar4 = pbVar4 + 2;
    iVar6 = iVar6 + -1;
    pbVar8 = pbVar8 + 2;
  } while (iVar6 != 0);
  local_59 = local_59 ^ local_69;
  FUN_0016d998(local_1c,auStack_60);
  FUN_0016d964(param_6,local_68);
  pbVar4 = &local_59;
  pbVar8 = &local_79;
  iVar6 = 0;
  cVar10 = '\b';
  do {
    pbVar11 = pbVar4 + 1;
    pbVar12 = pbVar8 + 1;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
    local_88[(iVar6 + 0xc) % 0x10] = *pbVar11 ^ *pbVar12;
    iVar7 = iVar6 + 0xd;
    iVar6 = iVar6 + 2;
    cVar10 = cVar10 + -1;
    local_88[iVar7 % 0x10] = *pbVar4 ^ *pbVar8;
  } while (cVar10 != '\0');
  local_79 = local_79 ^ 2;
  FUN_0003a0e8(local_88,local_68);
  iVar6 = 0;
  pbVar4 = local_68;
  pbVar8 = local_78;
  pbVar11 = local_58;
  cVar10 = '\x10';
  pbVar12 = local_18;
  do {
    bVar9 = *pbVar8;
    bVar3 = *pbVar11;
    pbVar8 = pbVar8 + 1;
    bVar5 = *pbVar4 ^ bVar9;
    *pbVar4 = bVar5;
    *pbVar12 = bVar5;
    local_88[(iVar6 + 8) % 0x10] = bVar3 ^ bVar9;
    pbVar11 = pbVar11 + 1;
    pbVar4 = pbVar4 + 1;
    pbVar12 = pbVar12 + 1;
    iVar6 = iVar6 + 1;
    cVar10 = cVar10 + -1;
  } while (cVar10 != '\0');
  local_79 = local_79 ^ 4;
  FUN_0003a0e8(local_88,local_68);
  pbVar4 = local_68;
  local_68[0] = local_68[0] ^ local_78[0];
  *param_5 = local_68[0];
  iVar6 = 7;
  pbVar8 = param_5;
  pbVar11 = local_78;
  do {
    bVar9 = pbVar4[1];
    bVar3 = pbVar11[2];
    pbVar4[1] = bVar9 ^ local_78[1];
    pbVar8[1] = bVar9 ^ local_78[1];
    local_78[1] = pbVar11[3];
    pbVar8 = pbVar8 + 2;
    pbVar4[2] = pbVar4[2] ^ bVar3;
    pbVar4 = pbVar4 + 2;
    iVar6 = iVar6 + -1;
    *pbVar8 = *pbVar4;
    pbVar11 = pbVar11 + 2;
  } while (iVar6 != 0);
  param_5[0xf] = local_59 ^ local_69;
  return;
}

