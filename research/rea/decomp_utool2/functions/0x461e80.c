// rea decompile_all
// name: FUN_00461e80
// address: 0x461e80
// body: available
// range: 0x461e80-0x461f38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461e80(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,byte param_5,
                 byte param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00700d09;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ValueTree::SharedObject::SetPropertyAction::vftable;
  in_ECX[1] = param_1;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    UNLOCK();
  }
  iVar1 = *param_2;
  in_ECX[2] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8 = 2;
  uStack_7 = 0;
  piVar3 = (int *)*param_3;
  in_ECX[4] = piVar3;
  (**(code **)(*piVar3 + 0x58))(in_ECX + 6,param_3 + 2,uVar2);
  _local_8 = CONCAT31(uStack_7,3);
  piVar3 = (int *)*param_4;
  in_ECX[8] = piVar3;
  (**(code **)(*piVar3 + 0x58))(in_ECX + 10,param_4 + 2);
  *(byte *)(in_ECX + 0xc) = (param_6 & 1) * '\x02' | *(byte *)(in_ECX + 0xc) & 0xfc | param_5 & 1;
  ExceptionList = local_10;
  return;
}

