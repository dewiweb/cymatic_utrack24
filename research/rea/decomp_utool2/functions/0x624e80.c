// rea decompile_all
// name: FUN_00624e80
// address: 0x624e80
// body: available
// range: 0x624e80-0x62502e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00624e80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *in_ECX;
  undefined8 in_XMM3_Qa;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d5ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)(**(code **)(*(int *)*in_ECX + 8))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  iVar2 = FUN_00453ff0();
  puVar3 = puVar1;
  if (iVar2 == 0) {
    iVar2 = FUN_00453ff0();
    if (iVar2 == 0) {
      puVar3 = operator_new(0x10);
      local_8._0_1_ = 1;
      puVar4 = operator_new(0x18);
      puVar4[1] = 0;
      *puVar4 = juce::Expression::Helpers::Constant::vftable;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      puVar3[1] = 0;
      *puVar3 = juce::Expression::Helpers::BinaryTerm::vftable;
      puVar3[2] = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = puVar1[1] + 1;
      }
      puVar3[3] = puVar4;
      puVar4[1] = puVar4[1] + 1;
      local_8 = (uint)local_8._1_3_ << 8;
      *puVar3 = juce::Expression::Helpers::Add::vftable;
      iVar2 = FUN_00453ff0();
    }
  }
  piVar5 = (int *)FUN_00453fa0();
  if (piVar5 == (int *)0x0) {
    *(undefined8 *)(iVar2 + 8) = in_XMM3_Qa;
  }
  else {
    (**(code **)(*piVar5 + 0x2c))(&local_14,param_2,iVar2,in_XMM3_Qa,puVar3);
    puVar1 = local_14;
    local_8 = CONCAT31(local_8._1_3_,2);
    if (local_14 == (undefined4 *)0x0) {
      FUN_00625460();
      if (local_14 != (undefined4 *)0x0) {
        piVar5 = local_14 + 1;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          (**(code **)*local_14)(1);
        }
      }
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      ExceptionList = local_10;
      return param_1;
    }
    local_14[1] = local_14[1] + 1;
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_006250e0(param_2);
    *(undefined8 *)(iVar2 + 8) = in_XMM3_Qa;
    if (puVar1 != (undefined4 *)0x0) {
      piVar5 = puVar1 + 1;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    if (local_14 != (undefined4 *)0x0) {
      piVar5 = local_14 + 1;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        (**(code **)*local_14)(1);
      }
    }
  }
  *param_1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = puVar3[1] + 1;
  }
  ExceptionList = local_10;
  return param_1;
}

