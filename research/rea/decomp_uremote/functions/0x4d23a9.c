// rea decompile_all
// name: FUN_004d23a9
// address: 0x4d23a9
// body: available
// range: 0x4d23a9-0x4d291c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d23a9(void)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *unaff_EBX;
  int local_94;
  int local_88;
  int local_84;
  
  iVar8 = FUN_004d2973();
  if ((iVar8 < unaff_EBX[6]) && (iVar8 < unaff_EBX[7])) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((char)unaff_EBX[0x26] == '\0') || (bVar5 = true, !bVar3)) {
    bVar5 = false;
  }
  if ((*(char *)((int)unaff_EBX + 0x99) == '\0') || (bVar6 = true, !bVar3)) {
    bVar6 = false;
  }
  local_94 = 2;
  do {
    if (bVar5) {
      cVar7 = FUN_004d15e1();
      bVar3 = true;
      if (cVar7 != '\0') goto LAB_004d2425;
    }
    else {
LAB_004d2425:
      bVar3 = false;
    }
    if (bVar6) {
      cVar7 = FUN_004d15e1();
      bVar4 = true;
      if (cVar7 != '\0') goto LAB_004d2445;
    }
    else {
LAB_004d2445:
      bVar4 = false;
    }
    iVar9 = FUN_004c2047();
    local_88 = *(int *)(iVar9 + 8);
    local_84 = *(int *)(iVar9 + 0xc);
    piVar1 = unaff_EBX + 0x1e;
    cVar7 = FUN_004f5fe9();
    if ((cVar7 == '\0') || (cVar7 = FUN_004a4c2d(), cVar7 != '\0')) {
LAB_004d25ce:
      if (bVar4) goto LAB_004d25d5;
    }
    else {
      if (bVar5) {
        if (!bVar3) {
          if (*piVar1 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(*piVar1 + 8);
          }
          if (-1 < *(int *)(iVar9 + 0x10)) {
            if (*piVar1 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(*piVar1 + 8);
            }
            if (*(int *)(iVar9 + 0x18) + *(int *)(iVar9 + 0x10) <= local_88) goto LAB_004d24e6;
          }
        }
        bVar3 = true;
      }
      else {
LAB_004d24e6:
        bVar3 = false;
      }
      if (bVar6) {
        if (!bVar4) {
          if (*piVar1 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(*piVar1 + 8);
          }
          if (-1 < *(int *)(iVar9 + 0x14)) {
            if (*piVar1 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(*piVar1 + 8);
            }
            if (*(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x14) <= local_84) goto LAB_004d2551;
          }
        }
        local_88 = unaff_EBX[6] - iVar8;
        bVar4 = true;
      }
      else {
LAB_004d2551:
        bVar4 = false;
      }
      if (bVar3) {
        local_84 = unaff_EBX[7] - iVar8;
      }
      cVar7 = FUN_004a4c2d();
      if (cVar7 != '\0') goto LAB_004d25ce;
      if (bVar5) {
        if (!bVar3) {
          if (*piVar1 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(*piVar1 + 8);
          }
          if (*(int *)(iVar9 + 0x18) + *(int *)(iVar9 + 0x10) <= local_88) goto LAB_004d2596;
        }
        bVar3 = true;
      }
      else {
LAB_004d2596:
        bVar3 = false;
      }
      if (!bVar6) {
LAB_004d25c9:
        bVar4 = false;
        goto LAB_004d25ce;
      }
      if (!bVar4) {
        if (*piVar1 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(*piVar1 + 8);
        }
        if (*(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x14) <= local_84) goto LAB_004d25c9;
      }
LAB_004d25d5:
      local_88 = unaff_EBX[6] - iVar8;
    }
    if (bVar3) {
      local_84 = unaff_EBX[7] - iVar8;
    }
    cVar7 = FUN_004f5fce();
    if (cVar7 != '\0') {
      FUN_004c0c1f();
LAB_004d266e:
      cVar7 = FUN_004f5fe9();
      if (cVar7 != '\0') {
        FUN_004c2047();
        FUN_004c092e();
      }
      piVar1 = unaff_EBX + 0x84;
      FUN_004c09cc();
      FUN_004d1174(piVar1);
      FUN_004d1266(piVar1,3);
      FUN_004d12c0();
      FUN_00474368();
      piVar2 = unaff_EBX + 0x44;
      FUN_004c09cc();
      FUN_004d1174(piVar2);
      FUN_004d1266(piVar2,3);
      FUN_004d12c0();
      FUN_00474368();
      (**(code **)(*piVar1 + 0x28))();
      (**(code **)(*piVar2 + 0x28))();
      cVar7 = FUN_004f5fe9();
      if (cVar7 != '\0') {
        FUN_004d2284();
        cVar7 = FUN_004f5e38();
        if (cVar7 != '\0') {
          FUN_004c0bf7();
          return;
        }
      }
      iVar8 = FUN_00440367();
      iVar9 = FUN_00440367();
      cVar7 = FUN_004f5c66();
      if (cVar7 != '\0') {
        unaff_EBX[0x1f] = local_88;
        unaff_EBX[0x20] = local_84;
        unaff_EBX[0x21] = iVar8;
        unaff_EBX[0x22] = iVar9;
        (**(code **)(*unaff_EBX + 0xb0))();
      }
      FUN_00474373();
      FUN_00474373();
      return;
    }
    FUN_004c0c1f();
    cVar7 = FUN_004f5c3e();
    if ((cVar7 != '\0') || (local_94 = local_94 + -1, local_94 < 0)) goto LAB_004d266e;
  } while( true );
}

