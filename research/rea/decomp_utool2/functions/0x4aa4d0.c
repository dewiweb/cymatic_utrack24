// rea decompile_all
// name: FUN_004aa4d0
// address: 0x4aa4d0
// body: available
// range: 0x4aa4d0-0x4aa696 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa4d0(undefined4 param_1,HWND param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  HIMC pHVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  void *local_34 [3];
  void *local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  HIMC local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_0068d0a0();
  pHVar3 = ImmGetContext(param_2);
  local_18 = pHVar3;
  if ((piVar2 != (int *)0x0) && (pHVar3 != (HIMC)0x0)) {
    if (*in_ECX < 0) {
      if ((undefined **)*piVar2 == juce::TextEditor::vftable) {
        local_24 = piVar2[0x21];
        local_20 = piVar2[0x22];
        piVar5 = &local_24;
      }
      else {
        piVar5 = (int *)(*(code *)((undefined **)*piVar2)[2])();
      }
      iVar1 = *piVar5;
      *in_ECX = iVar1;
      in_ECX[1] = iVar1;
    }
    if ((param_3 & 0x800) == 0) {
      if ((param_3 & 8) != 0) {
        uVar4 = FUN_004aa6c0(local_1c);
        local_8 = 2;
        FUN_004aa780(&stack0xffffffb0,local_18,param_3);
        FUN_004aa830(piVar2,uVar4);
        FUN_00637c10();
        pHVar3 = local_18;
        FUN_004aa890(local_34);
        local_8 = 3;
        (**(code **)(*piVar2 + 0x10))();
        local_8 = 0xffffffff;
        FID_conflict__free(local_34[0]);
        *(undefined1 *)(in_ECX + 2) = 1;
      }
    }
    else {
      uVar4 = FUN_004aa6c0(&param_3);
      local_8 = 0;
      FUN_004aa830(piVar2,uVar4);
      piVar5 = (int *)(param_3 - 8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_004aa6a0();
      local_28 = (void *)0x0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 1;
      (**(code **)(*piVar2 + 0x10))();
      local_8 = 0xffffffff;
      FID_conflict__free(local_28);
    }
    FUN_004aa980(pHVar3);
    ImmReleaseContext(param_2,pHVar3);
  }
  ExceptionList = local_10;
  return;
}

