// rea decompile_all
// name: FUN_0042f2f0
// address: 0x42f2f0
// body: available
// range: 0x42f2f0-0x42f56f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042f2f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fdfa0;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ASIOAudioIODevice::vftable;
  piVar4 = &DAT_00c8a600;
  in_ECX[3] = juce::ASIOAudioIODevice::vftable;
  do {
    if ((undefined4 *)*piVar4 == in_ECX) {
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xc8a640);
  FUN_00430310(uVar3);
  if (in_ECX[9] != 0) {
    (**(code **)(*(int *)in_ECX[9] + 8))((int *)in_ECX[9]);
    in_ECX[9] = 0;
  }
  FID_conflict__free((void *)in_ECX[0x1c9]);
  CloseHandle((HANDLE)in_ECX[0x1c8]);
  FID_conflict__free((void *)in_ECX[0x1c7]);
  FID_conflict__free((void *)in_ECX[0x1c6]);
  FID_conflict__free((void *)in_ECX[0x1c5]);
  FID_conflict__free((void *)in_ECX[0x1c4]);
  FID_conflict__free((void *)in_ECX[0x1c3]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1bd));
  FID_conflict__free((void *)in_ECX[0x1b4]);
  FID_conflict__free((void *)in_ECX[0x1ac]);
  FID_conflict__free((void *)in_ECX[0x1e]);
  FID_conflict__free((void *)in_ECX[0x1b]);
  iVar5 = 0;
  if (0 < (int)in_ECX[0x1a]) {
    do {
      piVar4 = (int *)(*(int *)(in_ECX[0x18] + iVar5 * 4) + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)in_ECX[0x1a]);
  }
  FID_conflict__free((void *)in_ECX[0x18]);
  iVar5 = 0;
  if (0 < (int)in_ECX[0x17]) {
    do {
      piVar4 = (int *)(*(int *)(in_ECX[0x15] + iVar5 * 4) + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)in_ECX[0x17]);
  }
  FID_conflict__free((void *)in_ECX[0x15]);
  piVar4 = (int *)(in_ECX[0x12] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  puVar2 = (undefined4 *)in_ECX[8];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  in_ECX[3] = juce::Timer::vftable;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (0 < (int)in_ECX[5]) {
    if (DAT_00c8a668 != 0) {
      if (in_ECX[6] == 0) {
        *(undefined4 *)(DAT_00c8a668 + 0x4c) = in_ECX[7];
      }
      else {
        *(undefined4 *)(in_ECX[6] + 0x10) = in_ECX[7];
      }
      if (in_ECX[7] != 0) {
        *(undefined4 *)(in_ECX[7] + 0xc) = in_ECX[6];
      }
      in_ECX[7] = 0;
      in_ECX[6] = 0;
    }
    in_ECX[5] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  piVar4 = (int *)(in_ECX[2] + -8);
  *in_ECX = juce::AudioIODevice::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX[1] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

