// rea decompile_all
// name: FUN_0019b3ac
// address: 0x19b3ac
// body: available
// range: 0x19b3ac-0x19b4a7 inclusive
// range: 0x19b4aa-0x19b7fb inclusive
// range: 0x19b834-0x19bc67 inclusive
// range: 0x19bd24-0x19bdad inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019b3ac(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_stack_0000000c;
  int *in_stack_00000010;
  int iStack00000014;
  int iStack00000020;
  int iStack00000024;
  int iStack00000028;
  int iStack0000002c;
  int iStack00000030;
  int iStack00000034;
  int iStack00000038;
  int iStack0000003c;
  int iStack00000040;
  int iStack00000044;
  int iStack00000048;
  int iStack0000004c;
  int iStack00000050;
  int in_stack_0000005c;
  
  iVar1 = *in_stack_00000010;
  iVar2 = in_stack_00000010[1];
  uVar3 = ((unaff_r4 ^ in_stack_0000000c) & param_2 ^ in_stack_0000000c) + iVar1 + param_4 +
          DAT_0019b7fc;
  uVar4 = (uVar3 >> 0x19 | uVar3 * 0x80) + param_2;
  iStack00000020 = in_stack_00000010[2];
  uVar3 = ((param_2 ^ unaff_r4) & uVar4 ^ unaff_r4) + iVar2 + in_stack_0000000c + DAT_0019b800;
  uVar7 = (uVar3 >> 0x14 | uVar3 * 0x1000) + uVar4;
  iStack00000024 = in_stack_00000010[3];
  uVar3 = ((uVar4 ^ param_2) & uVar7 ^ param_2) + iStack00000020 + unaff_r4 + DAT_0019b804;
  uVar6 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar7;
  iStack00000028 = in_stack_00000010[4];
  uVar3 = ((uVar7 ^ uVar4) & uVar6 ^ uVar4) + iStack00000024 + param_2 + DAT_0019b808;
  uVar3 = (uVar3 >> 10 | uVar3 * 0x400000) + uVar6;
  iStack0000002c = in_stack_00000010[5];
  uVar4 = ((uVar6 ^ uVar7) & uVar3 ^ uVar7) + iStack00000028 + uVar4 + DAT_0019b80c;
  uVar5 = (uVar4 >> 0x19 | uVar4 * 0x80) + uVar3;
  iStack00000030 = in_stack_00000010[6];
  uVar4 = ((uVar3 ^ uVar6) & uVar5 ^ uVar6) + iStack0000002c + uVar7 + DAT_0019b810;
  uVar7 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar5;
  iStack00000034 = in_stack_00000010[7];
  uVar4 = ((uVar5 ^ uVar3) & uVar7 ^ uVar3) + iStack00000030 + uVar6 + DAT_0019b814;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar7;
  iStack00000038 = in_stack_00000010[8];
  uVar3 = ((uVar7 ^ uVar5) & uVar4 ^ uVar5) + iStack00000034 + uVar3 + DAT_0019b818;
  uVar3 = (uVar3 >> 10 | uVar3 * 0x400000) + uVar4;
  iStack0000003c = in_stack_00000010[9];
  uVar5 = ((uVar4 ^ uVar7) & uVar3 ^ uVar7) + iStack00000038 + uVar5 + DAT_0019b81c;
  uVar6 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar3;
  iStack00000040 = in_stack_00000010[10];
  uVar5 = ((uVar3 ^ uVar4) & uVar6 ^ uVar4) + iStack0000003c + uVar7 + DAT_0019b820;
  uVar7 = (uVar5 >> 0x14 | uVar5 * 0x1000) + uVar6;
  iStack00000044 = in_stack_00000010[0xb];
  uVar4 = ((uVar6 ^ uVar3) & uVar7 ^ uVar3) + iStack00000040 + uVar4 + DAT_0019b824;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar7;
  iStack00000048 = in_stack_00000010[0xc];
  uVar3 = ((uVar7 ^ uVar6) & uVar4 ^ uVar6) + iStack00000044 + uVar3 + DAT_0019b828;
  uVar3 = (uVar3 >> 10 | uVar3 * 0x400000) + uVar4;
  iStack0000004c = in_stack_00000010[0xd];
  uVar5 = ((uVar4 ^ uVar7) & uVar3 ^ uVar7) + iStack00000048 + uVar6 + DAT_0019b82c;
  uVar5 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar3;
  iStack00000050 = in_stack_00000010[0xe];
  uVar6 = ((uVar3 ^ uVar4) & uVar5 ^ uVar4) + iStack0000004c + uVar7 + DAT_0019b830;
  uVar6 = (uVar6 >> 0x14 | uVar6 * 0x1000) + uVar5;
  iStack00000014 = in_stack_00000010[0xf];
  uVar4 = ((uVar5 ^ uVar3) & uVar6 ^ uVar3) + iStack00000050 + uVar4 + DAT_0019bc6c;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar6;
  uVar3 = ((uVar6 ^ uVar5) & uVar4 ^ uVar5) + iStack00000014 + uVar3 + DAT_0019bc70;
  uVar3 = (uVar3 >> 10 | uVar3 * 0x400000) + uVar4;
  uVar5 = ((uVar3 ^ uVar4) & uVar6 ^ uVar4) + iVar2 + uVar5 + DAT_0019bc74;
  uVar5 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar3;
  uVar6 = ((uVar5 ^ uVar3) & uVar4 ^ uVar3) + iStack00000030 + uVar6 + DAT_0019bc78;
  uVar6 = (uVar6 >> 0x17 | uVar6 * 0x200) + uVar5;
  uVar4 = ((uVar6 ^ uVar5) & uVar3 ^ uVar5) + iStack00000044 + uVar4 + DAT_0019bc7c;
  uVar4 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar6;
  uVar3 = ((uVar4 ^ uVar6) & uVar5 ^ uVar6) + iVar1 + uVar3 + DAT_0019bc80;
  uVar3 = (uVar3 >> 0xc | uVar3 * 0x100000) + uVar4;
  uVar5 = ((uVar3 ^ uVar4) & uVar6 ^ uVar4) + iStack0000002c + uVar5 + DAT_0019bc84;
  uVar5 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar3;
  uVar6 = ((uVar5 ^ uVar3) & uVar4 ^ uVar3) + iStack00000040 + uVar6 + DAT_0019bc88;
  uVar6 = (uVar6 >> 0x17 | uVar6 * 0x200) + uVar5;
  uVar4 = ((uVar6 ^ uVar5) & uVar3 ^ uVar5) + iStack00000014 + uVar4 + DAT_0019bc8c;
  uVar7 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar6;
  uVar3 = ((uVar7 ^ uVar6) & uVar5 ^ uVar6) + iStack00000028 + uVar3 + DAT_0019bc90;
  uVar8 = (uVar3 >> 0xc | uVar3 * 0x100000) + uVar7;
  uVar3 = ((uVar8 ^ uVar7) & uVar6 ^ uVar7) + iStack0000003c + uVar5 + DAT_0019bc94;
  uVar3 = (uVar3 >> 0x1b | uVar3 * 0x20) + uVar8;
  uVar4 = ((uVar3 ^ uVar8) & uVar7 ^ uVar8) + iStack00000050 + uVar6 + DAT_0019bc98;
  uVar4 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar3;
  uVar5 = ((uVar4 ^ uVar3) & uVar8 ^ uVar3) + iStack00000024 + uVar7 + DAT_0019bc9c;
  uVar5 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar4;
  uVar6 = ((uVar5 ^ uVar4) & uVar3 ^ uVar4) + iStack00000038 + uVar8 + DAT_0019bca0;
  uVar8 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar5;
  uVar3 = ((uVar8 ^ uVar5) & uVar4 ^ uVar5) + iStack0000004c + uVar3 + DAT_0019bca4;
  uVar6 = (uVar3 >> 0x1b | uVar3 * 0x20) + uVar8;
  uVar3 = ((uVar6 ^ uVar8) & uVar5 ^ uVar8) + iStack00000020 + uVar4 + DAT_0019bca8;
  uVar3 = (uVar3 >> 0x17 | uVar3 * 0x200) + uVar6;
  uVar4 = ((uVar3 ^ uVar6) & uVar8 ^ uVar6) + iStack00000034 + uVar5 + DAT_0019bcac;
  uVar7 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar3;
  uVar4 = ((uVar7 ^ uVar3) & uVar6 ^ uVar3) + iStack00000048 + uVar8 + DAT_0019bcb0;
  uVar8 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar7;
  uVar4 = (uVar8 ^ uVar7 ^ uVar3) + iStack0000002c + uVar6 + DAT_0019bcb4;
  uVar5 = (uVar4 >> 0x1c | uVar4 * 0x10) + uVar8;
  uVar3 = (uVar5 ^ uVar8 ^ uVar7) + iStack00000038 + uVar3 + DAT_0019bcb8;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar5;
  uVar4 = (uVar3 ^ uVar5 ^ uVar8) + iStack00000044 + uVar7 + DAT_0019bcbc;
  uVar7 = (uVar4 >> 0x10 | uVar4 * 0x10000) + uVar3;
  uVar4 = (uVar7 ^ uVar3 ^ uVar5) + iStack00000050 + uVar8 + DAT_0019bcc0;
  uVar8 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar7;
  uVar4 = (uVar8 ^ uVar7 ^ uVar3) + iVar2 + uVar5 + DAT_0019bcc4;
  uVar6 = (uVar4 >> 0x1c | uVar4 * 0x10) + uVar8;
  uVar3 = (uVar6 ^ uVar8 ^ uVar7) + iStack00000028 + uVar3 + DAT_0019bcc8;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar6;
  uVar4 = (uVar3 ^ uVar6 ^ uVar8) + iStack00000034 + uVar7 + DAT_0019bccc;
  uVar4 = (uVar4 >> 0x10 | uVar4 * 0x10000) + uVar3;
  uVar5 = (uVar4 ^ uVar3 ^ uVar6) + iStack00000040 + uVar8 + DAT_0019bcd0;
  uVar7 = (uVar5 >> 9 | uVar5 * 0x800000) + uVar4;
  uVar5 = (uVar7 ^ uVar4 ^ uVar3) + iStack0000004c + uVar6 + DAT_0019bcd4;
  uVar6 = (uVar5 >> 0x1c | uVar5 * 0x10) + uVar7;
  uVar3 = (uVar6 ^ uVar7 ^ uVar4) + iVar1 + uVar3 + DAT_0019bcd8;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar6;
  uVar4 = (uVar3 ^ uVar6 ^ uVar7) + iStack00000024 + uVar4 + DAT_0019bcdc;
  uVar4 = (uVar4 >> 0x10 | uVar4 * 0x10000) + uVar3;
  uVar5 = (uVar4 ^ uVar3 ^ uVar6) + iStack00000030 + uVar7 + DAT_0019bce0;
  uVar5 = (uVar5 >> 9 | uVar5 * 0x800000) + uVar4;
  uVar6 = (uVar5 ^ uVar4 ^ uVar3) + iStack0000003c + uVar6 + DAT_0019bce4;
  uVar6 = (uVar6 >> 0x1c | uVar6 * 0x10) + uVar5;
  uVar3 = (uVar6 ^ uVar5 ^ uVar4) + iStack00000048 + uVar3 + DAT_0019bce8;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar6;
  uVar4 = (uVar3 ^ uVar6 ^ uVar5) + iStack00000014 + uVar4 + DAT_0019bcec;
  uVar4 = (uVar4 >> 0x10 | uVar4 * 0x10000) + uVar3;
  uVar5 = (uVar4 ^ uVar3 ^ uVar6) + iStack00000020 + uVar5 + DAT_0019bcf0;
  uVar5 = (uVar5 >> 9 | uVar5 * 0x800000) + uVar4;
  uVar6 = ((~uVar3 | uVar5) ^ uVar4) + iVar1 + uVar6 + DAT_0019bcf4;
  uVar6 = (uVar6 >> 0x1a | uVar6 * 0x40) + uVar5;
  uVar3 = ((~uVar4 | uVar6) ^ uVar5) + iStack00000034 + uVar3 + DAT_0019bcf8;
  uVar3 = (uVar3 >> 0x16 | uVar3 * 0x400) + uVar6;
  uVar4 = ((~uVar5 | uVar3) ^ uVar6) + iStack00000050 + uVar4 + DAT_0019bcfc;
  uVar4 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar3;
  uVar5 = ((~uVar6 | uVar4) ^ uVar3) + iStack0000002c + uVar5 + DAT_0019bd00;
  uVar5 = (uVar5 >> 0xb | uVar5 * 0x200000) + uVar4;
  uVar6 = ((~uVar3 | uVar5) ^ uVar4) + iStack00000048 + uVar6 + DAT_0019bd04;
  uVar6 = (uVar6 >> 0x1a | uVar6 * 0x40) + uVar5;
  uVar3 = ((~uVar4 | uVar6) ^ uVar5) + iStack00000024 + uVar3 + DAT_0019bd08;
  uVar3 = (uVar3 >> 0x16 | uVar3 * 0x400) + uVar6;
  uVar4 = ((~uVar5 | uVar3) ^ uVar6) + iStack00000040 + uVar4 + DAT_0019bd0c;
  uVar4 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar3;
  uVar5 = ((~uVar6 | uVar4) ^ uVar3) + iVar2 + uVar5 + DAT_0019bd10;
  uVar5 = (uVar5 >> 0xb | uVar5 * 0x200000) + uVar4;
  uVar6 = ((~uVar3 | uVar5) ^ uVar4) + iStack00000038 + uVar6 + DAT_0019bd14;
  uVar6 = (uVar6 >> 0x1a | uVar6 * 0x40) + uVar5;
  uVar3 = ((~uVar4 | uVar6) ^ uVar5) + iStack00000014 + uVar3 + DAT_0019bd18;
  uVar3 = (uVar3 >> 0x16 | uVar3 * 0x400) + uVar6;
  uVar4 = ((~uVar5 | uVar3) ^ uVar6) + iStack00000030 + uVar4 + DAT_0019bd1c;
  uVar4 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar3;
  uVar5 = ((~uVar6 | uVar4) ^ uVar3) + iStack0000004c + uVar5 + DAT_0019bd20;
  uVar5 = (uVar5 >> 0xb | uVar5 * 0x200000) + uVar4;
  uVar6 = ((~uVar3 | uVar5) ^ uVar4) + iStack00000028 + uVar6 + DAT_0019bdb0;
  uVar6 = (uVar6 >> 0x1a | uVar6 * 0x40) + uVar5;
  uVar3 = ((~uVar4 | uVar6) ^ uVar5) + iStack00000044 + uVar3 + DAT_0019bdb4;
  uVar7 = (uVar3 >> 0x16 | uVar3 * 0x400) + uVar6;
  uVar3 = ((~uVar5 | uVar7) ^ uVar6) + iStack00000020 + uVar4 + DAT_0019bdb8;
  uVar4 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar7;
  uVar3 = ((~uVar6 | uVar4) ^ uVar7) + iStack0000003c + uVar5 + DAT_0019bdbc;
  *param_1 = *param_1 + uVar6;
  param_1[1] = param_1[1] + (uVar3 >> 0xb | uVar3 * 0x200000) + uVar4;
  param_1[2] = param_1[2] + uVar4;
  param_1[3] = param_1[3] + uVar7;
  if (in_stack_0000005c != 0) {
    FUN_0019b3ac();
  }
  return;
}

