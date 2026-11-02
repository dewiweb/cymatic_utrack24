// rea decompile_all
// name: base
// address: 0x532340
// body: available
// range: 0x532340-0x53236d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > > __thiscall
   std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> >
   > > > >::base(void)const 
    public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > > __thiscall std::move_iterator<class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > > >::base(void)const 
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

undefined4 base(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_0052edf0(in_ECX);
  return param_1;
}

