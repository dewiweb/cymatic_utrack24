// rea decompile_all
// name: FUN_00643870
// address: 0x643870
// body: available
// range: 0x643870-0x643a7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00643870(undefined4 param_1,undefined4 param_2,int *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  uint uVar8;
  float *pfVar9;
  int *in_ECX;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined4 **ppuVar15;
  int *piVar16;
  undefined4 *local_8;
  
  if (*(int *)(*in_ECX + 8) == 0) {
    ppuVar15 = &local_8;
    piVar16 = in_ECX;
    FUN_004681b0(ppuVar15);
    puVar7 = (undefined4 *)FUN_004682f0(ppuVar15,piVar16);
    uVar2 = *(undefined4 *)(*in_ECX + 8);
    *(undefined4 *)(*in_ECX + 8) = *puVar7;
    *puVar7 = uVar2;
    if (local_8 != (undefined4 *)0x0) {
      LOCK();
      piVar16 = local_8 + 1;
      iVar10 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)*local_8)(1);
      }
    }
  }
  (**(code **)(**(int **)(*in_ECX + 8) + 0x18))(param_1,param_2,param_3);
  uVar3 = param_3[2];
  if (0 < (int)uVar3) {
    iVar11 = *in_ECX;
    iVar4 = *param_3;
    fVar14 = *(float *)(iVar11 + 0x18) * *(float *)(iVar11 + 0x14);
    iVar10 = 0;
    if (*(float *)(iVar11 + 0x1c) == (float)(undefined *)0x0) {
      if (7 < uVar3) {
        iVar10 = 0;
        uVar8 = uVar3 & 0x80000007;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
        }
        do {
          pfVar9 = (float *)(iVar4 + iVar10 * 4);
          fVar13 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar1 = (float *)(iVar4 + iVar10 * 4);
          *pfVar1 = fVar14 * *pfVar9;
          pfVar1[1] = fVar14 * fVar13;
          pfVar1[2] = fVar14 * fVar5;
          pfVar1[3] = fVar14 * fVar6;
          pfVar9 = (float *)(iVar4 + 0x10 + iVar10 * 4);
          fVar13 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar1 = (float *)(iVar4 + 0x10 + iVar10 * 4);
          *pfVar1 = *pfVar9 * fVar14;
          pfVar1[1] = fVar13 * fVar14;
          pfVar1[2] = fVar5 * fVar14;
          pfVar1[3] = fVar6 * fVar14;
          iVar10 = iVar10 + 8;
        } while (iVar10 < (int)(uVar3 - uVar8));
      }
      if (iVar10 < (int)uVar3) {
        if (3 < (int)(uVar3 - iVar10)) {
          iVar11 = iVar10 * 4;
          iVar12 = ((uVar3 - iVar10) - 4 >> 2) + 1;
          iVar10 = iVar10 + iVar12 * 4;
          pfVar9 = (float *)(iVar4 + 8 + iVar11);
          do {
            pfVar9[-2] = pfVar9[-2] * fVar14;
            pfVar9[-1] = pfVar9[-1] * fVar14;
            *pfVar9 = *pfVar9 * fVar14;
            pfVar9[1] = pfVar9[1] * fVar14;
            iVar12 = iVar12 + -1;
            pfVar9 = pfVar9 + 4;
          } while (iVar12 != 0);
        }
        for (; iVar10 < (int)uVar3; iVar10 = iVar10 + 1) {
          *(float *)(iVar4 + iVar10 * 4) = fVar14 * *(float *)(iVar4 + iVar10 * 4);
        }
      }
    }
    else {
      if (3 < (int)uVar3) {
        pfVar9 = (float *)(iVar4 + 8);
        iVar11 = 2;
        iVar12 = iVar10;
        do {
          iVar10 = iVar12 + 4;
          pfVar9[-2] = ((float)iVar12 * *(float *)(*in_ECX + 0x1c) + pfVar9[-2]) * fVar14;
          pfVar9[-1] = ((float)(iVar11 + -1) * *(float *)(*in_ECX + 0x1c) + pfVar9[-1]) * fVar14;
          fVar13 = (float)iVar11;
          iVar12 = iVar11 + 1;
          iVar11 = iVar11 + 4;
          *pfVar9 = (fVar13 * *(float *)(*in_ECX + 0x1c) + *pfVar9) * fVar14;
          pfVar9[1] = ((float)iVar12 * *(float *)(*in_ECX + 0x1c) + pfVar9[1]) * fVar14;
          pfVar9 = pfVar9 + 4;
          iVar12 = iVar10;
        } while (iVar10 < (int)(uVar3 - 3));
      }
      if (iVar10 < (int)uVar3) {
        do {
          *(float *)(iVar4 + iVar10 * 4) =
               ((float)iVar10 * *(float *)(*in_ECX + 0x1c) + *(float *)(iVar4 + iVar10 * 4)) *
               fVar14;
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar3);
        return;
      }
    }
  }
  return;
}

