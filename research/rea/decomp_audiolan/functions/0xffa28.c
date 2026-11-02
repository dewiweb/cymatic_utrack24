// rea decompile_all
// name: FUN_000ffa28
// address: 0xffa28
// body: available
// range: 0xffa28-0xffbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ffa28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  uVar6 = 0;
  iVar3 = FUN_001bdad0();
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 0x18);
    if ((iVar7 == 0) || (iVar4 = FUN_000ea1e8(iVar7,param_4), iVar4 != 0)) {
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar7 != 0) {
        do {
          iVar4 = FUN_000ea1e8(param_4,iVar7);
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (bVar8) {
            iVar4 = 0;
          }
          if (bVar9) {
            if (iVar7 != 0) goto LAB_000ffaf4;
            goto LAB_000ffac0;
          }
          iVar5 = *(int *)(iVar7 + iVar4 * 4 + 0x10);
          if (iVar5 == 0) break;
          bVar2 = 0;
          if (iVar4 != 0) {
            bVar2 = *(byte *)(iVar7 + 0x18);
          }
          iVar7 = iVar5;
        } while (iVar4 == 0 || (bVar2 & 0x80) == 0);
        iVar7 = 0;
      }
LAB_000ffac0:
      iVar4 = FUN_0016d7a4(0x1c,DAT_000ffbf4);
      if (iVar4 != 0) {
        iVar7 = FUN_000ea2e0();
        *(undefined4 *)(iVar7 + 0xc) = 0;
        FUN_000ea348(iVar7,param_4);
      }
      FUN_001be9fc(param_1 + 8,iVar7);
    }
LAB_000ffaf4:
    FUN_0010f650(iVar3,param_3);
    *(int *)(iVar3 + 0x18) = iVar7;
    FUN_001bd888(param_1,iVar3);
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 != 0) {
      for (iVar5 = *(int *)(iVar4 + 0x2c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x2c)) {
        iVar4 = iVar5;
      }
      while (iVar4 != 0) {
        iVar5 = FUN_0010f598(iVar4 + 0xc,param_2);
        if (iVar5 == 0) {
          FUN_0010f650(iVar4 + 0xc,param_3);
          *(int *)(iVar4 + 0x18) = iVar7;
        }
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 4);
          if (iVar4 == 0) break;
          for (iVar5 = *(int *)(iVar4 + 0x2c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x2c)) {
            iVar4 = iVar5;
          }
        }
        else {
          pbVar1 = (byte *)(iVar4 + 0x34);
          iVar4 = *(int *)(iVar4 + 0x30);
          iVar5 = iVar4;
          if ((*pbVar1 & 0x80) == 0) {
            do {
              iVar4 = iVar5;
              if (iVar4 == 0) goto LAB_000ffbdc;
              iVar5 = *(int *)(iVar4 + 0x2c);
            } while (*(int *)(iVar4 + 0x2c) != 0);
          }
        }
      }
    }
LAB_000ffbdc:
    uVar6 = 1;
    if (*(char *)(iVar3 + 0x1c) == '\x01') {
      *(undefined1 *)(iVar3 + 0x1c) = 0;
    }
  }
  return uVar6;
}

