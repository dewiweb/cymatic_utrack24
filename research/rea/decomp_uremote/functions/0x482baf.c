// rea decompile_all
// name: FUN_00482baf
// address: 0x482baf
// body: available
// range: 0x482baf-0x482c1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482baf(int *param_1,void *param_2)

{
  int iVar1;
  void *unaff_EBX;
  int *unaff_ESI;
  size_t _Size;
  
  _Size = 0;
  if (*unaff_ESI == 0) {
    iVar1 = FUN_00482aab();
    *unaff_ESI = iVar1;
  }
  _memcpy((void *)*unaff_ESI,unaff_EBX,0x11);
  iVar1 = 1;
  do {
    _Size = _Size + *(byte *)(iVar1 + (int)unaff_EBX);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x11);
  if (((int)_Size < 1) || (0x100 < (int)_Size)) {
    *(undefined4 *)(*param_1 + 0x14) = 8;
    (**(code **)*param_1)(param_1);
  }
  _memcpy((void *)(*unaff_ESI + 0x11),param_2,_Size);
  *(undefined1 *)(*unaff_ESI + 0x111) = 0;
  return;
}

