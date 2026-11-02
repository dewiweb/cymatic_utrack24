// rea decompile_all
// name: FUN_00431970
// address: 0x431970
// body: available
// range: 0x431970-0x431e3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00431970(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  double dVar7;
  undefined1 local_b6;
  char cStack_b5;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int aiStack_a8 [3];
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  aiStack_a8[1] = 0;
  *(undefined1 *)(in_ECX + 0x73a) = 0;
  FUN_0040f7f0();
  if (*(int *)(in_ECX + 100) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x60));
    *(undefined4 *)(in_ECX + 0x60) = 0;
    *(undefined4 *)(in_ECX + 100) = 0;
  }
  *(undefined4 *)(in_ECX + 0x68) = 0;
  FUN_0040f7f0();
  if (*(int *)(in_ECX + 0x58) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x54));
    *(undefined4 *)(in_ECX + 0x54) = 0;
    *(undefined4 *)(in_ECX + 0x58) = 0;
  }
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  if (*(int *)(in_ECX + 0x7c) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x78));
    *(undefined4 *)(in_ECX + 0x78) = 0;
    *(undefined4 *)(in_ECX + 0x7c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x80) = 0;
  if (*(int *)(in_ECX + 0x70) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x6c));
    *(undefined4 *)(in_ECX + 0x6c) = 0;
    *(undefined4 *)(in_ECX + 0x70) = 0;
  }
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined1 *)(in_ECX + 0x734) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x72c) = 0;
  *(undefined4 *)(in_ECX + 0x730) = 0;
  *(undefined4 *)(in_ECX + 0x6f0) = 0;
  aiStack_a8[2] = *(int *)(in_ECX + 0x48);
  piVar6 = (int *)(aiStack_a8[2] + -8);
  local_9c = aiStack_a8[2];
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  *(undefined1 **)(in_ECX + 0x48) = &DAT_00bfe12c;
  if (**(char **)(in_ECX + 4) == '\0') goto LAB_00431e1f;
  if (*(int *)(in_ECX + 0x24) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x24) + 8))(*(int **)(in_ECX + 0x24));
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  local_b6 = 0;
  cVar1 = FUN_004316d0(&local_b6);
  if (cVar1 == '\0') {
    FUN_0045c990("No such device");
    iVar3 = *(int *)(in_ECX + 0x48);
    iStack_60 = iStack_ac;
    iVar5 = iStack_ac;
    iStack_ac = iVar3;
    iStack_64 = iVar3;
    iStack_5c = iVar3;
    iStack_58 = iVar3;
    iStack_54 = iVar3;
LAB_00431da9:
    piVar6 = (int *)(iVar3 + -8);
    *(int *)(in_ECX + 0x48) = iVar5;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_004317f0(aiStack_a8);
    uStack_98 = *(undefined4 *)(in_ECX + 0x48);
    uStack_94 = *puVar2;
    *(undefined4 *)(in_ECX + 0x48) = uStack_94;
    *puVar2 = uStack_98;
    cStack_b5 = **(char **)(in_ECX + 0x48);
    iStack_8c = aiStack_a8[0];
    iStack_88 = aiStack_a8[0];
    piVar6 = (int *)(aiStack_a8[0] + -8);
    uStack_90 = uStack_98;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    if (cStack_b5 == '\0') {
      *(undefined4 *)(in_ECX + 0x72c) = 0;
      *(undefined4 *)(in_ECX + 0x730) = 0;
      *(undefined4 *)(in_ECX + 0x4c) = 0;
      *(undefined4 *)(in_ECX + 0x50) = 0;
      if (*(int *)(in_ECX + 0x24) != 0) {
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x24))();
        if (iVar3 == 0) {
          FID_conflict__free(*(void **)(in_ECX + 0x70c));
          uVar4 = FUN_004c5556();
          *(undefined4 *)(in_ECX + 0x70c) = uVar4;
          FUN_004032a0();
          FUN_004032a0();
          FUN_004329c0();
          FUN_004329c0();
          iVar3 = FUN_00430c30();
          if (iVar3 == 0) {
            FUN_00430f60(*(undefined4 *)(in_ECX + 0x8c),*(undefined4 *)(in_ECX + 0x90),
                         *(undefined4 *)(in_ECX + 0x94),*(undefined4 *)(in_ECX + 0x98));
            uStack_50 = 0;
            uStack_4c = 0;
            (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(&uStack_50);
            dVar7 = (double)CONCAT44(uStack_50,iStack_54);
            if ((dVar7 < 1.0) || (192001.0 < dVar7)) {
              (**(code **)(**(int **)(in_ECX + 0x24) + 0x38))(0x40e5888000000000);
              iStack_54 = 0;
              uStack_50 = 0;
              (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(&iStack_54);
              dVar7 = (double)CONCAT44(uStack_48,uStack_4c);
            }
            *(double *)(in_ECX + 0x6a8) = dVar7;
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x5c))();
            *(bool *)(in_ECX + 0x739) = iVar3 == 0;
            FUN_0042f570();
            FUN_00431370();
            FUN_004313a0();
            FUN_00431370();
            (**(code **)(**(int **)(in_ECX + 0x24) + 0x1c))();
            Sleep(0x50);
            (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
          }
          else {
            FUN_0045c990("Can\'t detect buffer sizes");
            uStack_84 = *(undefined4 *)(in_ECX + 0x48);
            uStack_80 = uStack_b4;
            *(undefined4 *)(in_ECX + 0x48) = uStack_b4;
            uStack_b4 = uStack_84;
            uStack_7c = uStack_84;
            FUN_00637c10();
          }
          goto LAB_00431dcd;
        }
      }
      FUN_0045c990("Can\'t detect asio channels");
      iVar3 = *(int *)(in_ECX + 0x48);
      iStack_74 = iStack_b0;
      iVar5 = iStack_b0;
      iStack_b0 = iVar3;
      iStack_78 = iVar3;
      iStack_70 = iVar3;
      iStack_6c = iVar3;
      iStack_68 = iVar3;
      goto LAB_00431da9;
    }
  }
LAB_00431dcd:
  if ((**(char **)(in_ECX + 0x48) != '\0') && (*(int *)(in_ECX + 0x24) != 0)) {
    if (*(char *)(in_ECX + 0x736) != '\0') {
      *(undefined1 *)(in_ECX + 0x736) = 0;
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x50))();
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x24) + 8))(*(int **)(in_ECX + 0x24));
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
  }
  *(undefined1 *)(in_ECX + 0x734) = 0;
  *(undefined1 *)(in_ECX + 0x73a) = 0;
  FUN_0063eab0();
LAB_00431e1f:
  iVar3 = *(int *)(in_ECX + 0x48);
  *param_1 = iVar3;
  piVar6 = (int *)(iVar3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  return;
}

