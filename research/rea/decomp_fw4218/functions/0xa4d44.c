// rea decompile_all
// name: FUN_000a4d44
// address: 0xa4d44
// body: available
// range: 0xa4d44-0xa4f2f inclusive
// range: 0xa5058-0xa514f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a4d44(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00002898(s_ERROR__WaveFileEncoder__setup__N_000a4f78);
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = FUN_000ec4b0();
  iVar4 = FUN_000ec344(uVar5,iVar4 * (uint)bVar1);
  *(int *)(param_1 + 200) = iVar4;
  if (iVar4 == 0) {
    FUN_00002898(s_ERROR__WaveFileEncoder__setup__C_000a4fb0);
    return 0;
  }
  uVar5 = (**(code **)**(undefined4 **)(param_1 + 0x24))();
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  iVar4 = FUN_0005f6bc(param_1,param_1 + 0x8c,param_1 + 0x90,10);
  uVar7 = s_RIFFWAVEfmt_dataERROR__WaveFileE_000a4f30._8_4_;
  uVar5 = s_RIFFWAVEfmt_dataERROR__WaveFileE_000a4f30._4_4_;
  if (iVar4 == 0) {
    FUN_00002898(s_ERROR__WaveFileEncoder__setup__C_000a4fec);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0x10;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  uVar7 = s_RIFFWAVEfmt_dataERROR__WaveFileE_000a4f30._0_4_;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = uVar7;
  *(undefined2 *)(param_1 + 0xb0) = 1;
  bVar1 = *(byte *)(param_1 + 7);
  *(ushort *)(param_1 + 0xb2) = (ushort)bVar1;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x10);
  uVar2 = *(ushort *)(param_1 + 0xe4);
  *(uint *)(param_1 + 0xb8) = (uint)bVar1 * (uint)uVar2 * *(int *)(param_1 + 0x10);
  *(ushort *)(param_1 + 0xbc) = uVar2 * bVar1;
  uVar5 = s_RIFFWAVEfmt_dataERROR__WaveFileE_000a4f30._12_4_;
  *(ushort *)(param_1 + 0xbe) = uVar2 << 3;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  FUN_0012c7bc(param_1 + 0xfc,param_1 + 0x34,*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x90),param_1 + 0x9c,0x2c);
  iVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                    (*(int **)(param_1 + 0x24),param_1 + 0xfc,0xffffffff);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x11c) != 0x2c) {
      FUN_00002898(s__f__ERROR__WaveFileEncoder__setu_000a5020._0_4_);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN_0012367c(param_1 + 0x23c,param_1 + 0x34,*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x90));
    iVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                      (*(int **)(param_1 + 0x24),param_1 + 0x23c,0xffffffff);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x24c) = 1;
      *(undefined2 *)(param_1 + 0x278) = 1;
      uVar8 = (uint)*(byte *)(param_1 + 7);
      uVar2 = *(ushort *)(param_1 + 0xe4);
      iVar4 = uVar8 * uVar2;
      uVar6 = FUN_00006604(*(undefined4 *)(param_1 + 0xc),iVar4);
      *(uint *)(param_1 + 0xd0) = uVar6 & 0xfffffff0;
      *(uint *)(param_1 + 0xe8) = iVar4 * (uVar6 & 0xfffffff0);
      puVar3 = DAT_000a5150;
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_1 + 0xd4) = 0;
      if (uVar2 == 2) {
        if (uVar8 == 1) {
          uVar5 = *puVar3;
          uVar7 = puVar3[1];
        }
        else {
          uVar5 = puVar3[2];
          uVar7 = puVar3[3];
        }
        *(undefined4 *)(param_1 + 0xf8) = uVar7;
        *(undefined4 *)(param_1 + 0xf4) = uVar5;
      }
      else {
        if (uVar8 == 1) {
          uVar5 = puVar3[4];
          uVar7 = puVar3[5];
        }
        else {
          uVar5 = puVar3[6];
          uVar7 = puVar3[7];
        }
        *(undefined4 *)(param_1 + 0xf8) = uVar7;
        *(undefined4 *)(param_1 + 0xf4) = uVar5;
      }
      uVar6 = 1;
      if (1 < *(byte *)(param_1 + 8)) {
        do {
          iVar4 = param_1 + uVar6 * 0x28;
          *(undefined1 *)(iVar4 + 0x10d) = 1;
          *(undefined1 *)(iVar4 + 0x10c) = 1;
          *(undefined4 *)(iVar4 + 0x11c) = 0;
          *(undefined4 *)(iVar4 + 0x118) = 0;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(byte *)(param_1 + 8));
      }
      uVar5 = FUN_00006604(*(int *)(param_1 + 0x20) + -0x9b0,*(undefined4 *)(param_1 + 0xe8));
      *(undefined4 *)(param_1 + 0xf0) = uVar5;
      if (*(char *)(param_1 + 0x2c) != '\0') {
        FUN_0005f6b0(param_1);
      }
      return 1;
    }
    FUN_00002898(s__f__ERROR__WaveFileEncoder__setu_000a5020 + 4);
    return 0;
  }
  FUN_00002898(s_RIFFWAVEfmt_dataERROR__WaveFileE_000a4f30 + 0x10);
  return 0;
}

