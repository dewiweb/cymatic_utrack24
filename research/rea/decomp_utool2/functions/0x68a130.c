// rea decompile_all
// name: FUN_0068a130
// address: 0x68a130
// body: available
// range: 0x68a130-0x68a341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a130(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0072116b;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = -1;
  local_8 = 0;
  if (DAT_00c8a6a8 == (undefined4 *)0x0) {
    operator_new(0x28);
    DAT_00c8a6a8 = (undefined4 *)FUN_004a4af0();
  }
  uVar2 = DAT_00c8a6a8[8];
  puVar4 = DAT_00c8a6a8;
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    local_8 = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = operator_new(0x28);
      *puVar4 = juce::Timer::vftable;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = juce::DeletedAtShutdown::vftable;
      FUN_00637f30();
      piVar5 = (int *)FUN_0063dc00();
      iVar6 = piVar5[2];
      iVar8 = iVar6 + 1;
      if (piVar5[1] < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar6 + 2;
        }
        uVar9 = iVar6 + 9 + (iVar8 >> 1) & 0xfffffff8;
        if (piVar5[1] != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free((void *)*piVar5);
            *piVar5 = 0;
          }
          else if (*piVar5 == 0) {
            iVar6 = FUN_004c554b();
            *piVar5 = iVar6;
          }
          else {
            iVar6 = FUN_004c553b(*piVar5,uVar9 * 4);
            *piVar5 = iVar6;
          }
          piVar5[1] = uVar9;
        }
      }
      iVar6 = piVar5[2];
      piVar5[2] = iVar6 + 1;
      puVar1 = (undefined4 *)(*piVar5 + iVar6 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar4 + 5;
      }
      LOCK();
      DAT_00c8a918 = 0;
      UNLOCK();
      *puVar4 = juce::TopLevelWindowManager::vftable;
      puVar4[5] = juce::TopLevelWindowManager::vftable;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      DAT_00c8a6a8 = puVar4;
    }
    if (uVar2 < (uint)puVar4[8]) {
      iVar6 = *(int *)(puVar4[6] + uVar2 * 4);
    }
    else {
      iVar6 = 0;
    }
    local_8 = 0xffffffff;
    if (*(char *)(iVar6 + 0x72) != '\0') {
      iVar8 = 0;
      for (iVar6 = *(int *)(iVar6 + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
        iVar7 = FUN_006f6dd6(iVar6,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::TopLevelWindow::RTTI_Type_Descriptor,0,uVar3);
        if (iVar7 != 0) {
          iVar8 = iVar8 + 1;
        }
        puVar4 = DAT_00c8a6a8;
      }
      if (local_20 < iVar8) {
        local_20 = iVar8;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

