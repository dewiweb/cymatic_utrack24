// rea decompile_all
// name: FUN_006c5300
// address: 0x6c5300
// body: available
// range: 0x6c5300-0x6c5455 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006c5300(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  uint uVar5;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725c91;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006c6110(param_1);
  *in_ECX = juce::DrawableComposite::vftable;
  iVar1 = *(int *)(param_1 + 0x78);
  in_ECX[0x1e] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  in_ECX[0x1f] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  in_ECX[0x20] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  in_ECX[0x21] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  in_ECX[0x22] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  in_ECX[0x23] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_0069fe90(param_1 + 0x90);
  local_8._0_1_ = 2;
  FUN_0069fe90(param_1 + 0xa8);
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar5 = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    bVar6 = *(int *)(param_1 + 0x30) != 0;
    do {
      if (bVar6) {
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar5 * 4);
      }
      else {
        uVar3 = 0;
      }
      piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::Drawable::RTTI_Type_Descriptor,0,uVar2);
      if ((piVar4 != (int *)0x0) &&
         (piVar4 = (int *)(**(code **)(*piVar4 + 0xb0))(), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x28))(1);
        FUN_006e5050(piVar4,0xffffffff);
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < *(uint *)(param_1 + 0x30);
    } while ((int)uVar5 < (int)*(uint *)(param_1 + 0x30));
  }
  ExceptionList = local_10;
  return in_ECX;
}

