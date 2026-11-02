// rea decompile_all
// name: FUN_0040af50
// address: 0x40af50
// body: available
// range: 0x40af50-0x40afe4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040af50(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  void **ppvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006fc31e;
  local_10 = ExceptionList;
  local_8 = 0;
  ppvVar2 = &local_10;
  if (param_1 != 0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    if ((param_3[2] != 0) && (param_2 != 0)) {
      local_8._0_1_ = 1;
      local_8._1_3_ = 0;
      ExceptionList = &local_10;
      piVar3 = (int *)FUN_006f6dd6(param_3[2],0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::AlertWindow::RTTI_Type_Descriptor,0,
                                   DAT_00c76070 ^ (uint)&stack0xfffffffc);
      local_8 = (uint)local_8._1_3_ << 8;
      (**(code **)(*piVar3 + 0x28))(0);
      ppvVar2 = ExceptionList;
    }
  }
  ExceptionList = ppvVar2;
  if (param_3 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = param_3 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_3)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

