// rea decompile_all
// name: FID_conflict:~ctype<char>
// address: 0x54ef50
// body: available
// range: 0x54ef50-0x54efab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    protected: virtual __thiscall std::_Mpunct<char>::~_Mpunct<char>(void)
    protected: virtual __thiscall std::_Mpunct<unsigned short>::~_Mpunct<unsigned short>(void)
    protected: virtual __thiscall std::_Mpunct<wchar_t>::~_Mpunct<wchar_t>(void)
    protected: virtual __thiscall std::ctype<char>::~ctype<char>(void)
     33 names - too many to list
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void FID_conflict__ctype<char>(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d2fc8;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPG::CWin32UDPSocket::vftable;
  local_8 = 0;
  FUN_0054efb0(uVar1);
  local_8 = 0xffffffff;
  FUN_005980c0();
  ExceptionList = local_10;
  return;
}

