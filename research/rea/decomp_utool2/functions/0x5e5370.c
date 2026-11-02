// rea decompile_all
// name: FUN_005e5370
// address: 0x5e5370
// body: available
// range: 0x5e5370-0x5e575e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_005e5370(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint _NumOfElements;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int local_124;
  int local_11c;
  int *local_114;
  int *local_110 [2];
  int local_108 [64];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar7 = -1;
  local_124 = 0;
  piVar1 = (int *)FUN_004c5556(1,0x460);
  piVar10 = piVar1;
  piVar11 = piVar1;
  piVar12 = piVar1;
  piVar13 = piVar1;
  local_110[0] = piVar1;
  iVar2 = FUN_005eabc0();
  *piVar1 = iVar2;
  local_114 = (int *)0x0;
  piVar6 = piVar1;
  if (0 < iVar2) {
    do {
      piVar1 = piVar1 + 1;
      iVar2 = FUN_005eabc0();
      *piVar1 = iVar2;
      if (iVar2 < 0) goto LAB_005e5730;
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      local_114 = (int *)((int)local_114 + 1);
      piVar6 = local_110[0];
    } while ((int)local_114 < *local_110[0]);
  }
  local_11c = 0;
  if (0 < iVar7 + 1) {
    local_114 = piVar6 + 0x50;
    piVar6 = piVar6 + 0x40;
    do {
      iVar2 = FUN_005eabc0();
      piVar6[-0x20] = iVar2 + 1;
      iVar2 = FUN_005eabc0();
      piVar6[-0x10] = iVar2;
      if (iVar2 < 0) goto LAB_005e5730;
      if (iVar2 != 0) {
        iVar2 = FUN_005eabc0();
        *piVar6 = iVar2;
      }
      if ((*piVar6 < 0) || (*(int *)(iVar4 + 0x18) <= *piVar6)) goto LAB_005e5730;
      iVar2 = 0;
      piVar1 = local_114;
      if (0 < 1 << ((byte)piVar6[-0x10] & 0x1f)) {
        do {
          iVar3 = FUN_005eabc0();
          iVar3 = iVar3 + -1;
          *piVar1 = iVar3;
          if ((iVar3 < -1) || (*(int *)(iVar4 + 0x18) <= iVar3)) goto LAB_005e5730;
          iVar2 = iVar2 + 1;
          piVar1 = piVar1 + 1;
        } while (iVar2 < 1 << ((byte)piVar6[-0x10] & 0x1f));
      }
      piVar6 = piVar6 + 1;
      local_114 = local_114 + 8;
      local_11c = local_11c + 1;
    } while (local_11c < iVar7 + 1);
  }
  iVar4 = FUN_005eabc0();
  local_110[0][0xd0] = iVar4 + 1;
  iVar4 = FUN_005eabc0();
  if (iVar4 < 0) {
LAB_005e5730:
    piVar1 = local_110[0];
    _memset(local_110[0],0,0x460);
    FID_conflict__free(piVar1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = 0;
  local_11c = 0;
  piVar1 = local_110[0];
  if (0 < *local_110[0]) {
    local_124 = 0;
    piVar6 = local_110[0];
    do {
      piVar6 = piVar6 + 1;
      local_124 = local_124 + piVar1[*piVar6 + 0x20];
      if (iVar7 < local_124) {
        piVar8 = piVar1 + iVar7 + 0xd3;
        do {
          iVar2 = FUN_005eabc0();
          *piVar8 = iVar2;
          if ((iVar2 < 0) || (1 << ((byte)iVar4 & 0x1f) <= iVar2)) goto LAB_005e5730;
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
          piVar1 = local_110[0];
        } while (iVar7 < local_124);
      }
      local_11c = local_11c + 1;
    } while (local_11c < *piVar1);
  }
  piVar1[0xd1] = 0;
  _NumOfElements = local_124 + 2;
  iVar7 = 0;
  piVar1[0xd2] = 1 << ((byte)iVar4 & 0x1f);
  if (0 < (int)_NumOfElements) {
    if (7 < _NumOfElements) {
      uVar5 = _NumOfElements & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      do {
        lVar9 = SUB168(ZEXT416(2),0);
        local_108[iVar7 + -1] = (iVar7 + 0xd1 << lVar9) + (int)piVar10;
        local_108[iVar7] = (iVar7 + 0xd2 << lVar9) + (int)piVar11;
        local_108[iVar7 + 1] = (iVar7 + 0xd3 << lVar9) + (int)piVar12;
        local_108[iVar7 + 2] = (iVar7 + 0xd4 << lVar9) + (int)piVar13;
        local_108[iVar7 + 3] = (iVar7 + 0xd5 << lVar9) + (int)piVar10;
        local_108[iVar7 + 4] = (iVar7 + 0xd6 << lVar9) + (int)piVar11;
        local_108[iVar7 + 5] = (iVar7 + 0xd7 << lVar9) + (int)piVar12;
        local_108[iVar7 + 6] = (iVar7 + 0xd8 << lVar9) + (int)piVar13;
        iVar7 = iVar7 + 8;
      } while (iVar7 < (int)(_NumOfElements - uVar5));
    }
    if (iVar7 < (int)_NumOfElements) {
      piVar1 = piVar1 + iVar7 + 0xd1;
      do {
        local_108[iVar7 + -1] = (int)piVar1;
        iVar7 = iVar7 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar7 < (int)_NumOfElements);
    }
  }
  _qsort(local_110 + 1,_NumOfElements,4,FUN_005e5760);
  iVar4 = 1;
  if (1 < (int)_NumOfElements) {
    do {
      if (*local_110[iVar4] == *(int *)local_108[iVar4 + -1]) goto LAB_005e5730;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)_NumOfElements);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

