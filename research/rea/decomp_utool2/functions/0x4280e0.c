// rea decompile_all
// name: FUN_004280e0
// address: 0x4280e0
// body: available
// range: 0x4280e0-0x428359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004280e0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd7de;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0x4c);
  *(ulonglong *)(in_ECX + 0x10) = CONCAT44(in_XMM3_Db,in_XMM3_Da);
  local_14 = in_ECX;
  FUN_006374e0(param_1);
  iVar11 = *piVar1;
  if (iVar11 == 0) {
    iVar11 = in_ECX + 0x50;
  }
  iVar8 = *(int *)(in_ECX + 100) >> 5;
  if (-1 < iVar8) {
LAB_00428135:
    uVar2 = *(uint *)(iVar11 + iVar8 * 4);
    if (uVar2 == 0) goto code_r0x0042813c;
    param_1 = (int *)0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> (int)param_1 == 0; param_1 = (int *)((int)param_1 + -1)) {
      }
    }
    piVar9 = param_1 + iVar8 * 8;
    goto LAB_00428144;
  }
LAB_00428141:
  piVar9 = (int *)0xffffffff;
LAB_00428144:
  FUN_0062bb60(*(int *)(in_ECX + 0x24),(int)piVar9 + (1 - *(int *)(in_ECX + 0x24)),0);
  iVar11 = *piVar1;
  if (iVar11 == 0) {
    iVar11 = in_ECX + 0x50;
  }
  iVar8 = *(int *)(in_ECX + 100) >> 5;
  do {
    if (iVar8 < 0) {
      piVar9 = (int *)0xffffffff;
LAB_00428177:
      *(int *)(in_ECX + 0x20) = (int)piVar9 + 1;
      if ((int)piVar9 + 1 == 0) {
        ExceptionList = local_10;
        return true;
      }
      piVar9 = (int *)FUN_004284e0(&param_1);
      local_8 = 0;
      piVar9 = (int *)*piVar9;
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))(piVar9,uVar6);
      }
      piVar3 = *(int **)(in_ECX + 0xc);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *(int **)(in_ECX + 0xc) = piVar9;
      local_8 = 1;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      local_8 = 0xffffffff;
      if ((*(int *)(in_ECX + 0xc) == 0) || (cVar5 = FUN_004286e0(param_2), cVar5 == '\0')) {
        ExceptionList = local_10;
        return false;
      }
      *(undefined1 *)(in_ECX + 0x84) = 0;
      if (*(int *)(in_ECX + 0x70) != 0) {
        FID_conflict__free(*(void **)(in_ECX + 0x6c));
        *(undefined4 *)(in_ECX + 0x6c) = 0;
        *(undefined4 *)(in_ECX + 0x70) = 0;
      }
      *(undefined4 *)(in_ECX + 0x74) = 0;
      iVar11 = 0;
      while( true ) {
        iVar4 = local_14;
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          iVar8 = in_ECX + 0x50;
        }
        iVar10 = *(int *)(in_ECX + 100) >> 5;
        if (-1 < iVar10) break;
LAB_00428264:
        piVar9 = (int *)0xffffffff;
LAB_00428267:
        if ((int)piVar9 < iVar11) {
          iVar11 = (**(code **)(**(int **)(local_14 + 0xc) + 0x14))
                             (*(int **)(local_14 + 0xc),local_1c);
          if (-1 < iVar11) {
            uVar7 = FUN_005c9740();
            *(undefined4 *)(local_14 + 0x30) = uVar7;
          }
          (**(code **)(**(int **)(local_14 + 0xc) + 0x10))
                    (*(int **)(local_14 + 0xc),local_14 + 0x78);
          FUN_004283b0();
          iVar11 = (**(code **)(**(int **)(local_14 + 0xc) + 0x34))
                             (*(int **)(local_14 + 0xc),*(undefined4 *)(local_14 + 0x48));
          ExceptionList = local_10;
          return -1 < iVar11;
        }
        if ((iVar11 <= *(int *)(in_ECX + 100)) && (-1 < iVar11)) {
          iVar8 = *piVar1;
          if (iVar8 == 0) {
            iVar8 = in_ECX + 0x50;
          }
          if ((*(uint *)(iVar8 + (iVar11 >> 5) * 4) & 1 << ((byte)iVar11 & 0x1f)) != 0) {
            iVar8 = *(int *)(local_14 + 0x74);
            iVar10 = iVar8 + 1;
            if (*(int *)(local_14 + 0x70) < iVar10) {
              if (iVar10 < 0) {
                iVar10 = iVar8 + 2;
              }
              FUN_00409cf0((iVar10 >> 1) + iVar8 + 9 & 0xfffffff8);
            }
            iVar8 = *(int *)(iVar4 + 0x74);
            *(int *)(iVar4 + 0x74) = iVar8 + 1;
            piVar9 = (int *)(*(int *)(iVar4 + 0x6c) + iVar8 * 4);
            if (piVar9 != (int *)0x0) {
              *piVar9 = iVar11;
            }
          }
        }
        iVar11 = iVar11 + 1;
      }
LAB_00428258:
      uVar6 = *(uint *)(iVar8 + iVar10 * 4);
      if (uVar6 == 0) goto code_r0x0042825f;
      param_1 = (int *)0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> (int)param_1 == 0; param_1 = (int *)((int)param_1 + -1)) {
        }
      }
      piVar9 = param_1 + iVar10 * 8;
      goto LAB_00428267;
    }
    uVar2 = *(uint *)(iVar11 + iVar8 * 4);
    if (uVar2 != 0) {
      param_1 = (int *)0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> (int)param_1 == 0; param_1 = (int *)((int)param_1 + -1)) {
        }
      }
      piVar9 = param_1 + iVar8 * 8;
      goto LAB_00428177;
    }
    iVar8 = iVar8 + -1;
  } while( true );
code_r0x0042813c:
  iVar8 = iVar8 + -1;
  if (iVar8 < 0) goto LAB_00428141;
  goto LAB_00428135;
code_r0x0042825f:
  iVar10 = iVar10 + -1;
  if (iVar10 < 0) goto LAB_00428264;
  goto LAB_00428258;
}

