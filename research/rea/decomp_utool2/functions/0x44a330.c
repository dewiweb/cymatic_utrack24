// rea decompile_all
// name: FUN_0044a330
// address: 0x44a330
// body: available
// range: 0x44a330-0x44a869 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044a330(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  bool bVar7;
  undefined4 uStack_54;
  int iStack_50;
  undefined1 **ppuStack_4c;
  void *local_34;
  undefined1 *local_1c;
  undefined4 local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff463;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = false;
  local_18 = 0;
  FUN_0044acf0();
  FUN_0044b090();
  FUN_0044a9f0();
  FUN_0044ab80();
  piVar1 = *(int **)(*(int *)(in_ECX + 0x80) + 0x98);
  if (piVar1 == (int *)0x0) {
    puVar2 = *(undefined4 **)(in_ECX + 0xb0);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xb0) = 0;
      ppuStack_4c = (undefined1 **)0x44a7a3;
      (**(code **)*puVar2)();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xb4);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xb4) = 0;
      ppuStack_4c = (undefined1 **)0x44a7b9;
      (**(code **)*puVar2)();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xa0);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xa0) = 0;
      ppuStack_4c = (undefined1 **)0x44a7cf;
      (**(code **)*puVar2)();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xa4);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xa4) = 0;
      ppuStack_4c = (undefined1 **)0x44a7e5;
      (**(code **)*puVar2)();
    }
    if (*(int *)(in_ECX + 0x98) != 0) {
      ppuStack_4c = (undefined1 **)0xffffffff;
      iStack_50 = 0x44a7f8;
      FUN_006e83a0();
    }
    if (*(int *)(in_ECX + 0x9c) != 0) {
      ppuStack_4c = (undefined1 **)0xffffffff;
      iStack_50 = 0x44a80b;
      FUN_006e83a0();
    }
    goto LAB_0044a80b;
  }
  if (*(int *)(in_ECX + 0x90) < 1) {
LAB_0044a3bc:
    local_11 = '\0';
  }
  else {
    ppuStack_4c = (undefined1 **)0x44a3a9;
    iVar3 = (**(code **)(*piVar1 + 4))();
    bVar7 = true;
    local_11 = '\x01';
    if (*(int *)(iVar3 + 8) <= *(int *)(in_ECX + 0x8c)) goto LAB_0044a3bc;
  }
  if (bVar7) {
    FUN_0040f7f0();
    ppuStack_4c = (undefined1 **)0x44a3d8;
    FID_conflict__free(local_34);
  }
  bVar7 = false;
  if (local_11 == '\0') {
    puVar2 = *(undefined4 **)(in_ECX + 0xbc);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xbc) = 0;
      ppuStack_4c = (undefined1 **)0x44a571;
      (**(code **)*puVar2)();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xd8);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xd8) = 0;
      ppuStack_4c = (undefined1 **)0x44a58b;
      (**(code **)*puVar2)();
    }
  }
  else {
    if (*(int *)(in_ECX + 0xd8) == 0) {
      ppuStack_4c = (undefined1 **)0x44a3fc;
      operator_new(0xdc);
      local_8 = 0;
      FUN_00637250();
      ppuStack_4c = (undefined1 **)0x1;
      iStack_50 = in_ECX + 0x80;
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = 2;
      uStack_54 = 0x44a433;
      puVar4 = (undefined4 *)FUN_0044bb40();
      local_8 = 2;
      puVar2 = *(undefined4 **)(in_ECX + 0xd8);
      if ((puVar2 != puVar4) &&
         (*(undefined4 **)(in_ECX + 0xd8) = puVar4, puVar2 != (undefined4 *)0x0)) {
        ppuStack_4c = (undefined1 **)0x44a454;
        (**(code **)*puVar2)();
      }
      piVar1 = *(int **)(in_ECX + 0xd8);
      if (piVar1 != (int *)0x0) {
        ppuStack_4c = (undefined1 **)0x44a467;
        (**(code **)(*piVar1 + 0x28))();
        iStack_50 = 0x44a471;
        ppuStack_4c = (undefined1 **)piVar1;
        FUN_006e5050();
      }
      local_8 = 0xffffffff;
      FUN_00637c10();
      ppuStack_4c = (undefined1 **)0x44a48d;
      operator_new(0xd0);
      local_8 = 3;
      FUN_00637250();
      local_1c = &DAT_00bfe12c;
      ppuStack_4c = &local_1c;
      local_8 = 5;
      local_18 = 0xc;
      iStack_50 = 0x44a4c9;
      puVar4 = (undefined4 *)FUN_006e8b40();
      puVar2 = *(undefined4 **)(in_ECX + 0xbc);
      if ((puVar2 != puVar4) &&
         (*(undefined4 **)(in_ECX + 0xbc) = puVar4, puVar2 != (undefined4 *)0x0)) {
        ppuStack_4c = (undefined1 **)0x44a4e3;
        (**(code **)*puVar2)();
      }
      FUN_00637c10();
      local_8 = 0xffffffff;
      FUN_00637c10();
      if (*(int *)(*(int *)(in_ECX + 0xbc) + 0x9c) != 0x22) {
        *(undefined4 *)(*(int *)(in_ECX + 0xbc) + 0x9c) = 0x22;
        FUN_006e6400(&uStack_54);
        FUN_006ce9f0(1);
      }
      ppuStack_4c = *(undefined1 ***)(in_ECX + 0xd8);
      iStack_50 = 0x44a544;
      FUN_006e89c0();
    }
    FUN_0044bc60();
  }
  if (*(int *)(in_ECX + 0x88) < 1) {
LAB_0044a5b7:
    local_11 = '\0';
  }
  else {
    ppuStack_4c = (undefined1 **)0x44a5a5;
    iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x80) + 0x98) + 8))();
    bVar7 = true;
    local_11 = '\x01';
    if (*(int *)(iVar3 + 8) <= *(int *)(in_ECX + 0x84)) goto LAB_0044a5b7;
  }
  if (bVar7) {
    FUN_0040f7f0();
    ppuStack_4c = (undefined1 **)0x44a5d3;
    FID_conflict__free(local_34);
  }
  if (local_11 == '\0') {
    puVar2 = *(undefined4 **)(in_ECX + 0xb8);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xb8) = 0;
      ppuStack_4c = (undefined1 **)0x44a75e;
      (**(code **)*puVar2)();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xd4);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xd4) = 0;
      ppuStack_4c = (undefined1 **)0x44a778;
      (**(code **)*puVar2)();
    }
  }
  else {
    if (*(int *)(in_ECX + 0xd4) == 0) {
      ppuStack_4c = (undefined1 **)0x44a5f7;
      operator_new(0xdc);
      local_8 = 8;
      FUN_00637250();
      ppuStack_4c = (undefined1 **)0x0;
      iStack_50 = in_ECX + 0x80;
      local_8 = CONCAT31(local_8._1_3_,9);
      local_18 = 0x20;
      uStack_54 = 0x44a62e;
      puVar4 = (undefined4 *)FUN_0044bb40();
      local_8 = 10;
      puVar2 = *(undefined4 **)(in_ECX + 0xd4);
      if ((puVar2 != puVar4) &&
         (*(undefined4 **)(in_ECX + 0xd4) = puVar4, puVar2 != (undefined4 *)0x0)) {
        ppuStack_4c = (undefined1 **)0x44a64f;
        (**(code **)*puVar2)();
      }
      piVar1 = *(int **)(in_ECX + 0xd4);
      if (piVar1 != (int *)0x0) {
        ppuStack_4c = (undefined1 **)0x44a662;
        (**(code **)(*piVar1 + 0x28))();
        iStack_50 = 0x44a66c;
        ppuStack_4c = (undefined1 **)piVar1;
        FUN_006e5050();
      }
      local_8 = 0xffffffff;
      FUN_00637c10();
      ppuStack_4c = (undefined1 **)0x44a688;
      operator_new(0xd0);
      local_8 = 0xb;
      FUN_00637250();
      local_1c = &DAT_00bfe12c;
      ppuStack_4c = &local_1c;
      local_8 = 0xd;
      local_18 = 0xc0;
      iStack_50 = 0x44a6c7;
      puVar4 = (undefined4 *)FUN_006e8b40();
      puVar2 = *(undefined4 **)(in_ECX + 0xb8);
      if ((puVar2 != puVar4) &&
         (*(undefined4 **)(in_ECX + 0xb8) = puVar4, puVar2 != (undefined4 *)0x0)) {
        ppuStack_4c = (undefined1 **)0x44a6e1;
        (**(code **)*puVar2)();
      }
      FUN_00637c10();
      local_8 = 0xffffffff;
      FUN_00637c10();
      if (*(int *)(*(int *)(in_ECX + 0xb8) + 0x9c) != 0x22) {
        *(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x9c) = 0x22;
        FUN_006e6400(&uStack_54);
        FUN_006ce9f0(1);
      }
      ppuStack_4c = *(undefined1 ***)(in_ECX + 0xd4);
      iStack_50 = 0x44a737;
      FUN_006e89c0();
    }
    FUN_0044bc60();
  }
  ppuStack_4c = (undefined1 **)0x44a783;
  FUN_0044b2b0();
  ppuStack_4c = (undefined1 **)0x44a78b;
  FUN_0044b6b0();
LAB_0044a80b:
  FUN_006e9490();
  FUN_00449890();
  iVar3 = 0;
  uVar6 = *(int *)(in_ECX + 0x30) - 1;
  if (-1 < (int)uVar6) {
    do {
      if (uVar6 < *(uint *)(in_ECX + 0x30)) {
        iVar5 = *(int *)(*(int *)(in_ECX + 0x28) + uVar6 * 4);
      }
      else {
        iVar5 = 0;
      }
      iVar5 = *(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0x14);
      if (iVar3 < iVar5) {
        iVar3 = iVar5;
      }
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  ppuStack_4c = *(undefined1 ***)(in_ECX + 0x18);
  iStack_50 = *(undefined4 *)(in_ECX + 0x14);
  uStack_54 = *(undefined4 *)(in_ECX + 0x10);
  FUN_006e9790();
  ExceptionList = local_10;
  return;
}

