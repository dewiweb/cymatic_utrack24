// rea decompile_all
// name: FUN_001075a4
// address: 0x1075a4
// body: available
// range: 0x1075a4-0x1077e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001075a4(undefined4 param_1,ushort *param_2,char *param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_28 [16];
  
  if ((param_2[0x2c] & 0xf) != 4) {
    return 0;
  }
  iVar3 = FUN_0010eb7c(*(undefined4 *)(param_3 + 0x58),*(undefined4 *)(param_2 + 0x24));
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = (uint)*(ushort *)(param_3 + 4);
  uVar6 = extraout_r2;
  if (uVar5 != DAT_001077e4) {
    uVar6 = (uint)*param_2;
  }
  if (uVar5 == DAT_001077e4 || uVar5 == uVar6) {
    uVar5 = (uint)*(ushort *)(param_3 + 6);
    if (uVar5 != DAT_001077e4) {
      uVar6 = (uint)param_2[1];
    }
    if (uVar5 == DAT_001077e4 || uVar5 == uVar6) {
      uVar5 = *(uint *)(param_3 + 8);
      if (uVar5 != 0xffffffff) {
        uVar6 = *(uint *)(param_2 + 2);
      }
      if (uVar5 == 0xffffffff || uVar5 == uVar6) {
        uVar5 = (uint)*(ushort *)(param_3 + 0xc);
        uVar6 = DAT_001077e4;
        if (uVar5 != DAT_001077e4) {
          uVar6 = (uint)param_2[4];
        }
        if (uVar5 == DAT_001077e4 || uVar5 == uVar6) {
          bVar8 = true;
          goto LAB_00107638;
        }
      }
    }
  }
  bVar8 = false;
LAB_00107638:
  cVar1 = *param_3;
  if (cVar1 == '\0') {
    if (!bVar8) {
      return 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (!bVar8) {
      return 0;
    }
    if (param_2[4] != 0) {
      return 0;
    }
  }
  else {
    if (cVar1 == '\x02') {
      FUN_0015e8b8(auStack_28,param_2);
      iVar3 = FUN_0015ea44(auStack_28,param_3 + 4);
    }
    else {
      if (cVar1 != '\x03') {
        return 0;
      }
      iVar3 = FUN_0015ea44(param_2 + 0x10,param_3 + 4);
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  if ((*(uint *)(param_3 + 0x54) == 0xffffffff) ||
     (*(uint *)(param_3 + 0x54) == (*(uint *)(param_2 + 0x16) & DAT_001077e8))) {
    uVar5 = *(uint *)(param_3 + 0x4c);
    uVar6 = *(uint *)(param_2 + 0x16);
    uVar7 = *(uint *)(param_3 + 0x50);
    if (uVar5 != 0xffffffff) {
      uVar5 = uVar5 & 0xf000ffff;
    }
    uVar2 = param_2[4];
    uVar4 = *(ushort *)(param_3 + 0x5c);
    if (uVar7 != 0xffffffff) {
      uVar7 = uVar7 & 0xf000ffff;
    }
    bVar8 = uVar4 <= uVar2;
    if (bVar8) {
      uVar4 = *(ushort *)(param_3 + 0x5e);
    }
    if (((((bVar8 && uVar2 <= uVar4) &&
          (iVar3 = FUN_0010f034(*(undefined4 *)(param_2 + 0x1e),*(undefined4 *)(param_3 + 0x1c),
                                *(undefined4 *)(param_3 + 0x20)), iVar3 != 0)) &&
         (iVar3 = FUN_0010f034(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_3 + 0x24),
                               *(undefined4 *)(param_3 + 0x28)), iVar3 != 0)) &&
        ((iVar3 = FUN_0010f034(*(undefined4 *)(param_2 + 0x22),*(undefined4 *)(param_3 + 0x2c),
                               *(undefined4 *)(param_3 + 0x30)), iVar3 != 0 &&
         (iVar3 = FUN_0010f034(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_3 + 0x34),
                               *(undefined4 *)(param_3 + 0x38)), iVar3 != 0)))) &&
       ((iVar3 = FUN_0010f034(*(undefined4 *)(param_2 + 0x1a),*(undefined4 *)(param_3 + 0x3c),
                              *(undefined4 *)(param_3 + 0x40)), iVar3 != 0 &&
        ((iVar3 = FUN_0010f034(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_3 + 0x44),
                               *(undefined4 *)(param_3 + 0x48)), iVar3 != 0 &&
         (iVar3 = FUN_0010f034(uVar6 & 0xf000ffff,uVar5,uVar7), iVar3 != 0)))))) {
      return 1;
    }
  }
  return 0;
}

