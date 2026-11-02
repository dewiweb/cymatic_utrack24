// rea decompile_all
// name: FUN_0046fda0
// address: 0x46fda0
// body: available
// range: 0x46fda0-0x46fe32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046fda0(uint param_1)

{
  int iVar1;
  bool bVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  uint unaff_EDI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_8;
  
  if (*(uint *)(unaff_ESI + 0x14) < unaff_EDI) {
    FUN_005cd447();
  }
  if (-*(int *)(unaff_ESI + 0x14) - 1U <= param_1) {
    FUN_005cd40f();
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(unaff_ESI + 0x14);
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (unaff_ESI,iVar1 + param_1,false);
    if (bVar2) {
      pbVar3 = unaff_ESI + 4;
      local_8 = pbVar3;
      if (0xf < *(uint *)(unaff_ESI + 0x18)) {
        local_8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar3;
        pbVar3 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar3;
      }
      std::char_traits<char>::_Move_s
                ((char *)(pbVar3 + param_1 + unaff_EDI),
                 (*(uint *)(unaff_ESI + 0x18) - unaff_EDI) - param_1,(char *)(local_8 + unaff_EDI),
                 *(int *)(unaff_ESI + 0x14) - unaff_EDI);
      FUN_0047010d(param_1);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                (unaff_ESI,iVar1 + param_1);
    }
  }
  return;
}

