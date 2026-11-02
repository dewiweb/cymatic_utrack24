// rea decompile_all
// name: FUN_005e3e30
// address: 0x5e3e30
// body: available
// range: 0x5e3e30-0x5e40fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_005e3e30(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int in_EDX;
  int iVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar20;
  uint uVar21;
  undefined1 auVar18 [16];
  uint uVar22;
  undefined1 auVar19 [16];
  int local_14;
  
  uVar8 = *(uint *)(in_EDX + 0x504);
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
                    /* WARNING: Read-only address (ram,0x00c24700) is written */
    return (uint *)0x0;
  }
  puVar6 = (uint *)FUN_005e9360();
  auVar5 = _DAT_00c24700;
  if ((int)uVar8 < 1) {
    return puVar6;
  }
  if ((7 < uVar8) && (1 < DAT_00c89e14)) {
    local_14 = 0;
    if ((puVar6 <= param_2 + (uVar8 - 1)) && (param_2 <= puVar6 + (uVar8 - 1))) goto LAB_005e4072;
    if ((param_1 + (uVar8 - 1) < puVar6) || (puVar6 + (uVar8 - 1) < param_1)) {
      uVar7 = uVar8 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      auVar4._4_4_ = param_3;
      auVar4._0_4_ = param_3;
      auVar4._8_4_ = param_3;
      auVar4._12_4_ = param_3;
      local_14 = 0;
      puVar9 = puVar6;
      pauVar11 = (undefined1 (*) [16])(param_2 + 4);
      do {
        puVar1 = puVar9 + 8;
        pauVar2 = pauVar11 + 2;
        local_14 = local_14 + 8;
        auVar12 = pmulld(auVar5 & pauVar11[-1],auVar4);
        auVar18._4_4_ = 0x10000 - param_3;
        auVar18._0_4_ = 0x10000 - param_3;
        auVar18._8_4_ = 0x10000 - param_3;
        auVar18._12_4_ = 0x10000 - param_3;
        auVar18 = pmulld(*(undefined1 (*) [16])((int)param_1 + (-0x20 - (int)puVar6) + (int)puVar1)
                         & auVar5,auVar18);
        uVar17 = auVar18._0_4_ + auVar12._0_4_ + 0x8000 >> 0x10;
        uVar20 = auVar18._4_4_ + auVar12._4_4_ + 0x8000 >> 0x10;
        uVar21 = auVar18._8_4_ + auVar12._8_4_ + 0x8000 >> 0x10;
        uVar22 = auVar18._12_4_ + auVar12._12_4_ + 0x8000 >> 0x10;
        *puVar9 = uVar17;
        puVar9[1] = uVar20;
        puVar9[2] = uVar21;
        puVar9[3] = uVar22;
        puVar3 = (uint *)((int)param_1 + (-0x20 - (int)puVar6) + (int)puVar1);
        uVar13 = ~-(uint)((*(uint *)pauVar11[-1] & 0x8000) == 0) &
                 (-(uint)((*puVar3 & 0x8000) == 0) ^ 0xffffffff);
        uVar14 = ~-(uint)((*(uint *)(pauVar11[-1] + 4) & 0x8000) == 0) &
                 (-(uint)((puVar3[1] & 0x8000) == 0) ^ 0xffffffff);
        uVar15 = ~-(uint)((*(uint *)(pauVar11[-1] + 8) & 0x8000) == 0) &
                 (-(uint)((puVar3[2] & 0x8000) == 0) ^ 0xffffffff);
        uVar16 = ~-(uint)((*(uint *)(pauVar11[-1] + 0xc) & 0x8000) == 0) &
                 (-(uint)((puVar3[3] & 0x8000) == 0) ^ 0xffffffff);
        *puVar9 = (uVar17 | 0x8000) & uVar13 | ~uVar13 & uVar17;
        puVar9[1] = (uVar20 | 0x8000) & uVar14 | ~uVar14 & uVar20;
        puVar9[2] = (uVar21 | 0x8000) & uVar15 | ~uVar15 & uVar21;
        puVar9[3] = (uVar22 | 0x8000) & uVar16 | ~uVar16 & uVar22;
        auVar19 = pmulld(auVar5 & *pauVar11,auVar4);
        auVar12._4_4_ = 0x10000 - param_3;
        auVar12._0_4_ = 0x10000 - param_3;
        auVar12._8_4_ = 0x10000 - param_3;
        auVar12._12_4_ = 0x10000 - param_3;
        auVar18 = pmulld(auVar5 & *(undefined1 (*) [16])
                                   ((int)param_1 + (-0x20 - (int)param_2) + (int)pauVar2),auVar12);
        uVar17 = auVar19._0_4_ + auVar18._0_4_ + 0x8000 >> 0x10;
        uVar20 = auVar19._4_4_ + auVar18._4_4_ + 0x8000 >> 0x10;
        uVar21 = auVar19._8_4_ + auVar18._8_4_ + 0x8000 >> 0x10;
        uVar22 = auVar19._12_4_ + auVar18._12_4_ + 0x8000 >> 0x10;
        puVar9 = (uint *)((int)puVar6 + (-0x20 - (int)param_2) + (int)pauVar2);
        *puVar9 = uVar17;
        puVar9[1] = uVar20;
        puVar9[2] = uVar21;
        puVar9[3] = uVar22;
        puVar9 = (uint *)((int)param_1 + (-0x20 - (int)param_2) + (int)pauVar2);
        uVar13 = ~-(uint)((*(uint *)*pauVar11 & 0x8000) == 0) &
                 (-(uint)((*puVar9 & 0x8000) == 0) ^ 0xffffffff);
        uVar14 = ~-(uint)((*(uint *)(*pauVar11 + 4) & 0x8000) == 0) &
                 (-(uint)((puVar9[1] & 0x8000) == 0) ^ 0xffffffff);
        uVar15 = ~-(uint)((*(uint *)(*pauVar11 + 8) & 0x8000) == 0) &
                 (-(uint)((puVar9[2] & 0x8000) == 0) ^ 0xffffffff);
        uVar16 = ~-(uint)((*(uint *)(*pauVar11 + 0xc) & 0x8000) == 0) &
                 (-(uint)((puVar9[3] & 0x8000) == 0) ^ 0xffffffff);
        puVar9 = (uint *)((int)puVar6 + (-0x20 - (int)param_2) + (int)pauVar2);
        *puVar9 = (uVar17 | 0x8000) & uVar13 | ~uVar13 & uVar17;
        puVar9[1] = (uVar20 | 0x8000) & uVar14 | ~uVar14 & uVar20;
        puVar9[2] = (uVar21 | 0x8000) & uVar15 | ~uVar15 & uVar21;
        puVar9[3] = (uVar22 | 0x8000) & uVar16 | ~uVar16 & uVar22;
        puVar9 = puVar1;
        pauVar11 = pauVar2;
      } while (local_14 < (int)(uVar8 - uVar7));
      goto LAB_005e4072;
    }
  }
  local_14 = 0;
LAB_005e4072:
  if (local_14 < (int)uVar8) {
    iVar10 = uVar8 - local_14;
    puVar9 = param_2 + local_14;
    do {
      uVar8 = (int)((*puVar9 & 0x7fff) * param_3 +
                   (*(uint *)(((int)param_1 - (int)param_2) + (int)puVar9) & 0x7fff) *
                   (0x10000 - param_3) + 0x8000) >> 0x10;
      *(uint *)(((int)puVar6 - (int)param_2) + (int)puVar9) = uVar8;
      if (((*(uint *)(((int)param_1 - (int)param_2) + (int)puVar9) & 0x8000) != 0) &&
         ((*puVar9 & 0x8000) != 0)) {
        *(uint *)(((int)puVar6 - (int)param_2) + (int)puVar9) = uVar8 | 0x8000;
      }
      puVar9 = puVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    return puVar6;
  }
  return puVar6;
}

