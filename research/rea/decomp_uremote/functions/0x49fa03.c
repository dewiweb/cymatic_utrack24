// rea decompile_all
// name: FUN_0049fa03
// address: 0x49fa03
// body: available
// range: 0x49fa03-0x49fa3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0049fa03(void)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  float10 fVar3;
  
  if (*(float *)(*in_EAX + 0x20) == 0.0) {
    piVar2 = (int *)FUN_0049f7d4();
    iVar1 = *in_EAX;
    fVar3 = (float10)(**(code **)(*piVar2 + 8))();
    *(float *)(iVar1 + 0x20) = (float)fVar3;
  }
  return (float10)(*(float *)(*in_EAX + 0x20) * *(float *)(*in_EAX + 0x14));
}

