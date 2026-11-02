// rea decompile_all
// name: FUN_004d56b4
// address: 0x4d56b4
// body: available
// range: 0x4d56b4-0x4d5776 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004d56b4(undefined4 param_1,char param_2,float param_3,int *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *in_ECX;
  float10 fVar4;
  float10 extraout_ST1;
  
  if (param_2 == '\0') {
    (**(code **)(*in_ECX + 0x10))(&param_2);
    if ((int)param_3 < 1) {
      fVar4 = (float10)FUN_0049fa3d();
      param_3 = (float)(fVar4 * (float10)1.2999999523162842);
      fVar2 = (float)FUN_004a8e4a(param_3);
    }
    else {
      fVar4 = (float10)FUN_0049fa3d();
      fVar2 = param_3;
      if (extraout_ST1 < fVar4) {
        FUN_0049f854((float)extraout_ST1);
        fVar2 = param_3;
      }
    }
    pfVar1 = param_5;
    *param_5 = fVar2;
    iVar3 = FUN_0049fa60(param_1);
    *param_4 = iVar3 + (int)*pfVar1 * 2;
    FUN_004c4d7a();
  }
  else {
    *param_4 = 0x32;
    if ((int)param_3 < 1) {
      param_3 = 1.4013e-44;
    }
    else {
      param_3 = (float)((int)param_3 / 2);
    }
    *param_5 = param_3;
  }
  return;
}

