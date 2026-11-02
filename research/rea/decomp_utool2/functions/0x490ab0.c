// rea decompile_all
// name: FUN_00490ab0
// address: 0x490ab0
// body: available
// range: 0x490ab0-0x490b6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00490ab0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = DAT_00c8a67c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701fe2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    in_stack_ffffffd4 = 0x490aea;
    operator_new(0xd0);
    local_8 = iVar1;
    in_stack_ffffffd8 = 0x490afa;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  iVar1 = *(int *)(DAT_00c8a67c + 0x44);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      ExceptionList = local_10;
      return 0;
    }
    FUN_004b0b90(0,param_1,param_2);
    iVar2 = FUN_006cf2f0(in_stack_ffffffd4,in_stack_ffffffd8);
  } while (iVar2 == 0);
  ExceptionList = local_10;
  return iVar2;
}

