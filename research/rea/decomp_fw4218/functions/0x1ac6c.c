// rea decompile_all
// name: FUN_0001ac6c
// address: 0x1ac6c
// body: available
// range: 0x1ac6c-0x1ad67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001ac6c(uint *param_1,int *param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  puVar12 = (undefined4 *)param_2[1];
  iVar8 = 0;
  iVar9 = 0;
  puVar4 = (uint *)(*param_2 + -4);
  iVar3 = 0xc;
  do {
    puVar2 = param_1;
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    uVar7 = *puVar12;
    puVar13 = puVar12 + 1;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    iVar8 = (int)((uint6)((int6)(int)uVar6 * (int6)(short)*puVar13) >> 0x10) +
            (int)((uint6)((int6)(int)uVar5 * (int6)(short)uVar7) >> 0x10) + iVar8;
    iVar9 = (int)((uint6)((int6)(int)uVar6 * (int6)(short)((uint)*puVar13 >> 0x10)) >> 0x10) +
            (int)((uint6)((int6)(int)uVar5 * (int6)(short)((uint)uVar7 >> 0x10)) >> 0x10) + iVar9;
    uVar5 = SignedSaturate((int)((uint6)((int6)(int)uVar5 * (int6)(short)*puVar14) >> 0x10) * 2,0x20
                          );
    SignedDoesSaturate(uVar5,0x20);
    uVar6 = SignedSaturate((int)((uint6)((int6)(int)uVar6 * (int6)(short)((uint)*puVar14 >> 0x10))
                                >> 0x10) * 2,0x20);
    SignedDoesSaturate(uVar6,0x20);
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    uVar5 = uVar5 ^ (int)uVar5 >> 0x1f;
    if ((int)puVar4[1] < (int)uVar5) {
      puVar4[1] = uVar5;
    }
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 ^ (int)uVar6 >> 0x1f;
    if ((int)*puVar4 < (int)uVar6) {
      *puVar4 = uVar6;
    }
    iVar10 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    param_1 = puVar2 + 2;
    iVar3 = iVar10;
  } while (iVar10 != 0 && bVar1);
  iVar3 = SignedSaturate(iVar8 * 2,0x20);
  SignedDoesSaturate(iVar3,0x20);
  iVar3 = SignedSaturate(iVar3 * 2,0x20);
  SignedDoesSaturate(iVar3,0x20);
  uVar5 = SignedSaturate(iVar3 * 2,0x20);
  SignedDoesSaturate(uVar5,0x20);
  iVar3 = SignedSaturate(iVar9 * 2,0x20);
  SignedDoesSaturate(iVar3,0x20);
  iVar3 = SignedSaturate(iVar3 * 2,0x20);
  SignedDoesSaturate(iVar3,0x20);
  uVar6 = SignedSaturate(iVar3 * 2,0x20);
  SignedDoesSaturate(uVar6,0x20);
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  iVar3 = param_3 + -1;
  do {
    iVar9 = 0;
    iVar10 = 0;
    puVar12 = (undefined4 *)param_2[1];
    puVar4 = puVar2 + 4;
    iVar8 = 0xc;
    do {
      puVar2 = puVar4;
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = *puVar12;
      puVar13 = puVar12 + 1;
      puVar14 = puVar12 + 2;
      puVar12 = puVar12 + 3;
      iVar9 = (int)((uint6)((int6)(int)uVar6 * (int6)(short)*puVar13) >> 0x10) +
              (int)((uint6)((int6)(int)uVar5 * (int6)(short)uVar7) >> 0x10) + iVar9;
      iVar11 = iVar8 + -1;
      iVar10 = (int)((uint6)((int6)(int)uVar6 * (int6)(short)((uint)*puVar13 >> 0x10)) >> 0x10) +
               (int)((uint6)((int6)(int)uVar5 * (int6)(short)((uint)uVar7 >> 0x10)) >> 0x10) +
               iVar10;
      uVar5 = SignedSaturate((int)((uint6)((int6)(int)uVar5 * (int6)(short)*puVar14) >> 0x10) * 2,
                             0x20);
      SignedDoesSaturate(uVar5,0x20);
      uVar6 = SignedSaturate((int)((uint6)((int6)(int)uVar6 * (int6)(short)((uint)*puVar14 >> 0x10))
                                  >> 0x10) * 2,0x20);
      SignedDoesSaturate(uVar6,0x20);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      bVar1 = 0 < iVar8;
      puVar4 = puVar2 + 2;
      iVar8 = iVar11;
    } while (iVar11 != 0 && bVar1);
    iVar8 = SignedSaturate(iVar9 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar8 = SignedSaturate(iVar8 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    uVar5 = SignedSaturate(iVar8 * 2,0x20);
    SignedDoesSaturate(uVar5,0x20);
    iVar8 = SignedSaturate(iVar10 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar8 = SignedSaturate(iVar8 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    uVar6 = SignedSaturate(iVar8 * 2,0x20);
    SignedDoesSaturate(uVar6,0x20);
    iVar8 = iVar3 + -1;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    bVar1 = 0 < iVar3;
    iVar3 = iVar8;
  } while (iVar8 != 0 && bVar1);
  return;
}

