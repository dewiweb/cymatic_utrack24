// rea decompile_all
// name: FUN_005dd630
// address: 0x5dd630
// body: available
// range: 0x5dd630-0x5dd6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dd630(int param_1,int param_2,int param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  float *pfVar5;
  float fVar6;
  float in_XMM2_Da;
  
  iVar3 = (int)(((in_XMM2_Da + param_4) - 30.0) * 0.1);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (7 < iVar3) {
    iVar3 = 7;
  }
  pfVar5 = *(float **)(in_EDX + iVar3 * 4);
  fVar2 = pfVar5[1];
  iVar4 = (int)*pfVar5;
  iVar3 = (int)(((*pfVar5 - 16.0) * (float)param_3 + (float)param_1) - (float)(param_3 >> 1));
  if (iVar4 < (int)fVar2) {
    pfVar5 = pfVar5 + iVar4 + 2;
    do {
      if ((0 < iVar3) &&
         (fVar6 = *pfVar5 + in_XMM2_Da, pfVar1 = (float *)(in_ECX + iVar3 * 4),
         *pfVar1 <= fVar6 && fVar6 != *pfVar1)) {
        *(float *)(in_ECX + iVar3 * 4) = fVar6;
      }
      iVar3 = iVar3 + param_3;
      if (param_2 <= iVar3) {
        return;
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar4 < (int)fVar2);
  }
  return;
}

