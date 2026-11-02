// rea decompile_all
// name: FUN_004aaa5f
// address: 0x4aaa5f
// body: available
// range: 0x4aaa5f-0x4aacb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aaa5f(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EDI;
  
  if (*(int *)(in_EAX + 4) == 1) {
    if (*(int *)(in_ECX + 4) == 1) {
      if (param_3 == '\0') {
        FUN_004b8cca();
      }
      else {
        FUN_004aafba(in_EDX,unaff_EDI,param_2);
        FUN_004b8c50();
      }
    }
    else if (*(int *)(in_ECX + 4) == 2) {
      if (param_3 == '\0') {
        FUN_004b8bda();
      }
      else {
        FUN_004aafba(in_EDX,unaff_EDI,param_2);
        FUN_004b8b60();
      }
    }
    else if (param_3 == '\0') {
      FUN_004b8dba();
    }
    else {
      FUN_004aafba(in_EDX,unaff_EDI,param_2);
      FUN_004b8d40();
    }
  }
  else {
    iVar1 = *(int *)(in_ECX + 4);
    if (*(int *)(in_EAX + 4) == 2) {
      if (iVar1 == 1) {
        if (param_3 == '\0') {
          FUN_004b89fa();
        }
        else {
          FUN_004aafba(in_EDX,unaff_EDI,param_2);
          FUN_004b8980();
        }
      }
      else if (iVar1 == 2) {
        if (param_3 == '\0') {
          FUN_004b890a();
        }
        else {
          FUN_004aafba(in_EDX,unaff_EDI,param_2);
          FUN_004b8890();
        }
      }
      else if (param_3 == '\0') {
        FUN_004b8aea();
      }
      else {
        FUN_004aafba(in_EDX,unaff_EDI,param_2);
        FUN_004b8a70();
      }
    }
    else if (iVar1 == 1) {
      if (param_3 == '\0') {
        FUN_004b8fff();
      }
      else {
        FUN_004aafba(in_EDX,unaff_EDI,param_2);
        FUN_004b8f22();
      }
    }
    else if (iVar1 == 2) {
      if (param_3 == '\0') {
        FUN_004b8eab();
      }
      else {
        FUN_004aafba(in_EDX,unaff_EDI,param_2);
        FUN_004b8e30();
      }
    }
    else if (param_3 == '\0') {
      FUN_004b90f1();
    }
    else {
      FUN_004aafba(in_EDX,unaff_EDI,param_2);
      FUN_004b9076();
    }
  }
  return;
}

