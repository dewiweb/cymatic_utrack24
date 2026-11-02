// rea decompile_all
// name: FUN_006365e0
// address: 0x6365e0
// body: available
// range: 0x6365e0-0x6368dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006365e0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *_Memory;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  int iVar5;
  
  puStack_c = &LAB_0071ed32;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *param_1;
  *in_ECX = iVar5;
  piVar2 = (int *)(iVar5 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  local_8 = 4;
  piVar2 = (int *)FUN_0045c230(*in_ECX,uVar1);
  if (-1 < (int)piVar2) {
    do {
      local_14 = (int)piVar2 + 1;
      piVar2 = (int *)FUN_00631770(local_14,0x26);
      param_1 = piVar2;
      local_18 = FUN_00631770(local_14,0x3d);
      if (local_14 < local_18) {
        if ((int)piVar2 < 0) {
          FUN_00637a90(&local_28,local_18 + 1);
          local_8._0_1_ = 5;
          uVar3 = FUN_006106e0();
          local_8._0_1_ = 6;
          FUN_006379a0(&local_20,local_14,local_18);
          local_8 = CONCAT31(local_8._1_3_,7);
          uVar4 = FUN_006106e0();
          FUN_00611150(uVar4,uVar3);
          piVar2 = (int *)(local_1c + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          piVar2 = (int *)(local_20 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          piVar2 = (int *)(local_24 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          iVar5 = local_28;
        }
        else {
          if (((int)piVar2 < 1) || ((int)piVar2 <= local_18)) goto LAB_00636880;
          FUN_006379a0(&local_38,local_18 + 1,piVar2);
          local_8._0_1_ = 8;
          uVar3 = FUN_006106e0();
          local_8._0_1_ = 9;
          FUN_006379a0(&local_30,local_14,local_18);
          local_8 = CONCAT31(local_8._1_3_,10);
          uVar4 = FUN_006106e0();
          FUN_00611150(uVar4,uVar3);
          piVar2 = (int *)(local_2c + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          piVar2 = (int *)(local_30 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          piVar2 = (int *)(local_34 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          iVar5 = local_38;
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        _Memory = (int *)(iVar5 + -8);
        piVar2 = param_1;
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar5 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(_Memory);
            piVar2 = param_1;
          }
        }
      }
LAB_00636880:
    } while (-1 < (int)piVar2);
    piVar2 = (int *)FUN_00633de0(&param_1,&DAT_00c01ea0,0,0);
    iVar5 = *in_ECX;
    *in_ECX = *piVar2;
    *piVar2 = iVar5;
    piVar2 = param_1 + -2;
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

