// rea decompile_all
// name: FUN_00060848
// address: 0x60848
// body: available
// range: 0x60848-0x60aaf inclusive
// range: 0x60bb0-0x60c3f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00060848(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_3;
  uStack_24 = param_4;
  puVar2 = (undefined4 *)FUN_0005fc9c(param_1,param_2,1);
  *puVar2 = _DAT_00060ab0;
  puVar2[3] = param_3;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  iVar3 = FUN_00091838(puVar2 + 7,s___NandGeneric_00060ab2 + 2);
  *(undefined1 *)(iVar3 + 0x24) = 0;
  FUN_001a2920(&uStack_28,iVar3);
  FUN_00013290(s__NAND__00060ac0);
  iVar5 = DAT_00060acc;
  *(undefined4 *)(DAT_00060acc + 0x84) = 7;
  *(undefined4 *)(iVar5 + 4) = 0x10000;
  *(undefined4 *)(iVar5 + 0x200) = 0x90;
  *(undefined4 *)(iVar5 + 0x218) = 0;
  *(undefined4 *)(iVar5 + 0x250) = 4;
  puVar1 = _DAT_00060adc;
  for (iVar5 = DAT_00060ad0; (*DAT_00060ad4 < 4 && (iVar5 != 0)); iVar5 = iVar5 + -1) {
  }
  if (iVar5 == 0) {
    FUN_00013290(s_No_NAND_Device_found__timeout___00060b68);
  }
  else {
    *_DAT_00060adc = *DAT_00060ad8;
    FUN_00013290(s_M__Signature__0x_08X_00060add + 3,*puVar1);
    for (uVar6 = 0; uVar6 < 0x50; uVar6 = uVar6 + 1) {
      if (*(uint *)(_DAT_00060af4 + uVar6 * 8) == (*_DAT_00060adc & 0xff)) {
        FUN_00013290(s_L__Manufacturer____s_00060af5 + 3,
                     *(undefined4 *)(_DAT_00060af4 + uVar6 * 8 + 4));
        break;
      }
    }
    for (uVar6 = 0; uVar6 < 0x3b; uVar6 = uVar6 + 1) {
      if (*(uint *)(_DAT_00060b0c + uVar6 * 0x14 + 4) == (*_DAT_00060adc & 0xffff) >> 8) {
        FUN_00013290(s_H__Device____s_00060b0d + 3,*(undefined4 *)(_DAT_00060b0c + uVar6 * 0x14));
        *DAT_00060b24 = *(int *)(_DAT_00060b0c + uVar6 * 0x14 + 0xc);
        *DAT_00060b28 = *(int *)(_DAT_00060b0c + uVar6 * 0x14 + 8);
        *_DAT_00060b2c = *(undefined4 *)(_DAT_00060b0c + uVar6 * 0x14 + 0x10);
        break;
      }
    }
    if (uVar6 == 0x3b) {
      FUN_00013290(s_M__Device___unknown_00060b2d + 3);
      *DAT_00060b24 = 0x40;
      *DAT_00060b28 = 0x800;
      *_DAT_00060b2c = 0x80;
      *_DAT_00060b4c = ((int)(*DAT_00060b28 + ((uint)(*DAT_00060b28 >> 0x1f) >> 0x17)) >> 9) << 4;
    }
    FUN_00013290(s_M__Reserved_byte__0x_02X_00060b4d + 3,(*_DAT_00060adc & 0xffffff) >> 0x10);
    FUN_000467e4();
    FUN_0004dde4();
  }
  if (*_DAT_00060adc == 0) {
    FUN_00013290(s_No_NAND_Device_found__invalid___00060b8c);
  }
  else {
    FUN_0005fc68(iVar3 + -0x1c);
    for (iVar5 = 0; iVar4 = FUN_00003e14(*DAT_00060b24 << 10,*_DAT_00060b2c), iVar5 < iVar4;
        iVar5 = iVar5 + 1) {
      iVar4 = FUN_0004e7d8(iVar5);
      if (iVar4 != 0) {
        FUN_00013290(s_Bad_Block_found__Block__i_00060c40,iVar5);
        iVar4 = *DAT_00060c60;
        *DAT_00060c60 = *DAT_00060c60 + 1;
        *(short *)(DAT_00060c64 + iVar4 * 2) = (short)iVar5;
      }
    }
    *(undefined1 *)(iVar3 + 0x24) = 1;
  }
  FUN_001a2938(&uStack_28);
  return iVar3 + -0x1c;
}

