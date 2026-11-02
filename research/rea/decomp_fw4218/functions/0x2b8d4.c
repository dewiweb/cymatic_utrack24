// rea decompile_all
// name: FUN_0002b8d4
// address: 0x2b8d4
// body: available
// range: 0x2b8d4-0x2ba9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0002b8d4(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_28;
  
  local_28 = 0;
  lVar16 = FUN_000034e8(*param_4,param_4[1]);
  iVar7 = DAT_0002baa0;
  iVar5 = (int)((ulonglong)lVar16 >> 0x20);
  bVar1 = *(byte *)(DAT_0002baa0 + 0xc);
  uVar13 = (uint)(lVar16 >> 0x10);
  iVar14 = (int)((ulonglong)(lVar16 >> 0x10) >> 0x20);
  if (bVar1 < 5) {
    iVar5 = FUN_001c7000(bVar1);
    *(longlong *)(DAT_0002baa4 + iVar5 * 8) = lVar16;
    *(byte *)(iVar7 + 0xc) = bVar1 + 1;
    *(longlong *)param_2 = lVar16;
    return 1;
  }
  if ((int)(-(uint)(DAT_0002baa8 < uVar13) - iVar14) < 0 ==
      (SBORROW4(0,iVar14) != SBORROW4(-iVar14,(uint)(DAT_0002baa8 < uVar13)))) {
    lVar17 = FUN_000034e8(*param_3 - (uint)lVar16,
                          (param_3[1] - iVar5) - (uint)(*param_3 < (uint)lVar16));
    uVar6 = (uint)(lVar17 >> 0x10);
    iVar8 = (int)((ulonglong)(lVar17 >> 0x10) >> 0x20);
    iVar7 = FUN_000366e0(_DAT_0002baac);
    if (iVar7 != 0) {
      FUN_0002f9d4(s__CLOCKITF__Current_peer_mean_pat_0002baaf + 1,*param_3,
                   *param_3 >> 0x10 | param_3[1] << 0x10,(int)param_3[1] >> 0x10);
      FUN_0002f9d4(s_CLOCKITF__Current_measured_peer_d_0002bae0,extraout_r1,uVar13,iVar14);
      FUN_0002f9d4(s_CLOCKITF__Current_difference___l_0002bb10,extraout_r1_00,uVar6,iVar8);
    }
    uVar18 = FUN_00002760(*param_3 >> 0x10 | param_3[1] << 0x10,(int)param_3[1] >> 0x10,DAT_0002baa8
                          ,0);
    iVar9 = (int)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_00002760(uVar13,iVar14,DAT_0002baa8,0);
    iVar7 = DAT_0002baa0;
    iVar14 = (int)((ulonglong)uVar19 >> 0x20);
    bVar15 = (uint)uVar18 < (uint)uVar19;
    if ((int)((iVar9 - iVar14) - (uint)bVar15) < 0 ==
        (SBORROW4(iVar9,iVar14) != SBORROW4(iVar9 - iVar14,(uint)bVar15))) {
      bVar1 = *(byte *)(DAT_0002baa0 + 0xb);
      uVar13 = 8000 << (uint)bVar1;
      if ((int)(-(uint)(uVar13 < uVar6) - iVar8) < 0 ==
          (SBORROW4(0,iVar8) != SBORROW4(-iVar8,(uint)(uVar13 < uVar6)))) {
        if (bVar1 != 0) {
          *(byte *)(DAT_0002baa0 + 0xb) = bVar1 - 1;
        }
        cVar2 = *(char *)(iVar7 + 10);
        iVar8 = FUN_001c7000(cVar2,uVar13 - uVar6);
        iVar14 = DAT_0002baa4;
        plVar11 = (longlong *)(DAT_0002baa4 + iVar8 * 8);
        *plVar11 = lVar16;
        uVar4 = FUN_001c7000(cVar2 + '\x01',iVar5,plVar11 + 1);
        *(undefined1 *)(iVar7 + 10) = uVar4;
        uVar3 = _DAT_0002baac;
        iVar7 = FUN_000366e0(_DAT_0002baac);
        if (iVar7 != 0) {
          FUN_0002f9bc(uVar3);
          FUN_0002f9fc(6,s_CLOCKITF__Calculating_new_peer_m_0002bb38);
        }
        *param_2 = 0;
        param_2[1] = 0;
        do {
          puVar10 = (uint *)(iVar14 + local_28 * 8);
          uVar12 = *param_2;
          uVar6 = *puVar10;
          uVar13 = puVar10[1];
          *param_2 = uVar12 + uVar6;
          param_2[1] = param_2[1] + uVar13 + (uint)CARRY4(uVar12,uVar6);
          iVar7 = FUN_000366e0(uVar3);
          if (iVar7 != 0) {
            puVar10 = (uint *)(iVar14 + local_28 * 8);
            uVar6 = *puVar10;
            uVar13 = puVar10[1];
            FUN_0002f9d4(s_CLOCKITF___llins_0002bb68,uVar6,uVar6 >> 0x10 | uVar13 << 0x10,
                         (int)uVar13 >> 0x10);
          }
          local_28 = local_28 + 1;
        } while (local_28 < 5);
        uVar18 = FUN_00002760(*param_2,param_2[1],5,0);
        *(undefined8 *)param_2 = uVar18;
        iVar7 = FUN_000366e0(uVar3,(int)((ulonglong)uVar18 >> 0x20),param_2 + 2);
        if (iVar7 == 0) {
          return 1;
        }
        FUN_0002f9d4(s_CLOCKITF__New_peer_mean_path_del_0002bb7c,*param_2,
                     *param_2 >> 0x10 | param_2[1] << 0x10,(int)param_2[1] >> 0x10);
        return 1;
      }
    }
    if (3 < *(byte *)(DAT_0002baa0 + 0xb)) {
      *(undefined1 *)(DAT_0002baa0 + 0xb) = 0;
      uVar13 = param_4[1];
      *param_2 = *param_4;
      param_2[1] = uVar13;
      return 1;
    }
    *(byte *)(DAT_0002baa0 + 0xb) = *(byte *)(DAT_0002baa0 + 0xb) + 1;
  }
  else {
    *(undefined1 *)(DAT_0002baa0 + 0xb) = 0;
  }
  return 0;
}

