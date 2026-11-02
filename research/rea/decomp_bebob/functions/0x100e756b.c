// rea decompile_all
// name: CEnumArray::XEnumVOID::Reset
// address: 0x100e756b
// body: available
// range: 0x100e756b-0x100e7598 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall CEnumArray::XEnumVOID::Reset(void)
   
   Library: Visual Studio 2010 Release */

long CEnumArray::XEnumVOID::Reset(void)

{
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_c [8];
  
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_c,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0x1c));
  (**(code **)(*(int *)(in_stack_00000004 + -0x38) + 0x58))();
  FUN_1000a3b1((ULONG_PTR *)local_c);
  return 0;
}

