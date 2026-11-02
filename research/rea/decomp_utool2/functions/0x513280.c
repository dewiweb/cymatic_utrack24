// rea decompile_all
// name: FUN_00513280
// address: 0x513280
// body: available
// range: 0x513280-0x5133a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513280(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708e8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_006f6dd6(param_1,0,&PresetSelectorItem::RTTI_Type_Descriptor,
                       &MixerPreset::RTTI_Type_Descriptor,0,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar2 = *(int *)(iVar3 + 8);
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_8 = 0;
  piVar4 = (int *)(*param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar3 + 4);
  *(int *)(iVar3 + 4) = *param_2;
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_00512000();
  FUN_00635980();
  *(undefined1 *)(in_ECX + 0x3ac) = 0;
  FUN_006e4900(&PTR_DAT_00c7ed68,0);
  FUN_006e6170(0x1000280,DAT_00c8a948);
  FUN_006e6170(0x1000281,DAT_00c8a948);
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

