// rea decompile_all
// name: FUN_006d20c0
// address: 0x6d20c0
// body: available
// range: 0x6d20c0-0x6d2352 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d20c0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *piVar4;
  uint uVar5;
  char **in_stack_00000014;
  char *pcVar6;
  int local_28;
  char *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726ef0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  pcVar6 = "ThreadWithProgressWindow";
  FUN_0045c990("ThreadWithProgressWindow",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_00630a80(&local_14,pcVar6);
  local_8 = 0;
  piVar4 = (int *)(local_14 - 8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[0x10] = juce::Timer::vftable;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  *in_ECX = juce::ThreadWithProgressWindow::vftable;
  in_ECX[0x10] = juce::ThreadWithProgressWindow::vftable;
  *(undefined8 *)(in_ECX + 0x16) = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = &DAT_00bfe12c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1a));
  local_8 = CONCAT31(local_8._1_3_,4);
  in_ECX[0x20] = 10000;
  *(undefined1 *)(in_ECX + 0x21) = 0;
  pcVar6 = *in_stack_00000014;
  if (*pcVar6 == '\0') {
    in_stack_00000014 = (char **)FUN_00637250();
    uVar5 = 1;
  }
  else {
    piVar4 = (int *)(pcVar6 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    in_stack_00000014 = &local_24;
    uVar5 = 2;
    local_24 = pcVar6;
  }
  local_8 = 7;
  local_14 = uVar5;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  iVar2 = FUN_006cb680();
  local_20 = &DAT_00bfe12c;
  local_1c = &DAT_00bfe12c;
  local_18 = &DAT_00bfe12c;
  local_8 = 10;
  puVar3 = (undefined4 *)
           (**(code **)(*(int *)(iVar2 + 0x1c) + 4))
                     (param_1,&local_18,in_stack_00000014,&local_1c,&local_20,0,0,0);
  puVar1 = (undefined4 *)in_ECX[0x18];
  if ((puVar1 != puVar3) && (in_ECX[0x18] = puVar3, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_20 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  local_8 = 4;
  if (((uVar5 & 1) != 0) && (piVar4 = (int *)(local_28 + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *(undefined1 *)(in_ECX[0x18] + 0x15c) = 0;
  FUN_006d0e00(in_ECX + 0x16);
  ExceptionList = local_10;
  return;
}

