// rea decompile_all
// name: FUN_005dc060
// address: 0x5dc060
// body: available
// range: 0x5dc060-0x5dc33c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_005dc060(int param_1,float *param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  float *pfVar5;
  int iVar6;
  int in_EDX;
  int iVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  size_t asStack_48 [4];
  undefined4 uStack_38;
  float local_18;
  int local_14;
  
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(in_ECX + 4);
  uStack_38 = 0x5dc08a;
  iVar3 = param_7 * -4;
  iVar9 = param_7;
  if (*(int *)(iVar2 + 500) != 0) {
    iVar9 = *(int *)(iVar2 + 0x1f8) - param_6;
  }
  iVar7 = param_7;
  if (iVar9 <= param_7) {
    iVar7 = iVar9;
  }
  local_18 = 0.0;
  local_14 = 0;
  if (0 < iVar7) {
    pfVar5 = param_2;
    iVar9 = iVar7;
    do {
      if ((param_4 == 0) || (*(int *)((param_4 - (int)param_2) + (int)pfVar5) == 0)) {
        fVar10 = *pfVar5 / *(float *)((param_3 - (int)param_2) + (int)pfVar5);
        pfVar1 = (float *)((param_1 - (int)param_2) + (int)pfVar5);
        if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
          asStack_48[4 - param_7] = 0x5dc12f;
          FUN_00423c70();
          fVar10 = fVar10 + 0.5;
          asStack_48[4 - param_7] = 0x5dc13c;
          FUN_00436410();
        }
        else {
          asStack_48[4 - param_7] = 0x5dc114;
          FUN_00423c70();
          fVar10 = fVar10 + 0.5;
          asStack_48[4 - param_7] = 0x5dc121;
          FUN_00436410();
          fVar10 = -fVar10;
        }
        *(int *)((param_8 - (int)param_2) + (int)pfVar5) = (int)fVar10;
      }
      pfVar5 = pfVar5 + 1;
      iVar9 = iVar9 + -1;
      local_14 = iVar7;
    } while (iVar9 != 0);
  }
  fVar10 = 0.0;
  if (local_14 < param_7) {
    piVar8 = (int *)(param_8 + local_14 * 4);
    iVar9 = 0;
    do {
      if ((param_4 == 0) || (*(int *)((param_1 - param_8) + (param_4 - param_1) + (int)piVar8) == 0)
         ) {
        pfVar5 = (float *)(((int)param_2 - param_8) + (int)piVar8);
        fVar11 = *pfVar5 / *(float *)((param_3 - param_8) + (int)piVar8);
        if ((0.25 <= fVar11) || ((param_4 != 0 && (local_14 < in_EDX - param_6)))) {
          pfVar5 = (float *)((param_1 - param_8) + (int)piVar8);
          if (0.0 < *pfVar5 || *pfVar5 == 0.0) {
            asStack_48[4 - param_7] = 0x5dc214;
            FUN_00423c70();
            fVar11 = fVar11 + 0.5;
            asStack_48[4 - param_7] = 0x5dc221;
            FUN_00436410();
          }
          else {
            asStack_48[4 - param_7] = 0x5dc1f9;
            FUN_00423c70();
            fVar11 = fVar11 + 0.5;
            asStack_48[4 - param_7] = 0x5dc206;
            FUN_00436410();
            fVar11 = -fVar11;
          }
          iVar7 = (int)fVar11;
          *piVar8 = iVar7;
          *(float *)(((int)param_2 - param_8) + (int)piVar8) =
               (float)(iVar7 * iVar7) * *(float *)((param_3 - param_8) + (int)piVar8);
          fVar10 = local_18;
        }
        else {
          local_18 = fVar10 + fVar11;
          *(float **)(&stack0xffffffcc + iVar9 * 4 + iVar3) = pfVar5;
          iVar9 = iVar9 + 1;
          fVar10 = local_18;
        }
      }
      local_14 = local_14 + 1;
      piVar8 = piVar8 + 1;
    } while (local_14 < param_7);
    if (iVar9 != 0) {
      asStack_48[4 - param_7] = (size_t)FUN_005dc3a0;
      asStack_48[3 - param_7] = 4;
      asStack_48[2 - param_7] = iVar9;
      asStack_48[1 - param_7] = (size_t)(&stack0xffffffcc + iVar3);
      asStack_48[-param_7] = 0x5dc283;
      _qsort((void *)asStack_48[1 - param_7],asStack_48[2 - param_7],asStack_48[3 - param_7],
             (_PtFuncCompare *)asStack_48[4 - param_7]);
      iVar7 = 0;
      if (0 < iVar9) {
        do {
          iVar6 = *(int *)(&stack0xffffffcc + iVar7 * 4 + iVar3) - (int)param_2 >> 2;
          if ((double)local_18 < *(double *)(iVar2 + 0x200)) {
            *(undefined4 *)(param_8 + iVar6 * 4) = 0;
            param_2[iVar6] = 0.0;
          }
          else {
            local_18 = local_18 - 1.0;
            *(int *)(param_8 + iVar6 * 4) =
                 (int)(float)(*(uint *)(param_1 + iVar6 * 4) & 0xbf800000 | 0x3f800000);
            param_2[iVar6] = *(float *)(param_3 + iVar6 * 4);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar9);
        __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}

