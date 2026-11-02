// rea decompile_all
// name: FUN_006c88b0
// address: 0x6c88b0
// body: available
// range: 0x6c88b0-0x6c8afa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c88b0(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  char *pcVar7;
  void *_Memory;
  void *local_38 [2];
  int local_30;
  int local_2c;
  int local_28;
  char *local_24;
  int local_20;
  void *local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007260ab;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(char *)(in_ECX + 0xde) != '\0') && (*(int *)(in_ECX + 0xa4) != 0)) {
    local_14 = *(char **)((uint)(**(char **)(param_1 + 8) != '\0') * 4 + 4 + param_1);
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_8 = 0;
    local_2c = in_ECX;
    FUN_00689110(local_38,*(undefined4 *)(in_ECX + 0xbc));
    local_8._0_1_ = 1;
    local_20 = local_30;
    _Memory = local_38[0];
    if (0 < local_30) {
      local_1c = local_38[0];
      do {
        FUN_006c8e30(&local_18);
        local_8._0_1_ = 2;
        pcVar1 = local_14 + 1;
        pcVar7 = local_14;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        FUN_00455850(local_14,uVar3);
        local_14 = local_24;
        pcVar1 = local_24 + ((int)pcVar7 - (int)pcVar1);
        pcVar1[0] = ' ';
        pcVar1[1] = '[';
        pcVar1[2] = '\0';
        iVar5 = FUN_0044ec90();
        if (iVar5 == 1) {
          uVar6 = FUN_00637250();
          local_8._0_1_ = 3;
          FUN_00636ec0(uVar6);
          FUN_00621830(&DAT_00c04fe4);
          FUN_00636ec0(&local_18);
          FUN_00621830(&DAT_00c04fe8);
          piVar4 = (int *)(local_28 + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar4);
            }
          }
        }
        else {
          FUN_00636ec0(&local_18);
          param_1 = CONCAT22(param_1._2_2_,0x5d);
          FUN_00621830(&param_1);
        }
        local_8._0_1_ = 1;
        piVar4 = (int *)(local_18 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        local_1c = (void *)((int)local_1c + 0xc);
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      local_20 = 0;
      _Memory = local_38[0];
    }
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    LOCK();
    iVar5 = *(int *)(local_2c + 0x74);
    *(int *)(local_2c + 0x74) = (int)local_14;
    UNLOCK();
    piVar4 = (int *)(iVar5 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FID_conflict__free(_Memory);
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

