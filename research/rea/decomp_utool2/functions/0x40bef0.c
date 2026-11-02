// rea decompile_all
// name: FUN_0040bef0
// address: 0x40bef0
// body: available
// range: 0x40bef0-0x40c248 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040bef0(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  int extraout_ECX;
  uint uVar7;
  int extraout_ECX_00;
  int iVar8;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int *piVar9;
  int local_24;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc5da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = in_ECX;
  if (*(int *)(in_ECX + 0x90) < 1) {
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x84) + 0x10))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    iVar8 = extraout_ECX;
    if (cVar2 != '\0') goto LAB_0040c1ed;
  }
  if (*(int *)(in_ECX + 0x94) == 0) {
    operator_new(0xcc);
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_006e8840(&PTR_DAT_00c7ed68);
    local_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(in_ECX + 0x94);
    if ((puVar1 != puVar3) &&
       (*(undefined4 **)(in_ECX + 0x94) = puVar3, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    if (in_ECX + 0x74 != 0) {
      FUN_004097d0(in_ECX + 0x74);
    }
    piVar9 = *(int **)(in_ECX + 0x94);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x28))(1);
      FUN_006e5050(piVar9,0xffffffff);
    }
    pvVar4 = operator_new(0xd0);
    local_8 = 1;
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x84) + 0x10))();
    if (cVar2 == '\0') {
      uVar5 = FUN_00637250();
      local_8 = 3;
      uVar7 = 2;
    }
    else {
      uVar5 = FUN_00637250();
      local_8 = CONCAT31(local_8._1_3_,2);
      uVar7 = 1;
    }
    puVar3 = (undefined4 *)FUN_006e8b40(&PTR_DAT_00c7ed68,uVar5);
    puVar1 = *(undefined4 **)(in_ECX + 0xa4);
    if ((puVar1 != puVar3) &&
       (*(undefined4 **)(in_ECX + 0xa4) = puVar3, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    if ((uVar7 & 2) != 0) {
      uVar7 = uVar7 & 0xfffffffd;
      piVar9 = (int *)(local_1c + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar9);
        }
      }
    }
    local_8 = 0xffffffff;
    if ((uVar7 & 1) != 0) {
      uVar7 = uVar7 & 0xfffffffe;
      piVar9 = (int *)(local_20 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar9);
        }
      }
    }
    FUN_006e89c0(*(undefined4 *)(in_ECX + 0x94),uVar7);
    iVar8 = extraout_ECX_00;
    if (0 < *(int *)(in_ECX + 0x90)) {
      operator_new(0xe0);
      local_8 = 6;
      uVar5 = FUN_00637250();
      local_8 = CONCAT31(local_8._1_3_,7);
      uVar6 = FUN_00637250();
      local_8 = 8;
      puVar3 = (undefined4 *)FUN_006e6560(uVar6,uVar5);
      local_8 = 10;
      puVar1 = *(undefined4 **)(in_ECX + 0xb8);
      if ((puVar1 != puVar3) &&
         (*(undefined4 **)(in_ECX + 0xb8) = puVar3, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar9 = *(int **)(in_ECX + 0xb8);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x28))(1);
        FUN_006e5050(piVar9,0xffffffff);
      }
      piVar9 = (int *)(local_24 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      iVar8 = -1;
      local_8 = 0xffffffff;
      piVar9 = (int *)((int)pvVar4 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        iVar8 = iVar8 + -1;
        if (iVar8 == -1) {
          FID_conflict__free(piVar9);
          iVar8 = extraout_ECX_01;
        }
      }
      if (in_ECX + 0x78 != 0) {
        FUN_004097d0(in_ECX + 0x78);
        iVar8 = extraout_ECX_02;
      }
    }
  }
  FUN_0040bad0(*(undefined4 *)(in_ECX + 0x94),iVar8);
LAB_0040c1ed:
  if (*(int *)(in_ECX + 0x94) != 0) {
    iVar8 = (**(code **)(**(int **)(in_ECX + 0x84) + 0xc))
                      (*(undefined4 *)(*(int *)(in_ECX + 0x88) + 0x98),0);
    FUN_006e83a0(iVar8 + 1,0);
    if (*(int *)(in_ECX + 0xb8) != 0) {
      FUN_006e9390(-1 < iVar8);
    }
  }
  ExceptionList = local_10;
  return;
}

