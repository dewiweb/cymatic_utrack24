// rea decompile_all
// name: FUN_000a2534
// address: 0xa2534
// body: available
// range: 0xa2534-0xa27f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000a2534(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            uint param_6,undefined1 param_7,undefined4 param_8,int param_9)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  ushort local_ac [2];
  undefined4 local_a8;
  undefined4 local_a4 [2];
  int local_9c;
  int local_98;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined1 auStack_68 [48];
  ushort local_38 [2];
  uint local_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [4];
  
  iVar2 = FUN_00110ee8(param_2,auStack_68,auStack_30,&local_8c,local_a4,auStack_28,&local_a8);
  if (iVar2 == 0) {
    FUN_00002898(DAT_000a2838);
    return 0;
  }
  iVar2 = FUN_000f5710(param_1,auStack_68,local_38,local_ac);
  if (iVar2 == 0) goto LAB_000a25d8;
  if ((uint)*(ushort *)(DAT_000a27f8 + param_1) != (uint)local_38[0]) {
    pcVar3 = s_ERROR__WaveFileDecoder__setNextF_000a27fc;
    goto LAB_000a2624;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    pcVar3 = DAT_000a283c;
    if (*(ushort *)(param_1 + 0x5f0) < 2) {
      if ((*(ushort *)(param_1 + 0x5f0) != 1) || (local_ac[0] < 2)) goto LAB_000a262c;
    }
    else if (local_ac[0] != 1) goto LAB_000a262c;
  }
  else {
LAB_000a262c:
    iVar2 = (uint)*(ushort *)(DAT_000a27f8 + param_1) * (uint)local_ac[0];
    uVar4 = FUN_00006604(local_a4[0],iVar2);
    local_98 = uVar4 * iVar2;
    param_3 = param_3 & 0xfffffffc;
    if (param_6 == 0) {
      pcVar3 = DAT_000a2848;
      if ((param_3 <= uVar4) &&
         ((param_4 == 0xffffffff ||
          (bVar8 = (param_4 & 0xfffffffc) <= uVar4, pcVar3 = DAT_000a284c,
          uVar4 = param_4 & 0xfffffffc, bVar8)))) {
        iVar5 = uVar4 * iVar2;
        goto LAB_000a26c0;
      }
    }
    else {
      pcVar3 = DAT_000a2840;
      if ((param_3 <= param_6) &&
         ((uVar4 = param_6, iVar5 = local_98, param_4 == 0xffffffff ||
          (pcVar3 = DAT_000a2844, uVar4 = param_4 & 0xfffffffc, (param_4 & 0xfffffffc) <= param_6)))
         ) {
LAB_000a26c0:
        local_9c = iVar5;
        iVar5 = FUN_0005f284(param_1,local_a8,local_8c + param_3 * iVar2);
        pcVar3 = DAT_000a2850;
        if (iVar5 != 0) {
          if (*(int *)(param_1 + 0x678) == 0) {
            uVar6 = *(uint *)(param_1 + 8);
LAB_000a2704:
            uVar6 = FUN_00006604(uVar6,iVar2);
            local_34 = (uint)*(byte *)(param_1 + 0x5e5);
            bVar8 = param_9 != 0;
            local_88 = param_5;
            local_84 = local_a8;
            local_80 = (uint)local_ac[0];
            iVar7 = param_1 + local_34 * 0x54;
            iVar5 = iVar2;
            if (bVar8) {
              iVar5 = param_9;
            }
            *(undefined1 *)(iVar7 + 0xf5) = 0;
            *(undefined4 *)(iVar7 + 0xa4) = param_5;
            if (!bVar8) {
              iVar5 = param_1 + 0x800;
            }
            *(undefined4 *)(iVar7 + 0xa8) = local_a8;
            if (!bVar8) {
              iVar5 = iVar5 + 0x2c;
            }
            *(ushort *)(iVar7 + 0xac) = local_ac[0];
            *(short *)(iVar7 + 0xae) = (short)((uint)(iVar2 * 0x10000) >> 0x10);
            *(uint *)(iVar7 + 0xb0) = iVar2 * (uVar6 & 0xfffffffc);
            *(int *)(iVar7 + 0xd4) = local_8c;
            *(int *)(iVar7 + 0xd8) = local_98;
            *(int *)(iVar7 + 0xdc) = local_9c;
            *(uint *)(iVar7 + 0xe0) = param_3 * iVar2;
            *(uint *)(iVar7 + 0xe8) = uVar4;
            *(uint *)(iVar7 + 0xec) = param_6;
            *(uint *)(iVar7 + 0xe4) = param_3;
            *(undefined1 *)(iVar7 + 0xf4) = param_7;
            *(undefined4 *)(iVar7 + 0xf0) = param_8;
            FUN_000039e0(iVar7 + 0xb4,iVar5,0x20);
            uVar1 = (undefined1)(local_34 + 1);
            if (0xf < (local_34 + 1 & 0xff)) {
              uVar1 = 0;
            }
            *(undefined1 *)(param_1 + 0x5e5) = uVar1;
            return 1;
          }
          uVar6 = (uint)local_ac[0] * *(int *)(param_1 + 0x678);
          pcVar3 = DAT_000a2854;
          if (uVar6 < *(uint *)(param_1 + 8) || uVar6 - *(uint *)(param_1 + 8) == 0)
          goto LAB_000a2704;
        }
      }
    }
  }
LAB_000a2624:
  FUN_00002898(pcVar3);
LAB_000a25d8:
  FUN_0005f2d8(param_1,local_a8);
  return 0;
}

