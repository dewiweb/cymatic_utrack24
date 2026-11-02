// rea decompile_all
// name: FUN_006a17c0
// address: 0x6a17c0
// body: available
// range: 0x6a17c0-0x6a19c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a17c0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined **ppuVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float in_XMM0_Da;
  undefined4 *local_20;
  int local_1c;
  undefined **local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722cdf;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0x98);
  local_1c = in_ECX;
  if (*(int *)(in_ECX + 0x9c) != 0) {
    FID_conflict__free((void *)*piVar1);
    *piVar1 = 0;
    *(undefined4 *)(in_ECX + 0x9c) = 0;
  }
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  local_14 = 0;
  iVar8 = *(int *)(in_ECX + 0xa0) + 1;
  if (*(int *)(in_ECX + 0x9c) < iVar8) {
    FUN_00409cf0(iVar8 / 2 + *(int *)(in_ECX + 0xa0) + 9 & 0xfffffff8);
  }
  iVar8 = *(int *)(in_ECX + 0xa0);
  *(int *)(in_ECX + 0xa0) = iVar8 + 1;
  puVar2 = (undefined4 *)(*piVar1 + iVar8 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  uVar10 = 0;
  iVar8 = in_ECX;
  iVar11 = in_ECX;
  if (0 < *(int *)(in_ECX + 0x94)) {
LAB_006a1867:
    do {
      if (*(int *)(iVar8 + 0x34) == 0) {
        iVar8 = *(int *)(iVar8 + 0xc);
        if (iVar8 != 0) goto LAB_006a1867;
        local_8 = iVar8;
        if (DAT_00c8a67c == 0) {
          local_18 = operator_new(0xd0);
          DAT_00c8a67c = FUN_006cb960();
        }
        iVar8 = FUN_006cb680(uVar6);
        local_8 = 0xffffffff;
      }
      else {
        iVar8 = *(int *)(iVar8 + 0x34);
      }
      if (uVar10 < *(uint *)(iVar11 + 0x94)) {
        local_18 = (undefined **)(*(int *)(iVar11 + 0x8c) + uVar10 * 4);
      }
      else {
        local_18 = &PTR_DAT_00c7ed68;
      }
      pcVar4 = *(code **)(*(int *)(iVar8 + 0x20) + 0x28);
      if (pcVar4 == FUN_006dbfc0) {
        FUN_006dbf50(&local_20,iVar11,uVar10,local_18);
        local_8 = 1;
        FUN_006831f0(local_18);
        FUN_004363b0();
        local_18 = (undefined **)((int)in_XMM0_Da + *(int *)(iVar11 + 0x1c));
        local_8 = 0xffffffff;
        ppuVar7 = local_18;
        if (local_20 != (undefined4 *)0x0) {
          LOCK();
          piVar3 = local_20 + 1;
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)*local_20)(1);
            ppuVar7 = local_18;
          }
        }
      }
      else {
        ppuVar7 = (undefined **)(*pcVar4)(iVar11,uVar10,local_18);
      }
      iVar5 = *(int *)(in_ECX + 0xa0);
      local_14 = local_14 + (int)ppuVar7;
      iVar9 = iVar5 + 1;
      iVar8 = iVar11;
      if ((int)*(uint *)(in_ECX + 0x9c) < iVar9) {
        if (iVar9 < 0) {
          iVar9 = iVar5 + 2;
        }
        uVar12 = iVar5 + 9 + (iVar9 >> 1) & 0xfffffff8;
        iVar8 = local_1c;
        if (*(uint *)(in_ECX + 0x9c) != uVar12) {
          if ((int)uVar12 < 1) {
            FID_conflict__free((void *)*piVar1);
            *piVar1 = 0;
          }
          else if (*piVar1 == 0) {
            iVar8 = FUN_004c554b();
            *piVar1 = iVar8;
          }
          else {
            iVar8 = FUN_004c553b(*piVar1,uVar12 * 4);
            *piVar1 = iVar8;
          }
          *(uint *)(in_ECX + 0x9c) = uVar12;
          iVar8 = local_1c;
        }
      }
      iVar11 = *(int *)(in_ECX + 0xa0);
      *(int *)(in_ECX + 0xa0) = iVar11 + 1;
      piVar3 = (int *)(*piVar1 + iVar11 * 4);
      if (piVar3 != (int *)0x0) {
        *piVar3 = local_14;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar8;
    } while ((int)uVar10 < *(int *)(iVar8 + 0x94));
  }
  ExceptionList = local_10;
  return;
}

