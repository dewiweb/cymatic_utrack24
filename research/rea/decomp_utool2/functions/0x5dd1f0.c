// rea decompile_all
// name: FUN_005dd1f0
// address: 0x5dd1f0
// body: available
// range: 0x5dd1f0-0x5dd2d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dd1f0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar5 = in_ECX[9];
  iVar6 = 0;
  FUN_005dd2e0(in_ECX[10]);
  iVar5 = (*(int *)in_ECX[5] - (iVar5 >> 1)) - in_ECX[7];
  if (1 < *in_ECX) {
    do {
      iVar3 = (*(int *)(in_ECX[5] + 4 + iVar6 * 4) + *(int *)(in_ECX[5] + iVar6 * 4) >> 1) -
              in_ECX[7];
      fVar2 = *(float *)(in_EDX + iVar5 * 4);
      fVar7 = *(float *)(in_ECX[1] + 0x20);
      if (fVar2 <= *(float *)(in_ECX[1] + 0x20)) {
        fVar7 = fVar2;
      }
      if (iVar5 < iVar3) {
        iVar4 = iVar5 + 1;
        do {
          fVar2 = *(float *)(in_EDX + 4 + iVar5 * 4);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 1;
          if (((-9999.0 < fVar2) && (fVar2 < fVar7)) || (fVar7 == -9999.0)) {
            fVar7 = fVar2;
          }
        } while (iVar4 <= iVar3);
      }
      iVar3 = in_ECX[7];
      if (iVar6 < *in_ECX) {
        do {
          if (iVar3 + iVar5 < *(int *)(in_ECX[5] + iVar6 * 4)) break;
          pfVar1 = (float *)(param_1 + iVar6 * 4);
          if (*pfVar1 <= fVar7 && fVar7 != *pfVar1) {
            *(float *)(param_1 + iVar6 * 4) = fVar7;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *in_ECX);
      }
    } while (iVar6 + 1 < *in_ECX);
  }
  fVar2 = *(float *)(in_EDX + -4 + in_ECX[10] * 4);
  if (iVar6 < *in_ECX) {
    do {
      pfVar1 = (float *)(param_1 + iVar6 * 4);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        *(float *)(param_1 + iVar6 * 4) = fVar2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *in_ECX);
  }
  return;
}

