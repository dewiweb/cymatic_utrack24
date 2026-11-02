// rea decompile_all
// name: FUN_000393b4
// address: 0x393b4
// body: available
// range: 0x393b4-0x394d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000393b4(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  
  uVar13 = (uint)*(ushort *)(param_1 + 0xc);
  iVar11 = *(int *)(param_1 + 0x20);
  uVar1 = *(ushort *)(param_1 + 2);
  puVar12 = (undefined1 *)(iVar11 + 4);
  if (uVar1 == 0x15) goto LAB_0003949c;
  if (uVar1 < 0x16) {
    if (uVar1 == 0xc) goto LAB_00039466;
    if (0xc < uVar1) {
      if (uVar1 != 0xf) {
        if (uVar1 == 0x11) {
          iVar3 = FUN_000209c2(puVar12);
          iVar11 = FUN_000209c2(iVar11 + 0x104);
          return iVar3 + iVar11;
        }
        if (uVar1 != 0x12) goto LAB_00039402;
      }
LAB_0003949c:
      iVar11 = iVar11 + 6;
LAB_000394ca:
      uVar13 = FUN_000209c2(iVar11);
      return uVar13;
    }
    if ((uVar1 == 2) || (uVar1 == 5)) goto LAB_00039466;
    if (uVar1 == 6) {
      iVar3 = FUN_000209c2(puVar12);
      iVar9 = *(int *)(iVar11 + 0x208);
      iVar8 = *(int *)(iVar11 + 0x204);
      iVar14 = *(int *)(iVar11 + 0x210);
      iVar10 = *(int *)(iVar11 + 0x20c);
      iVar4 = *(int *)(iVar11 + 0x214);
      iVar11 = FUN_000209c2(iVar11 + 0x104);
      return iVar3 + iVar8 + iVar9 + iVar10 + iVar14 + iVar4 + iVar11;
    }
    goto LAB_00039402;
  }
  if (uVar1 == 0x27) {
LAB_00039466:
    uVar13 = FUN_000209c2(puVar12);
    return uVar13;
  }
  if (uVar1 < 0x28) {
    if (uVar1 == 0x1a) {
      iVar3 = FUN_000209c2(iVar11 + 6);
      iVar11 = FUN_000209c2(iVar11 + 0x106);
      return iVar3 + iVar11;
    }
    if (uVar1 == 0x21) {
      iVar11 = iVar11 + 10;
      goto LAB_000394ca;
    }
    if (uVar1 == 0x24) goto LAB_0003949c;
LAB_00039402:
    uVar2 = 0;
    uVar5 = 0;
    if (uVar13 < 2) goto LAB_0003945a;
  }
  else {
    if (uVar1 == 0x29) {
      return 0;
    }
    if (uVar1 != 0x2f) goto LAB_00039402;
    uVar13 = 0x20;
  }
  uVar2 = 0;
  puVar7 = (undefined1 *)(iVar11 + 3);
  puVar6 = (undefined1 *)(iVar11 + 2);
  if ((uVar13 / 2 & 1) != 0) {
    puVar7 = (undefined1 *)(iVar11 + 5);
    uVar2 = (uint)CONCAT11(*puVar12,*puVar7) << 3;
    puVar6 = puVar12;
  }
  for (iVar11 = (int)uVar13 >> 2; iVar11 != 0; iVar11 = iVar11 + -1) {
    uVar2 = CONCAT11(puVar6[2],puVar7[2]) + uVar2;
    puVar6 = puVar6 + 4;
    puVar7 = puVar7 + 4;
    uVar2 = (uint)CONCAT11(*puVar6,*puVar7) + (uVar2 >> 0x1d | uVar2 * 8);
    uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  }
  uVar5 = uVar13 & 0xfffffffe;
LAB_0003945a:
  if (uVar5 < uVar13) {
    uVar2 = (uint)(byte)puVar12[uVar5] * 0x100 + uVar2;
  }
  return uVar2;
}

