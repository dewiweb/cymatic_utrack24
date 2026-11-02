// rea decompile_all
// name: FUN_0049065b
// address: 0x49065b
// body: available
// range: 0x49065b-0x49082f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x490826 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049065b(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  uint in_EAX;
  int in_ECX;
  
  if (in_EAX == 0) {
    FUN_00491216();
  }
  if (param_1 == 0) {
    FUN_00491216();
  }
  bVar1 = *(uint *)(in_ECX + 0x238) < in_EAX;
  if (bVar1) {
    FUN_00491216();
  }
  bVar2 = *(uint *)(in_ECX + 0x23c) < param_1;
  if (bVar2) {
    FUN_00491216();
  }
  if (0x7fffffff < in_EAX) {
    FUN_00491216();
  }
  if (0x7fffffff < param_1) {
    FUN_00491216();
  }
  bVar1 = 0x7fffffff < param_1 ||
          (0x7fffffff < in_EAX || (bVar2 || (bVar1 || (param_1 == 0 || in_EAX == 0))));
  if (0x1fffff8e < in_EAX) {
    FUN_00491216();
  }
  if ((((param_2 != 1) && (param_2 != 2)) && (param_2 != 4)) &&
     ((param_2 != 8 && (param_2 != 0x10)))) {
    FUN_00491216();
    bVar1 = true;
  }
  if (((param_3 < 0) || (param_3 == 1)) || ((param_3 == 5 || (6 < param_3)))) {
    FUN_00491216();
    bVar1 = true;
  }
  if (((param_3 == 3) && (8 < param_2)) ||
     (((param_3 == 2 || ((param_3 == 4 || (param_3 == 6)))) && (param_2 < 8)))) {
    FUN_00491216();
    bVar1 = true;
  }
  if (1 < param_4) {
    FUN_00491216();
    bVar1 = true;
  }
  if (param_5 != 0) {
    FUN_00491216();
    bVar1 = true;
  }
  if (((*(uint *)(in_ECX + 0x28) & 0x1000) != 0) && (*(int *)(in_ECX + 0x21c) != 0)) {
    FUN_00491216();
  }
  if (param_6 != 0) {
    if (((((*(byte *)(in_ECX + 0x21c) & 4) == 0) || (param_6 != 0x40)) ||
        ((*(uint *)(in_ECX + 0x28) & 0x1000) != 0)) || ((param_3 != 2 && (param_3 != 6)))) {
      FUN_00491216();
      bVar1 = true;
    }
    if ((*(uint *)(in_ECX + 0x28) & 0x1000) != 0) {
      FUN_00491216();
      bVar1 = true;
    }
  }
  if (!bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

