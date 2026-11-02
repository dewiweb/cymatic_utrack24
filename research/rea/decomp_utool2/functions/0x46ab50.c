// rea decompile_all
// name: FUN_0046ab50
// address: 0x46ab50
// body: available
// range: 0x46ab50-0x46acb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046ab50(ushort param_1)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070154e;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _param_1 = (uint)param_1;
  piVar2 = operator_new(0x28);
  piVar2[1] = 0;
  *piVar2 = (int)juce::WindowsDirectWriteTypeface::PathGeometrySink::vftable;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  piVar2[8] = 0;
  *(undefined1 *)(piVar2 + 9) = 1;
  (**(code **)(*piVar2 + 4))(piVar2,uVar1);
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
            (*(int **)(in_ECX + 0x30),0x44800000,&param_1,0,0,1,0,0,piVar2);
  FUN_006825f0(piVar2 + 2);
  if ((((*(float *)(in_ECX + 0x48) != 0.0) || (*(float *)(in_ECX + 0x4c) != 0.0)) ||
      (*(float *)(in_ECX + 0x50) != 0.0)) ||
     (((*(float *)(in_ECX + 0x58) != 0.0 || (*(float *)(in_ECX + 0x44) != 1.0)) ||
      (*(float *)(in_ECX + 0x54) != 1.0)))) {
    FUN_00680060((float *)(in_ECX + 0x44));
  }
  local_8 = 1;
  if ((undefined **)*piVar2 == juce::WindowsDirectWriteTypeface::PathGeometrySink::vftable) {
    piVar2 = piVar2 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_0046af30(1);
    }
  }
  else {
    (*(code *)((undefined **)*piVar2)[2])(piVar2);
  }
  ExceptionList = local_10;
  return 1;
}

