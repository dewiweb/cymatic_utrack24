// rea decompile_all
// name: FUN_0048def0
// address: 0x48def0
// body: available
// range: 0x48def0-0x48dfd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048def0(undefined4 param_1,undefined1 param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701cde;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063ea10(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[2] = param_1;
  *in_ECX = juce::MouseInputSourceInternal::vftable;
  *(undefined1 *)(in_ECX + 3) = param_2;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  local_8 = 2;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x10,0x18,4,(_func_void_void_ptr *)&LAB_0048f7d0,guard_check_icall);
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  *(undefined1 *)(in_ECX + 0x2a) = 0;
  ExceptionList = local_10;
  return;
}

