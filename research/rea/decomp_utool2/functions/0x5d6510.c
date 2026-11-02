// rea decompile_all
// name: FUN_005d6510
// address: 0x5d6510
// body: available
// range: 0x5d6510-0x5d65d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d6510(int param_1,int param_2,double param_3)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  float *pfVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = (int)param_3;
  dVar6 = *(double *)(param_2 + 8 + iVar5 * 8) * (param_3 - (double)iVar5) +
          (1.0 - (param_3 - (double)iVar5)) * *(double *)(param_2 + iVar5 * 8);
  iVar5 = (int)dVar6;
  dVar6 = dVar6 - (double)iVar5;
  if ((dVar6 == 0.0) && (0 < iVar5)) {
    iVar5 = iVar5 + -1;
    dVar6 = 1.0;
  }
  pfVar3 = (float *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0xb24 + in_EDX * 4) + 0x150);
  iVar4 = 0x28;
  piVar2 = (int *)((iVar5 + 1) * 0xa0 + param_1);
  do {
    piVar1 = piVar2 + -0x28;
    iVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    *pfVar3 = (float)((double)*piVar1 * (1.0 - dVar6) + (double)iVar5 * dVar6);
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

