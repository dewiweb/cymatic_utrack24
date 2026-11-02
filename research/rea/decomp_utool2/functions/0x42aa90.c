// rea decompile_all
// name: FUN_0042aa90
// address: 0x42aa90
// body: available
// range: 0x42aa90-0x42ad3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0042aa90(void)

{
  HRESULT HVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 uVar7;
  uint uVar8;
  int *local_24;
  uint local_20;
  int *local_1c;
  char *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fda82;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_24 = (int *)0x0;
  HVar1 = CoCreateInstance((IID *)&DAT_00c14598,(LPUNKNOWN)0x0,1,(IID *)&DAT_00c13e4c,&local_24);
  if (HVar1 < 0) {
    uVar7 = 0;
    goto LAB_0042ad17;
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  local_1c = (int *)0x0;
  iVar2 = (**(code **)(*local_24 + 0xc))(local_24,2,1);
  if (iVar2 < 0) {
LAB_0042ad04:
    uVar7 = 0;
  }
  else {
    local_20 = 0;
    iVar2 = (**(code **)(*local_1c + 0xc))(local_1c);
    if (iVar2 < 0) goto LAB_0042ad04;
    uVar8 = 0;
    if (local_20 != 0) {
      do {
        local_8._0_1_ = 7;
        local_14 = (int *)0x0;
        iVar2 = (**(code **)(*local_1c + 0x10))(local_1c,uVar8);
        if (iVar2 < 0) {
          local_8 = CONCAT31(local_8._1_3_,8);
        }
        else {
          FUN_005c9810();
          local_8._0_1_ = 9;
          uVar7 = (undefined1)local_8;
          local_8._0_1_ = 9;
          if (*local_18 == '\0') {
            piVar6 = (int *)(local_18 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            local_8 = CONCAT31(local_8._1_3_,10);
          }
          else {
            local_8._0_1_ = uVar7;
            iVar2 = FUN_005c9780();
            if (local_18 == *(char **)(in_ECX + 0x58)) {
LAB_0042abc8:
              if (iVar2 != 1) goto LAB_0042ac01;
              operator_new(0xb0);
              local_8._0_1_ = 0xb;
              puVar4 = (undefined4 *)FUN_004289d0(&local_14);
              puVar5 = *(undefined4 **)(in_ECX + 0x60);
              if (puVar5 != puVar4) {
                *(undefined4 **)(in_ECX + 0x60) = puVar4;
LAB_0042ac74:
                if (puVar5 != (undefined4 *)0x0) {
                  (**(code **)*puVar5)();
                }
              }
            }
            else {
              iVar3 = FUN_00448730(local_18);
              if (iVar3 == 0) goto LAB_0042abc8;
LAB_0042ac01:
              if (local_18 != *(char **)(in_ECX + 0x54)) {
                iVar3 = FUN_00448730(local_18);
                if (iVar3 != 0) goto LAB_0042ac7e;
              }
              if (iVar2 == 0) {
                puVar4 = operator_new(0x98);
                local_8._0_1_ = 0xc;
                FUN_00427d00(&local_14);
                *puVar4 = juce::WasapiClasses::WASAPIOutputDevice::vftable;
                puVar4[0x24] = 0;
                puVar4[0x25] = 0;
                puVar5 = *(undefined4 **)(in_ECX + 100);
                if (puVar5 != puVar4) {
                  *(undefined4 **)(in_ECX + 100) = puVar4;
                  goto LAB_0042ac74;
                }
              }
            }
LAB_0042ac7e:
            piVar6 = (int *)(local_18 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            local_8 = CONCAT31(local_8._1_3_,0xd);
          }
        }
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_20);
    }
    if (((**(char **)(in_ECX + 0x54) != '\0') &&
        (((iVar2 = *(int *)(in_ECX + 100), iVar2 == 0 || (*(int *)(iVar2 + 0x2c) < 1)) ||
         (*(double *)(iVar2 + 0x18) <= 0.0)))) ||
       ((**(char **)(in_ECX + 0x58) != '\0' &&
        (((iVar2 = *(int *)(in_ECX + 0x60), iVar2 == 0 || (*(int *)(iVar2 + 0x2c) < 1)) ||
         (*(double *)(iVar2 + 0x18) <= 0.0)))))) goto LAB_0042ad04;
    uVar7 = 1;
  }
  local_8 = CONCAT31(local_8._1_3_,0xe);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
LAB_0042ad17:
  local_8 = 0xf;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  ExceptionList = local_10;
  return uVar7;
}

