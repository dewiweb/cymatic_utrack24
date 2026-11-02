// rea decompile_all
// name: FUN_001de9a4
// address: 0x1de9a4
// body: available
// range: 0x1a4368-0x1a468b inclusive
// range: 0x1de9a4-0x1dea0f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001de9a4(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 unaff_r4;
  undefined4 in_cr7;
  
  if ((*_DAT_001dea10 == 0) || ((*_DAT_001dea10 & 0x3fff) != 0)) {
    FUN_001eec38(s_slu_MMU_cpp_001dea40,DAT_001dea3c,
                 s___pagetable_NULL_or_not_on_16kB_b_001dea12 + 2);
  }
  piVar1 = DAT_001a468c;
  coprocessor_moveto(0xf,0,0,0,in_cr7,in_cr7);
  uVar10 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar10 & 0xffffeffa);
  coprocessor_moveto(0xf,0,0,0,in_cr7,in_cr7);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  iVar11 = *DAT_001a468c;
  coproc_moveto_Translation_table_base_0(iVar11);
  iVar2 = DAT_001a4690;
  do {
    *(uint *)(iVar11 + iVar2 * 4) = iVar2 << 0x14 | 0x1f2;
    puVar8 = DAT_001a4694;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  uVar10 = DAT_001a4698 & 0xfff00000;
  *(uint *)(*piVar1 + (DAT_001a4698 >> 0x14) * 4) = (uint)DAT_001a4694 & 0xfffffc00 | 0x1f1;
  uVar14 = 0;
  uVar10 = uVar10 | 1;
  do {
    uVar12 = 0;
    puVar3 = puVar8;
    do {
      uVar12 = uVar12 + 1;
      puVar8 = puVar3 + 1;
      *puVar3 = uVar10;
      puVar4 = DAT_001a469c;
      puVar3 = puVar8;
    } while (uVar12 < 0x10);
    uVar14 = uVar14 + 1;
    uVar10 = uVar10 + 0x10000;
  } while (uVar14 < 0x10);
  uVar14 = 0;
  uVar10 = DAT_001a46a0 & 0xfff00000 | 1;
  *(uint *)(*piVar1 + (DAT_001a46a0 >> 0x14) * 4) = (uint)DAT_001a469c & 0xfffffc00 | 0x1f1;
  do {
    uVar12 = 0;
    puVar8 = puVar4;
    do {
      uVar12 = uVar12 + 1;
      puVar4 = puVar8 + 1;
      *puVar8 = uVar10;
      puVar8 = puVar4;
    } while (uVar12 < 0x10);
    uVar14 = uVar14 + 1;
    uVar10 = uVar10 + 0x10000;
  } while (uVar14 < 0x10);
  piVar5 = (int *)FUN_00011c70();
  if (*(char *)((int)piVar5 + 5) == '\0') {
    if (piVar5[0x36] != 0) {
      iVar2 = piVar5[0x37] << 0x14;
      FUN_001a4774(0x40000000,iVar2,1,1,unaff_r4);
      uVar7 = 0x50000000;
LAB_001a456c:
      FUN_001a4774(uVar7,iVar2,0,1,unaff_r4);
    }
LAB_001a4570:
    FUN_001a46b8(DAT_001a4698,DAT_001a46a4 - DAT_001a4698,1);
    FUN_001a46b8(DAT_001a46a0,DAT_001a46a8 - DAT_001a46a0,0,1);
    FUN_001a46b8(DAT_001a46b0,DAT_001a46ac - DAT_001a46b0,1);
    iVar2 = DAT_001a46b4;
    iVar11 = *piVar1;
    uVar10 = 0;
    do {
      puVar8 = (uint *)(iVar2 + uVar10 * 8);
      uVar12 = puVar8[1];
      uVar14 = *puVar8 & 0xfff00000;
      do {
        uVar9 = uVar14 + 0x100000;
        *(uint *)(iVar11 + (uVar14 >> 0x14) * 4) =
             uVar14 | *(uint *)(iVar11 + (uVar14 >> 0x14) * 4) & 0xffff3 | 0xc00;
        uVar14 = uVar9;
      } while ((uVar9 == 0 || uVar9 <= uVar12) && (uVar9 != 0 && uVar12 != uVar9));
      uVar10 = uVar10 + 1;
    } while (uVar10 < 9);
    coproc_moveto_Domain_Access_Control(0x40000000);
    uVar10 = coproc_movefrom_Control();
    coproc_moveto_Control(uVar10 & 0xffffeffb | 1);
    uVar10 = coproc_movefrom_Control();
    coproc_moveto_Control(uVar10 | 0x1004);
    return uVar10 | 0x1004;
  }
  iVar2 = 0;
LAB_001a4510:
  iVar11 = 0x40000000;
  piVar6 = piVar5 + 2;
LAB_001a448c:
  do {
    if (*piVar6 != 0) {
      iVar13 = piVar6[1];
      FUN_001a4774(iVar11,iVar13 << 10,(char)piVar6[0xc],*(undefined1 *)((int)piVar6 + 0x31),
                   unaff_r4);
      FUN_001a4774(iVar11 + 0x10000000,iVar13 << 10,0);
    }
    do {
      iVar2 = iVar2 + 1;
      if (3 < iVar2) {
        if (piVar5[0x36] == 0) goto LAB_001a4570;
        iVar2 = piVar5[0x37] << 0x14;
        FUN_001a4774(0x60000000,iVar2,1,1,unaff_r4);
        uVar7 = 0x70000000;
        goto LAB_001a456c;
      }
      if (iVar2 == 0) goto LAB_001a4510;
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          piVar6 = piVar5 + 0x1c;
          iVar11 = *piVar5 * 0x400 + 0x40000000;
        }
        else {
          piVar6 = piVar5 + 0x29;
          iVar11 = *piVar5 * 0x800 + 0x40000000;
        }
        goto LAB_001a448c;
      }
    } while ((char)piVar5[1] != '\0');
    iVar11 = 0x60000000;
    piVar6 = piVar5 + 0xf;
  } while( true );
}

