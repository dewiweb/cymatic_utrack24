// rea decompile_all
// name: FUN_00605d80
// address: 0x605d80
// body: available
// range: 0x605d80-0x605f8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00605d80(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  void *local_34;
  undefined4 local_30;
  int local_2c;
  void *local_28 [3];
  uint local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071c08a;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar7 = (int *)(in_ECX + 0x24);
  LOCK();
  iVar6 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  uVar8 = iVar6 - 1;
  if (-1 < (int)uVar8) {
    if (uVar8 < *(uint *)(in_ECX + 0x10)) {
      ppuVar4 = (undefined **)(*(int *)(in_ECX + 8) + uVar8 * 4);
    }
    else {
      ppuVar4 = &PTR_DAT_00c7ed68;
    }
    local_14 = *ppuVar4;
    piVar7 = (int *)(local_14 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    local_8 = 0;
    local_1c = uVar8;
    if ((*local_14 != '\0') &&
       (cVar2 = FUN_00606d60(&local_14,*(undefined4 *)(in_ECX + 4)), cVar2 == '\0')) {
      puVar5 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 4) + 0x10))(&local_18,&local_14,uVar3)
      ;
      uVar1 = *param_2;
      *param_2 = *puVar5;
      *puVar5 = uVar1;
      piVar7 = (int *)(local_18 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_34 = (void *)0x0;
      local_30 = 0;
      local_2c = 0;
      local_8._0_1_ = 1;
      FUN_00606330();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0062a310(local_14,0);
      FUN_006363c0(&local_14);
      FUN_00605cf0(local_28);
      FUN_00606a10(&local_14,extraout_ECX,&local_34,*(undefined4 *)(in_ECX + 4));
      FUN_0062a310(local_14,0);
      FUN_00605cf0(local_28);
      if ((local_2c == 0) && (iVar6 = FUN_0062c730(local_14,0,0), iVar6 < 0)) {
        FUN_006363c0(&local_14);
      }
      FUN_0040f7f0();
      FID_conflict__free(local_28[0]);
      FUN_004477c0();
      FID_conflict__free(local_34);
      uVar8 = local_1c;
    }
    piVar7 = (int *)(local_14 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  piVar7 = (int *)(in_ECX + 0x24);
  LOCK();
  iVar6 = *piVar7;
  *piVar7 = *piVar7;
  UNLOCK();
  *(float *)(in_ECX + 0x28) = 1.0 - (float)iVar6 / (float)*(int *)(in_ECX + 0x10);
  ExceptionList = local_10;
  return 0 < (int)uVar8;
}

