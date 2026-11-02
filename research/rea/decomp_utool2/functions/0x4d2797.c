// rea decompile_all
// name: __crt_stdio_input::format_string_parser<char>::format_string_parser<char>
// address: 0x4d2797
// body: available
// range: 0x4d2797-0x4d27e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall
   __crt_stdio_input::format_string_parser<char>::format_string_parser<char>(unsigned
   __int64,unsigned char const * const)
   
   Library: Visual Studio 2015 Release */

format_string_parser<char> * __thiscall
__crt_stdio_input::format_string_parser<char>::format_string_parser<char>
          (format_string_parser<char> *this,__uint64 param_1,uchar *param_2)

{
  int iVar1;
  format_string_parser<char> *pfVar2;
  
  *(__uint64 *)this = param_1;
  *(uchar **)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = 0;
  pfVar2 = this + 0x2c;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pfVar2 = 0;
    pfVar2 = pfVar2 + 4;
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  this[0x16] = (format_string_parser<char>)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (format_string_parser<char>)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}

