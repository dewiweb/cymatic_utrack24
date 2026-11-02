// rea decompile_all
// name: FUN_005d6380
// address: 0x5d6380
// body: available
// range: 0x5d6380-0x5d64ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d6380(int param_1,int param_2,int param_3,double param_4,double param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int in_ECX;
  float *pfVar5;
  int iVar6;
  int in_EDX;
  float *pfVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(*(int *)(in_ECX + 0x1c) + 0xb24 + in_EDX * 4);
  iVar8 = (int)param_4;
  param_4 = param_4 - (double)iVar8;
  *(float *)(iVar9 + 0x6c) =
       (float)((double)*(int *)(param_1 + 4 + iVar8 * 4) * param_4 +
              (double)*(int *)(param_1 + iVar8 * 4) * (1.0 - param_4));
  *(undefined4 *)(iVar9 + 0x78) = *(undefined4 *)(param_3 + in_EDX * 0xc);
  *(undefined4 *)(iVar9 + 0x7c) = *(undefined4 *)(param_3 + 4 + in_EDX * 0xc);
  *(undefined4 *)(iVar9 + 0x80) = *(undefined4 *)(param_3 + 8 + in_EDX * 0xc);
  pfVar7 = (float *)(iVar9 + 0x84);
  iVar9 = 3;
  piVar4 = (int *)((iVar8 + 1) * 0xcc + param_2);
  pfVar5 = pfVar7;
  do {
    iVar8 = 0x11;
    do {
      iVar6 = iVar8;
      piVar1 = piVar4 + -0x33;
      iVar8 = *piVar4;
      piVar4 = piVar4 + 1;
      *pfVar5 = (float)((double)*piVar1 * (1.0 - param_4) + (double)iVar8 * param_4);
      pfVar5 = pfVar5 + 1;
      iVar8 = iVar6 + -1;
    } while (iVar8 != 0);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar6 = iVar6 + 2;
  do {
    fVar2 = *pfVar7;
    iVar9 = 0x11;
    do {
      fVar3 = *pfVar7;
      *pfVar7 = (float)((double)fVar3 + param_5);
      if ((float)((double)fVar3 + param_5) < fVar2 + 6.0) {
        *pfVar7 = fVar2 + 6.0;
      }
      pfVar7 = pfVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

