// rea decompile_all
// name: FUN_000ff178
// address: 0xff178
// body: available
// range: 0xff178-0xff28f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ff178(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  iVar7 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar4 = FUN_0010f598(param_2,iVar7);
      bVar9 = iVar4 < 0;
      bVar10 = iVar4 == 0;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (bVar9) {
        iVar4 = 0;
      }
      if (bVar10) {
        if (iVar7 != 0) {
          *(undefined1 *)(iVar7 + 0x1c) = 4;
        }
        break;
      }
      iVar6 = *(int *)(iVar7 + iVar4 * 4 + 0x2c);
      if (iVar6 == 0) break;
      bVar1 = 0;
      if (iVar4 != 0) {
        bVar1 = *(byte *)(iVar7 + 0x34);
      }
      iVar7 = iVar6;
    } while (iVar4 == 0 || (bVar1 & 0x80) == 0);
  }
  uVar8 = *(uint *)(param_1 + 4);
  if (uVar8 != 0) {
    for (uVar5 = *(uint *)(uVar8 + 0x2c); uVar5 != 0; uVar5 = *(uint *)(uVar5 + 0x2c)) {
      uVar8 = uVar5;
    }
    while (uVar2 = uVar8, uVar2 != 0) {
      if (uVar2 == 0) {
        uVar8 = *(uint *)(param_1 + 4);
        if (uVar8 != 0) {
          uVar5 = *(uint *)(uVar8 + 0x2c);
        }
        if (uVar8 != 0 && uVar5 != 0) {
          do {
            uVar8 = uVar5;
            uVar5 = *(uint *)(uVar8 + 0x2c);
          } while (*(uint *)(uVar8 + 0x2c) != 0);
        }
      }
      else {
        uVar5 = (uint)*(byte *)(uVar2 + 0x34);
        uVar8 = *(uint *)(uVar2 + 0x30);
        uVar3 = uVar8;
        if ((*(byte *)(uVar2 + 0x34) & 0x80) == 0) {
          do {
            uVar8 = uVar3;
            if (uVar8 != 0) {
              uVar5 = *(uint *)(uVar8 + 0x2c);
            }
            uVar3 = uVar5;
          } while (uVar8 != 0 && uVar5 != 0);
        }
      }
      uVar5 = FUN_0010f598(uVar2 + 0xc,param_2);
      if (uVar5 == 0) {
        *(undefined1 *)(uVar2 + 0x1c) = 4;
      }
    }
  }
  return 0;
}

