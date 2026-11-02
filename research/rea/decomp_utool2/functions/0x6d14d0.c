// rea decompile_all
// name: FUN_006d14d0
// address: 0x6d14d0
// body: available
// range: 0x6d14d0-0x6d16ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d14d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  undefined1 local_64 [16];
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726d64;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_24 = *param_2;
  local_20 = param_2[1];
  local_1c = param_2[2];
  local_18 = param_2[3];
  iVar1 = *(int *)(param_1 + 0xc);
  local_54 = 0;
  iStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  local_14 = in_ECX;
  if (iVar1 == 0) {
    piVar3 = (int *)FUN_006d1d80(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (piVar3 != (int *)0x0) {
      if ((undefined **)*piVar3 == juce::HWNDComponentPeer::vftable) {
        local_44 = piVar3[0x18];
        iStack_40 = piVar3[0x19];
        iStack_3c = piVar3[0x1a];
        iStack_38 = piVar3[0x1b];
        piVar3 = &local_44;
      }
      else {
        piVar3 = (int *)(*(code *)((undefined **)*piVar3)[0x13])(&local_44);
      }
      local_54 = *piVar3;
      iStack_50 = piVar3[1];
      iStack_4c = piVar3[2];
      iStack_48 = piVar3[3];
    }
    iVar5 = local_18 / 2 + local_20;
    iVar1 = local_1c / 2 + local_24;
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      local_8 = 0;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 0xffffffff;
    }
    puVar2 = (undefined4 *)FUN_006cac60(iVar1,iVar5);
    local_34 = *puVar2;
    uStack_30 = puVar2[1];
    uStack_2c = puVar2[2];
    uStack_28 = puVar2[3];
  }
  else {
    uStack_28 = *(undefined4 *)(iVar1 + 0x1c);
    uStack_2c = *(undefined4 *)(iVar1 + 0x18);
  }
  piVar3 = (int *)FUN_004af390(&local_44,&local_24);
  local_24 = *piVar3;
  iVar1 = *local_14;
  local_20 = piVar3[1];
  local_1c = piVar3[2];
  local_18 = piVar3[3];
  puVar2 = &local_34;
  uVar4 = FUN_004af390(&local_44,param_1 + 0x10);
  (**(code **)(iVar1 + 4))(&local_24,uVar4,puVar2,param_3,param_4,param_5,param_6);
  piVar3 = (int *)FUN_004107c0(local_64,&local_24);
  local_24 = *piVar3;
  local_20 = piVar3[1];
  local_1c = piVar3[2];
  local_18 = piVar3[3];
  if ((undefined **)*local_14 == juce::ComponentBoundsConstrainer::vftable) {
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x20) + 4))(&local_24);
      ExceptionList = local_10;
      return;
    }
    FUN_006e9790(local_24,local_20,local_1c,local_18);
    ExceptionList = local_10;
    return;
  }
  (*(code *)((undefined **)*local_14)[4])(param_1,&local_24);
  ExceptionList = local_10;
  return;
}

