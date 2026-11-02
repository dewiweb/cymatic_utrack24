// rea decompile_all
// name: FUN_005d9cd0
// address: 0x5d9cd0
// body: available
// range: 0x5d9cd0-0x5d9f7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005d9cd0(int param_1,int *param_2,int *param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  void *_Dst;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int local_1c;
  int local_c;
  
  uVar4 = param_5;
  iVar13 = 0;
  if (0 < (int)param_5) {
    iVar3 = 0;
    if (7 < param_5) {
      uVar5 = param_5 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar14 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      do {
        piVar1 = (int *)(param_4 + iVar13 * 4);
        piVar2 = (int *)(param_4 + 0x10 + iVar13 * 4);
        iVar13 = iVar13 + 8;
        uVar19 = uVar19 & -(uint)(*piVar1 == 0) | ~-(uint)(*piVar1 == 0) & uVar19 + 1;
        uVar20 = uVar20 & -(uint)(piVar1[1] == 0) | ~-(uint)(piVar1[1] == 0) & uVar20 + 1;
        uVar21 = uVar21 & -(uint)(piVar1[2] == 0) | ~-(uint)(piVar1[2] == 0) & uVar21 + 1;
        uVar22 = uVar22 & -(uint)(piVar1[3] == 0) | ~-(uint)(piVar1[3] == 0) & uVar22 + 1;
        uVar14 = uVar14 & -(uint)(*piVar2 == 0) | ~-(uint)(*piVar2 == 0) & uVar14 + 1;
        uVar16 = uVar16 & -(uint)(piVar2[1] == 0) | ~-(uint)(piVar2[1] == 0) & uVar16 + 1;
        uVar17 = uVar17 & -(uint)(piVar2[2] == 0) | ~-(uint)(piVar2[2] == 0) & uVar17 + 1;
        uVar18 = uVar18 & -(uint)(piVar2[3] == 0) | ~-(uint)(piVar2[3] == 0) & uVar18 + 1;
      } while (iVar13 < (int)(param_5 - uVar5));
      iVar3 = uVar14 + uVar19 + uVar17 + uVar21 + uVar16 + uVar20 + uVar18 + uVar22;
    }
    while (iVar6 = iVar3, iVar13 < (int)param_5) {
      iVar9 = iVar13 * 4;
      iVar13 = iVar13 + 1;
      iVar3 = iVar6 + 1;
      if (*(int *)(param_4 + iVar9) == 0) {
        iVar3 = iVar6;
      }
    }
    if (iVar6 != 0) {
      piVar1 = (int *)*param_2;
      iVar13 = piVar1[3];
      iVar3 = piVar1[2];
      iVar6 = (piVar1[1] - *piVar1) / iVar3;
      if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x48) + 8) {
        if (*(int *)(param_1 + 0x44) != 0) {
          puVar7 = (undefined4 *)FUN_004c554b(8);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48);
          puVar7[1] = *(undefined4 *)(param_1 + 0x54);
          *puVar7 = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 **)(param_1 + 0x54) = puVar7;
        }
        *(undefined4 *)(param_1 + 0x4c) = 8;
        uVar8 = FUN_004c554b(8);
        *(undefined4 *)(param_1 + 0x44) = uVar8;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      piVar2 = (int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48));
      iVar9 = *(int *)(param_1 + 0x48) + 8;
      *(int *)(param_1 + 0x48) = iVar9;
      uVar5 = iVar6 * 4 + 7U & 0xfffffff8;
      if (*(int *)(param_1 + 0x4c) < (int)(iVar9 + uVar5)) {
        if (*(int *)(param_1 + 0x44) != 0) {
          puVar7 = (undefined4 *)FUN_004c554b(8);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48);
          puVar7[1] = *(undefined4 *)(param_1 + 0x54);
          *puVar7 = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 **)(param_1 + 0x54) = puVar7;
        }
        *(uint *)(param_1 + 0x4c) = uVar5;
        uVar8 = FUN_004c554b(uVar5);
        *(undefined4 *)(param_1 + 0x44) = uVar8;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      _Dst = (void *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48));
      *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + uVar5;
      *piVar2 = (int)_Dst;
      _memset(_Dst,0,iVar6 * 4);
      local_1c = 0;
      param_5 = *piVar1 / (int)param_5;
      if (0 < iVar6) {
        do {
          iVar9 = 0;
          iVar15 = 0;
          local_c = 0;
          if (0 < iVar3) {
            do {
              uVar5 = *(uint *)(*param_3 + param_5 * 4);
              uVar14 = (int)uVar5 >> 0x1f;
              iVar10 = (uVar5 ^ uVar14) - uVar14;
              if (iVar15 < iVar10) {
                iVar15 = iVar10;
              }
              iVar10 = 1;
              if (1 < (int)uVar4) {
                do {
                  uVar5 = *(uint *)(param_3[iVar10] + param_5 * 4);
                  uVar14 = (int)uVar5 >> 0x1f;
                  iVar11 = (uVar5 ^ uVar14) - uVar14;
                  if (iVar9 < iVar11) {
                    iVar9 = iVar11;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < (int)uVar4);
              }
              local_c = local_c + uVar4;
              param_5 = param_5 + 1;
            } while (local_c < iVar3);
          }
          iVar10 = 0;
          if (0 < iVar13 + -1) {
            piVar12 = piVar1 + 0x286;
            do {
              if ((iVar15 <= piVar12[-0x40]) && (iVar9 <= *piVar12)) break;
              iVar10 = iVar10 + 1;
              piVar12 = piVar12 + 1;
            } while (iVar10 < iVar13 + -1);
          }
          *(int *)(*piVar2 + local_1c * 4) = iVar10;
          local_1c = local_1c + 1;
        } while (local_1c < iVar6);
      }
      param_2[10] = param_2[10] + 1;
      return piVar2;
    }
  }
  return (int *)0x0;
}

