// rea decompile_all
// name: FUN_004e8f77
// address: 0x4e8f77
// body: available
// range: 0x4e8f77-0x4e8fbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004e8f77(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int *in_EAX;
  float *unaff_ESI;
  float10 fVar3;
  float10 extraout_ST0;
  
  do {
    cVar1 = FUN_004e85f8();
    if (cVar1 == '\0') {
      fVar3 = (float10)(float)in_EAX[4];
      uVar2 = 0;
      goto LAB_004e8fa6;
    }
  } while (*(int *)(in_EAX[6] + 8) + *in_EAX <= param_1);
  FUN_004e8de3(param_1);
  uVar2 = 1;
  fVar3 = extraout_ST0;
LAB_004e8fa6:
  *unaff_ESI = (float)fVar3;
  *param_2 = in_EAX[1];
  *param_3 = in_EAX[2];
  return uVar2;
}

