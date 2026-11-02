// rea decompile_all
// name: FUN_0001a0b0
// address: 0x1a0b0
// body: available
// range: 0x1a0b0-0x1a36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001a0b0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  
  *(int *)(param_1 + 0x47c) = *(int *)(param_1 + 0x47c) + 1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x4c8) + 10);
  if ((bVar1 & 8) != 0) {
    if ((*(undefined4 **)(param_1 + 0x6ac) == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)**(undefined4 **)(param_1 + 0x6ac))(), iVar4 == 0)) {
      if ((*(char *)(param_1 + 0x318) == '\x01') && (*DAT_0001a378 == '\x01')) {
        FUN_0001a37c(param_1,*(undefined1 *)(param_1 + 0x319));
      }
    }
    else {
      *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    }
    iVar3 = DAT_0001a370;
    FUN_00019ed4(param_1,*(int *)(DAT_0001a370 + 0x14) == 0);
    iVar4 = *(int *)(iVar3 + 0x14);
    if (iVar4 == 0) {
      iVar4 = 0x400;
      *(undefined4 *)(iVar3 + 0x14) = 0x400;
    }
    *(int *)(iVar3 + 0x14) = iVar4 + -1;
  }
  if ((bVar1 & 0xf7) != 0) {
    FUN_000c5f80(param_1,bVar1);
  }
  uVar9 = *(ushort *)(*(int *)(param_1 + 0x4c8) + 2);
  if ((uVar9 & 1) != 0) {
    FUN_00019da4(param_1);
    uVar9 = uVar9 & 0xfffe;
  }
  uVar7 = 2;
  if ((uVar9 & 0xffe) != 0) {
    do {
      if ((uVar9 & uVar7) != 0) {
        if (*(int *)(param_1 + 0x314) == 0) {
          uVar2 = *(ushort *)(*(int *)(param_1 + 0x4c8) + 0x12);
          uVar5 = (uint)uVar2;
          if ((uVar2 & 0x80) != 0) {
            uVar5 = uVar5 & 0xffffff7f;
            iVar4 = *(int *)(param_1 + 0x4c8);
            *(char *)(iVar4 + 0x12) = (char)uVar5;
            *(char *)(iVar4 + 0x13) = (char)(uVar2 >> 8);
            *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + 1;
          }
          uVar6 = uVar5;
          if ((uVar5 & 0x20) != 0) {
            uVar6 = uVar5 & 0xffffffdf;
            iVar4 = *(int *)(param_1 + 0x4c8);
            *(char *)(iVar4 + 0x12) = (char)uVar6;
            *(char *)(iVar4 + 0x13) = (char)(uVar5 >> 8);
            *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + 1;
          }
          if ((uVar6 & 4) != 0) {
            iVar4 = *(int *)(param_1 + 0x4c8);
            *(byte *)(iVar4 + 0x12) = (byte)uVar6 & 0xfb;
            *(char *)(iVar4 + 0x13) = (char)(uVar6 >> 8);
            *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + 1;
          }
        }
        else {
          FUN_00018d50();
        }
        uVar9 = uVar9 & ~uVar7;
      }
      uVar7 = uVar7 << 1;
    } while ((uVar9 & 0xffe) != 0);
  }
  uVar9 = *(ushort *)(*(int *)(param_1 + 0x4c8) + 4);
  if (uVar9 != 0) {
    cVar8 = '\x01';
    uVar7 = 2;
    if ((uVar9 & 0xffe) != 0) {
      do {
        if ((uVar9 & uVar7) != 0) {
          FUN_00019adc(param_1,cVar8);
          uVar9 = uVar9 & ~uVar7;
        }
        cVar8 = cVar8 + '\x01';
        uVar7 = uVar7 << 1;
      } while ((uVar9 & 0xffe) != 0);
      return;
    }
    return;
  }
  return;
}

