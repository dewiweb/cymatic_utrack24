// rea decompile_all
// name: FUN_00601000
// address: 0x601000
// body: available
// range: 0x601000-0x60122a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00601000(int *param_1,int param_2,int param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int *in_ECX;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 *local_8;
  
  piVar4 = (int *)FUN_00424fd0(&local_8);
  iVar3 = *piVar4;
  if (local_8 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_8 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_8)(1);
    }
  }
  if (iVar3 != 0) {
    piVar4 = (int *)(*(int **)(iVar3 + 0xc))[3];
    iVar1 = *piVar4;
    if (**(int **)(iVar3 + 0xc) < 2) {
      iVar7 = 0;
    }
    else {
      iVar7 = piVar4[1];
    }
    *(undefined1 *)(param_1 + 0x25) = 0;
    pfVar5 = (float *)(*(int *)param_1[3] + param_2 * 4);
    if (*param_1 < 2) {
      pfVar6 = (float *)0x0;
    }
    else {
      *(undefined1 *)(param_1 + 0x25) = 0;
      pfVar6 = (float *)(((int *)param_1[3])[1] + param_2 * 4);
    }
    param_3 = param_3 + -1;
    if (-1 < param_3) {
      while( true ) {
        iVar8 = (int)*(double *)(in_ECX + 0x32);
        fVar11 = (float)(*(double *)(in_ECX + 0x32) - (double)iVar8);
        fVar9 = *(float *)(iVar1 + 4 + iVar8 * 4) * fVar11 +
                *(float *)(iVar1 + iVar8 * 4) * (1.0 - fVar11);
        fVar10 = fVar9;
        if (iVar7 != 0) {
          fVar10 = *(float *)(iVar7 + 4 + iVar8 * 4) * fVar11 +
                   (1.0 - fVar11) * *(float *)(iVar7 + iVar8 * 4);
        }
        fVar9 = (float)in_ECX[0x34] * fVar9;
        fVar10 = (float)in_ECX[0x35] * fVar10;
        if ((char)in_ECX[0x39] == '\0') break;
        fVar11 = (float)in_ECX[0x36];
        fVar10 = fVar10 * fVar11;
        fVar9 = fVar9 * fVar11;
        in_ECX[0x36] = (int)((float)in_ECX[0x37] + fVar11);
        if (1.0 <= (float)in_ECX[0x37] + fVar11) {
          in_ECX[0x36] = 0x3f800000;
          *(undefined1 *)(in_ECX + 0x39) = 0;
        }
LAB_006011a1:
        if (pfVar6 == (float *)0x0) {
          *pfVar5 = (fVar10 + fVar9) * 0.5 + *pfVar5;
        }
        else {
          *pfVar5 = *pfVar5 + fVar9;
          *pfVar6 = *pfVar6 + fVar10;
          pfVar6 = pfVar6 + 1;
        }
        dVar2 = *(double *)(in_ECX + 0x32);
        *(double *)(in_ECX + 0x32) = *(double *)(in_ECX + 0x30) + dVar2;
        if ((double)*(int *)(iVar3 + 0x38) < *(double *)(in_ECX + 0x30) + dVar2) goto LAB_00601211;
        pfVar5 = pfVar5 + 1;
        param_3 = param_3 + -1;
        if (param_3 < 0) {
          return;
        }
      }
      if (*(char *)((int)in_ECX + 0xe5) == '\0') goto LAB_006011a1;
      fVar11 = (float)in_ECX[0x36];
      fVar10 = fVar10 * fVar11;
      fVar9 = fVar9 * fVar11;
      in_ECX[0x36] = (int)((float)in_ECX[0x38] + fVar11);
      if (0.0 < (float)in_ECX[0x38] + fVar11) goto LAB_006011a1;
LAB_00601211:
      (**(code **)(*in_ECX + 0xc))(0,0);
    }
  }
  return;
}

