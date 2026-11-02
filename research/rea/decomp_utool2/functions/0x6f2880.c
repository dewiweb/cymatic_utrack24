// rea decompile_all
// name: FUN_006f2880
// address: 0x6f2880
// body: available
// range: 0x6f2880-0x6f2ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006f2880(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  int *piVar8;
  int local_50;
  int local_4c;
  void *local_44;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007298d2;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) < *(int *)(param_3 + 4)) {
    uVar2 = *(uint *)(param_2 + 8);
    local_14 = *(uint *)(param_3 + 8);
    local_18 = uVar2;
    if (uVar2 == local_14) {
      if (((uint)in_ECX[2] <= uVar2) || (*(int *)(*in_ECX + uVar2 * 4) == 0)) goto LAB_006f28c2;
      ExceptionList = &local_10;
      FUN_006379a0(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_3 + 0xc));
    }
    else {
      ExceptionList = &local_10;
      FUN_0062cb00(0x100);
      local_8 = 0;
      FUN_00622b10((*(int *)(param_3 + 4) - *(int *)(param_2 + 4)) + 4);
      uVar5 = in_ECX[2] - 1U;
      if ((int)local_14 < (int)(in_ECX[2] - 1U)) {
        uVar5 = local_14;
      }
      uVar4 = 0;
      if (0 < (int)uVar2) {
        uVar4 = uVar2;
      }
      for (; (int)uVar4 <= (int)uVar5; uVar4 = uVar4 + 1) {
        puVar6 = *(undefined4 **)(*in_ECX + uVar4 * 4);
        if (uVar4 == local_18) {
          puVar6 = (undefined4 *)FUN_006379a0(&local_1c,*(undefined4 *)(param_2 + 0xc),puVar6[2]);
          local_8._0_1_ = 1;
          uVar3 = *puVar6;
          uVar7 = FUN_0045d1e0(uVar3);
          (**(code **)(local_50 + 0x10))(uVar3,uVar7);
          local_8 = (uint)local_8._1_3_ << 8;
          piVar8 = (int *)(local_1c + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar8);
            }
          }
        }
        else if (uVar4 == local_14) {
          puVar6 = (undefined4 *)FUN_006379a0(&local_20,0,*(undefined4 *)(param_3 + 0xc));
          local_8._0_1_ = 2;
          uVar3 = *puVar6;
          uVar7 = FUN_0045d1e0(uVar3);
          (**(code **)(local_50 + 0x10))(uVar3,uVar7);
          local_8 = (uint)local_8._1_3_ << 8;
          piVar8 = (int *)(local_20 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar8);
            }
          }
        }
        else {
          uVar3 = *puVar6;
          uVar7 = FUN_0045d1e0(uVar3);
          (**(code **)(local_50 + 0x10))(uVar3,uVar7);
        }
      }
      FUN_00622880(param_1);
      FUN_00622b80();
      FID_conflict__free(local_44);
      piVar8 = (int *)(local_4c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
    }
    ExceptionList = local_10;
    return param_1;
  }
LAB_006f28c2:
  *param_1 = &DAT_00bfe12c;
  return param_1;
}

