// rea decompile_all
// name: FUN_006023e0
// address: 0x6023e0
// body: available
// range: 0x6023e0-0x60260c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0060258a) */
/* WARNING: Removing unreachable block (ram,0x006025ba) */

bool FUN_006023e0(int param_1,int param_2,undefined8 param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071baff;
  local_10 = ExceptionList;
  uVar7 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x68) != 0) {
    if ((((param_1 == *(int *)(in_ECX + 0x58)) && (param_2 == *(int *)(in_ECX + 0x5c))) &&
        ((int)param_3 == *(int *)(in_ECX + 0x60))) && (param_3._4_4_ == *(int *)(in_ECX + 100)))
    goto LAB_006025f2;
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x68);
  local_14 = in_ECX;
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x68) = 0;
    if ((LPCVOID)*puVar3 != (LPCVOID)0x0) {
      UnmapViewOfFile((LPCVOID)*puVar3);
    }
    if ((HANDLE)puVar3[6] != (HANDLE)0x0) {
      CloseHandle((HANDLE)puVar3[6]);
    }
    FUN_004bfe14(puVar3,0x20,uVar7);
  }
  local_18 = *(int *)(in_ECX + 0x80);
  iVar10 = local_18 >> 0x1f;
  uVar11 = __allmul(local_18,iVar10,(int)param_3,param_3._4_4_);
  uVar7 = *(uint *)(local_14 + 0x70);
  uVar9 = *(uint *)(local_14 + 0x70);
  iVar4 = *(int *)(local_14 + 0x74);
  uVar12 = __allmul(local_18,iVar10,param_1,param_2);
  in_ECX = local_14;
  FUN_00440b00((uint)uVar12 + *(uint *)(local_14 + 0x70),
               (int)((ulonglong)uVar12 >> 0x20) + *(int *)(local_14 + 0x74) +
               (uint)CARRY4((uint)uVar12,*(uint *)(local_14 + 0x70)),(uint)uVar11 + uVar9,
               (int)((ulonglong)uVar11 >> 0x20) + iVar4 + (uint)CARRY4((uint)uVar11,uVar7));
  uVar14 = 0x20;
  local_1c = operator_new(0x20);
  local_8 = 0;
  puVar8 = (undefined4 *)FUN_0062b060(local_14 + 0x50,local_3c,extraout_ECX,uVar14);
  puVar3 = *(undefined4 **)(local_14 + 0x68);
  if ((puVar3 != puVar8) &&
     (*(undefined4 **)(local_14 + 0x68) = puVar8, puVar3 != (undefined4 *)0x0)) {
    if ((LPCVOID)*puVar3 != (LPCVOID)0x0) {
      UnmapViewOfFile((LPCVOID)*puVar3);
    }
    if ((HANDLE)puVar3[6] != (HANDLE)0x0) {
      CloseHandle((HANDLE)puVar3[6]);
    }
    FUN_004bfe14(puVar3,0x20);
  }
  piVar5 = *(int **)(local_14 + 0x68);
  if (*piVar5 == 0) {
    if (piVar5 != (int *)0x0) {
      *(undefined4 *)(local_14 + 0x68) = 0;
      if ((LPCVOID)*piVar5 != (LPCVOID)0x0) {
        UnmapViewOfFile((LPCVOID)*piVar5);
      }
      if ((HANDLE)piVar5[6] != (HANDLE)0x0) {
        CloseHandle((HANDLE)piVar5[6]);
      }
      FUN_004bfe14(piVar5,0x20);
    }
  }
  else {
    iVar4 = *(int *)(local_14 + 0x80);
    puVar1 = (uint *)(local_14 + 0x70);
    piVar2 = (int *)(local_14 + 0x74);
    local_1c = (void *)(iVar4 >> 0x1f);
    local_14 = iVar4;
    lVar13 = __alldiv(piVar5[4] - *puVar1,(piVar5[5] - *piVar2) - (uint)((uint)piVar5[4] < *puVar1),
                      iVar4,local_1c);
    lVar6 = *(longlong *)(in_ECX + 0x18);
    if (lVar13 < *(longlong *)(in_ECX + 0x18)) {
      lVar6 = lVar13;
    }
    local_18 = (int)((ulonglong)lVar6 >> 0x20);
    uVar7 = *(int *)(in_ECX + 0x80) - 1;
    uVar9 = uVar7 - *(uint *)(in_ECX + 0x70);
    lVar13 = __alldiv(uVar9 + piVar5[2],
                      ((((int)uVar7 >> 0x1f) - *(int *)(in_ECX + 0x74)) -
                      (uint)(uVar7 < *(uint *)(in_ECX + 0x70))) + piVar5[3] +
                      (uint)CARRY4(uVar9,piVar5[2]),local_14,local_1c);
    if (lVar13 < 1) {
      lVar13 = 0;
    }
    FUN_00440b00(lVar13,(int)lVar6,local_18);
    *(undefined4 *)(in_ECX + 0x58) = local_2c;
    *(undefined4 *)(in_ECX + 0x5c) = local_28;
    *(undefined4 *)(in_ECX + 0x60) = local_24;
    *(undefined4 *)(in_ECX + 100) = local_20;
  }
LAB_006025f2:
  ExceptionList = local_10;
  return *(int *)(in_ECX + 0x68) != 0;
}

