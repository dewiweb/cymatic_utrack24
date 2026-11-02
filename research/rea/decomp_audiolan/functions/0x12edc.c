// rea decompile_all
// name: FUN_00012edc
// address: 0x12edc
// body: available
// range: 0x12edc-0x12ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00012edc(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint unaff_r6;
  uint uVar6;
  
  param_2 = (param_3 & 0xfffffffc) + param_2;
  uVar6 = 0;
  while( true ) {
    for (iVar5 = 0; pcVar2 = (char *)(*(int *)(param_1 + 0x118) + iVar5 * 0xc), *pcVar2 != '\0';
        iVar5 = iVar5 + 1) {
      cVar1 = pcVar2[uVar6 + 8];
      uVar4 = (uint)(byte)pcVar2[uVar6 + 4];
      uVar3 = *(uint *)(param_2 + uVar4 * 4);
      if (cVar1 == '\0') {
        unaff_r6 = (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      }
      else if (cVar1 == '\x01') {
        unaff_r6 = uVar3 & 0xff0000 | (uVar3 & 0xff000000) >> 0x10 | (uVar3 & 0xff00) << 0x10;
      }
      else if (cVar1 == '\x02') {
        unaff_r6 = (uVar3 >> 0x18) << 0x10 | (uVar3 & 0xff0000) << 8 |
                   (*(uint *)(param_2 + uVar4 * 4 + 4) & 0xff) << 8;
      }
      else if (cVar1 == '\x03') {
        uVar4 = *(uint *)(param_2 + uVar4 * 4 + 4);
        unaff_r6 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar3 & 0xff000000;
      }
      *(uint *)(param_4 + (uint)(byte)pcVar2[1] * 4) = unaff_r6;
    }
    param_5 = param_5 + -1;
    if (param_5 == 0) break;
    uVar6 = uVar6 + 1;
    if (3 < uVar6) {
      uVar6 = 0;
      param_2 = param_2 + (uint)*(ushort *)(param_1 + 0xc2) * 0xc;
    }
    param_4 = FUN_00012514(*(undefined4 *)(param_1 + 0xd8),param_1 + 0xdc);
  }
  return;
}

