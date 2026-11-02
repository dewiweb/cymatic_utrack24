// rea decompile_all
// name: FUN_004f92e9
// address: 0x4f92e9
// body: available
// range: 0x4f92e9-0x4f93d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_004f92e9(float *param_1,float param_2,float param_3)

{
  char cVar1;
  float *pfVar2;
  int *piVar3;
  int unaff_ESI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined1 local_18 [8];
  float local_10;
  float local_c;
  
  if (*(int *)(unaff_ESI + 0x24) != 0) {
    uStack_3c = 0x4f9303;
    pfVar2 = (float *)FUN_00477489();
    local_10 = param_2 * *pfVar2 + pfVar2[1] * param_3 + pfVar2[2];
    param_3 = pfVar2[3] * param_2 + pfVar2[4] * param_3 + pfVar2[5];
    param_2 = local_10;
    local_c = param_3;
  }
  uStack_3c = 0x4f933d;
  cVar1 = FUN_004c044d();
  if (cVar1 == '\0') {
    param_2 = param_2 - (float)*(int *)(unaff_ESI + 0x10);
    param_3 = param_3 - (float)*(int *)(unaff_ESI + 0x14);
  }
  else {
    uStack_3c = 0x4f9348;
    piVar3 = (int *)FUN_004c0453();
    if (piVar3 != (int *)0x0) {
      FUN_004f887d(auStack_48,param_2,param_3);
      (**(code **)(*piVar3 + 0x2c))(auStack_40);
      pfVar2 = (float *)FUN_004f881a(local_18);
      param_2 = *pfVar2;
      param_3 = pfVar2[1];
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

