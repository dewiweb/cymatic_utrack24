// rea decompile_all
// name: __crt_strtox::floating_point_value::normal_mantissa_mask
// address: 0x4c97fe
// body: available
// range: 0x4c97fe-0x4c9814 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned __int64 __thiscall
   __crt_strtox::floating_point_value::normal_mantissa_mask(void)const 
   
   Library: Visual Studio 2015 Release */

__uint64 __thiscall
__crt_strtox::floating_point_value::normal_mantissa_mask(floating_point_value *this)

{
  if (this[4] != (floating_point_value)0x0) {
    return 0x1fffffffffffff;
  }
  return 0xffffff;
}

