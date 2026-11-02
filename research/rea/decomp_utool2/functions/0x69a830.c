// rea decompile_all
// name: FUN_0069a830
// address: 0x69a830
// body: available
// range: 0x69a830-0x69a9a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069a830(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 local_f0 [40];
  undefined1 local_c8 [40];
  undefined1 local_a0 [40];
  undefined1 local_78 [40];
  undefined1 local_50 [40];
  int *local_28;
  void *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_007221fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = (void *)0x0;
  uStack_20 = 0;
  uStack_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  local_8 = 0;
  iVar3 = FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_004b0700(iVar3);
  }
  puVar2 = puStack_18;
  if (puStack_18 != puVar4) {
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      puVar4[1] = puVar4[1] + 1;
      UNLOCK();
    }
    puVar2 = puVar4;
    if (puStack_18 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puStack_18 + 1;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        puVar2 = (undefined4 *)*puStack_18;
        puStack_18 = puVar4;
        (*(code *)*puVar2)(1);
        puVar2 = puStack_18;
      }
    }
  }
  puStack_18 = puVar2;
  (**(code **)(*in_ECX + 0xb4))(&local_24);
  local_14 = operator_new(0xc);
  local_8._0_1_ = 2;
  piVar1 = local_14 + 2;
  *local_14 = juce::ModalCallbackFunction::ComponentCaller1<juce::ComboBox>::vftable;
  local_14[1] = FUN_0069a9b0;
  local_28 = piVar1;
  iVar3 = FUN_0040de70(in_ECX);
  *piVar1 = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar6 = *(undefined4 *)(in_ECX[0x2f] + 0x1c);
  puVar12 = local_50;
  uVar11 = 1;
  puVar10 = local_78;
  iVar3 = in_ECX[6];
  puVar9 = local_a0;
  uVar5 = FUN_006e85c0(puVar9,iVar3,puVar10,1,puVar12,uVar6);
  puVar8 = local_c8;
  puVar7 = local_f0;
  FUN_006d1110(puVar7);
  FUN_006d1070(puVar7,in_ECX);
  FUN_006a0310(puVar8,uVar5);
  FUN_006a0400(puVar9,iVar3);
  FUN_006a03b0(puVar10,uVar11);
  uVar6 = FUN_006a0360(puVar12,uVar6);
  FUN_006a0120(uVar6,local_14,0);
  if (puStack_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puStack_18 + 1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puStack_18)(1);
    }
  }
  FUN_004b00e0();
  FID_conflict__free(local_24);
  ExceptionList = local_10;
  return;
}

