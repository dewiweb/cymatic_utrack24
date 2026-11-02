// rea decompile_all
// name: FUN_005adfc0
// address: 0x5adfc0
// body: available
// range: 0x5adfc0-0x5ae2a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005adfc0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  code *pcVar6;
  int *piVar7;
  bool bVar8;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007183c6;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar2 = FUN_005b0600(local_14);
  if ((cVar2 == '\0') && (local_2c = 0, 0 < *(int *)(in_ECX + 0x30))) {
    bVar8 = *(int *)(in_ECX + 0x30) != 0;
    local_30 = *(int *)ThreadLocalStoragePointer;
    pcVar6 = InitializeCriticalSection_exref;
    do {
      if (bVar8) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x28) + local_2c * 4);
      }
      else {
        iVar3 = 0;
      }
      if ((*(int *)(local_30 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        (*pcVar6)(&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_34,"DRIVE");
      piVar7 = *(int **)(iVar3 + 0x58);
      piVar4 = piVar7 + *(int *)(iVar3 + 0x60) * 6;
      for (; piVar7 != piVar4; piVar7 = piVar7 + 6) {
        if (*piVar7 == local_34) {
          piVar7 = piVar7 + 2;
          goto LAB_005ae0d6;
        }
      }
      piVar7 = (int *)0x0;
LAB_005ae0d6:
      piVar4 = (int *)(local_34 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (piVar7 != (int *)0x0) {
        iVar3 = FUN_006f6dd6(iVar3,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::ToggleButton::RTTI_Type_Descriptor,0);
        if ((*(int *)(local_30 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          (*pcVar6)(&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_38,"DRIVE");
        iVar1 = local_38;
        local_8 = 0;
        piVar4 = *(int **)(iVar3 + 0x58);
        piVar7 = piVar4 + *(int *)(iVar3 + 0x60) * 6;
        for (; (piVar4 != piVar7 && (*piVar4 != local_38)); piVar4 = piVar4 + 6) {
        }
        FUN_006318f0(&local_28);
        local_8._0_1_ = 2;
        puVar5 = (undefined4 *)FUN_0063bf80(local_24);
        (**(code **)(*(int *)*puVar5 + 0x14))(puVar5 + 2);
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_005b0370();
        piVar7 = (int *)(local_28 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(iVar1 + -8);
        local_8 = 0xffffffff;
        pcVar6 = InitializeCriticalSection_exref;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          pcVar6 = InitializeCriticalSection_exref;
          if (iVar3 == 0) {
            FID_conflict__free(piVar7);
            pcVar6 = InitializeCriticalSection_exref;
          }
        }
      }
      local_2c = local_2c + 1;
      bVar8 = local_2c < *(uint *)(in_ECX + 0x30);
    } while ((int)local_2c < (int)*(uint *)(in_ECX + 0x30));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

