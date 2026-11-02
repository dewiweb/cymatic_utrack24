// rea decompile_all
// name: FUN_001a46b8
// address: 0x1a46b8
// body: available
// range: 0x1a46b8-0x1a476f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a46b8(uint param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(*DAT_001a4770 + (param_1 >> 0x14) * 4);
  if ((uVar6 & 3) == 1) {
    uVar7 = param_1 & 0xffffbfff;
    uVar6 = uVar6 & 0xfffffc00;
    do {
      uVar4 = (uVar7 & 0xf0000) >> 0xc;
      uVar2 = *(uint *)(uVar6 + uVar4 * 4);
      uVar1 = (uVar7 & 0xc000) >> 0xe;
      if (uVar1 == 0) {
        uVar2 = uVar2 | 0x30;
      }
      else if (uVar1 == 1) {
        uVar2 = uVar2 | 0xc0;
      }
      else if (uVar1 == 2) {
        uVar2 = uVar2 | 0x300;
      }
      else {
        uVar2 = uVar2 | 0xc00;
      }
      iVar5 = 8;
      puVar3 = (uint *)(uVar6 + uVar4 * 4 + -4);
      uVar4 = uVar2 & 0xfffffff3 | (param_3 & 1) << 3 | (param_4 & 1) << 2;
      do {
        puVar3[1] = uVar4;
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 2;
        *puVar3 = uVar4;
      } while (iVar5 != 0);
      uVar7 = uVar7 + 0x4000;
    } while (uVar7 < param_1 + param_2);
    return;
  }
  return;
}

