// rea decompile_all
// name: FUN_006d8140
// address: 0x6d8140
// body: available
// range: 0x6d8140-0x6d834a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d8140(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_7c [8];
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007276e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar5 = (float)param_5;
  fVar6 = (fVar5 - fVar5 * 0.75) * 0.5;
  (**(code **)(*(int *)(in_ECX + -0x2c) + 4))();
  iStack_68 = 0x6d81f9;
  FUN_00684c50();
  fVar7 = fVar5 * 0.7;
  iStack_68 = 0x6d8212;
  puVar3 = operator_new(0x28);
  param_3 = 0.1;
  if ((0.1 <= fVar7) && (param_3 = 10000.0, fVar7 <= 10000.0)) {
    param_3 = fVar7;
  }
  local_8 = 0;
  piVar1 = puVar3 + 1;
  *puVar3 = juce::ReferenceCountedObject::vftable;
  *piVar1 = 0;
  *puVar3 = juce::Font::SharedFontInternal::vftable;
  puVar3[2] = 0;
  piVar4 = (int *)FUN_00643f40();
  iVar2 = *piVar4;
  puVar3[3] = iVar2;
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  iStack_68 = 0x6d828a;
  FUN_0045c990();
  puVar3[5] = param_3;
  puVar3[6] = 0x3f800000;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_8 = 1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  iStack_68 = 0x6d82d9;
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      iStack_68 = 1;
      iStack_6c = 0x6d82fd;
      (**(code **)*puVar3)();
    }
  }
  iStack_68 = param_5;
  iStack_6c = (param_4 - (int)(fVar6 + fVar6 + fVar5 * 0.75 + 2.0)) + -4;
  uStack_70 = 0;
  uStack_74 = 0x6d8316;
  FUN_00472d90();
  iStack_68 = 1;
  iStack_6c = 0x21;
  FUN_0040e4d0(auStack_7c);
  FUN_006830c0(param_2);
  ExceptionList = local_10;
  return;
}

