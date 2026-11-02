// rea decompile_all
// name: FUN_004e46fb
// address: 0x4e46fb
// body: available
// range: 0x4e46fb-0x4e47af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

float * FUN_004e46fb(float *param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (param_2 == 0) {
    uVar1 = FUN_004640ba();
    FUN_004e46fb(param_1,uVar1);
  }
  else {
    fVar2 = (float10)FUN_004e2fc5(in_ECX,param_2);
    fVar3 = (float10)FUN_004e2fc5(in_ECX + 4,param_2);
    fVar4 = (float10)FUN_004e2fc5(in_ECX + 8,param_2);
    fVar5 = (float10)FUN_004e2fc5(in_ECX + 0xc,param_2);
    fVar5 = (float10)FUN_0043a995(0,(double)(fVar5 - (float10)(double)fVar4));
    *param_1 = (float)fVar2;
    param_1[1] = (float)fVar4;
    fVar2 = (float10)FUN_0043a995(0,(double)fVar3 - (double)fVar2);
    param_1[2] = (float)fVar2;
    param_1[3] = (float)fVar5;
  }
  return param_1;
}

