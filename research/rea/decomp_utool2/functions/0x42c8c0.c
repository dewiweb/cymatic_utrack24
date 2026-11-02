// rea decompile_all
// name: FUN_0042c8c0
// address: 0x42c8c0
// body: available
// range: 0x42c8c0-0x42cd71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c8c0(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  HANDLE pvVar4;
  undefined4 *in_ECX;
  int iVar5;
  char *pcVar6;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fdd51;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("DirectSound",uVar2);
  *in_ECX = juce::AudioIODevice::vftable;
  iVar5 = *param_1;
  in_ECX[1] = iVar5;
  piVar3 = (int *)(iVar5 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[2] = local_14;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  pcVar6 = "Juce DSound";
  FUN_0045c990("Juce DSound",uVar2);
  FUN_00630a80(&param_1,pcVar6);
  piVar3 = param_1 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  iVar5 = param_2;
  *in_ECX = juce::DSoundAudioIODevice::vftable;
  in_ECX[3] = juce::DSoundAudioIODevice::vftable;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = param_2;
  in_ECX[0x1a] = param_3;
  *(undefined2 *)(in_ECX + 0x1b) = 0;
  in_ECX[0x1c] = &DAT_00bfe12c;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  in_ECX[0x23] = pvVar4;
  in_ECX[0x24] = 0;
  *(undefined8 *)(in_ECX + 0x26) = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x2d] = 4;
  in_ECX[0x2e] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x2f) = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x35] = 4;
  in_ECX[0x36] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x37) = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = in_ECX + 0x3d;
  in_ECX[0x3c] = 0;
  *(undefined1 *)(in_ECX + 0x5d) = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x61] = in_ECX + 99;
  in_ECX[0x62] = 0;
  *(undefined1 *)(in_ECX + 0x83) = 0;
  in_ECX[0x84] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x85));
  local_8 = CONCAT31(local_8._1_3_,0xc);
  if (-1 < iVar5) {
    param_1 = (int *)FUN_00637250();
    iVar5 = in_ECX[0x18] + 1;
    if ((int)in_ECX[0x17] < iVar5) {
      FUN_00409cf0(iVar5 / 2 + in_ECX[0x18] + 9 & 0xfffffff8);
    }
    iVar5 = in_ECX[0x18];
    in_ECX[0x18] = iVar5 + 1;
    puVar1 = (undefined4 *)(in_ECX[0x16] + iVar5 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      *param_1 = (int)&DAT_00bfe12c;
    }
    piVar3 = (int *)(param_2 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    param_1 = (int *)FUN_00637250();
    iVar5 = in_ECX[0x18] + 1;
    if ((int)in_ECX[0x17] < iVar5) {
      FUN_00409cf0(iVar5 / 2 + in_ECX[0x18] + 9 & 0xfffffff8);
    }
    iVar5 = in_ECX[0x18];
    in_ECX[0x18] = iVar5 + 1;
    piVar3 = (int *)(in_ECX[0x16] + iVar5 * 4);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *param_1;
      *param_1 = (int)&DAT_00bfe12c;
    }
    piVar3 = (int *)(param_2 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  if (-1 < (int)param_3) {
    param_3 = (undefined4 *)FUN_00637250();
    iVar5 = in_ECX[0x15] + 1;
    if ((int)in_ECX[0x14] < iVar5) {
      FUN_00409cf0(iVar5 / 2 + in_ECX[0x15] + 9 & 0xfffffff8);
    }
    iVar5 = in_ECX[0x15];
    in_ECX[0x15] = iVar5 + 1;
    puVar1 = (undefined4 *)(in_ECX[0x13] + iVar5 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      *param_3 = &DAT_00bfe12c;
    }
    piVar3 = param_1 + -2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    param_3 = (undefined4 *)FUN_00637250();
    iVar5 = in_ECX[0x15] + 1;
    if ((int)in_ECX[0x14] < iVar5) {
      FUN_00409cf0(iVar5 / 2 + in_ECX[0x15] + 9 & 0xfffffff8);
    }
    iVar5 = in_ECX[0x15];
    in_ECX[0x15] = iVar5 + 1;
    puVar1 = (undefined4 *)(in_ECX[0x13] + iVar5 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      *param_3 = &DAT_00bfe12c;
    }
    piVar3 = param_1 + -2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

