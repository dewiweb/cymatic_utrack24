// rea decompile_all
// name: FUN_000a2858
// address: 0xa2858
// body: available
// range: 0xa2858-0xa2bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a2858(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  int iVar7;
  uint uVar8;
  int unaff_r11;
  bool bVar9;
  bool bVar10;
  
  uVar8 = *(byte *)(param_1 + 0x67e) + 1;
  if (*(byte *)(param_1 + 6) < uVar8) {
    uVar8 = 0;
  }
  iVar3 = param_1 + uVar8 * 0x2c;
  bVar9 = *(char *)(iVar3 + 0x698) == '\0';
  uVar4 = param_1 + 0x5e8;
  uVar5 = uVar4;
  if (!bVar9) {
    uVar5 = (uint)*(byte *)(iVar3 + 0x699);
  }
  pbVar2 = (byte *)(param_1 + 0x67e);
  bVar10 = uVar5 == 0;
  if (!bVar9 && !bVar10) {
    unaff_r11 = *(int *)(iVar3 + 0x6ac);
  }
  bVar1 = bVar9 || bVar10;
  if ((bVar9 || bVar10) || unaff_r11 == 0) {
LAB_000a2a1c:
    FUN_0005f148(param_1);
    uVar6 = extraout_r1;
    if (!bVar1) {
      uVar6 = 1;
    }
    *(undefined1 *)(param_1 + 0x3b) = 1;
    if (bVar1) {
      FUN_00002898(s_ERROR__WaveFileDecoder__selectNe_000a2bc8,*(undefined1 *)(iVar3 + 0x698),
                   *(undefined1 *)(iVar3 + 0x699),*(undefined1 *)(iVar3 + 0x69a));
      uVar6 = 2;
    }
    FUN_0005f0c0(param_1,uVar6,*(undefined4 *)(param_1 + 0x674),*(undefined4 *)(param_1 + 0x5e8),0,0
                );
    return 0;
  }
  if (*(int *)(iVar3 + 0x69c) != *(int *)(param_1 + 0x5ec)) {
    if (((uint)*(byte *)(param_1 + 0x5e5) == (uint)*(byte *)(param_1 + 0x5e4)) ||
       (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x5e4) * 0x54 + 0xa8) !=
        *(int *)(iVar3 + 0x69c))) {
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x67e) * 0x2c + 0x698) = 1;
      bVar1 = true;
      *(undefined1 *)(param_1 + (uint)*pbVar2 * 0x2c + 0x699) = 1;
      *(undefined4 *)(param_1 + (uint)*pbVar2 * 0x2c + 0x6a4) = 0;
      *(undefined4 *)(param_1 + (uint)*pbVar2 * 0x2c + 0x6ac) = 0;
      goto LAB_000a2a1c;
    }
    if (*(uint *)(param_1 + 0x674) < *(uint *)(param_1 + 0x630)) {
      uVar6 = DAT_000a2bc0[1];
      *(undefined4 *)(param_1 + 0x680) = *DAT_000a2bc0;
      *(undefined4 *)(param_1 + 0x684) = uVar6;
      return 0;
    }
    if (*(char *)(param_1 + 0x638) != '\0') {
      *(undefined1 *)(param_1 + 0x638) = 0;
      FUN_0005f148(param_1);
      FUN_0005f0c0(param_1,7,*(undefined4 *)(param_1 + 0x674),*(undefined4 *)(param_1 + 0x5e8),0,0);
      return 0;
    }
    FUN_000a2c04(param_1);
  }
  uVar6 = FUN_00006604(unaff_r11,*(undefined2 *)(DAT_000a2bc4 + param_1));
  *(undefined4 *)(param_1 + 0x664) = uVar6;
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(iVar3 + 0x6a0);
  *(undefined4 *)(param_1 + 0x668) = 0;
  if (*(uint *)(param_1 + 0x624) < *(uint *)(param_1 + 0x620)) {
    FUN_000a1d90(param_1,uVar4,*(undefined1 *)(param_1 + 0x67e));
    goto LAB_000a2bb0;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x5e4);
  if (uVar5 != *(byte *)(param_1 + 0x5e5)) {
    iVar3 = param_1 + uVar5 * 0x54;
    if (*(uint *)(iVar3 + 0xe0) < *(uint *)(iVar3 + 0xdc)) {
      FUN_000a1d90(param_1,(int *)(iVar3 + 0xa4),*(undefined1 *)(param_1 + 0x67e));
      if (*(char *)(iVar3 + 0xf5) != '\0') goto LAB_000a2bb0;
      iVar7 = *(int *)(iVar3 + 0xa4);
      *(undefined1 *)(iVar3 + 0xf5) = 1;
joined_r0x000a2acc:
      if (iVar7 != 0) {
        FUN_0005f0c0(param_1,8,iVar7,0,0,0xffffffff);
      }
      goto LAB_000a2bb0;
    }
    uVar5 = uVar5 + 1 & 0xff;
    if (0xf < uVar5) {
      uVar5 = 0;
    }
    if (uVar5 != *(byte *)(param_1 + 0x5e5)) {
      iVar3 = param_1 + uVar5 * 0x54;
      if (*(uint *)(iVar3 + 0xe0) < *(uint *)(iVar3 + 0xdc)) {
        FUN_000a1d90(param_1,(int *)(iVar3 + 0xa4),*(undefined1 *)(param_1 + 0x67e));
        if (*(char *)(iVar3 + 0xf5) != '\0') goto LAB_000a2bb0;
        iVar7 = *(int *)(iVar3 + 0xa4);
        *(undefined1 *)(iVar3 + 0xf5) = 1;
        goto joined_r0x000a2acc;
      }
    }
  }
  *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x67e) * 0x2c + 0x698) = 1;
  *(undefined1 *)(param_1 + (uint)*pbVar2 * 0x2c + 0x699) = 1;
  *(undefined4 *)(param_1 + (uint)*pbVar2 * 0x2c + 0x6a4) = 0;
  *(undefined4 *)(param_1 + (uint)*pbVar2 * 0x2c + 0x6ac) = 0;
LAB_000a2bb0:
  *(char *)(param_1 + 0x67e) = (char)uVar8;
  return 1;
}

