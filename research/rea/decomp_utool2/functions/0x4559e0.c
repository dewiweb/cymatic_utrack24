// rea decompile_all
// name: FUN_004559e0
// address: 0x4559e0
// body: available
// range: 0x4559e0-0x455a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004559e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  undefined4 in_stack_ffffff80;
  undefined4 in_stack_ffffff84;
  int local_70 [2];
  undefined **local_68 [4];
  int aiStack_58 [18];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007002ee;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004593e0(in_ECX,in_stack_ffffff80,in_stack_ffffff84);
  local_8 = 0;
  if (0 < param_1) {
    iVar1 = *(int *)(local_70[0] + 4);
    *(int *)((int)aiStack_58 + iVar1) = param_1;
    *(int *)((int)aiStack_58 + iVar1 + 4) = param_1 >> 0x1f;
  }
  FUN_00459260(uVar2);
  *(undefined ***)((int)local_70 + *(int *)(local_70[0] + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_58 + *(int *)(local_70[0] + 4) + -0x1c) = *(int *)(local_70[0] + 4) + -8;
  local_8 = 1;
  local_68[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_68);
  ExceptionList = local_10;
  return **(int **)(in_ECX + 0x20) - **(int **)(in_ECX + 0x10);
}

