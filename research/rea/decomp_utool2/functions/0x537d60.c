// rea decompile_all
// name: FUN_00537d60
// address: 0x537d60
// body: available
// range: 0x537d60-0x537fa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00537d60(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d916;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  *in_ECX = ViewPort_LabelText::vftable;
  in_ECX[0x1c] = ViewPort_LabelText::vftable;
  iVar4 = *param_1;
  in_ECX[0x1e] = iVar4;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[0x1f] = &DAT_00bfe12c;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 1;
  in_ECX[0x22] = 1;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  puVar2 = PTR_DAT_00c7ed68;
  in_ECX[0x27] = PTR_DAT_00c7ed68;
  piVar3 = (int *)(puVar2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  piVar3 = in_ECX + 0x28;
  operator_new(0x28);
  iVar4 = FUN_00468990();
  *piVar3 = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 4;
  operator_new(0x28);
  iVar4 = FUN_00468990();
  in_ECX[0x29] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 5;
  operator_new(0x28);
  iVar4 = FUN_00468990();
  in_ECX[0x2a] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  operator_new(0x28);
  iVar4 = FUN_00468a40(0);
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  puVar5 = (undefined4 *)*piVar3;
  *piVar3 = iVar4;
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar5 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar5)(1);
    }
  }
  operator_new(0x28);
  iVar4 = FUN_00468a40(0);
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  puVar5 = (undefined4 *)in_ECX[0x29];
  in_ECX[0x29] = iVar4;
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar5 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar5)(1);
    }
  }
  puVar5 = (undefined4 *)FUN_0057f440();
  uVar1 = in_ECX[0x2a];
  in_ECX[0x2a] = *puVar5;
  *puVar5 = uVar1;
  if (in_ECX + 0x2a != (undefined4 *)0x0) {
    LOCK();
    piVar3 = in_ECX + 0x2b;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)in_ECX[0x2a])(1);
    }
  }
  FUN_00681e20(param_2);
  FUN_00681dd0(in_ECX + 0x29);
  FUN_006e9790(in_ECX[4],in_ECX[5],100,0x14);
  ExceptionList = local_10;
  return;
}

