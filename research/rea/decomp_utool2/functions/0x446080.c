// rea decompile_all
// name: FUN_00446080
// address: 0x446080
// body: available
// range: 0x446080-0x446391 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00446080(undefined1 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *piVar7;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20 [2];
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006fee9e;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = param_1;
  in_ECX[6] = param_2;
  *in_ECX = juce::PluginListComponent::Scanner::vftable;
  in_ECX[7] = param_3;
  in_ECX[8] = 0;
  param_1 = &DAT_00bfe12c;
  local_8 = 2;
  uStack_7 = 0;
  uVar6 = FUN_00637250(uVar5);
  _local_8 = CONCAT31(uStack_7,3);
  piVar1 = in_ECX + 10;
  FUN_006e6f80(uVar6,&param_1,0,0);
  piVar7 = (int *)(param_2 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_8 = 6;
  FUN_006e6f80(param_6,param_7,0,0);
  local_8 = 7;
  FUN_006d0530();
  in_ECX[0x238] = &DAT_00bfe12c;
  in_ECX[0x23c] = param_5;
  *(undefined8 *)(in_ECX + 0x23a) = 0;
  *(undefined1 *)(in_ECX + 0x23d) = (undefined1)param_4;
  *(undefined1 *)((int)in_ECX + 0x8f5) = 0;
  in_ECX[0x23e] = 0;
  local_8 = 10;
  (**(code **)(*(int *)in_ECX[6] + 0x24))(local_20);
  local_8 = 0xb;
  uVar3 = local_8;
  local_8 = 0xb;
  if (local_18 < 1) {
    local_8 = uVar3;
    FUN_004468b0();
  }
  else {
    if (in_ECX[7] != 0) {
      uVar6 = FUN_00604f60(in_ECX[6]);
      FUN_0062a220(uVar6);
      FUN_0040f7f0();
      FID_conflict__free(local_38);
    }
    FUN_006e9790(in_ECX[0xbe],in_ECX[0xbf],500,300);
    FUN_006d02b0(local_20);
    FUN_006d0d50(in_ECX + 0xba);
    uVar6 = FUN_00637250();
    local_8 = 0xc;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_38 = (void *)0xd;
    local_34 = 0;
    local_30 = 0;
    FUN_006e6ce0(uVar6,1,&local_38,&local_2c);
    local_8 = 0xb;
    piVar7 = (int *)(param_4 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    uVar6 = FUN_00637250();
    local_8 = 0xd;
    local_38 = (void *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0x1b;
    local_28 = 0;
    local_24 = 0;
    FUN_006e6ce0(uVar6,0,&local_2c,&local_38);
    local_8 = 0xb;
    piVar7 = (int *)(param_4 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    param_4 = FUN_00448070();
    cVar4 = FUN_006d1aa0(0);
    if (cVar4 == '\0') {
      FUN_0048c530();
      FUN_006ca6c0(piVar1,0);
      FUN_006ca640(piVar1,param_4);
      (**(code **)(*piVar1 + 0x28))(1);
      FUN_006cc500(2,1);
    }
  }
  FUN_0040f7f0();
  FID_conflict__free(local_20[0]);
  ExceptionList = local_10;
  return;
}

