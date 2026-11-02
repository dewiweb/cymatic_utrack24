// rea decompile_all
// name: FUN_004593e0
// address: 0x4593e0
// body: available
// range: 0x4593e0-0x459496 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004593e0(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070070c;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (int)&PTR_00c16848;
  in_ECX[2] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -8;
  iVar1 = *(int *)(*in_ECX + 4);
  FUN_0044e990(uVar3);
  *(undefined4 *)((int)in_ECX + iVar1 + 0x38) = param_1;
  *(undefined4 *)((int)in_ECX + iVar1 + 0x3c) = 0;
  uVar2 = FUN_0045bc20(extraout_ECX);
  *(undefined1 *)((int)in_ECX + iVar1 + 0x40) = uVar2;
  if (*(int *)((int)in_ECX + iVar1 + 0x38) == 0) {
    FUN_0044e870(*(uint *)((int)in_ECX + iVar1 + 0xc) | 4,0);
  }
  ExceptionList = local_10;
  return;
}

