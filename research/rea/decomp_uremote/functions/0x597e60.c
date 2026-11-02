// rea decompile_all
// name: FUN_00597e60
// address: 0x597e60
// body: available
// range: 0x597e60-0x597f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597e60(void)

{
  void *_Src;
  ushort uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 4) {
    _Src = (void *)(*(int *)(in_ECX + 0xc3c) + 4 + (*(ushort *)(in_ECX + 10) + 7 & 0xfffffffc));
    if (_Src < *(void **)(in_ECX + 4)) {
      uVar1 = (short)*(undefined4 *)(in_ECX + 4) - (short)_Src;
      _memcpy(*(void **)(in_ECX + 0xc3c),_Src,(uint)uVar1);
      *(uint *)(in_ECX + 4) = (uint)uVar1 + *(int *)(in_ECX + 0xc3c);
    }
    else {
      **(undefined1 **)(in_ECX + 0xc3c) = 0;
      *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 0xc3c);
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  else {
    **(undefined1 **)(in_ECX + 0xc3c) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  return;
}

