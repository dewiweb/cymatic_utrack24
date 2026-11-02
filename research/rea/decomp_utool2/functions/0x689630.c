// rea decompile_all
// name: FUN_00689630
// address: 0x689630
// body: available
// range: 0x689630-0x6896df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00689630(int *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007210b2;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar1 = FUN_00689390(*param_1);
  if (cVar1 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  if (param_2 == '\0') {
    if ((undefined **)*in_ECX == PlaylistEditorApplication::vftable) {
      if (*param_1 != 0x1001) {
        ExceptionList = local_10;
        return 0;
      }
      (**(code **)(in_ECX[-4] + 0x1c))();
    }
    else {
      cVar1 = (*(code *)((undefined **)*in_ECX)[4])(param_1,uVar2);
      if (cVar1 == '\0') {
        ExceptionList = local_10;
        return 0;
      }
    }
  }
  else {
    operator_new(0x30);
    local_8 = 0;
    FUN_004a4eb0(in_ECX,param_1);
    FUN_0063e270();
  }
  ExceptionList = local_10;
  return 1;
}

