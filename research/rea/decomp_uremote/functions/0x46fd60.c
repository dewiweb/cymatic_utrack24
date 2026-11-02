// rea decompile_all
// name: FUN_0046fd60
// address: 0x46fd60
// body: available
// range: 0x46fd60-0x46fd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046fd60(void)

{
  int iVar1;
  bool bVar2;
  uint unaff_EBX;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_EDI;
  
  if (-*(int *)(unaff_EDI + 0x14) - 1U <= unaff_EBX) {
    FUN_005cd40f();
  }
  if (unaff_EBX != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x14);
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (unaff_EDI,iVar1 + unaff_EBX,false);
    if (bVar2) {
      FUN_0047010d(unaff_EBX);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                (unaff_EDI,iVar1 + unaff_EBX);
    }
  }
  return;
}

