// rea decompile_all
// name: FUN_0003a0e8
// address: 0x3a0e8
// body: available
// range: 0x3a0e8-0x3a4e7 inclusive
// range: 0x3a4f0-0x3aab1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003a0e8(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar2 = DAT_0003aab8;
  puVar1 = DAT_0003a4e8;
  uVar6 = *DAT_0003a4e8 ^ *param_1;
  uVar3 = DAT_0003a4e8[1] ^ param_1[1];
  uVar4 = DAT_0003a4e8[2] ^ param_1[2];
  uVar5 = DAT_0003a4e8[3] ^ param_1[3];
  uVar8 = *(uint *)(DAT_0003a4ec + (uVar6 & 0xff) * 4) ^
          *(uint *)(((uVar3 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar4 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar5 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[4];
  uVar7 = *(uint *)(DAT_0003a4ec + (uVar3 & 0xff) * 4) ^
          *(uint *)(((uVar4 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar5 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar6 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[5];
  uVar9 = *(uint *)(DAT_0003a4ec + (uVar4 & 0xff) * 4) ^
          *(uint *)(((uVar5 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)((uVar3 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^
          *(uint *)(((uVar6 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^ DAT_0003a4e8[6];
  uVar6 = *(uint *)(DAT_0003a4ec + (uVar5 & 0xff) * 4) ^
          *(uint *)(((uVar6 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar3 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar4 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[7];
  uVar3 = *(uint *)(DAT_0003a4ec + (uVar8 & 0xff) * 4) ^
          *(uint *)(((uVar7 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar9 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar6 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[8];
  uVar4 = *(uint *)(DAT_0003a4ec + (uVar7 & 0xff) * 4) ^
          *(uint *)(((uVar9 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)((uVar8 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^
          *(uint *)(((uVar6 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^ DAT_0003a4e8[9];
  uVar5 = *(uint *)(((uVar6 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(DAT_0003a4ec + (uVar9 & 0xff) * 4) ^
          *(uint *)(((uVar8 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar7 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[10];
  uVar6 = *(uint *)(DAT_0003a4ec + (uVar6 & 0xff) * 4) ^
          *(uint *)(((uVar8 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar7 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar9 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0xb];
  uVar7 = *(uint *)(DAT_0003a4ec + (uVar3 & 0xff) * 4) ^
          *(uint *)(((uVar4 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar5 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar6 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0xc];
  uVar8 = *(uint *)(DAT_0003a4ec + (uVar4 & 0xff) * 4) ^
          *(uint *)(((uVar5 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar6 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar3 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0xd];
  uVar9 = *(uint *)(DAT_0003a4ec + (uVar5 & 0xff) * 4) ^
          *(uint *)(((uVar6 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar3 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar4 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0xe];
  uVar4 = *(uint *)(DAT_0003a4ec + (uVar6 & 0xff) * 4) ^
          *(uint *)(((uVar3 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar4 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar5 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0xf];
  uVar3 = *(uint *)(DAT_0003a4ec + (uVar7 & 0xff) * 4) ^
          *(uint *)(((uVar8 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar9 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar4 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x10];
  uVar5 = *(uint *)(DAT_0003a4ec + (uVar8 & 0xff) * 4) ^
          *(uint *)(((uVar9 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar4 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar7 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x11];
  uVar10 = *(uint *)(DAT_0003a4ec + (uVar9 & 0xff) * 4) ^
           *(uint *)(((uVar4 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
           *(uint *)(((uVar7 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
           *(uint *)((uVar8 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x12];
  uVar4 = *(uint *)(DAT_0003a4ec + (uVar4 & 0xff) * 4) ^
          *(uint *)(((uVar7 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar8 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar9 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x13];
  uVar6 = DAT_0003a4e8[0x14] ^
          *(uint *)(DAT_0003a4ec + (uVar3 & 0xff) * 4) ^
          *(uint *)(((uVar5 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar10 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar4 >> 0x18) * 4 + DAT_0003a4ec + 0xc00);
  uVar7 = DAT_0003a4e8[0x15] ^
          *(uint *)(DAT_0003a4ec + (uVar5 & 0xff) * 4) ^
          *(uint *)(((uVar10 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar4 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar3 >> 0x18) * 4 + DAT_0003a4ec + 0xc00);
  uVar8 = *(uint *)(DAT_0003a4ec + (uVar10 & 0xff) * 4) ^
          *(uint *)(((uVar4 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar3 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar5 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x16];
  uVar3 = *(uint *)(DAT_0003a4ec + (uVar4 & 0xff) * 4) ^
          *(uint *)(((uVar3 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar5 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar10 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x17];
  uVar9 = *(uint *)(DAT_0003a4ec + (uVar6 & 0xff) * 4) ^
          *(uint *)(((uVar7 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar8 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar3 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x18];
  uVar4 = *(uint *)(DAT_0003a4ec + (uVar7 & 0xff) * 4) ^
          *(uint *)(((uVar8 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)((uVar6 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^
          *(uint *)(((uVar3 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^ DAT_0003a4e8[0x19];
  uVar5 = *(uint *)(DAT_0003a4ec + (uVar8 & 0xff) * 4) ^
          *(uint *)(((uVar3 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)((uVar7 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^
          *(uint *)(((uVar6 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^ DAT_0003a4e8[0x1a];
  uVar3 = *(uint *)(DAT_0003a4ec + (uVar3 & 0xff) * 4) ^
          *(uint *)(((uVar6 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar7 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar8 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x1b];
  uVar6 = *(uint *)(DAT_0003a4ec + (uVar9 & 0xff) * 4) ^
          *(uint *)(((uVar4 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar5 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar3 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x1c];
  uVar7 = *(uint *)(DAT_0003a4ec + (uVar4 & 0xff) * 4) ^
          *(uint *)(((uVar5 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar3 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar9 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x1d];
  uVar8 = *(uint *)(DAT_0003a4ec + (uVar5 & 0xff) * 4) ^
          *(uint *)(((uVar3 & 0xffff) >> 8) * 4 + DAT_0003a4ec + 0x400) ^
          *(uint *)(((uVar9 & 0xffffff) >> 0x10) * 4 + DAT_0003a4ec + 0x800) ^
          *(uint *)((uVar4 >> 0x18) * 4 + DAT_0003a4ec + 0xc00) ^ DAT_0003a4e8[0x1e];
  uVar4 = *(uint *)(DAT_0003aab4 + (uVar3 & 0xff) * 4) ^
          *(uint *)(((uVar9 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar4 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar5 >> 0x18) * 4 + DAT_0003aab4 + 0xc00) ^ DAT_0003a4e8[0x1f];
  uVar9 = *(uint *)(DAT_0003aab4 + (uVar6 & 0xff) * 4) ^
          *(uint *)(((uVar7 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar8 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar4 >> 0x18) * 4 + DAT_0003aab4 + 0xc00) ^ DAT_0003a4e8[0x20];
  uVar5 = DAT_0003a4e8[0x21] ^
          *(uint *)(DAT_0003aab4 + (uVar7 & 0xff) * 4) ^
          *(uint *)(((uVar8 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar4 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar6 >> 0x18) * 4 + DAT_0003aab4 + 0xc00);
  uVar3 = *(uint *)(DAT_0003aab4 + (uVar8 & 0xff) * 4) ^
          *(uint *)(((uVar4 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar6 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar7 >> 0x18) * 4 + DAT_0003aab4 + 0xc00) ^ DAT_0003a4e8[0x22];
  uVar4 = *(uint *)(DAT_0003aab4 + (uVar4 & 0xff) * 4) ^
          *(uint *)(((uVar6 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar7 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar8 >> 0x18) * 4 + DAT_0003aab4 + 0xc00) ^ DAT_0003a4e8[0x23];
  uVar7 = *(uint *)(DAT_0003aab4 + (uVar9 & 0xff) * 4) ^
          *(uint *)(((uVar5 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar3 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar4 >> 0x18) * 4 + DAT_0003aab4 + 0xc00) ^ DAT_0003a4e8[0x24];
  uVar8 = *(uint *)(DAT_0003aab4 + (uVar5 & 0xff) * 4) ^
          *(uint *)(((uVar3 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar4 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar9 >> 0x18) * 4 + DAT_0003aab4 + 0xc00) ^ DAT_0003a4e8[0x25];
  uVar6 = *(uint *)(DAT_0003aab4 + (uVar3 & 0xff) * 4) ^
          *(uint *)(((uVar4 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar9 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar5 >> 0x18) * 4 + DAT_0003aab4 + 0xc00) ^ DAT_0003a4e8[0x26];
  uVar3 = *(uint *)(DAT_0003aab4 + (uVar4 & 0xff) * 4) ^
          *(uint *)(((uVar9 & 0xffff) >> 8) * 4 + DAT_0003aab4 + 0x400) ^
          *(uint *)(((uVar5 & 0xffffff) >> 0x10) * 4 + DAT_0003aab4 + 0x800) ^
          *(uint *)((uVar3 >> 0x18) * 4 + DAT_0003aab4 + 0xc00) ^ DAT_0003a4e8[0x27];
  *param_2 = *(uint *)(DAT_0003aab8 + (uVar7 & 0xff) * 4) ^
             *(uint *)(((uVar8 & 0xffff) >> 8) * 4 + DAT_0003aab8 + 0x400) ^
             *(uint *)(((uVar6 & 0xffffff) >> 0x10) * 4 + DAT_0003aab8 + 0x800) ^
             *(uint *)((uVar3 >> 0x18) * 4 + DAT_0003aab8 + 0xc00) ^ DAT_0003a4e8[0x28];
  param_2[1] = *(uint *)(iVar2 + (uVar8 & 0xff) * 4) ^
               *(uint *)(((uVar6 & 0xffff) >> 8) * 4 + iVar2 + 0x400) ^
               *(uint *)((uVar7 >> 0x18) * 4 + iVar2 + 0xc00) ^
               *(uint *)(((uVar3 & 0xffffff) >> 0x10) * 4 + iVar2 + 0x800) ^ puVar1[0x29];
  param_2[2] = *(uint *)(((uVar3 & 0xffff) >> 8) * 4 + iVar2 + 0x400) ^
               *(uint *)(iVar2 + (uVar6 & 0xff) * 4) ^
               *(uint *)((uVar8 >> 0x18) * 4 + iVar2 + 0xc00) ^
               *(uint *)(((uVar7 & 0xffffff) >> 0x10) * 4 + iVar2 + 0x800) ^ puVar1[0x2a];
  param_2[3] = *(uint *)(iVar2 + (uVar3 & 0xff) * 4) ^
               *(uint *)(((uVar7 & 0xffff) >> 8) * 4 + iVar2 + 0x400) ^
               *(uint *)(((uVar8 & 0xffffff) >> 0x10) * 4 + iVar2 + 0x800) ^
               *(uint *)((uVar6 >> 0x18) * 4 + iVar2 + 0xc00) ^ puVar1[0x2b];
  return;
}

