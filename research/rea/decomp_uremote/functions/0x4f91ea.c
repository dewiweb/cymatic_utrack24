// rea decompile_all
// name: FUN_004f91ea
// address: 0x4f91ea
// body: available
// range: 0x4f91ea-0x4f92e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_004f91ea(float *param_1,float param_2,float param_3)

{
  float fVar1;
  char cVar2;
  int *in_EAX;
  int *piVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined1 local_20 [12];
  float local_14;
  undefined1 *local_c;
  
  uStack_34 = 0x4f91fd;
  cVar2 = FUN_004c044d();
  if (cVar2 == '\0') {
    param_2 = (float)in_EAX[4] + param_2;
    param_3 = (float)in_EAX[5] + param_3;
  }
  else {
    uStack_34 = 0x4f9208;
    piVar3 = (int *)FUN_004c0453();
    if (piVar3 != (int *)0x0) {
      local_14 = param_3;
      local_c = auStack_40;
      fVar5 = (float10)(**(code **)(*in_EAX + 0x3c))(param_2,param_3);
      FUN_004f963b((float)fVar5);
      (**(code **)(*piVar3 + 0x24))(auStack_38);
      pfVar4 = (float *)FUN_004f8845(local_20);
      param_2 = *pfVar4;
      param_3 = pfVar4[1];
    }
  }
  pfVar4 = (float *)in_EAX[9];
  if (pfVar4 != (float *)0x0) {
    fVar1 = pfVar4[1] * param_3;
    param_3 = pfVar4[3] * param_2 + pfVar4[4] * param_3 + pfVar4[5];
    param_2 = *pfVar4 * param_2 + fVar1 + pfVar4[2];
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

