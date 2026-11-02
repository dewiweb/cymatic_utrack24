// rea decompile_all
// name: FUN_005ab9b0
// address: 0x5ab9b0
// body: available
// range: 0x5ab9b0-0x5abb39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab9b0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int local_2c;
  int local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717eb2;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar5 = &local_28;
  pcVar6 = "DRIVE";
  local_14 = uVar2;
  FUN_0061f730(piVar5,"DRIVE",uVar2);
  FUN_0061fa00(piVar5,pcVar6);
  piVar5 = *(int **)(param_1 + 0x58);
  piVar4 = piVar5 + *(int *)(param_1 + 0x60) * 6;
  do {
    if (piVar5 == piVar4) {
      piVar5 = (int *)0x0;
LAB_005aba1a:
      piVar4 = (int *)(local_28 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (piVar5 != (int *)0x0) {
        piVar5 = &local_28;
        pcVar6 = "DRIVE";
        FUN_0061f730(piVar5,"DRIVE",uVar2);
        FUN_0061fa00(piVar5,pcVar6);
        local_8 = 0;
        piVar4 = *(int **)(param_1 + 0x58);
        piVar5 = piVar4 + *(int *)(param_1 + 0x60) * 6;
        for (; (piVar4 != piVar5 && (*piVar4 != local_28)); piVar4 = piVar4 + 6) {
        }
        FUN_006318f0(&local_2c);
        local_8._0_1_ = 2;
        puVar3 = (undefined4 *)FUN_0063bf80(local_24);
        (**(code **)(*(int *)*puVar3 + 0x14))(puVar3 + 2);
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_005b0370();
        piVar5 = (int *)(local_2c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        piVar5 = (int *)(local_28 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*piVar5 == local_28) {
      piVar5 = piVar5 + 2;
      goto LAB_005aba1a;
    }
    piVar5 = piVar5 + 6;
  } while( true );
}

