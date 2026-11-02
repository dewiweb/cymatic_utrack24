// rea decompile_all
// name: FUN_004b59f0
// address: 0x4b59f0
// body: available
// range: 0x4b59f0-0x4b5a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b59f0(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fe220;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar2 = (int *)in_ECX[0xf];
  *in_ECX = juce::ActiveXControlComponent::Pimpl::vftable;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x18))(piVar2,1,uVar3);
    (**(code **)(*(int *)in_ECX[0xf] + 8))((int *)in_ECX[0xf]);
  }
  piVar2 = (int *)in_ECX[0xe];
  if (*(code **)(*piVar2 + 8) == FUN_004b6350) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar2 + 0x24))(1);
    }
  }
  else {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)in_ECX[0xd];
  if (*(code **)(*piVar2 + 8) == FUN_004b64d0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar2 + 0x48))(1);
    }
  }
  else {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_006b30b0();
  ExceptionList = local_10;
  return;
}

