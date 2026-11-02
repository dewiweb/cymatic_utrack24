// rea decompile_all
// name: FUN_006b1a70
// address: 0x6b1a70
// body: available
// range: 0x6b1a70-0x6b1e35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006b1a70(undefined4 *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  char cStack0000000b;
  char *pcVar10;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723935;
  local_10 = ExceptionList;
  piVar6 = (int *)in_ECX[0x1e];
  piVar9 = piVar6 + in_ECX[0x20];
  while( true ) {
    if (piVar6 == piVar9) {
      return 1;
    }
    if (param_1 == (undefined4 *)*piVar6) break;
    piVar6 = piVar6 + 1;
  }
  ExceptionList = &local_10;
  if ((param_2 != '\0') &&
     (cVar2 = (**(code **)(*in_ECX + 0xb4))(param_1,DAT_00c76070 ^ (uint)&stack0xfffffffc),
     cVar2 == '\0')) {
    ExceptionList = local_10;
    return 0;
  }
  FUN_00415ff0(-(uint)(in_ECX != (int *)0x0) & (uint)(in_ECX + 0x1c));
  cStack0000000b = FUN_006b2530();
  puVar8 = &param_1;
  pcVar10 = "mdiDocumentDelete_";
  FUN_0061f730(puVar8,"mdiDocumentDelete_");
  FUN_0061fa00(puVar8,pcVar10);
  puVar8 = param_1;
  local_14 = puVar4[0x18];
  uVar7 = 0;
  if (0 < local_14) {
    piVar9 = (int *)puVar4[0x16];
    do {
      if ((undefined4 *)*piVar9 == param_1) {
        if (uVar7 < (uint)puVar4[0x18]) {
          FUN_0045a550(uVar7);
        }
        break;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 6;
    } while ((int)uVar7 < local_14);
  }
  piVar9 = puVar8 + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  piVar9 = &local_14;
  pcVar10 = "mdiDocumentBkg_";
  FUN_0061f730(piVar9,"mdiDocumentBkg_");
  FUN_0061fa00(piVar9,pcVar10);
  iVar5 = local_14;
  uVar7 = 0;
  if (0 < (int)puVar4[0x18]) {
    piVar9 = (int *)puVar4[0x16];
    do {
      if (*piVar9 == local_14) {
        if (uVar7 < (uint)puVar4[0x18]) {
          FUN_0045a550(uVar7);
        }
        break;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 6;
    } while ((int)uVar7 < (int)puVar4[0x18]);
  }
  piVar9 = (int *)(iVar5 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (in_ECX[0x1d] == 0) {
    uVar7 = in_ECX[0xc];
    do {
      do {
        uVar7 = uVar7 - 1;
        if ((int)uVar7 < 0) goto LAB_006b1c5a;
        if (uVar7 < (uint)in_ECX[0xc]) {
          uVar3 = *(undefined4 *)(in_ECX[10] + uVar7 * 4);
        }
        else {
          uVar3 = 0;
        }
        local_18 = (undefined4 *)
                   FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                &juce::MultiDocumentPanelWindow::RTTI_Type_Descriptor,0);
      } while (local_18 == (undefined4 *)0x0);
      if (local_18[0x20] == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = *(undefined4 **)(local_18[0x20] + 8);
      }
    } while (puVar8 != puVar4);
    local_8 = 0;
    FUN_0068bba0();
    local_8 = 0xffffffff;
    (**(code **)*local_18)(1);
LAB_006b1c5a:
    if ((cStack0000000b != '\0') && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    FUN_00415ff0(puVar4);
    if ((in_ECX[0x24] == 0) || (in_ECX[0x20] != 1)) goto LAB_006b1df9;
    uVar7 = in_ECX[0xc];
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      if (uVar7 < (uint)in_ECX[0xc]) {
        uVar3 = *(undefined4 *)(in_ECX[10] + uVar7 * 4);
      }
      else {
        uVar3 = 0;
      }
      puVar4 = (undefined4 *)
               FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                            &juce::MultiDocumentPanelWindow::RTTI_Type_Descriptor,0);
      local_8 = 1;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_0068bba0();
      }
      local_8 = 0xffffffff;
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  else {
    if (in_ECX[0x21] == 0) {
      FUN_006cf2a0(puVar4);
    }
    else {
      iVar5 = *(int *)(*(int *)(in_ECX[0x21] + 0x70) + 0x98);
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        piVar9 = (int *)FUN_0040f020(&local_1c,iVar5);
        if (*piVar9 == 0) {
          param_1 = (undefined4 *)0x0;
        }
        else {
          param_1 = *(undefined4 **)(*piVar9 + 8);
        }
        if (local_1c != (undefined4 *)0x0) {
          LOCK();
          piVar9 = local_1c + 1;
          iVar1 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)*local_1c)(1);
          }
        }
        if (param_1 == puVar4) {
          FUN_006acba0(iVar5);
        }
      }
    }
    if ((cStack0000000b != '\0') && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    if (((in_ECX[0x21] != 0) && (*(int *)(*(int *)(in_ECX[0x21] + 0x70) + 0x98) <= in_ECX[0x24])) &&
       (puVar8 = (undefined4 *)in_ECX[0x21], puVar8 != (undefined4 *)0x0)) {
      in_ECX[0x21] = 0;
      (**(code **)*puVar8)(1);
    }
    FUN_00415ff0(puVar4);
    if ((in_ECX[0x20] < 1) || (in_ECX[0x21] != 0)) goto LAB_006b1df9;
  }
  if ((0 < in_ECX[0x20]) && (piVar9 = *(int **)in_ECX[0x1e], piVar9 != (int *)0x0)) {
    (**(code **)(*piVar9 + 0x28))(1);
    FUN_006e5050(piVar9,0xffffffff);
  }
LAB_006b1df9:
  (**(code **)(*in_ECX + 0x84))();
  iVar5 = FUN_006b19b0();
  if (iVar5 != 0) {
    FUN_006b18f0(iVar5);
  }
  (**(code **)(*in_ECX + 0xb0))();
  ExceptionList = local_10;
  return 1;
}

