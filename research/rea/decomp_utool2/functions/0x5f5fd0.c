// rea decompile_all
// name: FUN_005f5fd0
// address: 0x5f5fd0
// body: available
// range: 0x5f5fd0-0x5f6492 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f5fd0(void)

{
  code *pcVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  bool bVar10;
  undefined1 auStack_d4 [4];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  void *local_b0;
  void *local_ac;
  void *local_a8;
  void *local_a4;
  void *local_90;
  uint local_1c;
  void *local_18;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_d4;
  iVar2 = FUN_005feec0(1);
  if (iVar2 == 0) {
LAB_005f61fc:
    __security_check_cookie(local_c ^ (uint)auStack_d4);
    return;
  }
  local_c8 = (uint)(local_cc != 0);
  iVar2 = FUN_005feec0(7);
  if ((iVar2 == 0) || (iVar2 = FUN_005feec0(0x18), uVar5 = local_cc, uVar8 = local_d0, iVar2 == 0))
  goto LAB_005f61fc;
  if (local_cc == 0) {
    iVar2 = FUN_005f5e40(local_d0);
    if (iVar2 == 0) goto LAB_005f61fc;
    piVar6 = &DAT_00a92564;
    uVar8 = 0xc;
    *(undefined4 *)(in_ECX[1] + 0xf0) = 1;
    piVar4 = (int *)(in_ECX[1] + 0x130);
    do {
      if (*piVar4 != *piVar6) goto LAB_005f60b1;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
      bVar10 = 3 < uVar8;
      uVar8 = uVar8 - 4;
    } while (bVar10);
    *(undefined4 *)(in_ECX[1] + 0xe14) = 0;
LAB_005f60b1:
    iVar2 = in_ECX[1];
    if ((*(int *)(iVar2 + 0xe1c) != 0) || (*(int *)(iVar2 + 600) == 0)) goto LAB_005f60dc;
    pcVar1 = *(code **)(iVar2 + 0x18);
joined_r0x005f60cb:
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    goto LAB_005f60dc;
  }
  if (local_cc == 3) {
    iVar2 = FUN_005f5c90(local_d0);
    if (iVar2 == 0) goto LAB_005f61fc;
    *(undefined4 *)(in_ECX[1] + 0xf4) = 1;
    iVar2 = in_ECX[1];
    if ((*(int *)(iVar2 + 0xe1c) != 0) || (*(int *)(iVar2 + 0x264) == 0)) goto LAB_005f60dc;
    pcVar1 = *(code **)(iVar2 + 0x18);
    goto joined_r0x005f60cb;
  }
  local_c4 = *(int *)(in_ECX[1] + 600 + local_cc * 4);
  local_cc = (uint)(local_c4 == 0);
  _memset(&local_c0,0,0xb0);
  local_bc = local_c8;
  local_c0 = uVar5;
  local_b8 = uVar8;
  uVar3 = local_cc;
  if (uVar5 == 2) {
    iVar2 = FUN_005fec40(4);
    if (iVar2 == 0) goto LAB_005f61fc;
    if (uVar8 < 4) {
      *(undefined4 *)*in_ECX = 8;
      goto LAB_005f61fc;
    }
    uVar8 = uVar8 - 4;
    uVar3 = local_cc;
    if ((*(int *)(in_ECX[1] + 0x45c) != 0) && (iVar2 = FUN_005f6630(), uVar3 = local_cc, iVar2 != 0)
       ) {
      uVar3 = (uint)(local_c4 != 0);
    }
  }
  if (uVar3 != 0) {
    iVar2 = FUN_005fed10();
    if (iVar2 == 0) {
      __security_check_cookie(local_c ^ (uint)auStack_d4);
      return;
    }
    goto LAB_005f60dc;
  }
  local_d0 = 1;
  switch(uVar5) {
  case 0:
  case 3:
    goto switchD_005f627f_caseD_0;
  case 1:
    iVar2 = FUN_005fed10();
    if (iVar2 != 0) goto switchD_005f627f_caseD_0;
    local_d0 = 0;
    goto switchD_005f6393_switchD;
  case 2:
    if (uVar8 != 0) {
      local_ac = (void *)FUN_004c554b(uVar8);
      if (local_ac == (void *)0x0) {
        local_d0 = 0;
        *(undefined4 *)*in_ECX = 8;
        goto switchD_005f6393_switchD;
      }
      iVar2 = FUN_005fec40(uVar8);
      break;
    }
    local_ac = (void *)0x0;
    goto switchD_005f627f_caseD_0;
  case 4:
    iVar2 = FUN_005f5a80(uVar8);
    break;
  case 5:
    iVar2 = FUN_005f57d0();
    break;
  case 6:
    iVar2 = FUN_005f5610();
    break;
  default:
    if (uVar8 == 0) {
      local_b0 = (void *)0x0;
      goto switchD_005f627f_caseD_0;
    }
    local_b0 = (void *)FUN_004c554b(uVar8);
    if (local_b0 == (void *)0x0) {
      local_d0 = 0;
      *(undefined4 *)*in_ECX = 8;
    }
    else {
      iVar2 = FUN_005fec40(uVar8);
      if (iVar2 != 0) goto switchD_005f627f_caseD_0;
      local_d0 = 0;
    }
    goto LAB_005f638a;
  }
  if (iVar2 != 0) {
switchD_005f627f_caseD_0:
    if ((*(int *)(in_ECX[1] + 0xe1c) == 0) &&
       (pcVar1 = *(code **)(in_ECX[1] + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
LAB_005f638a:
    if (uVar5 < 7) goto switchD_005f6393_switchD;
switchD_005f6393_caseD_5f6460:
    local_90 = local_b0;
    goto LAB_005f6464;
  }
  local_d0 = 0;
switchD_005f6393_switchD:
  switch((&switchD_005f6393::switchdataD_005f64b0)[uVar5]) {
  case (undefined *)0x5f639a:
    local_90 = local_ac;
    break;
  case (undefined *)0x5f63a3:
    if (local_ac != (void *)0x0) {
      FID_conflict__free(local_ac);
    }
    local_90 = local_a4;
    if ((local_a8 != (void *)0x0) &&
       (pvVar9 = (void *)0x0, pvVar7 = local_a8, local_a8 != (void *)0x0)) {
      do {
        _Memory = *(void **)((int)local_90 + (int)pvVar9 * 8 + 4);
        if (_Memory != (void *)0x0) {
          FID_conflict__free(_Memory);
          local_90 = local_a4;
          pvVar7 = local_a8;
        }
        pvVar9 = (void *)((int)pvVar9 + 1);
      } while (pvVar9 < pvVar7);
    }
    break;
  case (undefined *)0x5f63ec:
    local_90 = local_18;
    if ((local_1c != 0) && (uVar8 = 0, local_1c != 0)) {
      iVar2 = 0;
      uVar5 = local_1c;
      do {
        pvVar7 = *(void **)((int)local_90 + iVar2 + 0x20);
        if (pvVar7 != (void *)0x0) {
          FID_conflict__free(pvVar7);
          local_90 = local_18;
          uVar5 = local_1c;
        }
        uVar8 = uVar8 + 1;
        iVar2 = iVar2 + 0x28;
      } while (uVar8 < uVar5);
    }
    break;
  case (undefined *)0x5f6438:
    if (local_ac != (void *)0x0) {
      FID_conflict__free(local_ac);
    }
    if (local_a8 != (void *)0x0) {
      FID_conflict__free(local_a8);
    }
    break;
  case (undefined *)0x5f6460:
    goto switchD_005f6393_caseD_5f6460;
  case (undefined *)0x5f6471:
    goto switchD_005f6393_caseD_5f6471;
  }
LAB_005f6464:
  if (local_90 != (void *)0x0) {
    FID_conflict__free(local_90);
  }
switchD_005f6393_caseD_5f6471:
  if (local_d0 == 0) {
    __security_check_cookie(local_c ^ (uint)auStack_d4);
    return;
  }
LAB_005f60dc:
  if (local_c8 != 0) {
    iVar2 = FUN_005f6d30();
    if (iVar2 == 0) {
      iVar2 = in_ECX[1];
      *(undefined4 *)(iVar2 + 0x17e0) = 0;
      *(undefined4 *)(iVar2 + 0x17e4) = 0;
    }
    *(undefined4 *)*in_ECX = 2;
  }
  __security_check_cookie(local_c ^ (uint)auStack_d4);
  return;
}

