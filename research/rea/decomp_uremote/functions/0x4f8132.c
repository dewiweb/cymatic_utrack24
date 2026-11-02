// rea decompile_all
// name: FUN_004f8132
// address: 0x4f8132
// body: available
// range: 0x4f8132-0x4f8196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8132(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  in_EAX[2] = in_EAX[2] + -1;
  _Dst = (void *)(param_1 * 0x10 + *in_EAX);
  if (0 < in_EAX[2] - param_1) {
    _memmove(_Dst,(void *)((int)_Dst + 0x10),(in_EAX[2] - param_1) * 0x10);
  }
  iVar3 = in_EAX[2];
  iVar1 = in_EAX[1];
  iVar2 = FUN_00439b5a(0);
  if (iVar2 < iVar1) {
    FUN_00439b5a(0);
    iVar3 = FUN_00439b5a(iVar3);
    if (iVar3 < iVar1) {
      FUN_0046ebd7();
    }
  }
  return;
}

