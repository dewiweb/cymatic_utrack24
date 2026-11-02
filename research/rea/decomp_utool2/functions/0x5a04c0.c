// rea decompile_all
// name: FUN_005a04c0
// address: 0x5a04c0
// body: available
// range: 0x5a04c0-0x5a079c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a04c0(void)

{
  int *_Memory;
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  int local_54;
  int *local_50;
  char *local_4c;
  int local_48;
  uint local_44;
  int *local_40;
  char *local_3c;
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007161a3;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  local_14 = uVar1;
  EnterCriticalSection(lpCriticalSection);
  iVar2 = DAT_00c8a5d8;
  FUN_0041aaa0(uVar1);
  if (*(int *)(iVar2 + 0x44) != 0) {
    FID_conflict__free(*(void **)(iVar2 + 0x40));
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
  }
  *(undefined4 *)(iVar2 + 0x48) = 0;
  LeaveCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(in_ECX + 0x14);
  if (iVar2 != 0) {
    uVar1 = 0;
    if (0 < iVar2) {
      bVar9 = iVar2 != 0;
      do {
        if (bVar9) {
          piVar3 = *(int **)(*(int *)(in_ECX + 0xc) + uVar1 * 4);
        }
        else {
          piVar3 = (int *)0x0;
        }
        piVar3[2] = in_ECX;
        if (*(char *)(in_ECX + 0x30) == '\0') {
          (**(code **)(*piVar3 + 0x18))();
        }
        else {
          FUN_0059c9c0(1,0x500,&PTR_DAT_00c7ed54);
        }
        uVar1 = uVar1 + 1;
        bVar9 = uVar1 < *(uint *)(in_ECX + 0x14);
      } while ((int)uVar1 < (int)*(uint *)(in_ECX + 0x14));
    }
    do {
      uVar6 = 0;
      uVar8 = 0;
      local_44 = 0;
      uVar1 = local_44;
      if (0 < *(int *)(in_ECX + 0x14)) {
        bVar9 = *(int *)(in_ECX + 0x14) != 0;
        do {
          if (bVar9) {
            piVar3 = *(int **)(*(int *)(in_ECX + 0xc) + uVar8 * 4);
          }
          else {
            piVar3 = (int *)0x0;
          }
          iVar2 = (**(code **)(*piVar3 + 0x14))();
          uVar8 = uVar8 + 1;
          uVar6 = uVar6 + iVar2;
          bVar9 = uVar8 < *(uint *)(in_ECX + 0x14);
          uVar1 = uVar6;
        } while ((int)uVar8 < (int)*(uint *)(in_ECX + 0x14));
      }
      local_44 = uVar1;
      local_1b[2] = 0;
      local_3c = local_1b + 2;
      uVar1 = local_44;
      if ((int)local_44 < 0) {
        uVar1 = -local_44;
        do {
          pcVar7 = local_3c;
          local_3c = pcVar7 + -1;
          uVar6 = uVar1 / 10;
          *local_3c = (char)uVar1 + (char)uVar6 * -10 + '0';
          uVar1 = uVar6;
        } while (uVar6 != 0);
        local_3c = pcVar7 + -2;
        *local_3c = '-';
      }
      else {
        do {
          local_3c = local_3c + -1;
          uVar6 = uVar1 / 10;
          *local_3c = (char)uVar1 + (char)uVar6 * -10 + '0';
          uVar1 = uVar6;
        } while (uVar6 != 0);
      }
      iVar2 = -(int)local_3c;
      pcVar7 = local_1b + iVar2 + 2;
      piVar3 = (int *)FUN_004bfe22(((uint)(&uStack_15 + iVar2) & 0xfffffffc) + 0xb);
      piVar3[1] = (uint)(&uStack_15 + iVar2) & 0xfffffffc;
      local_50 = piVar3 + 2;
      *piVar3 = 0;
      local_40 = local_50;
      local_4c = local_3c;
      pcVar5 = local_3c;
      while ((0 < (int)pcVar7 && (iVar2 = FUN_00443260(), pcVar5 = extraout_ECX, iVar2 != 0))) {
        FUN_0044ecc0(iVar2);
        pcVar7 = pcVar7 + -1;
        pcVar5 = extraout_ECX_00;
      }
      *(undefined1 *)local_40 = 0;
      local_8 = 0;
      FUN_00637690(&local_50);
      uVar4 = FUN_006377c0(pcVar5);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_005a0d40(0,uVar4);
      _Memory = (int *)(local_54 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar2 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      local_8 = 0xffffffff;
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      Sleep(100);
    } while (local_44 != 0);
    FUN_0045c990("Cleanup...");
    local_8 = 2;
    FUN_005a0d40(0,&local_48);
    local_8 = 0xffffffff;
    piVar3 = (int *)(local_48 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    uVar1 = 0;
    if (0 < *(int *)(in_ECX + 0x14)) {
      bVar9 = *(int *)(in_ECX + 0x14) != 0;
      do {
        if (bVar9) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        if ((*(char *)(in_ECX + 0x30) != '\0') || (*(int *)(iVar2 + 0x40) != 0)) {
          FUN_0059c2b0();
        }
        uVar1 = uVar1 + 1;
        bVar9 = uVar1 < *(uint *)(in_ECX + 0x14);
      } while ((int)uVar1 < (int)*(uint *)(in_ECX + 0x14));
    }
    FUN_00589050();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

