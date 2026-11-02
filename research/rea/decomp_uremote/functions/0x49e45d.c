// rea decompile_all
// name: FUN_0049e45d
// address: 0x49e45d
// body: available
// range: 0x49e45d-0x49e560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049e45d(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float *unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  *unaff_ESI = param_2;
  fVar2 = (float10)FUN_00474de5(param_1 * param_4 + 0.5);
  fVar5 = (float)(fVar2 / (float10)param_4);
  fVar2 = (float10)FUN_00474de5(param_3 * param_4 + 0.5,fVar5);
  fVar3 = (float10)FUN_00474de5(param_2 * param_4 + 0.3);
  fVar1 = (float)(fVar3 / (float10)param_4);
  fVar3 = (float10)FUN_004a8e90(0x3f666666,0x3f8ccccd,(fVar1 - fVar5) / (param_2 - param_1));
  unaff_ESI[1] = (float)fVar3;
  fVar4 = (float10)FUN_004a8e90(0x3f666666,0x3f8ccccd,
                                ((float)(fVar2 / (float10)param_4) - fVar1) / (param_3 - param_2));
  unaff_ESI[3] = (float)fVar4;
  unaff_ESI[2] = fVar1 - (float)fVar3 * param_2;
  unaff_ESI[4] = (float)(fVar2 / (float10)param_4) - (float)fVar4 * param_3;
  return;
}

