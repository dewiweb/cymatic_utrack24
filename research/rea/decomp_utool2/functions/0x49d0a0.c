// rea decompile_all
// name: FUN_0049d0a0
// address: 0x49d0a0
// body: available
// range: 0x49d0a0-0x49d33c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049d0a0(float *param_1)

{
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  fVar8 = *param_1 - (float)(*(int *)(in_ECX + 0x110) / 2 + *(int *)(in_ECX + 0x108));
  fVar7 = param_1[1] - (float)(*(int *)(in_ECX + 0x114) / 2 + *(int *)(in_ECX + 0x10c));
  if (25.0 < fVar7 * fVar7 + fVar8 * fVar8) {
    fVar1 = (float10)FUN_006f6f4a();
    uVar10 = 0;
    uVar11 = 0;
    for (dVar6 = (double)fVar1; dVar6 < 0.0; dVar6 = dVar6 + 6.283185307179586) {
    }
    if ((*(char *)(in_ECX + 0xdc) == '\0') || (*(char *)((int)param_1 + 0x3d) == '\0')) {
      fVar7 = *(float *)(in_ECX + 0xd4);
      if (dVar6 < (double)fVar7) {
        do {
          dVar6 = dVar6 + 6.283185307179586;
        } while (dVar6 < (double)fVar7);
      }
      fVar8 = *(float *)(in_ECX + 0xd8);
      dVar3 = dVar6;
      if ((double)fVar8 < dVar6) {
        dVar3 = (double)fVar7;
        dVar4 = ABS(dVar6 - dVar3);
        dVar5 = ABS((dVar6 + 6.283185307179586) - dVar3);
        dVar3 = ABS((dVar3 + 6.283185307179586) - dVar6);
        if (dVar4 <= dVar5) {
          if (dVar4 <= dVar3) {
            dVar3 = dVar4;
          }
        }
        else if (dVar5 <= dVar3) {
          dVar3 = dVar5;
        }
        dVar5 = (double)fVar8;
        dVar9 = ABS((dVar6 + 6.283185307179586) - dVar5);
        dVar4 = ABS((dVar5 + 6.283185307179586) - dVar6);
        dVar6 = ABS(dVar6 - dVar5);
        if (dVar6 <= dVar9) {
          if (dVar6 <= dVar4) {
            dVar4 = dVar6;
          }
        }
        else if (dVar9 <= dVar4) {
          dVar4 = dVar9;
        }
        if (dVar4 < dVar3) {
          dVar3 = (double)fVar8;
        }
        else {
          dVar3 = (double)fVar7;
        }
      }
    }
    else {
      dVar3 = *(double *)(in_ECX + 0xa8);
      if (3.141592653589793 < ABS(dVar6 - dVar3)) {
        if (dVar6 < dVar3) {
          dVar6 = dVar6 + 6.283185307179586;
        }
        else {
          dVar6 = dVar6 - 6.283185307179586;
        }
      }
      fVar8 = *(float *)(in_ECX + 0xd8);
      fVar7 = *(float *)(in_ECX + 0xd4);
      if (dVar6 < dVar3) {
        fVar2 = fVar8;
        if (fVar7 <= fVar8) {
          fVar2 = fVar7;
        }
        dVar3 = (double)fVar2;
        if ((double)fVar2 <= dVar6) {
          dVar3 = dVar6;
        }
      }
      else {
        fVar2 = fVar8;
        if (fVar8 <= fVar7) {
          fVar2 = fVar7;
        }
        dVar3 = (double)fVar2;
        if (dVar6 <= (double)fVar2) {
          dVar3 = dVar6;
        }
      }
    }
    dVar6 = (dVar3 - (double)fVar7) / (double)(fVar8 - fVar7);
    if (0.0 <= dVar6) {
      dVar3 = 1.0;
      if (dVar6 <= 1.0) {
        dVar3 = dVar6;
      }
      uVar10 = SUB84(dVar3,0);
      uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    fVar1 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 0xc4))(CONCAT44(uVar11,uVar10));
    *(double *)(in_ECX + 0x90) = (double)fVar1;
    *(ulonglong *)(in_ECX + 0xa8) = CONCAT44(unaff_ESI,unaff_EDI);
  }
  return;
}

