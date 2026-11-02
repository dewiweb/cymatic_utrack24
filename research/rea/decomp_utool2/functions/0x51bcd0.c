// rea decompile_all
// name: FUN_0051bcd0
// address: 0x51bcd0
// body: available
// range: 0x51bcd0-0x51be2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051bcd0(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint3 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00709e14;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar5 = (int *)(in_ECX + 0x70);
  *(undefined4 *)(in_ECX + 0x6c) = param_1;
  piVar1 = (int *)(param_2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = *piVar5;
  *piVar5 = param_2;
  UNLOCK();
  piVar1 = (int *)(iVar4 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  local_8._0_1_ = 1;
  if (*(int *)(in_ECX + 0x74) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x74) + 8);
  }
  iVar4 = FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,&TVIBase::RTTI_Type_Descriptor
                      );
  uVar2 = local_8._1_3_;
  local_8 = (uint)local_8._1_3_ << 8;
  if (iVar4 == 0) goto LAB_0051bdf9;
  if (*(int *)(in_ECX + 0x60) == 0) {
    piVar5 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    local_8._0_1_ = 3;
    uVar3 = DAT_00c7ef94;
    if (*(int *)(in_ECX + 0x74) == 0) goto LAB_0051bdd5;
    uVar6 = *(undefined4 *)(*(int *)(in_ECX + 0x74) + 8);
  }
  else {
    piVar5 = (int *)(*piVar5 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    local_8._0_1_ = 2;
    uVar3 = *(undefined4 *)(in_ECX + 0x6c);
    if (*(int *)(in_ECX + 0x74) == 0) {
LAB_0051bdd5:
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(in_ECX + 0x74) + 8);
    }
  }
  local_8._1_3_ = uVar2;
  FUN_006f6dd6(uVar6,0,&juce::Component::RTTI_Type_Descriptor,&TVIBase::RTTI_Type_Descriptor,0,uVar3
              );
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00519ae0(uVar3);
LAB_0051bdf9:
  piVar5 = (int *)(param_2 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

