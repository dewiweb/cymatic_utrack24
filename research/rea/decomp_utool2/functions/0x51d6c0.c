// rea decompile_all
// name: FUN_0051d6c0
// address: 0x51d6c0
// body: available
// range: 0x51d6c0-0x51d95e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d6c0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  uint uVar9;
  bool bVar10;
  undefined4 uStack_44;
  TypeDescriptor *pTStack_40;
  TypeDescriptor *local_3c;
  int local_24;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a112;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar9 = 0;
  iVar8 = *(int *)(in_ECX + 0x78);
  bVar3 = false;
  bVar2 = false;
  if (0 < *(int *)(*(int *)(iVar8 + 0xc) + 0x20)) {
    do {
      if ((((-1 < (int)uVar9) &&
           (uVar1 = *(uint *)(*(int *)(iVar8 + 0xc) + 0x20), (int)uVar9 < (int)uVar1)) &&
          (uVar9 < uVar1)) && (*(int *)(*(int *)(*(int *)(iVar8 + 0xc) + 0x18) + uVar9 * 4) != 0)) {
        local_3c = (TypeDescriptor *)0x51d737;
        uVar4 = FUN_00410a10();
        local_3c = &ProjectExplorer::RTTI_Type_Descriptor;
        pTStack_40 = &juce::TreeView::RTTI_Type_Descriptor;
        local_8 = 0;
        uStack_44 = 0;
        FUN_006f6dd6(*(undefined4 *)(in_ECX + 4));
        pTStack_40 = (TypeDescriptor *)0x51d763;
        local_3c = (TypeDescriptor *)uVar4;
        iVar5 = FUN_00518a30();
        local_8 = 0xffffffff;
        LOCK();
        iVar8 = iRamfffffff8 + -1;
        UNLOCK();
        bVar10 = iRamfffffff8 == 0;
        iRamfffffff8 = iVar8;
        if (bVar10) {
          local_3c = (TypeDescriptor *)0x51d78d;
          FID_conflict__free((void *)0xfffffff8);
        }
        if (iVar5 != 0) {
          if (*(int *)(in_ECX + 0x60) == 0) {
            if ((*(uint *)(iVar5 + 0x40) & 0x2000) == 0) {
              if (*(int *)(iVar5 + 0x68) != 0) {
                *(int *)(iVar5 + 0x68) = *(int *)(iVar5 + 0x68) + -1;
              }
              if (*(int *)(iVar5 + 0x68) == 0) {
                pTStack_40 = *(TypeDescriptor **)(iVar5 + 100);
                goto LAB_0051d7e6;
              }
            }
          }
          else if ((*(int *)(in_ECX + 0x60) == 1) && ((*(uint *)(iVar5 + 0x40) & 0x2000) == 0)) {
            if (*(int *)(iVar5 + 0x68) == 0) {
              *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(iVar5 + 0x60);
            }
            *(int *)(iVar5 + 0x68) = *(int *)(iVar5 + 0x68) + 1;
            pTStack_40 = (TypeDescriptor *)0x1;
LAB_0051d7e6:
            local_3c = (TypeDescriptor *)0x0;
            uStack_44 = 0x51d7ed;
            FUN_0051b180();
          }
        }
      }
      iVar8 = *(int *)(in_ECX + 0x78);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(*(int *)(iVar8 + 0xc) + 0x20));
  }
  if (*(int *)(in_ECX + 0x60) == 0) {
    local_3c = (TypeDescriptor *)0x51d80f;
    piVar6 = (int *)FUN_00410ea0();
    local_3c = &ProjectExplorer::RTTI_Type_Descriptor;
    pTStack_40 = &juce::TreeView::RTTI_Type_Descriptor;
    local_8 = 1;
    uStack_44 = 0;
    FUN_006f6dd6(*(undefined4 *)(in_ECX + 4));
    local_3c = (TypeDescriptor *)0x51d843;
    piVar7 = (int *)FUN_004130a0();
    bVar3 = true;
    bVar2 = true;
    if (*piVar7 != *piVar6) {
      local_3c = (TypeDescriptor *)*piVar7;
      pTStack_40 = (TypeDescriptor *)0x51d863;
      iVar8 = FUN_0045c1e0();
      if (iVar8 != 0) goto LAB_0051d870;
    }
    bVar10 = true;
  }
  else {
LAB_0051d870:
    bVar10 = false;
  }
  if ((bVar3) && (piVar6 = (int *)(local_20 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar8 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_3c = (TypeDescriptor *)0x51d8a4;
      FID_conflict__free(piVar6);
    }
  }
  local_8 = 0xffffffff;
  if ((bVar2) && (piVar6 = (int *)(local_24 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar8 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_3c = (TypeDescriptor *)0x51d8d6;
      FID_conflict__free(piVar6);
    }
  }
  if (bVar10) {
    local_3c = &ProjectExplorer::RTTI_Type_Descriptor;
    pTStack_40 = &juce::TreeView::RTTI_Type_Descriptor;
    uStack_44 = 0;
    iVar8 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 4));
    piVar6 = (int *)(PTR_DAT_00c7ed54 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    LOCK();
    iVar5 = *(int *)(iVar8 + 0x180);
    *(int *)(iVar8 + 0x180) = (int)PTR_DAT_00c7ed54;
    UNLOCK();
    piVar6 = (int *)(iVar5 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_3c = (TypeDescriptor *)0x51d936;
        FID_conflict__free(piVar6);
      }
    }
    FUN_006e6400(&uStack_44);
    FUN_006ce9f0(1);
  }
  ExceptionList = local_10;
  return;
}

