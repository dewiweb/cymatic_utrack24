// rea decompile_all
// name: FUN_0046feb8
// address: 0x46feb8
// body: available
// range: 0x46feb8-0x46feff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0046feb8(void)

{
  uint uVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_EDI;
  
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    Copy_s();
  }
  FID_conflict__Tidy(1,0);
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EDI + 4) = unaff_EBX;
  *(undefined4 *)(unaff_EDI + 0x18) = unaff_ESI;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(unaff_EDI,uVar1);
  return;
}

