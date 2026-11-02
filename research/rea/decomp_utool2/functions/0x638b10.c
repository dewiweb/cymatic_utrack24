// rea decompile_all
// name: FUN_00638b10
// address: 0x638b10
// body: available
// range: 0x638b10-0x638d60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00638b10(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined **ppuVar8;
  int in_ECX;
  int *piVar9;
  undefined1 uVar10;
  undefined *puVar11;
  int local_28;
  char *local_24 [2];
  int local_1c;
  undefined *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f06b;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar2 = false;
  bVar1 = false;
  local_28 = 0;
  FUN_006351a0(in_ECX + 0x70);
  local_8 = 0;
  iVar4 = FUN_00634f90(1);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar7 = iVar4;
  local_1c = iVar4;
  if ((iVar4 != 0) &&
     (iVar5 = FUN_0045c1e0(*(undefined4 *)(iVar4 + 0xc),"PROPERTIES",uVar3), iVar5 == 0)) {
    iVar5 = FUN_00634f90(0);
    if ((iVar4 != iVar5) && (iVar7 = iVar5, local_1c = iVar5, iVar4 != 0)) {
      FUN_00634ec0();
      FUN_004bfe14(iVar4,0x10);
    }
    if (iVar7 != 0) {
      puVar6 = (undefined *)FUN_00633010("VALUE");
      puVar11 = puVar6;
      local_18 = puVar6;
      while (puVar6 != (undefined *)0x0) {
        iVar7 = FUN_0061a410(&DAT_00c02010);
        if (iVar7 == 0) {
          ppuVar8 = &PTR_DAT_00c7ed68;
        }
        else {
          ppuVar8 = (undefined **)(iVar7 + 8);
        }
        local_24[0] = *ppuVar8;
        local_14 = (int *)(local_24[0] + -8);
        if (local_14 != &DAT_00bfe124) {
          LOCK();
          *local_14 = *local_14 + 1;
          UNLOCK();
        }
        local_8._0_1_ = 2;
        if (*local_24[0] != '\0') {
          if (*(int *)(puVar6 + 4) == 0) {
            iVar7 = FUN_0061a410(&DAT_00c0200c);
            ppuVar8 = (undefined **)(iVar7 + 8);
            if (iVar7 == 0) {
              ppuVar8 = &PTR_DAT_00c7ed68;
            }
            puVar11 = *ppuVar8;
            piVar9 = (int *)(puVar11 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            ppuVar8 = &local_18;
            bVar1 = true;
            local_18 = puVar11;
          }
          else {
            ppuVar8 = (undefined **)FUN_0061a490(&local_28,&DAT_00738c5b);
            bVar2 = true;
          }
          FUN_00631980(local_24,ppuVar8);
          if (bVar1) {
            piVar9 = (int *)(puVar11 + -8);
            bVar1 = false;
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar7 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar7 == 0) {
                FID_conflict__free(piVar9);
              }
            }
          }
          if (bVar2) {
            bVar2 = false;
            piVar9 = (int *)(local_28 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar7 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar7 == 0) {
                FID_conflict__free(piVar9);
              }
            }
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_14 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *local_14;
          *local_14 = *local_14 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(local_14);
          }
        }
        puVar6 = (undefined *)FUN_0062bcd0("VALUE");
        iVar7 = local_1c;
      }
      uVar10 = 1;
      goto LAB_00638d2f;
    }
  }
  uVar10 = 0;
LAB_00638d2f:
  if (iVar7 != 0) {
    FUN_00634ec0();
    FUN_004bfe14(iVar7,0x10);
  }
  FUN_00635110();
  ExceptionList = local_10;
  return uVar10;
}

