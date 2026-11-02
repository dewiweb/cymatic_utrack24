// rea decompile_all
// name: FUN_00005e72
// address: 0x5e72
// body: available
// range: 0x5e72-0x5ed5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00005e72(undefined4 param_1,uint param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  if ((param_2 != 0) && (param_2 >> 5 == 0)) {
    if (param_3 != (char *)0x0) {
      if (*param_3 != '*') {
        uVar3 = FUN_00005ed6();
        return uVar3;
      }
      pbVar6 = (byte *)(param_3 + 1);
      uVar5 = 0;
      do {
        uVar7 = 0;
        iVar4 = 0;
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if (bVar1 < 0x3a) {
            iVar2 = -0x30;
          }
          else {
            iVar2 = -0x57;
          }
          uVar7 = uVar7 << 4 | (uint)bVar1 + iVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        if ((1 << (uVar5 & 0xff) & param_2) != 0) {
          iVar4 = FUN_000040ec();
          *(uint *)(iVar4 + uVar5 * 4) = uVar7;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 5);
    }
    uVar3 = FUN_00005dd4(param_1,param_2);
    return uVar3;
  }
  return 0;
}

