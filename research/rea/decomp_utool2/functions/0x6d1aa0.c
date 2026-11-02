// rea decompile_all
// name: FUN_006d1aa0
// address: 0x6d1aa0
// body: available
// range: 0x6d1aa0-0x6d1c85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006d1aa0(char param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  void **ppvVar8;
  void **in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00726dc1;
  local_10 = ExceptionList;
  ppvVar8 = &local_10;
  ExceptionList = ppvVar8;
  if (param_1 == '\0') {
    local_8 = 0;
    ppvVar8 = (void **)FUN_0048c530(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    iVar12 = 0;
    _param_1 = 0;
    ppvVar1 = ppvVar8 + 5;
    if (0 < (int)*ppvVar1) {
      ppvVar2 = ppvVar8 + 3;
      iVar9 = 0;
      do {
        ppvVar8 = *(void ***)((int)*ppvVar2 + iVar12 * 4);
        iVar12 = iVar12 + 1;
        _param_1 = iVar9 + 1;
        if (*(char *)(ppvVar8 + 0x10) == '\0') {
          _param_1 = iVar9;
        }
        iVar9 = _param_1;
      } while (iVar12 < (int)*ppvVar1);
    }
  }
  else {
    _param_1 = 1;
  }
  iVar12 = 0;
  puVar4 = DAT_00c8a6a4;
  if (0 < _param_1) {
    do {
      local_8 = 1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = operator_new(0x18);
        FUN_0063ea10();
        puVar4[2] = juce::DeletedAtShutdown::vftable;
        FUN_00637f30();
        piVar5 = (int *)FUN_0063dc00();
        iVar9 = piVar5[2] + 1;
        if (piVar5[1] < iVar9) {
          iVar6 = iVar9;
          if (iVar9 < 0) {
            iVar6 = piVar5[2] + 2;
          }
          uVar7 = (iVar6 >> 1) + 8 + iVar9 & 0xfffffff8;
          if (piVar5[1] != uVar7) {
            if ((int)uVar7 < 1) {
              FID_conflict__free((void *)*piVar5);
              *piVar5 = 0;
            }
            else if (*piVar5 == 0) {
              iVar9 = FUN_004c554b();
              *piVar5 = iVar9;
            }
            else {
              iVar9 = FUN_004c553b(*piVar5,uVar7 << 2);
              *piVar5 = iVar9;
            }
            piVar5[1] = uVar7;
          }
        }
        iVar9 = piVar5[2];
        piVar5[2] = iVar9 + 1;
        piVar5 = (int *)(*piVar5 + iVar9 * 4);
        if (piVar5 != (int *)0x0) {
          *piVar5 = (int)(puVar4 + 2);
        }
        LOCK();
        DAT_00c8a918 = 0;
        UNLOCK();
        *puVar4 = juce::ModalComponentManager::vftable;
        puVar4[2] = juce::ModalComponentManager::vftable;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        DAT_00c8a6a4 = puVar4;
      }
      iVar9 = puVar4[5] + -1;
      if (-1 < iVar9) {
        iVar6 = puVar4[3];
        iVar10 = 0;
        do {
          iVar3 = *(int *)(iVar6 + iVar9 * 4);
          iVar11 = iVar10;
          if (*(char *)(iVar3 + 0x40) != '\0') {
            iVar11 = iVar10 + 1;
            if (iVar10 == iVar12) {
              ppvVar8 = *(void ***)(iVar3 + 0x2c);
              goto LAB_006d1c3a;
            }
            iVar6 = puVar4[3];
          }
          iVar9 = iVar9 + -1;
          iVar10 = iVar11;
        } while (-1 < iVar9);
      }
      ppvVar8 = (void **)0x0;
LAB_006d1c3a:
      if (ppvVar8 == in_ECX) {
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)ppvVar8 >> 8),1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < _param_1);
  }
  ExceptionList = local_10;
  return (uint)ppvVar8 & 0xffffff00;
}

