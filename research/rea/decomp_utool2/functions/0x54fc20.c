// rea decompile_all
// name: FUN_0054fc20
// address: 0x54fc20
// body: available
// range: 0x54fc20-0x54fe64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054fc20(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined4 *local_8;
  
  iVar4 = 0;
  *in_ECX = TargetTreeNode::vftable;
  in_ECX[0x17] = 0;
  if (0 < (int)in_ECX[0x16]) {
    do {
      piVar3 = (int *)FUN_004110e0(&local_8,iVar4);
      *(undefined4 *)(*piVar3 + 0x5c) = 0;
      if (local_8 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_8 + 1;
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_8)(1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)in_ECX[0x16]);
  }
  iVar4 = in_ECX[0x16];
  while (0 < iVar4) {
    iVar4 = in_ECX[0x16];
    in_ECX[0x16] = iVar4 + -1;
    puVar2 = *(undefined4 **)(in_ECX[0x14] + (iVar4 + -1) * 4);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar3 = puVar2 + 1;
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar4 = in_ECX[0x16];
  }
  if (in_ECX[0x15] != 0) {
    FID_conflict__free((void *)in_ECX[0x14]);
    in_ECX[0x14] = 0;
    in_ECX[0x15] = 0;
  }
  iVar4 = in_ECX[0x16];
  while (0 < iVar4) {
    iVar4 = in_ECX[0x16];
    in_ECX[0x16] = iVar4 + -1;
    puVar2 = *(undefined4 **)(in_ECX[0x14] + (iVar4 + -1) * 4);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar3 = puVar2 + 1;
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar4 = in_ECX[0x16];
  }
  FID_conflict__free((void *)in_ECX[0x14]);
  piVar3 = (int *)(in_ECX[0x12] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  iVar4 = 0;
  if (0 < (int)in_ECX[0x11]) {
    do {
      piVar3 = (int *)(*(int *)(in_ECX[0xf] + iVar4 * 4) + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)in_ECX[0x11]);
  }
  FID_conflict__free((void *)in_ECX[0xf]);
  puVar2 = (undefined4 *)in_ECX[0xe];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar2 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0xd];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar2 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0xc];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar2 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  piVar3 = (int *)(in_ECX[9] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[6] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[5] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[4] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[3] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  *in_ECX = juce::ReferenceCountedObject::vftable;
  return;
}

