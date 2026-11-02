// rea decompile_all
// name: FUN_0046b480
// address: 0x46b480
// body: available
// range: 0x46b480-0x46b69e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0046b480(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  undefined4 **ppuVar9;
  int *piVar10;
  undefined4 *local_24 [2];
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007015dc;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar6 = *(int *)(in_ECX + 8);
  iVar7 = 0;
  if (0 < *(int *)(iVar6 + 0x1c)) {
    local_1c = 0;
    do {
      piVar8 = (int *)(*(int *)(iVar6 + 0x14) + 8 + local_1c);
      if (*(int *)(*piVar8 + 8) == 0) {
        ppuVar9 = local_24;
        piVar10 = piVar8;
        FUN_004681b0(ppuVar9,piVar8,uVar1);
        puVar2 = (undefined4 *)FUN_004682f0(ppuVar9,piVar10);
        uVar4 = *(undefined4 *)(*piVar8 + 8);
        *(undefined4 *)(*piVar8 + 8) = *puVar2;
        *puVar2 = uVar4;
        if (local_24[0] != (undefined4 *)0x0) {
          LOCK();
          piVar10 = local_24[0] + 1;
          iVar6 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)*local_24[0])(1);
          }
        }
      }
      iVar6 = local_1c;
      iVar3 = FUN_006f6dd6(*(undefined4 *)(*piVar8 + 8),0,&juce::Typeface::RTTI_Type_Descriptor,
                           &juce::WindowsDirectWriteTypeface::RTTI_Type_Descriptor,0);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x30) == *param_2)) {
        FUN_00683640(param_1);
        ExceptionList = local_10;
        return param_1;
      }
      iVar7 = iVar7 + 1;
      local_1c = iVar6 + 0x10;
      iVar6 = *(int *)(in_ECX + 8);
    } while (iVar7 < *(int *)(iVar6 + 0x1c));
  }
  local_8 = 0;
  local_14 = (int *)0x0;
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x18))(*(int **)(in_ECX + 0xc),*param_2,&local_14);
  local_8._0_1_ = 1;
  local_18 = (int *)0x0;
  (**(code **)(*local_14 + 0xc))(local_14,&local_18);
  uVar4 = FUN_00640400();
  local_8._0_1_ = 2;
  uVar5 = FUN_00640480();
  local_8 = CONCAT31(local_8._1_3_,3);
  operator_new(0x28);
  iVar6 = FUN_00468b50(uVar5,uVar4);
  *param_1 = iVar6;
  if (iVar6 != 0) {
    LOCK();
    *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
    UNLOCK();
  }
  param_2 = param_2 + -2;
  if (param_2 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *param_2;
    *param_2 = *param_2 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(param_2);
    }
  }
  piVar8 = (int *)(in_ECX + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  local_8 = 5;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  ExceptionList = local_10;
  return param_1;
}

