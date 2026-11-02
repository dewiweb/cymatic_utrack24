// rea decompile_all
// name: FUN_00599990
// address: 0x599990
// body: available
// range: 0x599990-0x599b74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00599990(void)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  bVar2 = false;
  bVar1 = false;
  local_1c = 0;
  local_8 = 0;
  iVar5 = *(int *)(in_ECX + 0x13c);
  if (0 < iVar5) {
    do {
      uVar7 = 0;
      local_c = local_c & 0xffffff00;
      uVar6 = local_8;
      if (0 < iVar5) {
        do {
          if (uVar6 != uVar7) {
            piVar4 = (int *)FUN_0041c710(&local_1c);
            if (((undefined *)*piVar4 == PTR_DAT_00c7ed54) ||
               (iVar5 = FUN_0045c1e0(*piVar4,PTR_DAT_00c7ed54), iVar5 == 0)) {
LAB_00599a95:
              bVar3 = 0;
            }
            else {
              local_10 = (int *)FUN_0041c710(&local_18);
              piVar4 = (int *)FUN_0041c710(&local_14);
              bVar2 = true;
              bVar1 = true;
              if ((*piVar4 != *local_10) && (iVar5 = FUN_0045c1e0(*piVar4,*local_10), iVar5 != 0))
              goto LAB_00599a95;
              bVar3 = 1;
            }
            local_c = CONCAT31(local_c._1_3_,(byte)local_c | bVar3);
            if (bVar1) {
              bVar1 = false;
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
            if (bVar2) {
              bVar2 = false;
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
            }
            piVar4 = (int *)(local_1c + -8);
            uVar6 = local_8;
            if (piVar4 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar4);
                uVar6 = local_8;
              }
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < *(int *)(in_ECX + 0x13c));
      }
      if (uVar6 < *(uint *)(in_ECX + 0x13c)) {
        iVar5 = *(int *)(*(int *)(in_ECX + 0x134) + uVar6 * 4);
      }
      else {
        iVar5 = 0;
      }
      (**(code **)(*(int *)(iVar5 + 0x1558) + 0x28))(local_c);
      FUN_00598140();
      iVar5 = *(int *)(in_ECX + 0x13c);
      local_8 = local_8 + 1;
    } while ((int)local_8 < iVar5);
  }
  return;
}

