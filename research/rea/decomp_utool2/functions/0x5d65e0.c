// rea decompile_all
// name: FUN_005d65e0
// address: 0x5d65e0
// body: available
// range: 0x5d65e0-0x5d6755 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d65e0(int param_1,int param_2,int param_3,double param_4)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int in_EDX;
  float *pfVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = (int)param_4;
  iVar3 = *(int *)(*(int *)(in_ECX + 0x1c) + 0xb24 + in_EDX * 4);
  param_4 = param_4 - (double)iVar5;
  dVar6 = 1.0 - param_4;
  *(float *)(iVar3 + 0xc) =
       (float)((double)*(int *)(param_1 + 0x14 + iVar5 * 0x14) * param_4 +
              (double)*(int *)(param_1 + iVar5 * 0x14) * dVar6);
  *(float *)(iVar3 + 0x10) =
       (float)((double)*(int *)(param_1 + 4 + iVar5 * 0x14) * dVar6 +
              (double)*(int *)(param_1 + 0x18 + iVar5 * 0x14) * param_4);
  *(float *)(iVar3 + 0x14) =
       (float)((double)*(int *)(param_1 + 8 + iVar5 * 0x14) * dVar6 +
              (double)*(int *)(param_1 + 0x1c + iVar5 * 0x14) * param_4);
  *(float *)(iVar3 + 0x18) =
       (float)((double)*(float *)(param_1 + 0xc + iVar5 * 0x14) * dVar6 +
              (double)*(float *)(param_1 + 0x20 + iVar5 * 0x14) * param_4);
  *(float *)(iVar3 + 0x1c) =
       (float)((double)*(float *)(param_1 + 0x10 + iVar5 * 0x14) * dVar6 +
              (double)*(float *)(param_1 + 0x24 + iVar5 * 0x14) * param_4);
  *(float *)(iVar3 + 0x1f0) =
       (float)((double)*(int *)(param_2 + 4 + iVar5 * 4) * param_4 +
              (double)*(int *)(param_2 + iVar5 * 4) * dVar6);
  pfVar4 = (float *)(iVar3 + 0x24);
  piVar2 = (int *)(param_3 + (iVar5 + 1) * 0x44);
  iVar3 = 0x11;
  do {
    piVar1 = piVar2 + -0x11;
    iVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    *pfVar4 = (float)((double)*piVar1 * dVar6 + (double)iVar5 * param_4);
    pfVar4 = pfVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

