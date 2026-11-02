// rea decompile_all
// name: FUN_00034660
// address: 0x34660
// body: available
// range: 0x34660-0x34785 inclusive
// range: 0x3491c-0x349bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000344fa) */
/* WARNING: Removing unreachable block (ram,0x00034486) */
/* WARNING: Removing unreachable block (ram,0x0003456e) */
/* WARNING: Removing unreachable block (ram,0x000345e2) */
/* WARNING: Removing unreachable block (ram,0x00034412) */
/* WARNING: Removing unreachable block (ram,0x00034656) */
/* WARNING: Removing unreachable block (ram,0x00033e82) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034660(void)

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
  
  iVar4 = FUN_000366e0(DAT_0003478c);
  if (iVar4 != 0) {
    FUN_0002f9bc(DAT_0003478c);
    FUN_0002f9fc(6,s___MM__DELAY_MECHANISM_management_0003489e + 2);
  }
  uVar9 = DAT_0003478c;
  iVar4 = *(int *)(unaff_r5 + 0xc);
  uStack00000008 = iVar4 + 0x30;
  uVar5 = (uint)CONCAT11(*(undefined1 *)(iVar4 + 0x2a),*(undefined1 *)(iVar4 + 0x2b));
  if ((uVar5 == *(ushort *)(*unaff_r4 + 2)) || (uVar5 == DAT_000348d4)) {
    if ((*(byte *)(iVar4 + 0x2e) & 0xf) != 0) {
      if ((*(byte *)(iVar4 + 0x2e) & 0xf) == 1) goto LAB_00034922;
      FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x34));
      FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x1e));
      FUN_00035a48();
      iVar4 = FUN_000366e0();
      if (iVar4 == 0) goto LAB_0002fc58;
      uVar6 = FUN_0002f9bc();
      uVar8 = _DAT_000348e0;
      goto LAB_00031fb0;
    }
    iVar7 = FUN_000366e0(DAT_0003478c);
    if (iVar7 != 0) {
      FUN_0002f9bc(uVar9);
      FUN_0002f9fc(6,s___MM__DELAY_MECHANISM_management_000348e2 + 2);
    }
    uStack00000008 = (uint)*(byte *)(iVar4 + 0x2c) - (uint)*(byte *)(iVar4 + 0x2d) & 0xff;
    FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x1e));
    FUN_00035588();
    iVar7 = FUN_000366e0(uVar9);
    bVar10 = iVar7 == 0;
    if (!bVar10) {
      uVar8 = FUN_0002f9bc(uVar9);
      while( true ) {
        FUN_0002fdfe(uVar8,s_MM__DELAY_MECHANISM_response_man_00034bc4);
        unaff_r6 = uVar9;
LAB_00034922:
        iVar7 = FUN_000366e0(_DAT_00034c04);
        if (iVar7 != 0) {
          FUN_0002f9bc(_DAT_00034c04);
          FUN_0002f9fc(6,s__MM__DELAY_MECHANISM_management_m_00034c07 + 1);
        }
        if (*(uint *)(unaff_r5 + 8) < 0x38) break;
        FUN_0003afe2(*unaff_r4,*(undefined1 *)(*(int *)(unaff_r5 + 0xc) + 0x36));
        uVar9 = (uint)*(byte *)(iVar4 + 0x2c) - (uint)*(byte *)(iVar4 + 0x2d) & 0xff;
        uVar3 = FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x1e));
        FUN_00035588(unaff_r4,uVar3,iVar4 + 0x14,uVar9);
        unaff_r4 = _DAT_00034c04;
        iVar7 = FUN_000366e0(_DAT_00034c04);
        if (iVar7 == 0) goto LAB_0002fc58;
        uVar8 = FUN_0002f9bc(unaff_r4);
      }
      iVar7 = FUN_000366e0(unaff_r6);
      if (iVar7 != 0) {
        FUN_0002f9bc(unaff_r6);
        FUN_0002f9fc(4,_DAT_00034c40);
      }
      FUN_0003b6a2(*(undefined2 *)(uStack00000008 + 4));
      cVar1 = *(char *)(iVar4 + 0x2c);
      cVar2 = *(char *)(iVar4 + 0x2d);
      uVar3 = FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x1e));
      FUN_00035a48(unaff_r4,uVar3,iVar4 + 0x14,cVar1 - cVar2);
      goto LAB_0002fc58;
    }
  }
  else {
    iVar4 = FUN_000366e0();
    bVar10 = iVar4 == 0;
    uVar9 = unaff_r6;
  }
  if (bVar10) {
LAB_0002fc58:
    FUN_000365f4();
    return;
  }
  uVar6 = FUN_0002f9bc(uVar9);
  uVar8 = DAT_000348d8;
LAB_00031fb0:
  FUN_00031c64(uVar6,uVar8);
  return;
}

