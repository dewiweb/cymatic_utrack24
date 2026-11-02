// rea decompile_all
// name: FUN_00608e40
// address: 0x608e40
// body: available
// range: 0x608e40-0x608fe8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00608e40(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  void **ppvVar8;
  int iVar9;
  void **_Memory;
  void **ppvVar10;
  void **ppvVar11;
  void *local_38 [2];
  int local_30;
  void **local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071c325;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _Memory = (void **)0x0;
  local_20 = 0;
  local_2c = (void **)0x0;
  local_28 = 0;
  local_24 = 0;
  ppvVar11 = local_38;
  local_8 = 0;
  ppvVar10 = (void **)0x608e86;
  FUN_00608cc0(ppvVar11);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_14 = 0;
  if (0 < local_30) {
    do {
      iVar5 = local_14;
      ppvVar11 = (void **)0x608eae;
      FUN_00608ff0(uVar4);
      pcVar3 = local_18;
      if (*local_18 != '\0') {
        local_1c = local_24 + 1;
        if ((int)local_28 < local_1c) {
          iVar5 = local_1c;
          if (local_1c < 0) {
            iVar5 = local_24 + 2;
          }
          uVar7 = local_24 + 9 + (iVar5 >> 1) & 0xfffffff8;
          iVar5 = local_14;
          if (local_28 != uVar7) {
            if ((int)uVar7 < 1) {
              ppvVar10 = (void **)0x608f0e;
              ppvVar11 = _Memory;
              FID_conflict__free(_Memory);
              _Memory = (void **)0x0;
              iVar5 = local_14;
              local_2c = _Memory;
              local_28 = uVar7;
            }
            else {
              ppvVar11 = (void **)(uVar7 * 4);
              if (_Memory == (void **)0x0) {
                ppvVar10 = (void **)0x608ef4;
                _Memory = (void **)FUN_004c554b();
                iVar5 = local_14;
                local_2c = _Memory;
                local_28 = uVar7;
              }
              else {
                ppvVar10 = _Memory;
                _Memory = (void **)FUN_004c553b(_Memory,ppvVar11);
                iVar5 = local_14;
                local_2c = _Memory;
                local_28 = uVar7;
              }
            }
          }
        }
        ppvVar8 = _Memory + local_24;
        local_24 = local_1c;
        if (ppvVar8 != (void **)0x0) {
          *ppvVar8 = pcVar3;
          piVar6 = (int *)(pcVar3 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
          }
        }
      }
      ppvVar8 = (void **)(pcVar3 + -8);
      if (ppvVar8 != (void **)&DAT_00bfe124) {
        LOCK();
        pvVar1 = *ppvVar8;
        *ppvVar8 = (void *)((int)*ppvVar8 + -1);
        UNLOCK();
        if (pvVar1 == (void *)0x0) {
          ppvVar10 = (void **)0x608f5b;
          FID_conflict__free(ppvVar8);
          ppvVar11 = ppvVar8;
        }
      }
      local_14 = iVar5 + 1;
    } while (local_14 < local_30);
  }
  FUN_00636260(param_1,&DAT_00bfdae4,ppvVar10,ppvVar11);
  FID_conflict__free(local_38[0]);
  iVar5 = local_24;
  ppvVar11 = local_2c;
  iVar9 = 0;
  if (0 < local_24) {
    do {
      piVar6 = (int *)((int)ppvVar11[iVar9] + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
  }
  FID_conflict__free(ppvVar11);
  ExceptionList = local_10;
  return param_1;
}

