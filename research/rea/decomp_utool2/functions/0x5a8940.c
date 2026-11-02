// rea decompile_all
// name: FUN_005a8940
// address: 0x5a8940
// body: available
// range: 0x5a8940-0x5a8b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005a8940(int param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_24;
  int local_20;
  int local_1c;
  undefined *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00717aa2;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_18 = (undefined *)0x0;
  local_24 = in_ECX;
  if (0 < *(int *)(in_ECX + 0x164)) {
    bVar10 = *(int *)(in_ECX + 0x164) != 0;
    do {
      if (bVar10) {
        iVar4 = *(int *)(*(int *)(local_24 + 0x15c) + (int)local_18 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (*(int *)(iVar4 + 8) == param_1) {
LAB_005a8b2d:
        local_11 = 1;
        goto LAB_005a8af5;
      }
      local_20 = param_1;
      local_1c = *(int *)(iVar4 + 8);
      do {
        iVar4 = FUN_00443260(uVar3);
        iVar5 = FUN_00443260();
        if ((iVar4 - iVar5 != 0) && (iVar5 = (iVar4 - iVar5 >> 0x1f & 0xfffffffeU) + 1, iVar5 != 0))
        goto LAB_005a89d9;
      } while (iVar4 != 0);
      iVar5 = 0;
LAB_005a89d9:
      if (iVar5 == 0) goto LAB_005a8b2d;
      local_18 = local_18 + 1;
      bVar10 = local_18 < *(undefined **)(local_24 + 0x164);
    } while ((int)local_18 < (int)*(undefined **)(local_24 + 0x164));
  }
  puVar9 = &DAT_00c126e0;
  do {
    puVar8 = &DAT_00c124f0;
    do {
      FUN_005b2560(*puVar8);
      local_8 = 1;
      if ((local_18 != PTR_DAT_00c7ed54) &&
         (iVar4 = FUN_0045c1e0(local_18,PTR_DAT_00c7ed54), iVar4 != 0)) {
        puVar6 = (undefined4 *)FUN_00635a10(&local_24,param_1);
        puVar1 = (undefined *)*puVar6;
        *puVar6 = local_18;
        piVar7 = (int *)(local_24 + -8);
        local_18 = puVar1;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_18 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        cVar2 = FUN_005b5020(local_18);
        if (cVar2 != '\0') {
          piVar7 = (int *)(local_18 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          local_11 = 1;
          goto LAB_005a8af5;
        }
      }
      piVar7 = (int *)(local_18 + -8);
      local_8 = 0;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      puVar8 = puVar8 + 1;
    } while ((int)puVar8 < 0xc12504);
    puVar9 = puVar9 + 1;
  } while ((int)puVar9 < 0xc126f0);
  local_11 = 0;
LAB_005a8af5:
  piVar7 = (int *)(param_1 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return local_11;
}

