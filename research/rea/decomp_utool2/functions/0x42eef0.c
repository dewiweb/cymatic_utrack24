// rea decompile_all
// name: FUN_0042eef0
// address: 0x42eef0
// body: available
// range: 0x42eef0-0x42f2e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042eef0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  HANDLE pvVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fdf81;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990(&DAT_00c1424c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *in_ECX = juce::AudioIODevice::vftable;
  iVar2 = *param_2;
  in_ECX[1] = iVar2;
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  in_ECX[2] = local_14;
  piVar1 = (int *)(local_14 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  in_ECX[3] = juce::Timer::vftable;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  local_8._0_1_ = 1;
  *in_ECX = juce::ASIOAudioIODevice::vftable;
  in_ECX[3] = juce::ASIOAudioIODevice::vftable;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004336e0(param_1);
  }
  in_ECX[8] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  in_ECX[9] = 0;
  in_ECX[0xe] = param_3;
  in_ECX[0xf] = param_4;
  in_ECX[0x10] = param_5;
  in_ECX[0x11] = param_6;
  in_ECX[0x12] = &DAT_00bfe12c;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x1a7] = 0;
  in_ECX[0x1a8] = 0;
  in_ECX[0x1a9] = 0x10;
  *(undefined8 *)(in_ECX + 0x1aa) = 0;
  in_ECX[0x1ac] = 0;
  in_ECX[0x1b1] = 4;
  in_ECX[0x1b2] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x1b3) = 0;
  in_ECX[0x1ad] = 0;
  in_ECX[0x1ae] = 0;
  in_ECX[0x1af] = 0;
  in_ECX[0x1b0] = 0;
  in_ECX[0x1b4] = 0;
  in_ECX[0x1b9] = 4;
  in_ECX[0x1ba] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x1bb) = 0;
  in_ECX[0x1b5] = 0;
  in_ECX[0x1b6] = 0;
  in_ECX[0x1b7] = 0;
  in_ECX[0x1b8] = 0;
  in_ECX[0x1bc] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1bd));
  in_ECX[0x1c3] = 0;
  in_ECX[0x1c4] = 0;
  in_ECX[0x1c5] = 0;
  in_ECX[0x1c6] = 0;
  in_ECX[0x1c7] = 0;
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  in_ECX[0x1c8] = pvVar3;
  in_ECX[0x1c9] = 0;
  local_8 = CONCAT31(local_8._1_3_,0x11);
  in_ECX[0x1ca] = 0;
  in_ECX[0x1cb] = 0;
  in_ECX[0x1cc] = 0;
  *(undefined2 *)(in_ECX + 0x1cd) = 0;
  *(undefined1 *)((int)in_ECX + 0x736) = 0;
  *(undefined1 *)((int)in_ECX + 0x737) = 0;
  *(undefined1 *)(in_ECX + 0x1ce) = 0;
  *(undefined1 *)((int)in_ECX + 0x739) = 1;
  *(undefined1 *)((int)in_ECX + 0x73a) = 0;
  *(undefined1 *)((int)in_ECX + 0x73b) = 0;
  *(undefined1 *)(in_ECX + 0x1cf) = 0;
  piVar1 = (int *)(*param_2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  LOCK();
  iVar2 = in_ECX[1];
  in_ECX[1] = *param_2;
  UNLOCK();
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  FID_conflict__free((void *)in_ECX[0x1c4]);
  uVar4 = FUN_004c5556(4,4);
  in_ECX[0x1c4] = uVar4;
  FID_conflict__free((void *)in_ECX[0x1c5]);
  uVar4 = FUN_004c5556(4,4);
  in_ECX[0x1c5] = uVar4;
  (&DAT_00c8a600)[param_7] = in_ECX;
  FUN_00431970(&param_1);
  piVar1 = (int *)(param_1 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  ExceptionList = local_10;
  return;
}

