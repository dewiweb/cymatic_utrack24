// rea decompile_all
// name: FUN_001fb6f0
// address: 0x1fb6f0
// body: available
// range: 0x1fb6f0-0x1fb771 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fb6f0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = DAT_001fb778;
  iVar4 = *(int *)(DAT_001fb774 + 4) + 0x14;
  uVar3 = (uint)(*(byte *)(*(int *)(DAT_001fb774 + 4) + 0xc) >> 4);
  if (5 < uVar3) {
    uVar7 = uVar3 * 4 - 0x14 & 0xffff;
    uVar3 = 0;
    if (uVar7 != 0) {
      while (cVar1 = *(char *)(iVar4 + uVar3), cVar1 != '\0') {
        if (cVar1 == '\x01') {
          uVar5 = uVar3 + 1;
        }
        else if (cVar1 == '\x02') {
          iVar6 = iVar4 + uVar3;
          if (*(char *)(iVar6 + 1) != '\x04') {
            return;
          }
          uVar5 = uVar3 + 4;
          if (uVar7 < uVar5) {
            return;
          }
          uVar8 = (uint)CONCAT11(*(undefined1 *)(iVar6 + 2),*(undefined1 *)(iVar6 + 3));
          uVar3 = uVar2;
          if ((uVar8 <= uVar2) && (uVar8 != 0)) {
            uVar3 = uVar8;
          }
          *(short *)(param_1 + 0x36) = (short)uVar3;
        }
        else {
          uVar5 = (uint)*(byte *)(iVar4 + uVar3 + 1);
          if (uVar5 == 0) {
            return;
          }
          uVar5 = uVar5 + uVar3;
        }
        uVar3 = uVar5 & 0xffff;
        if (uVar7 <= uVar3) {
          return;
        }
      }
    }
  }
  return;
}

