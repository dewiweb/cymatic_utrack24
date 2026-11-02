// rea decompile_all
// name: FUN_004ec195
// address: 0x4ec195
// body: available
// range: 0x4ec195-0x4ec243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec195(undefined4 param_1)

{
  int extraout_ECX;
  undefined4 *in_EDX;
  undefined4 *unaff_EBX;
  float *unaff_EDI;
  float10 fVar1;
  undefined1 local_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005deab1;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  fVar1 = (float10)FUN_004e9f43(DAT_00955fd4 ^ (uint)&stack0xffffffa0);
  if (((float)fVar1 <= 0.0) || (*(int *)(extraout_ECX + 0x104) < 1)) {
    *unaff_EBX = 0;
    *in_EDX = 0;
    fVar1 = (float10)FUN_0049fa3d();
    *unaff_EDI = (float)fVar1;
  }
  else {
    FUN_004e8518(local_58,extraout_ECX + 0xfc,(float)fVar1,*(undefined4 *)(extraout_ECX + 0x110));
    local_c = 0;
    FUN_004e8f77(param_1,unaff_EBX,unaff_EDI);
    FUN_004652d6();
  }
  ExceptionList = local_14;
  return;
}

