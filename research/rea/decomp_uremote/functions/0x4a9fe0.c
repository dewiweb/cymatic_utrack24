// rea decompile_all
// name: FUN_004a9fe0
// address: 0x4a9fe0
// body: available
// range: 0x4a9fe0-0x4aa1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9fe0(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 in_ECX;
  int in_EDX;
  undefined1 local_78 [104];
  void *local_10;
  
  if (*(int *)(param_2 + 4) == 1) {
    if (*(int *)(in_EDX + 4) == 1) {
      if (param_3 == '\0') {
        FUN_004aaf3d(local_78,param_2,in_ECX);
        FUN_004b008a(param_1);
      }
      else {
        FUN_004aaf3d(local_78,param_2,in_ECX);
        FUN_004afcab(param_1);
      }
    }
    else if (*(int *)(in_EDX + 4) == 2) {
      if (param_3 == '\0') {
        FUN_004aae41(local_78,param_2,in_ECX);
        FUN_004af8fa(param_1);
      }
      else {
        FUN_004aae41(local_78,param_2,in_ECX);
        FUN_004af549(param_1);
      }
    }
    else if (param_3 == '\0') {
      FUN_004aaebf(local_78,param_2,in_ECX);
      FUN_004b07e7(param_1);
    }
    else {
      FUN_004aaebf(local_78,param_2,in_ECX);
      FUN_004b046d(param_1);
    }
  }
  else {
    iVar1 = *(int *)(in_EDX + 4);
    if (*(int *)(param_2 + 4) == 2) {
      if (iVar1 == 1) {
        if (param_3 == '\0') {
          FUN_004aaf3d(local_78,param_2,in_ECX);
          FUN_004ae9ba(param_1);
        }
        else {
          FUN_004aaf3d(local_78,param_2,in_ECX);
          FUN_004ae581(param_1);
        }
      }
      else if (iVar1 == 2) {
        if (param_3 == '\0') {
          FUN_004aae41(local_78,param_2,in_ECX);
          FUN_004ae16f(param_1);
        }
        else {
          FUN_004aae41(local_78,param_2,in_ECX);
          FUN_004add5d(param_1);
        }
      }
      else if (param_3 == '\0') {
        FUN_004aaebf(local_78,param_2,in_ECX);
        FUN_004af1a0(param_1);
      }
      else {
        FUN_004aaebf(local_78,param_2,in_ECX);
        FUN_004aedf7(param_1);
      }
    }
    else if (iVar1 == 1) {
      if (param_3 == '\0') {
        FUN_004aaf3d(local_78,param_2,in_ECX);
        FUN_004b1191(param_1);
      }
      else {
        FUN_004aaf3d(local_78,param_2,in_ECX);
        FUN_004b0fa1(param_1);
      }
    }
    else if (iVar1 == 2) {
      if (param_3 == '\0') {
        FUN_004aae41(local_78,param_2,in_ECX);
        FUN_004b0d81(param_1);
      }
      else {
        FUN_004aae41(local_78,param_2,in_ECX);
        FUN_004b0b61(param_1);
      }
    }
    else if (param_3 == '\0') {
      FUN_004aaebf(local_78,param_2,in_ECX);
      FUN_004b15a4(param_1);
    }
    else {
      FUN_004aaebf(local_78,param_2,in_ECX);
      FUN_004b1383(param_1);
    }
  }
  _free(local_10);
  return;
}

