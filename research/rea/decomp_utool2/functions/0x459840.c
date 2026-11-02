// rea decompile_all
// name: FUN_00459840
// address: 0x459840
// body: available
// range: 0x459840-0x4598f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459840(void)

{
  void *pvVar1;
  _Locimp *p_Var2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe1f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  pvVar1 = operator_new(8);
  local_8 = 0;
  p_Var2 = std::locale::_Init(true);
  *(_Locimp **)((int)pvVar1 + 4) = p_Var2;
  in_ECX[0xd] = pvVar1;
  in_ECX[3] = in_ECX + 1;
  in_ECX[4] = in_ECX + 2;
  in_ECX[7] = in_ECX + 5;
  in_ECX[8] = in_ECX + 6;
  in_ECX[0xb] = in_ECX + 9;
  in_ECX[0xc] = in_ECX + 10;
  in_ECX[2] = 0;
  *(undefined4 *)in_ECX[8] = 0;
  *(undefined4 *)in_ECX[0xc] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  *(undefined4 *)in_ECX[7] = 0;
  *(undefined4 *)in_ECX[0xb] = 0;
  ExceptionList = local_10;
  return;
}

