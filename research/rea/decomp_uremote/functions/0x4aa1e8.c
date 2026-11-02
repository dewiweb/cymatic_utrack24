// rea decompile_all
// name: FUN_004aa1e8
// address: 0x4aa1e8
// body: available
// range: 0x4aa1e8-0x4aa457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa1e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  undefined4 in_EDX;
  
  if (*(int *)(in_EAX + 4) == 1) {
    if (*(int *)(in_ECX + 4) == 1) {
      if (param_4 == '\0') {
        FUN_004b3cf6(param_1);
      }
      else {
        FUN_004aafba(in_EDX,param_2,param_3);
        FUN_004b396c(param_1);
      }
    }
    else if (*(int *)(in_ECX + 4) == 2) {
      if (param_4 == '\0') {
        FUN_004b3577(param_1);
      }
      else {
        FUN_004aafba(in_EDX,param_2,param_3);
        FUN_004b3172(param_1);
      }
    }
    else if (param_4 == '\0') {
      FUN_004b43ee(param_1);
    }
    else {
      FUN_004aafba(in_EDX,param_2,param_3);
      FUN_004b405f(param_1);
    }
  }
  else {
    iVar1 = *(int *)(in_ECX + 4);
    if (*(int *)(in_EAX + 4) == 2) {
      if (iVar1 == 1) {
        if (param_4 == '\0') {
          FUN_004b257a(param_1);
        }
        else {
          FUN_004aafba(in_EDX,param_2,param_3);
          FUN_004b20c2(param_1);
        }
      }
      else if (iVar1 == 2) {
        if (param_4 == '\0') {
          FUN_004b1c52(param_1);
        }
        else {
          FUN_004aafba(in_EDX,param_2,param_3);
          FUN_004b17c5(param_1);
        }
      }
      else if (param_4 == '\0') {
        FUN_004b2dcb(param_1);
      }
      else {
        FUN_004aafba(in_EDX,param_2,param_3);
        FUN_004b2a0d(param_1);
      }
    }
    else if (iVar1 == 1) {
      if (param_4 == '\0') {
        FUN_004b4d7a(param_1);
      }
      else {
        FUN_004aafba(in_EDX,param_2,param_3);
        FUN_004b4b6b(param_1);
      }
    }
    else if (iVar1 == 2) {
      if (param_4 == '\0') {
        FUN_004b496c(param_1);
      }
      else {
        FUN_004aafba(in_EDX,param_2,param_3);
        FUN_004b4766(param_1);
      }
    }
    else if (param_4 == '\0') {
      FUN_004b5161(param_1);
    }
    else {
      FUN_004aafba(in_EDX,param_2,param_3);
      FUN_004b4f5e(param_1);
    }
  }
  return;
}

