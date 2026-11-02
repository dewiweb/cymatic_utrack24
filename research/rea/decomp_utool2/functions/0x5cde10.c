// rea decompile_all
// name: FUN_005cde10
// address: 0x5cde10
// body: available
// range: 0x5cde10-0x5ce12e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cde10(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071b224;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::AudioDeviceManager::vftable;
  puVar3 = (undefined4 *)in_ECX[0x26];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[0x26] = 0;
    (**(code **)*puVar3)(1,uVar2);
  }
  puVar3 = (undefined4 *)in_ECX[0x6f];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[0x6f] = 0;
    (**(code **)*puVar3)(1);
  }
  iVar5 = 0;
  if (0 < (int)in_ECX[0x29]) {
    do {
      puVar3 = (undefined4 *)
               FUN_006f6dd6(*(undefined4 *)(in_ECX[0x27] + iVar5 * 4),0,
                            &juce::AudioIODeviceCallback::RTTI_Type_Descriptor,
                            &juce::AutoRemovingSourcePlayer::RTTI_Type_Descriptor,0);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)in_ECX[0x29]);
  }
  if ((undefined4 *)in_ECX[0x88] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x88])(1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x76));
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x70));
  if ((undefined4 *)in_ECX[0x6f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x6f])(1);
  }
  piVar4 = (int *)(in_ECX[0x6e] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar5 = 0;
  if (0 < (int)in_ECX[0x6d]) {
    do {
      piVar4 = (int *)(*(int *)(in_ECX[0x6b] + iVar5 * 8) + -8);
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
    } while (iVar5 < (int)in_ECX[0x6d]);
  }
  FID_conflict__free((void *)in_ECX[0x6b]);
  FUN_00433460();
  FID_conflict__free((void *)in_ECX[0x68]);
  iVar5 = 0;
  if (0 < (int)in_ECX[0x67]) {
    do {
      piVar4 = (int *)(*(int *)(in_ECX[0x65] + iVar5 * 4) + -8);
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
    } while (iVar5 < (int)in_ECX[0x67]);
  }
  FID_conflict__free((void *)in_ECX[0x65]);
  FID_conflict__free((void *)in_ECX[0x43]);
  iVar5 = in_ECX[0x3d];
  if (iVar5 != 0) {
    FUN_00634ec0();
    FUN_004bfe14(iVar5,0x10);
  }
  FID_conflict__free((void *)in_ECX[0x35]);
  FID_conflict__free((void *)in_ECX[0x2d]);
  piVar4 = (int *)(in_ECX[0x2c] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FID_conflict__free((void *)in_ECX[0x27]);
  if ((undefined4 *)in_ECX[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x26])(1);
  }
  FID_conflict__free((void *)in_ECX[0x1c]);
  FID_conflict__free((void *)in_ECX[0x13]);
  piVar4 = (int *)(in_ECX[0xf] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX[0xe] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_004334e0();
  FID_conflict__free((void *)in_ECX[10]);
  iVar5 = in_ECX[9];
  while (0 < iVar5) {
    iVar5 = in_ECX[9];
    in_ECX[9] = iVar5 + -1;
    piVar4 = *(int **)(in_ECX[7] + (iVar5 + -1) * 4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x18))(1);
    }
    iVar5 = in_ECX[9];
  }
  FID_conflict__free((void *)in_ECX[7]);
  *in_ECX = juce::ChangeBroadcaster::vftable;
  FID_conflict__free((void *)in_ECX[4]);
  in_ECX[1] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[2] + 0xc) = 0;
  UNLOCK();
  puVar3 = (undefined4 *)in_ECX[2];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar3 + 1;
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

