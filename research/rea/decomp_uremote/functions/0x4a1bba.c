// rea decompile_all
// name: FUN_004a1bba
// address: 0x4a1bba
// body: available
// range: 0x4a1bba-0x4a1c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1bba(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int unaff_ESI;
  float10 fVar3;
  
  uVar2 = FUN_00439b5a(param_1);
  *(undefined4 *)(unaff_ESI + 0x18) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x14) = param_1;
  FUN_0049f5e8();
  FUN_004d076d();
  fVar3 = (float10)FUN_0049fa03();
  fVar3 = (float10)FUN_0043bcfe(in_ECX[7],(float)fVar3);
  in_ECX[7] = (int)(float)fVar3;
  fVar3 = (float10)FUN_0049fa43();
  fVar3 = (float10)FUN_0043bcfe(in_ECX[8],(float)fVar3);
  in_ECX[8] = (int)(float)fVar3;
  FUN_004a6f5e();
  iVar1 = in_ECX[2];
  in_ECX[2] = iVar1 + 1;
  *(int *)(*in_ECX + iVar1 * 4) = unaff_ESI;
  return;
}

