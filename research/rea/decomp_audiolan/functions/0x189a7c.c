// rea decompile_all
// name: FUN_00189a7c
// address: 0x189a7c
// body: available
// range: 0x189a7c-0x189bed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00189a7c(undefined4 param_1,byte *param_2,undefined4 param_3,int param_4,undefined4 param_5
                 )

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  char cVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte local_98 [15];
  byte local_89;
  byte local_88 [15];
  byte local_79;
  byte local_78;
  byte local_77 [14];
  byte local_69;
  byte local_68;
  byte local_67;
  byte local_66 [13];
  byte local_59;
  byte bStack_39;
  byte local_38 [6];
  undefined1 local_32 [8];
  undefined1 local_2a [6];
  undefined4 uStack_24;
  byte *local_20;
  undefined4 local_1c;
  int local_18;
  
  pbVar10 = local_98;
  pbVar14 = local_98;
  uStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_0003aabc();
  FUN_0003a0e8(DAT_00189bf0,local_88);
  pbVar13 = &local_89;
  iVar7 = 8;
  pbVar5 = DAT_00189bf4;
  do {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 2;
    pbVar13[1] = pbVar13[1] ^ *pbVar1;
    pbVar13[2] = pbVar13[2] ^ *pbVar5;
    pbVar13 = pbVar13 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_98[0] = *local_20 ^ local_88[0];
  bVar11 = local_20[1];
  iVar7 = 7;
  pbVar5 = local_20;
  pbVar13 = local_88;
  bVar4 = local_88[1];
  do {
    bVar2 = pbVar5[2];
    bVar3 = pbVar13[2];
    pbVar10[1] = bVar11 ^ bVar4;
    bVar11 = pbVar5[3];
    bVar4 = pbVar13[3];
    pbVar10 = pbVar10 + 2;
    iVar7 = iVar7 + -1;
    *pbVar10 = bVar2 ^ bVar3;
    pbVar5 = pbVar5 + 2;
    pbVar13 = pbVar13 + 2;
  } while (iVar7 != 0);
  local_89 = local_20[0xf] ^ local_79;
  FUN_0003a0e8(local_98,&local_68);
  FUN_0016d964(local_38,local_1c);
  FUN_0016d964(local_32 + 2,local_1c);
  uVar8 = 0;
  do {
    local_32[uVar8] = *(undefined1 *)(local_18 + uVar8);
    uVar9 = uVar8 + 1 & 0xff;
    local_2a[uVar8] = *(undefined1 *)(local_18 + uVar8);
    uVar8 = uVar9;
  } while (uVar9 < 2);
  pbVar10 = &bStack_39;
  pbVar5 = &local_89;
  iVar7 = 0;
  cVar12 = '\b';
  do {
    pbVar13 = pbVar10 + 1;
    pbVar1 = pbVar5 + 1;
    pbVar10 = pbVar10 + 2;
    pbVar5 = pbVar5 + 2;
    local_98[(iVar7 + 8) % 0x10] = *pbVar13 ^ *pbVar1;
    iVar6 = iVar7 + 9;
    iVar7 = iVar7 + 2;
    cVar12 = cVar12 + -1;
    local_98[iVar6 % 0x10] = *pbVar10 ^ *pbVar5;
  } while (cVar12 != '\0');
  local_98[0] = local_98[0] ^ local_68;
  iVar7 = 7;
  pbVar5 = &local_68;
  bVar11 = local_67;
  do {
    bVar4 = pbVar5[2];
    pbVar14[1] = pbVar14[1] ^ bVar11;
    bVar11 = pbVar5[3];
    pbVar14[2] = pbVar14[2] ^ bVar4;
    pbVar14 = pbVar14 + 2;
    iVar7 = iVar7 + -1;
    pbVar5 = pbVar5 + 2;
  } while (iVar7 != 0);
  local_89 = local_89 ^ local_59;
  FUN_0003a0e8(local_98,&local_78);
  pbVar5 = &local_78;
  local_78 = local_78 ^ local_88[0];
  iVar7 = 7;
  pbVar10 = local_88;
  do {
    bVar11 = pbVar10[2];
    pbVar5[1] = pbVar5[1] ^ local_88[1];
    local_88[1] = pbVar10[3];
    pbVar5[2] = pbVar5[2] ^ bVar11;
    pbVar5 = pbVar5 + 2;
    iVar7 = iVar7 + -1;
    pbVar10 = pbVar10 + 2;
  } while (iVar7 != 0);
  local_69 = local_69 ^ local_79;
  FUN_0016d998(param_5);
  return;
}

