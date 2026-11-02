// rea decompile_all
// name: FUN_005383e0
// address: 0x5383e0
// body: available
// range: 0x5383e0-0x538641 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005383e0(int *param_1,int *param_2,undefined4 param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070da31;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  *in_ECX = ViewPort_LabelTextButton::vftable;
  in_ECX[0x1c] = ViewPort_LabelTextButton::vftable;
  iVar4 = *param_1;
  in_ECX[0x1e] = iVar4;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar4 = *param_2;
  in_ECX[0x1f] = iVar4;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  piVar3 = in_ECX + 0x20;
  param_1 = piVar3;
  operator_new(0x28);
  iVar4 = FUN_00468990();
  *piVar3 = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 3;
  param_1 = in_ECX + 0x21;
  operator_new(0x28);
  iVar4 = FUN_00468990();
  in_ECX[0x21] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 9;
  piVar1 = in_ECX + 0x28;
  param_1 = (int *)&DAT_00bfe12c;
  local_8._0_1_ = 6;
  FUN_006e3660(&param_1);
  *piVar1 = (int)juce::TextButton::vftable;
  in_ECX[0x44] = juce::TextButton::vftable;
  local_8 = CONCAT31(local_8._1_3_,7);
  operator_new(0x28);
  iVar4 = FUN_00468a40(0);
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  puVar2 = (undefined4 *)*piVar3;
  *piVar3 = iVar4;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar2 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  operator_new(0x28);
  iVar4 = FUN_00468a40(0);
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  puVar2 = (undefined4 *)in_ECX[0x21];
  in_ECX[0x21] = iVar4;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar2 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  FUN_006e54f0(param_3);
  if (param_5 != 0) {
    FUN_004097d0(param_5);
  }
  uVar5 = FUN_006c65e0(0x14);
  FUN_006e9790(in_ECX[0x2c],in_ECX[0x2d],uVar5,0x14);
  piVar3 = (int *)(*param_4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = in_ECX[0x2a];
  in_ECX[0x2a] = *param_4;
  UNLOCK();
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  (**(code **)(*piVar1 + 0x28))(1);
  FUN_006e5050(piVar1,0xffffffff);
  FUN_006e9790(in_ECX[4],in_ECX[5],100,0x14);
  ExceptionList = local_10;
  return;
}

