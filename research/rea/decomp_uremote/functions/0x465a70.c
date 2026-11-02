// rea decompile_all
// name: FUN_00465a70
// address: 0x465a70
// body: available
// range: 0x465a70-0x465aad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465a70(void *param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  size_t _Size;
  
  _Size = param_2 - (int)param_1;
  if (0 < (int)_Size) {
    iVar2 = FUN_00465935();
    FUN_00465353();
    iVar1 = *in_EAX;
    _memcpy((void *)(iVar1 + iVar2),param_1,_Size);
    *(undefined1 *)(iVar1 + iVar2 + _Size) = 0;
  }
  return;
}

