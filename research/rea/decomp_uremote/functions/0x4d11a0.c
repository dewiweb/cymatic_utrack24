// rea decompile_all
// name: FUN_004d11a0
// address: 0x4d11a0
// body: available
// range: 0x4d11a0-0x4d1265 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004d11a0(int param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int in_EAX;
  double *pdVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  pdVar4 = (double *)(in_EAX + 0x90);
  param_3 = param_3 - param_2;
  dVar1 = *(double *)(in_EAX + 0x98) - *pdVar4;
  if (dVar1 < param_3 == (dVar1 == param_3)) {
    fVar6 = (float10)FUN_0047065b(*pdVar4,*(double *)(in_EAX + 0x98) - param_3,param_2);
    pdVar4 = (double *)FUN_004f64c1((double)fVar6);
  }
  dVar1 = *pdVar4;
  dVar2 = pdVar4[1];
  cVar3 = FUN_004f6530(dVar1,dVar2);
  if (cVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    *(double *)(in_EAX + 0xa0) = dVar1;
    *(double *)(in_EAX + 0xa8) = dVar2;
    FUN_004d142f();
    if (param_1 != 0) {
      FUN_0047433f();
    }
    if (param_1 == 2) {
      FUN_00474373();
    }
    uVar5 = 1;
  }
  return uVar5;
}

