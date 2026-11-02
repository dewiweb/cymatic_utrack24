// rea decompile_all
// name: FUN_0048f4c3
// address: 0x48f4c3
// body: available
// range: 0x48f4c3-0x48f50b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0048f4c3(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int in_ECX;
  void *pvVar3;
  void *_Buf2;
  
  if (((in_ECX != 0) && (param_1 != (void *)0x0)) && (*(int *)(in_ECX + 0x20c) != 0)) {
    pvVar1 = *(void **)(in_ECX + 0x210);
    pvVar3 = (void *)(*(int *)(in_ECX + 0x20c) * 5 + (int)pvVar1);
    do {
      _Buf2 = (void *)((int)pvVar3 + -5);
      iVar2 = _memcmp(param_1,_Buf2,4);
      if (iVar2 == 0) {
        return *(undefined1 *)((int)pvVar3 + -1);
      }
      pvVar3 = _Buf2;
    } while (pvVar1 < _Buf2);
  }
  return 0;
}

