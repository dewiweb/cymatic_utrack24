// rea decompile_all
// name: FUN_0040d8e5
// address: 0x40d8e5
// body: available
// range: 0x40d8e5-0x40d984 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040d8e5(void)

{
  short sVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  size_t _Size;
  int unaff_EDI;
  
  sVar1 = *(short *)(unaff_EDI + 0x16);
  _Size = (size_t)sVar1;
  sVar2 = *(short *)(unaff_EDI + 0x14);
  iVar3 = FUN_0040d706(_Size,(int)sVar2);
  if (iVar3 == 0) {
    _memcpy(*(void **)(in_EAX + 0x18),*(void **)(unaff_EDI + 0x18),_Size << 3);
    _memcpy(*(void **)(in_EAX + 0x1c),*(void **)(unaff_EDI + 0x1c),_Size);
    _memcpy(*(void **)(in_EAX + 0x20),*(void **)(unaff_EDI + 0x20),sVar2 * 2);
    if ((*(char *)(in_EAX + 0x10) != '\0') && (*(char *)(unaff_EDI + 0x10) != '\0')) {
      _memcpy(*(void **)(in_EAX + 0x28),*(void **)(unaff_EDI + 0x28),_Size << 3);
      _memcpy(*(void **)(in_EAX + 0x2c),*(void **)(unaff_EDI + 0x2c),_Size << 3);
    }
    *(short *)(in_EAX + 0x14) = sVar2;
    *(short *)(in_EAX + 0x16) = sVar1;
    FUN_0040d673();
  }
  return iVar3;
}

