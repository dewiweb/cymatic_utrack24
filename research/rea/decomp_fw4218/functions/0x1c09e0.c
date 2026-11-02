// rea decompile_all
// name: FUN_001c09e0
// address: 0x1c09e0
// body: available
// range: 0x1c09e0-0x1c0a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001c09e0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(int *)(param_3 + 8) != 0) &&
     (pbVar2 = (byte *)FUN_001c0864(param_1), pbVar2 != (byte *)0x0)) {
    iVar4 = *(int *)(param_3 + 4);
    if (iVar4 != 0) {
      iVar4 = iVar4 + 8;
    }
    pbVar3 = (byte *)FUN_00003630(pbVar2,iVar4);
    if (pbVar3 != (byte *)0x0) {
      if (pbVar3 <= pbVar2) {
        return param_2;
      }
      do {
        if (pbVar2 == (byte *)0x0) {
          uVar5 = 0;
        }
        else {
          bVar1 = *pbVar2;
          if ((char)bVar1 < '\0') {
            uVar5 = (uint)*(byte *)(DAT_001c0a58 + (bVar1 ^ 0x80));
            if ((2 < uVar5) && ((*(byte *)(DAT_001c0a54 + (bVar1 & 0x1f)) & pbVar2[1]) == 0)) {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = 1;
          }
        }
        pbVar2 = pbVar2 + uVar5;
        param_2 = param_2 + 1;
      } while (pbVar2 < pbVar3);
      return param_2;
    }
  }
  return -1;
}

