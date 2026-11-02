// rea decompile_all
// name: FUN_0055bcd0
// address: 0x55bcd0
// body: available
// range: 0x55bcd0-0x55bfdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055bcd0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char in_CL;
  int in_EDX;
  int *piVar5;
  void *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007119d6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1[0x10] == 0) {
    if (in_CL == '\0') {
      if (in_EDX < 0x19) {
        if (((in_EDX < 0x11) &&
            (iVar2 = FUN_005be270(DAT_00c76070 ^ (uint)&stack0xfffffffc), iVar2 != 3)) &&
           (iVar2 != 4)) {
          cVar1 = FUN_005b2750();
          if (cVar1 == '\0') {
            cVar1 = FUN_005b2750();
            if (cVar1 != '\0') {
              param_1[0x10] = 4;
            }
          }
          else {
            param_1[0x10] = 3;
          }
        }
        else {
          param_1[0x10] = 3;
        }
      }
      else {
        param_1[0x10] = 4;
      }
    }
    else {
      local_2c = (void *)0x0;
      local_28 = 0;
      local_24 = 0;
      local_8._0_1_ = 1;
      local_8._1_3_ = 0;
      FUN_0045c990("0123456789");
      local_8._0_1_ = 2;
      FUN_0045c990("*.wav");
      local_8._0_1_ = 3;
      FUN_00636040(&local_18);
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar2 = FUN_00635ea0(&local_2c,2,0,&local_14);
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar5 = (int *)(local_14 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      if ((iVar2 != 0) && (iVar2 = 0, 0 < local_24)) {
        do {
          FUN_0040f6b0(&local_20,iVar2);
          local_8._0_1_ = 5;
          FUN_006369b0(&local_14);
          local_8 = CONCAT31(local_8._1_3_,2);
          piVar5 = (int *)(local_20 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          iVar3 = FUN_0044ec90();
          iVar4 = local_14;
          if (3 < iVar3) {
            iVar3 = FUN_0044ec90();
            iVar4 = local_14;
            local_18 = local_14;
            FUN_0044ebd0(iVar3 + -3);
            iVar3 = FUN_00426f70();
            if (iVar3 == 0x5f) {
              iVar3 = FUN_0044ec90();
              local_18 = iVar4;
              FUN_0044ebd0(iVar3 + -2);
              FUN_00426f70();
              iVar3 = FUN_0045c230(local_1c);
              iVar4 = local_14;
              if (-1 < iVar3) {
                iVar4 = FUN_0044ec90();
                local_18 = local_14;
                FUN_0044ebd0(iVar4 + -1);
                FUN_00426f70();
                iVar3 = FUN_0045c230(local_1c);
                iVar4 = local_14;
                if (-1 < iVar3) {
                  param_1[0x10] = 2;
                  FUN_00637c10();
                  break;
                }
              }
            }
          }
          piVar5 = (int *)(iVar4 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_24);
      }
      if (param_1[0x10] == 0) {
        param_1[0x10] = 1;
      }
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_0040f7f0();
      FID_conflict__free(local_2c);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_1 + 1;
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

