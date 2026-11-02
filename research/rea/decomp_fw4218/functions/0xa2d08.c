// rea decompile_all
// name: FUN_000a2d08
// address: 0xa2d08
// body: available
// range: 0xa2d08-0xa2f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000a2d08(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar6 = (uint)*(byte *)(param_1 + 0x5e4);
    while (uVar6 != *(byte *)(param_1 + 0x5e5)) {
      if (*(int *)(param_1 + uVar6 * 0x54 + 0xa4) == param_2) {
        if ((-1 < *(int *)(param_1 + 0x5ec)) && (iVar2 = FUN_0005f2d8(param_1), iVar2 != 0)) {
          *(undefined4 *)(param_1 + 0x5ec) = 0xffffffff;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x5e4);
        while (uVar7 != uVar6) {
          iVar2 = param_1 + uVar7 * 0x54;
          if ((-1 < *(int *)(iVar2 + 0xa8)) && (iVar3 = FUN_0005f2d8(param_1), iVar3 != 0)) {
            *(undefined4 *)(iVar2 + 0xa8) = 0xffffffff;
          }
          uVar7 = uVar7 + 1 & 0xff;
          if (0xf < uVar7) {
            uVar7 = 0;
          }
        }
        FUN_00003b88(param_1 + 0x5e8,param_1 + uVar6 * 0x54 + 0xa4,0x52);
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x20);
        uVar1 = (undefined1)(uVar6 + 1);
        if (0xf < (uVar6 + 1 & 0xff)) {
          uVar1 = 0;
        }
        *(undefined1 *)(param_1 + 0x5e4) = uVar1;
        uVar6 = FUN_00006604(*(undefined4 *)(param_1 + 0x61c),*(undefined2 *)(param_1 + 0x5f2));
        *(uint *)(param_1 + 0x670) = uVar6;
        uVar7 = *(uint *)(param_1 + 0x628);
        *(uint *)(param_1 + 0x674) = uVar7;
        if (*(int *)(param_1 + 0x10) == 0) {
          *(undefined4 *)(param_1 + 0x66c) = 0;
        }
        else {
          FUN_00006604();
          *(undefined4 *)(param_1 + 0x66c) = extraout_r1;
        }
        if (uVar6 < uVar7) {
          uVar5 = DAT_000a2f1c[1];
          *(undefined4 *)(param_1 + 0x680) = *DAT_000a2f1c;
        }
        else {
          uVar4 = (ushort)*(byte *)(param_1 + 0xa0);
          if (*(short *)(param_1 + 0x67c) != 2) {
            if ((uVar4 == 0) && (*(short *)(param_1 + 0x5f0) == 1)) {
              uVar5 = DAT_000a2f1c[6];
              *(undefined4 *)(param_1 + 0x684) = DAT_000a2f1c[7];
              *(undefined4 *)(param_1 + 0x680) = uVar5;
            }
            else {
              uVar5 = DAT_000a2f1c[8];
              *(undefined4 *)(param_1 + 0x684) = DAT_000a2f1c[9];
              *(undefined4 *)(param_1 + 0x680) = uVar5;
            }
            goto LAB_000a2eec;
          }
          bVar8 = uVar4 == 0;
          if (bVar8) {
            uVar4 = *(ushort *)(param_1 + 0x5f0);
          }
          if (!bVar8 || uVar4 != 1) {
            uVar5 = DAT_000a2f1c[4];
            *(undefined4 *)(param_1 + 0x684) = DAT_000a2f1c[5];
            *(undefined4 *)(param_1 + 0x680) = uVar5;
            goto LAB_000a2eec;
          }
          uVar5 = DAT_000a2f1c[3];
          *(undefined4 *)(param_1 + 0x680) = DAT_000a2f1c[2];
        }
        *(undefined4 *)(param_1 + 0x684) = uVar5;
LAB_000a2eec:
        iVar2 = FUN_000a1eb4(param_1,*(undefined1 *)(param_1 + 0x67e),1);
        if (iVar2 != 0) {
          *(undefined1 *)(param_1 + 0x3b) = 0;
        }
        return iVar2 != 0;
      }
      uVar6 = uVar6 + 1 & 0xff;
      if (0xf < uVar6) {
        uVar6 = 0;
      }
    }
  }
  return false;
}

