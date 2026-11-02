// rea decompile_all
// name: FUN_0002ee6c
// address: 0x2ee6c
// body: available
// range: 0x2ee6c-0x2f071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ee6c(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  int *piVar10;
  bool bVar11;
  uint uStack00000008;
  
  iVar4 = FUN_00030b90(_DAT_0002f0b4);
  if (iVar4 != 0) {
    FUN_00029e6c(_DAT_0002f0b4);
    FUN_00029eac(6,s___MM__LOG_MIN_PDELAY_REQ_INTERVA_0002f0f2 + 2);
  }
  piVar10 = _DAT_0002f0b4;
  iVar4 = *(int *)(unaff_r5 + 0xc);
  uStack00000008 = iVar4 + 0x30;
  uVar5 = (uint)CONCAT11(*(undefined1 *)(iVar4 + 0x2a),*(undefined1 *)(iVar4 + 0x2b));
  if ((uVar5 == *(ushort *)(*unaff_r4 + 2)) || (uVar5 == DAT_0002f134)) {
    if ((*(byte *)(iVar4 + 0x2e) & 0xf) == 0) {
      iVar7 = FUN_00030b90(_DAT_0002f0b4);
      if (iVar7 != 0) {
        FUN_00029e6c(piVar10);
        FUN_00029eac(6,DAT_0002f144);
      }
      uStack00000008 = (uint)*(byte *)(iVar4 + 0x2c) - (uint)*(byte *)(iVar4 + 0x2d) & 0xff;
      FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
      FUN_0002fd0c();
      iVar7 = FUN_00030b90(piVar10);
      bVar11 = true;
      if (iVar7 == 0) goto LAB_0002eec4;
      uVar8 = FUN_00029e6c(piVar10);
      pcVar9 = DAT_0002f148;
    }
    else {
      if ((*(byte *)(iVar4 + 0x2e) & 0xf) != 1) {
        FUN_000358f6(*(undefined2 *)(iVar4 + 0x34));
        FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
        FUN_0002fef8();
        iVar4 = FUN_00030b90();
        if (iVar4 == 0) goto LAB_0002a108;
        uVar6 = FUN_00029e6c();
        uVar8 = DAT_0002f140;
        goto LAB_0002c460;
      }
      iVar7 = FUN_00030b90(_DAT_0002f0b4);
      if (iVar7 != 0) {
        FUN_00029e6c(_DAT_0002f0b4);
        FUN_00029eac(6,DAT_0002f14c);
      }
      if (*(uint *)(unaff_r5 + 8) < 0x38) {
        iVar7 = FUN_00030b90();
        if (iVar7 != 0) {
          FUN_00029e6c();
          FUN_00029eac(4,DAT_0002f150);
        }
LAB_0002efd0:
        FUN_000358f6(*(undefined2 *)(uStack00000008 + 4));
        cVar1 = *(char *)(iVar4 + 0x2c);
        cVar2 = *(char *)(iVar4 + 0x2d);
        uVar3 = FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
        FUN_0002fef8(unaff_r4,uVar3,iVar4 + 0x14,cVar1 - cVar2);
        goto LAB_0002a108;
      }
      FUN_0003553e(*unaff_r4,(int)*(char *)(*(int *)(unaff_r5 + 0xc) + 0x36));
      piVar10 = (int *)((uint)*(byte *)(iVar4 + 0x2c) - (uint)*(byte *)(iVar4 + 0x2d) & 0xff);
      FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
      FUN_0002fd0c();
      unaff_r4 = _DAT_0002f0b4;
      iVar7 = FUN_00030b90(_DAT_0002f0b4);
      if (iVar7 == 0) goto LAB_0002a108;
      uVar8 = FUN_00029e6c(unaff_r4);
      pcVar9 = DAT_0002f148;
    }
    while( true ) {
      FUN_0002a2ae(uVar8,pcVar9);
      iVar7 = FUN_00030b90(_DAT_0002f0b4);
      if (iVar7 != 0) {
        FUN_00029e6c(_DAT_0002f0b4);
        FUN_00029eac(6,s__MM__DELAY_MECHANISM_management_m_0002f0b7 + 1);
      }
      if (*(uint *)(unaff_r5 + 8) < 0x38) {
        iVar7 = FUN_00030b90(piVar10);
        if (iVar7 != 0) {
          FUN_00029e6c(piVar10);
          FUN_00029eac(4,_DAT_0002f0f0);
        }
        goto LAB_0002efd0;
      }
      FUN_00035446(*unaff_r4,*(undefined1 *)(*(int *)(unaff_r5 + 0xc) + 0x36));
      piVar10 = (int *)((uint)*(byte *)(iVar4 + 0x2c) - (uint)*(byte *)(iVar4 + 0x2d) & 0xff);
      uVar3 = FUN_000358f6(*(undefined2 *)(iVar4 + 0x1e));
      FUN_0002fa38(unaff_r4,uVar3,iVar4 + 0x14,piVar10);
      unaff_r4 = _DAT_0002f0b4;
      iVar7 = FUN_00030b90(_DAT_0002f0b4);
      if (iVar7 == 0) break;
      uVar8 = FUN_00029e6c(unaff_r4);
      pcVar9 = s_MM__DELAY_MECHANISM_response_man_0002f074;
    }
  }
  else {
    iVar4 = FUN_00030b90();
    bVar11 = iVar4 == 0;
    piVar10 = unaff_r6;
LAB_0002eec4:
    if (!bVar11) {
      uVar6 = FUN_00029e6c(piVar10);
      uVar8 = DAT_0002f138;
LAB_0002c460:
      FUN_0002c114(uVar6,uVar8);
      return;
    }
  }
LAB_0002a108:
  FUN_00030aa4();
  return;
}

