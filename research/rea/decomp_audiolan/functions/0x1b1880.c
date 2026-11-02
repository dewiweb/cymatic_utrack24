// rea decompile_all
// name: FUN_001b1880
// address: 0x1b1880
// body: available
// range: 0x1b1880-0x1b1967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001b1880(uint param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar4 = FUN_0019cbdc(2);
  iVar2 = DAT_001b1968;
  if (iVar4 == 0) {
    iVar4 = *(int *)(DAT_001b1968 + 0x1c);
    if (iVar4 != 0) {
      iVar5 = 0;
      uVar8 = 0;
      do {
        uVar6 = *(int *)(DAT_001b1968 + 0xc) - *(int *)(iVar4 + 0x24);
        if (uVar8 <= uVar6) {
          iVar5 = iVar4;
          uVar8 = uVar6;
        }
        iVar4 = *(int *)(iVar4 + 0xc);
      } while (iVar4 != 0);
      if (iVar5 != 0) {
        FUN_001b1768(iVar5,1);
      }
    }
    iVar4 = FUN_0019cbdc(2);
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar2 + 0x18);
      uVar8 = 0x7f;
      if (iVar4 != 0) {
        iVar5 = 0;
        uVar6 = 0;
        do {
          uVar7 = (uint)*(byte *)(iVar4 + 0x19);
          if (((uVar7 <= param_1) && (uVar7 <= uVar8)) &&
             (uVar10 = *(int *)(iVar2 + 0xc) - *(int *)(iVar4 + 0x24), uVar6 <= uVar10)) {
            iVar5 = iVar4;
            uVar8 = uVar7;
            uVar6 = uVar10;
          }
          iVar4 = *(int *)(iVar4 + 0xc);
        } while (iVar4 != 0);
        if (iVar5 != 0) {
          FUN_001b1768(iVar5,1);
        }
      }
      iVar4 = FUN_0019cbdc(2);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  FUN_000038a0(iVar4,0x98);
  uVar3 = DAT_001b196c;
  *(char *)(iVar4 + 0x19) = (char)param_1;
  *(short *)(iVar4 + 0x66) = (short)uVar3;
  *(undefined2 *)(iVar4 + 0x68) = 0;
  uVar1 = (undefined2)DAT_001b1970;
  *(undefined2 *)(iVar4 + 0x2c) = uVar1;
  *(undefined2 *)(iVar4 + 0x2e) = uVar1;
  *(undefined1 *)(iVar4 + 9) = 0;
  *(undefined1 *)(iVar4 + 10) = 0xff;
  *(undefined2 *)(iVar4 + 0x36) = 0x218;
  *(undefined2 *)(iVar4 + 0x44) = 6;
  *(undefined2 *)(iVar4 + 0x40) = 0;
  *(undefined2 *)(iVar4 + 0x42) = 6;
  *(undefined2 *)(iVar4 + 0x34) = 0xffff;
  *(undefined2 *)(iVar4 + 0x4c) = 1;
  iVar2 = DAT_001b1968;
  iVar9 = *(int *)(DAT_001b1968 + 0xc);
  iVar5 = *(int *)(DAT_001b1968 + 8) + iVar9;
  *(int *)(DAT_001b1968 + 8) = iVar5;
  *(int *)(iVar4 + 0x58) = iVar5;
  *(int *)(iVar4 + 0x50) = iVar5;
  *(int *)(iVar4 + 0x48) = iVar5;
  *(int *)(iVar4 + 0x24) = iVar9;
  *(int *)(iVar4 + 0x5c) = iVar5;
  *(undefined1 *)(iVar4 + 0x21) = *(undefined1 *)(iVar2 + 2);
  uVar3 = DAT_001b1974;
  *(undefined1 *)(iVar4 + 0x1f) = 0;
  *(undefined4 *)(iVar4 + 0x80) = uVar3;
  *(undefined4 *)(iVar4 + 0x90) = DAT_001b1978;
  *(undefined1 *)(iVar4 + 0x96) = 0;
  return iVar4;
}

