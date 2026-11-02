// rea decompile_all
// name: FUN_0002eb10
// address: 0x2eb10
// body: available
// range: 0x2eb10-0x2ec35 inclusive
// range: 0x2edcc-0x2ee6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0002e9aa) */
/* WARNING: Removing unreachable block (ram,0x0002e936) */
/* WARNING: Removing unreachable block (ram,0x0002ea1e) */
/* WARNING: Removing unreachable block (ram,0x0002ea92) */
/* WARNING: Removing unreachable block (ram,0x0002e8c2) */
/* WARNING: Removing unreachable block (ram,0x0002eb06) */
/* WARNING: Removing unreachable block (ram,0x0002e332) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002eb10(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  uint uVar9;
  bool bVar10;
  uint uStack00000008;
  
  iVar4 = FUN_00030b90(DAT_0002ec3c);
  if (iVar4 != 0) {
    FUN_00029e6c(DAT_0002ec3c);
    FUN_00029eac(6,s___MM__DELAY_MECHANISM_management_0002ed4e + 2);
  }
  uVar9 = DAT_0002ec3c;
  iVar4 = *(int *)(unaff_r5 + 0xc);
  uStack00000008 = iVar4 + 0x30;
  uVar5 = (uint)CONCAT11(*(undefined1 *)(iVar4 + 0x2a),*(undefined1 *)(iVar4 + 0x2b));
  if ((uVar5 == *(ushort *)(*unaff_r4 + 2)) || (uVar5 == DAT_0002ed84)) {
    if ((*(byte *)(iVar4 + 0x2e) & 0xf) != 0) {
      if ((*(byte *)(iVar4 + 0x2e) & 0xf) == 1) goto LAB_0002edd2;
      FUN_000358f6(*(undefined2 *)(iVar4 + 0x34));
      FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
      FUN_0002fef8();
      iVar4 = FUN_00030b90();
      if (iVar4 == 0) goto LAB_0002a108;
      uVar6 = FUN_00029e6c();
      uVar8 = _DAT_0002ed90;
      goto LAB_0002c460;
    }
    iVar7 = FUN_00030b90(DAT_0002ec3c);
    if (iVar7 != 0) {
      FUN_00029e6c(uVar9);
      FUN_00029eac(6,s___MM__DELAY_MECHANISM_management_0002ed92 + 2);
    }
    uStack00000008 = (uint)*(byte *)(iVar4 + 0x2c) - (uint)*(byte *)(iVar4 + 0x2d) & 0xff;
    FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
    FUN_0002fa38();
    iVar7 = FUN_00030b90(uVar9);
    bVar10 = iVar7 == 0;
    if (!bVar10) {
      uVar8 = FUN_00029e6c(uVar9);
      while( true ) {
        FUN_0002a2ae(uVar8,s_MM__DELAY_MECHANISM_response_man_0002f074);
        unaff_r6 = uVar9;
LAB_0002edd2:
        iVar7 = FUN_00030b90(_DAT_0002f0b4);
        if (iVar7 != 0) {
          FUN_00029e6c(_DAT_0002f0b4);
          FUN_00029eac(6,s__MM__DELAY_MECHANISM_management_m_0002f0b7 + 1);
        }
        if (*(uint *)(unaff_r5 + 8) < 0x38) break;
        FUN_00035446(*unaff_r4,*(undefined1 *)(*(int *)(unaff_r5 + 0xc) + 0x36));
        uVar9 = (uint)*(byte *)(iVar4 + 0x2c) - (uint)*(byte *)(iVar4 + 0x2d) & 0xff;
        uVar3 = FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
        FUN_0002fa38(unaff_r4,uVar3,iVar4 + 0x14,uVar9);
        unaff_r4 = _DAT_0002f0b4;
        iVar7 = FUN_00030b90(_DAT_0002f0b4);
        if (iVar7 == 0) goto LAB_0002a108;
        uVar8 = FUN_00029e6c(unaff_r4);
      }
      iVar7 = FUN_00030b90(unaff_r6);
      if (iVar7 != 0) {
        FUN_00029e6c(unaff_r6);
        FUN_00029eac(4,_DAT_0002f0f0);
      }
      FUN_000358f6(*(undefined2 *)(uStack00000008 + 4));
      cVar1 = *(char *)(iVar4 + 0x2c);
      cVar2 = *(char *)(iVar4 + 0x2d);
      uVar3 = FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
      FUN_0002fef8(unaff_r4,uVar3,iVar4 + 0x14,cVar1 - cVar2);
      goto LAB_0002a108;
    }
  }
  else {
    iVar4 = FUN_00030b90();
    bVar10 = iVar4 == 0;
    uVar9 = unaff_r6;
  }
  if (bVar10) {
LAB_0002a108:
    FUN_00030aa4();
    return;
  }
  uVar6 = FUN_00029e6c(uVar9);
  uVar8 = DAT_0002ed88;
LAB_0002c460:
  FUN_0002c114(uVar6,uVar8);
  return;
}

