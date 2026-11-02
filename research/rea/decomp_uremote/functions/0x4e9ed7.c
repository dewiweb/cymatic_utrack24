// rea decompile_all
// name: FUN_004e9ed7
// address: 0x4e9ed7
// body: available
// range: 0x4e9ed7-0x4e9f42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004e9ed7(undefined4 *param_1)

{
  undefined4 uVar1;
  int extraout_ECX;
  float10 fVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  fVar2 = (float10)FUN_0049fa3d();
  FUN_004ec195(*(undefined4 *)(extraout_ECX + 0x88));
  uVar1 = FUN_004a8e4a(local_c);
  *param_1 = uVar1;
  uVar1 = FUN_004a8e4a(local_10);
  param_1[1] = uVar1;
  param_1[2] = 2;
  uVar1 = FUN_004a8e4a((float)fVar2);
  param_1[3] = uVar1;
  return param_1;
}

