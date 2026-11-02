// rea decompile_all
// name: FUN_006b7db0
// address: 0x6b7db0
// body: available
// range: 0x6b7db0-0x6b8318 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b7db0(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined1 **ppuVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int in_ECX;
  undefined1 **ppuVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined **local_4b8;
  int local_4b4;
  void *local_4b0;
  void *local_4a4;
  undefined1 *local_498;
  undefined4 *local_494;
  undefined1 *local_490;
  undefined1 *local_48c;
  uint local_488;
  undefined1 *local_484;
  undefined1 *local_480;
  undefined1 *local_47c;
  uint local_478;
  undefined4 *local_474;
  int local_470;
  undefined1 local_469;
  undefined1 local_468 [180];
  int local_3b4;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724352;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_478 = 0;
  local_470 = in_ECX;
  if (DAT_00c8a678 == 0) {
    local_474 = (undefined4 *)0x0;
  }
  else {
    local_474 = (undefined4 *)FUN_0040de70();
  }
  iVar2 = local_470;
  puVar6 = local_474;
  if (local_474 != (undefined4 *)0x0) {
    LOCK();
    local_474[1] = local_474[1] + 1;
    UNLOCK();
  }
  piVar9 = (int *)(local_470 + 0xc);
  local_8 = 0;
  local_494 = local_474;
  FUN_0040f7f0();
  if (*(int *)(iVar2 + 0x10) != 0) {
    FID_conflict__free((void *)*piVar9);
    *piVar9 = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  local_480 = (undefined1 *)(CONCAT31(local_480._1_3_,(char)(param_1 >> 1)) & 0xffffff01);
  uVar10 = param_1 >> 3 & 0xffffff01;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  local_478 = param_1 >> 2 & 0xffffff01;
  cVar3 = (char)uVar10;
  local_47c = (undefined1 *)CONCAT31(local_47c._1_3_,cVar3);
  local_488 = CONCAT31(local_488._1_3_,(char)(param_1 >> 7)) & 0xffffff01;
  local_484 = (undefined1 *)(CONCAT31(local_484._1_3_,(char)(param_1 >> 4)) & 0xffffff01);
  if (*(char *)(local_470 + 0x18) == '\0') {
    if (cVar3 != '\0') goto LAB_006b7efc;
    local_490 = &DAT_00bfe12c;
    ppuVar8 = &local_490;
    uVar10 = 2;
  }
  else {
    if (((char)local_478 == '\0') || (cVar3 == '\0')) {
      FUN_006850b0(local_470 + 8,local_470 + 4,local_47c,uVar10,local_480,local_488,local_484);
      goto LAB_006b8279;
    }
LAB_006b7efc:
    FUN_0045c990();
    ppuVar8 = &local_484;
    uVar10 = 1;
  }
  puVar12 = local_490;
  if ((char)local_478 == '\0') {
    local_47c = &DAT_00bfe12c;
    ppuVar4 = &local_47c;
    uVar10 = uVar10 | 8;
  }
  else {
    local_480 = *(undefined1 **)(local_470 + 4);
    piVar7 = (int *)(local_480 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    ppuVar4 = &local_480;
    uVar10 = uVar10 | 4;
  }
  local_498 = &DAT_00bfe12c;
  local_8 = 5;
  local_478 = uVar10;
  FUN_00613070(ppuVar4,ppuVar8);
  if ((uVar10 & 8) != 0) {
    uVar10 = uVar10 & 0xfffffff7;
    piVar7 = (int *)(local_47c + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar11 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  if ((uVar10 & 4) != 0) {
    uVar10 = uVar10 & 0xfffffffb;
    piVar7 = (int *)(local_480 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar11 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  if ((uVar10 & 2) != 0) {
    piVar7 = (int *)(puVar12 + -8);
    uVar10 = uVar10 & 0xfffffffd;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar11 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  local_8._0_1_ = 0xb;
  if (((uVar10 & 1) != 0) && (piVar7 = (int *)(local_484 + -8), piVar7 != &DAT_00bfe124)) {
    LOCK();
    iVar11 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  iVar11 = local_470;
  FUN_006ba790(param_1,local_470 + 8,&local_4b8);
  local_8._0_1_ = 0xc;
  FUN_006e8e70(&stack0xfffffa44,0x1001800,0);
  local_48c = &DAT_00bfe12c;
  local_8._0_1_ = 0xd;
  puVar12 = local_468;
  ppuVar8 = &local_48c;
  uVar10 = local_488;
  FUN_006b7be0(iVar11,ppuVar8,puVar12,local_488);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  cVar3 = FUN_006b7af0(ppuVar8,puVar12,uVar10);
  if (cVar3 != '\0') {
    iVar11 = 0;
    while( true ) {
      local_8 = CONCAT31(local_8._1_3_,0x10);
      iVar5 = local_3b4;
      if (local_3b4 == 0) {
        cVar3 = FUN_006ba2f0();
        iVar5 = 1;
        if (cVar3 == '\0') {
          iVar5 = local_3b4;
        }
      }
      if (iVar5 <= iVar11) break;
      puVar6 = (undefined4 *)FUN_006ba3c0(&local_488);
      if (*(int *)(iVar2 + 0x10) < *(int *)(iVar2 + 0x14) + 1) {
        FUN_00409cf0();
      }
      iVar5 = *(int *)(iVar2 + 0x14);
      *(int *)(iVar2 + 0x14) = iVar5 + 1;
      puVar1 = (undefined4 *)(*piVar9 + iVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar6;
        *puVar6 = &DAT_00bfe12c;
      }
      piVar7 = (int *)(local_488 - 8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar11 = iVar11 + 1;
    }
  }
  FUN_00415ff0();
  FUN_0068bcf0();
  FUN_006ba5c0();
  local_4b8 = juce::WildcardFileFilter::vftable;
  FUN_0040f7f0();
  FID_conflict__free(local_4a4);
  FUN_0040f7f0();
  FID_conflict__free(local_4b0);
  piVar9 = (int *)(local_4b4 + -8);
  local_4b8 = juce::FileFilter::vftable;
  puVar6 = local_474;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar9);
      puVar6 = local_474;
    }
  }
LAB_006b8279:
  local_469 = 0 < *(int *)(local_470 + 0x14);
  local_8 = 0x11;
  if (puVar6 != (undefined4 *)0x0) {
    if (puVar6[2] != 0) {
      piVar9 = (int *)puVar6[2];
      piVar7 = (int *)FUN_006cecc0();
      if (piVar7 != (int *)0x0) {
        for (; piVar7 != piVar9; piVar9 = (int *)piVar9[3]) {
          if (piVar9 == (int *)0x0) {
            cVar3 = (**(code **)(*piVar7 + 0x9c))();
            if (cVar3 == '\0') goto LAB_006b82e5;
            break;
          }
        }
      }
      FUN_006cc500(2);
    }
LAB_006b82e5:
    LOCK();
    piVar9 = puVar6 + 1;
    iVar2 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar6)();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

