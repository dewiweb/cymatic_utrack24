// rea decompile_all
// name: FUN_004f8472
// address: 0x4f8472
// body: available
// range: 0x4f8472-0x4f8541 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8472(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *in_EAX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_EDX;
  float10 fVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  if (in_EAX[9] != 0) {
    FUN_00477489();
    piVar2 = (int *)FUN_004f8fe4();
    param_2 = *piVar2;
    param_3 = piVar2[1];
  }
  cVar1 = FUN_004c044d();
  if (cVar1 == '\0') {
    param_2 = extraout_EDX - in_EAX[4];
    param_3 = extraout_ECX - in_EAX[5];
  }
  else {
    iVar3 = FUN_004c0453();
    if (iVar3 != 0) {
      iVar3 = param_3;
      iVar6 = param_3;
      iVar4 = FUN_004c4e62(param_2,param_3,param_3,param_3);
      param_3 = *(int *)(iVar4 + 0x8c);
      FUN_004f98ea(param_3);
      FUN_004edd2f(iVar3,iVar6);
      fVar5 = (float10)(**(code **)(*in_EAX + 0x3c))(local_18,local_14);
      FUN_004f992d((float)fVar5);
      param_2 = local_10;
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

