// rea decompile_all
// name: FUN_00634a80
// address: 0x634a80
// body: available
// range: 0x634a80-0x634c00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00634a80(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined **ppuVar7;
  int *piVar8;
  int local_3c;
  int local_38;
  void *local_30;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ea9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (**(char **)(in_ECX + 0xc) == '\0') {
    iVar4 = FUN_0061a410(DAT_00c8a8ec);
    ppuVar7 = (undefined **)(iVar4 + 8);
    if (iVar4 == 0) {
      ppuVar7 = &PTR_DAT_00c7ed68;
    }
    puVar1 = *ppuVar7;
    *param_1 = (int)puVar1;
    piVar8 = (int *)(puVar1 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    piVar8 = *(int **)(in_ECX + 4);
    iVar4 = 0;
    if (piVar8 != (int *)0x0) {
      do {
        piVar8 = (int *)*piVar8;
        iVar4 = iVar4 + 1;
      } while (piVar8 != (int *)0x0);
      if (iVar4 == 1) {
        FUN_00634a80(param_1);
        ExceptionList = local_10;
        return param_1;
      }
    }
    FUN_0062cb00(0x400);
    local_8 = 0;
    for (puVar2 = *(undefined4 **)(in_ECX + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      puVar5 = (undefined4 *)FUN_00634a80(&local_14);
      local_8._0_1_ = 1;
      uVar3 = *puVar5;
      uVar6 = FUN_0045d1e0(uVar3);
      (**(code **)(local_3c + 0x10))(uVar3,uVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      piVar8 = (int *)(local_14 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar8);
        }
      }
    }
    FUN_00622880(param_1);
    FUN_00622b80();
    FID_conflict__free(local_30);
    piVar8 = (int *)(local_38 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar8);
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

