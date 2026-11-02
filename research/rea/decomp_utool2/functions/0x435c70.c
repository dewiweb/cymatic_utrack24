// rea decompile_all
// name: FUN_00435c70
// address: 0x435c70
// body: available
// range: 0x435c70-0x435eb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00435c70(int param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  undefined4 *in_ECX;
  int iVar2;
  short *psVar3;
  
  pfVar1 = (float *)*in_ECX;
  if ((param_2 == pfVar1) && (param_1 * 2 < 4)) {
    pfVar1 = pfVar1 + param_3;
    iVar2 = param_3 - 1;
    psVar3 = (short *)((int)param_2 + param_1 * param_3 * 2);
    if (-1 < iVar2) {
      if (3 < (int)param_3) {
        param_3 = param_3 >> 2;
        iVar2 = iVar2 + param_3 * -4;
        do {
          psVar3 = psVar3 + -param_1;
          pfVar1[-1] = (float)(int)*psVar3 * 3.0517578e-05;
          psVar3 = psVar3 + -param_1;
          pfVar1[-2] = (float)(int)*psVar3 * 3.0517578e-05;
          pfVar1[-3] = (float)(int)psVar3[-param_1] * 3.0517578e-05;
          pfVar1 = pfVar1 + -4;
          psVar3 = psVar3 + -param_1 + -param_1;
          *pfVar1 = (float)(int)*psVar3 * 3.0517578e-05;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      for (; -1 < iVar2; iVar2 = iVar2 + -1) {
        pfVar1 = pfVar1 + -1;
        psVar3 = psVar3 + -param_1;
        *pfVar1 = (float)(int)*psVar3 * 3.0517578e-05;
      }
    }
  }
  else {
    iVar2 = param_3 - 1;
    if (-1 < iVar2) {
      if (3 < (int)param_3) {
        param_3 = param_3 >> 2;
        iVar2 = iVar2 + param_3 * -4;
        do {
          *pfVar1 = (float)(int)*(short *)param_2 * 3.0517578e-05;
          psVar3 = (short *)((int)param_2 + param_1 * 2);
          pfVar1[1] = (float)(int)*psVar3 * 3.0517578e-05;
          psVar3 = psVar3 + param_1;
          pfVar1[2] = (float)(int)*psVar3 * 3.0517578e-05;
          pfVar1[3] = (float)(int)psVar3[param_1] * 3.0517578e-05;
          pfVar1 = pfVar1 + 4;
          param_2 = (float *)(psVar3 + param_1 + param_1);
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      for (; -1 < iVar2; iVar2 = iVar2 + -1) {
        *pfVar1 = (float)(int)*(short *)param_2 * 3.0517578e-05;
        param_2 = (float *)((int)param_2 + param_1 * 2);
        pfVar1 = pfVar1 + 1;
      }
    }
  }
  return;
}

