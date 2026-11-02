// rea decompile_all
// name: FUN_005e1540
// address: 0x5e1540
// body: available
// range: 0x5e1540-0x5e16e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e1540(int param_1,int param_2,int param_3,int param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *in_EDX;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  
  iVar4 = 0;
  if (0 < param_4) {
    do {
      fVar10 = *(float *)(param_3 + iVar4 * 4);
      FUN_004363f0();
      *(float *)(param_3 + iVar4 * 4) = fVar10 + fVar10;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_4);
  }
  iVar4 = 0;
  if (0 < param_1) {
    iVar5 = 0;
    iVar2 = *in_EDX;
    do {
      fVar6 = (float)iVar2 * (3.1415927 / (float)param_2);
      FUN_004363f0();
      iVar3 = 1;
      fVar10 = 0.5;
      fVar6 = fVar6 + fVar6;
      fVar7 = fVar10;
      if (1 < param_4) {
        do {
          fVar10 = fVar10 * (fVar6 - *(float *)(param_3 + -4 + iVar3 * 4));
          iVar1 = iVar3 * 4;
          iVar3 = iVar3 + 2;
          fVar7 = (fVar6 - *(float *)(param_3 + iVar1)) * fVar7;
        } while (iVar3 < param_4);
      }
      if (iVar3 == param_4) {
        fVar8 = fVar6 - *(float *)(param_3 + -4 + iVar3 * 4);
        fVar6 = fVar6 * fVar6;
        fVar8 = fVar8 * fVar10;
        fVar10 = 4.0;
        fVar8 = fVar8 * fVar8;
      }
      else {
        fVar8 = (fVar6 + 2.0) * fVar10 * fVar10;
        fVar10 = 2.0;
      }
      fVar8 = fVar8 + (fVar10 - fVar6) * fVar7 * fVar7;
      FUN_00423c70();
      dVar9 = (double)((param_5 / fVar8 - param_6) * 0.11512925);
      FUN_006f7ee0();
      iVar4 = iVar4 + 1;
      *(float *)(iVar5 + in_ECX) = *(float *)(iVar5 + in_ECX) * (float)dVar9;
      iVar3 = in_EDX[iVar4];
      while (iVar5 = iVar4 * 4, iVar3 == iVar2) {
        iVar4 = iVar4 + 1;
        *(float *)(iVar5 + in_ECX) = *(float *)(iVar5 + in_ECX) * (float)dVar9;
        iVar3 = in_EDX[iVar4];
      }
      iVar2 = iVar3;
    } while (iVar4 < param_1);
  }
  return;
}

