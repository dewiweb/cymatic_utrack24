// rea decompile_all
// name: FUN_00468781
// address: 0x468781
// body: available
// range: 0x468781-0x4687cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00468781(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint _Size;
  
  _Size = *(uint *)(*(int *)(in_EAX + 0x1c) + 0x14);
  if (*(uint *)(in_EAX + 0x10) < _Size) {
    _Size = *(uint *)(in_EAX + 0x10);
  }
  if (_Size != 0) {
    _memcpy(*(void **)(in_EAX + 0xc),*(void **)(*(int *)(in_EAX + 0x1c) + 0x10),_Size);
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + _Size;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x10);
    *piVar1 = *piVar1 + _Size;
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + _Size;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) - _Size;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x14);
    *piVar1 = *piVar1 - _Size;
    iVar2 = *(int *)(in_EAX + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return;
}

