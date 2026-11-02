// rea decompile_all
// name: FUN_000a4aa0
// address: 0xa4aa0
// body: available
// range: 0xa4aa0-0xa4d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a4aa0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    return;
  }
  if (*(short *)(param_1 + 0xe4) == 2) {
    if (*(char *)(param_1 + 7) == '\x01') {
      pcVar5 = (code *)*DAT_000a4d34;
      uVar1 = DAT_000a4d34[1];
    }
    else {
      pcVar5 = (code *)DAT_000a4d34[2];
      uVar1 = DAT_000a4d34[3];
    }
    *(uint *)(param_1 + 0xf8) = uVar1;
    *(code **)(param_1 + 0xf4) = pcVar5;
  }
  else {
    if (*(char *)(param_1 + 7) == '\x01') {
      pcVar5 = (code *)DAT_000a4d34[4];
      uVar1 = DAT_000a4d34[5];
    }
    else {
      pcVar5 = (code *)DAT_000a4d34[6];
      uVar1 = DAT_000a4d34[7];
    }
    *(uint *)(param_1 + 0xf8) = uVar1;
    *(code **)(param_1 + 0xf4) = pcVar5;
  }
  bVar6 = (uVar1 & 1) == 0;
  if (bVar6) {
    pcVar5 = *(code **)(param_1 + 0xf4);
  }
  if (!bVar6) {
    pcVar5 = *(code **)(*(int *)(param_1 + ((int)uVar1 >> 1)) + *(int *)(param_1 + 0xf4));
  }
  (*pcVar5)();
  if (*(char *)(param_1 + 0x270) == '\0') {
    uVar1 = *(uint *)(param_1 + 0xd0) >> 1;
  }
  else {
    uVar1 = 0;
  }
  if (uVar1 < *(uint *)(param_1 + 0xd4)) {
    iVar2 = param_1 + (uint)*(ushort *)(param_1 + 0xe6) * 0x28;
    if (*(char *)(iVar2 + 0x10c) != '\0') {
      if (*(char *)(iVar2 + 0x10d) == '\0') {
LAB_000a4b70:
        FUN_0005f6a0(param_1);
        uVar3 = FUN_00006604(*(undefined4 *)(iVar2 + 0x118),
                             (uint)*(byte *)(param_1 + 7) * (uint)*(ushort *)(param_1 + 0xe4));
        FUN_0005f628(param_1,2,*(undefined4 *)(iVar2 + 0x108),uVar3);
        return;
      }
      if (*(int *)(iVar2 + 0x11c) != *(int *)(iVar2 + 0x118)) {
        FUN_00002898(DAT_000a4d38);
        goto LAB_000a4b70;
      }
      FUN_0012c7bc(iVar2 + 0xfc,*(int *)(param_1 + 0x26c) + 0xc0,*(undefined4 *)(param_1 + 0x30),
                   *(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(iVar2 + 0x108) = *(undefined4 *)(param_1 + 0xe0);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))
                        (*(int **)(param_1 + 0x24),iVar2 + 0xfc,0);
      if (iVar2 != 0) {
        uVar4 = *(short *)(param_1 + 0xe6) + 1;
        *(ushort *)(param_1 + 0xe6) = uVar4;
        if (*(byte *)(param_1 + 8) <= uVar4) {
          *(undefined2 *)(param_1 + 0xe6) = 0;
        }
        *(uint *)(param_1 + 0xcc) =
             *(int *)(param_1 + 200) +
             (uint)*(ushort *)(param_1 + 0xe6) * (*(uint *)(param_1 + 0xc) >> 2) * 4;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        goto LAB_000a4cc0;
      }
      FUN_00002898(DAT_000a4d3c);
    }
  }
  FUN_000ec110(param_1 + 0x254,*(int *)(param_1 + 0x26c) + 0xc0,*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x90));
  iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))(*(int **)(param_1 + 0x24),param_1 + 0x254,0)
  ;
  if (iVar2 == 0) {
    thunk_FUN_00002898(DAT_000a4d40);
  }
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xd4);
LAB_000a4cc0:
  FUN_0005f628(param_1,4,*(undefined4 *)(param_1 + 0xe0),0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xd4);
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  FUN_001452dc(*(undefined4 *)(param_1 + 0x26c),*(undefined1 *)(param_1 + 4),
               *(undefined4 *)(param_1 + 0x90),param_1 + 0xa8);
  *(undefined2 *)(param_1 + 0x27a) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  return;
}

