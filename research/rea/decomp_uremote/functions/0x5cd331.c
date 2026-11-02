// rea decompile_all
// name: FID_conflict:~logic_error
// address: 0x5cd331
// body: available
// range: 0x5cd331-0x5cd34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5cd34b to 0x5afbe6 ~CArray<> (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall std::logic_error::~logic_error(void)
    public: virtual __thiscall std::runtime_error::~runtime_error(void)
   
   Library: Visual Studio */

void FID_conflict__logic_error(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = std::logic_error::vftable;
  FID_conflict__Tidy(1,0);
  ~CArray<>();
  return;
}

