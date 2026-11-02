// rea decompile_all
// name: FUN_006b21a0
// address: 0x6b21a0
// body: available
// range: 0x6b21a0-0x6b245f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b21a0(int param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int local_4c;
  int *local_48;
  int local_44 [2];
  int local_3c;
  char local_35;
  int *local_34;
  undefined1 local_2c [8];
  int *local_24;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007239d7;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = 0;
  local_4c = param_1;
  local_48 = in_ECX;
  piVar1 = (int *)(**(code **)(*in_ECX + 0xb8))(local_14);
  FUN_006d4090(1,0);
  FUN_0068bad0(param_1,0,1);
  (**(code **)(*piVar1 + 0x24))(param_1 + 4);
  piVar7 = &local_3c;
  pcVar8 = "mdiDocumentBkg_";
  FUN_0061f730(piVar7,"mdiDocumentBkg_");
  FUN_0061fa00(piVar7,pcVar8);
  iVar3 = local_3c;
  local_8 = 0;
  piVar5 = *(int **)(param_1 + 0x58);
  piVar7 = piVar5 + *(int *)(param_1 + 0x60) * 6;
  for (; piVar5 != piVar7; piVar5 = piVar5 + 6) {
    if (*piVar5 == local_3c) {
      ppuVar2 = (undefined **)(piVar5 + 2);
      if (ppuVar2 != (undefined **)0x0) goto LAB_006b2256;
      break;
    }
  }
  ppuVar2 = &PTR_PTR_00c7ed58;
LAB_006b2256:
  local_34 = (int *)*ppuVar2;
  (**(code **)(*local_34 + 0x58))(local_2c,ppuVar2 + 2);
  piVar7 = (int *)(iVar3 + -8);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (*(code **)(*local_34 + 0x28) == FUN_004133b0) {
    iVar3 = (**(code **)(*local_34 + 4))(local_2c);
    local_44[0] = iVar3;
  }
  else {
    iVar3 = local_48[0x22];
  }
  FUN_0068b3f0(iVar3);
  uVar6 = 4;
  if ((((local_48[0xc] - 1U < (uint)local_48[0xc]) &&
       (iVar3 = *(int *)(local_48[10] + (local_48[0xc] - 1U) * 4), iVar3 != 0)) &&
      (*(int *)(iVar3 + 0x10) == 4)) && (*(int *)(iVar3 + 0x14) == 4)) {
    uVar6 = 0x14;
  }
  FUN_006e9790(uVar6,uVar6,piVar1[6],piVar1[7]);
  piVar7 = &local_3c;
  pcVar8 = "mdiDocumentPos_";
  FUN_0061f730(piVar7,"mdiDocumentPos_");
  FUN_0061fa00(piVar7,pcVar8);
  iVar3 = local_3c;
  local_8._0_1_ = 3;
  piVar5 = *(int **)(local_4c + 0x58);
  piVar7 = piVar5 + *(int *)(local_4c + 0x60) * 6;
  do {
    if (piVar5 == piVar7) {
LAB_006b235a:
      ppuVar2 = &PTR_PTR_00c7ed58;
LAB_006b235f:
      local_24 = (int *)*ppuVar2;
      (**(code **)(*local_24 + 0x58))(local_1c,ppuVar2 + 2);
      piVar7 = (int *)(iVar3 + -8);
      local_8 = CONCAT31(local_8._1_3_,5);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      puVar4 = (undefined4 *)FUN_00635650(&local_4c);
      piVar7 = (int *)(local_4c + -8);
      local_35 = *(char *)*puVar4;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (local_35 != '\0') {
        uVar6 = FUN_00635650(local_44);
        local_8._0_1_ = 6;
        FUN_006d3ab0(uVar6);
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar7 = (int *)(local_44[0] + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar7);
          }
        }
      }
      (**(code **)(*piVar1 + 0x28))(1);
      FUN_006e5050(piVar1,0xffffffff);
      FUN_006e9910(1);
      (**(code **)(*local_24 + 0x54))(local_1c);
      (**(code **)(*local_34 + 0x54))(local_2c);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*piVar5 == local_3c) {
      ppuVar2 = (undefined **)(piVar5 + 2);
      if (ppuVar2 != (undefined **)0x0) goto LAB_006b235f;
      goto LAB_006b235a;
    }
    piVar5 = piVar5 + 6;
  } while( true );
}

