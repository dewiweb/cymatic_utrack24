// rea decompile_all
// name: FUN_0040b740
// address: 0x40b740
// body: available
// range: 0x40b740-0x40ba63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b740(void)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  int *extraout_ECX;
  uint uVar7;
  bool bVar8;
  int iStack_54;
  int *piStack_50;
  undefined **ppuStack_4c;
  void *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc486;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar8 = false;
  FUN_0040bef0();
  FUN_0040bbf0();
  FUN_0040bd80();
  if (*(int **)(in_ECX[0x22] + 0x98) == (int *)0x0) {
    puVar1 = (undefined4 *)in_ECX[0x2b];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x2b] = 0;
      ppuStack_4c = (undefined **)0x40b996;
      (**(code **)*puVar1)();
    }
    puVar1 = (undefined4 *)in_ECX[0x2c];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x2c] = 0;
      ppuStack_4c = (undefined **)0x40b9ac;
      (**(code **)*puVar1)();
    }
    puVar1 = (undefined4 *)in_ECX[0x27];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x27] = 0;
      ppuStack_4c = (undefined **)0x40b9c2;
      (**(code **)*puVar1)();
    }
    puVar1 = (undefined4 *)in_ECX[0x28];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x28] = 0;
      ppuStack_4c = (undefined **)0x40b9d8;
      (**(code **)*puVar1)();
    }
    if (in_ECX[0x25] != 0) {
      ppuStack_4c = (undefined **)0xffffffff;
      piStack_50 = (int *)0x40b9eb;
      FUN_006e83a0();
    }
    if (in_ECX[0x26] != 0) {
      ppuStack_4c = (undefined **)0xffffffff;
      piStack_50 = (int *)0x40b9fe;
      FUN_006e83a0();
    }
    goto LAB_0040b9fe;
  }
  if (in_ECX[0x24] < 1) {
LAB_0040b7bf:
    bVar3 = false;
  }
  else {
    ppuStack_4c = (undefined **)0x40b7ac;
    iVar4 = (**(code **)(**(int **)(in_ECX[0x22] + 0x98) + 4))();
    bVar8 = true;
    bVar3 = true;
    if (*(int *)(iVar4 + 8) <= in_ECX[0x23]) goto LAB_0040b7bf;
  }
  if (bVar8) {
    FUN_0040f7f0();
    ppuStack_4c = (undefined **)0x40b7db;
    FID_conflict__free(local_30);
  }
  if (bVar3) {
    if (in_ECX[0x33] == 0) {
      ppuStack_4c = (undefined **)0x40b7ff;
      operator_new(0xd0);
      local_8 = 0;
      FUN_00637250();
      piStack_50 = in_ECX + 0x22;
      local_8 = CONCAT31(local_8._1_3_,1);
      iStack_54 = 0x40b835;
      ppuStack_4c = (undefined **)extraout_ECX;
      puVar5 = (undefined4 *)FUN_0040ca10();
      local_8 = 2;
      puVar1 = (undefined4 *)in_ECX[0x33];
      if ((puVar1 != puVar5) && (in_ECX[0x33] = (int)puVar5, puVar1 != (undefined4 *)0x0)) {
        ppuStack_4c = (undefined **)0x40b856;
        (**(code **)*puVar1)();
      }
      piVar2 = (int *)in_ECX[0x33];
      if (piVar2 != (int *)0x0) {
        ppuStack_4c = (undefined **)0x40b869;
        (**(code **)(*piVar2 + 0x28))();
        piStack_50 = (int *)0x40b873;
        ppuStack_4c = (undefined **)piVar2;
        FUN_006e5050();
      }
      local_8 = 0xffffffff;
      FUN_00637c10();
      ppuStack_4c = (undefined **)0x40b88f;
      operator_new(0xd0);
      local_8 = 3;
      FUN_00637250();
      local_8 = CONCAT31(local_8._1_3_,4);
      ppuStack_4c = &PTR_DAT_00c7ed68;
      piStack_50 = (int *)0x40b8c2;
      puVar5 = (undefined4 *)FUN_006e8b40();
      puVar1 = (undefined4 *)in_ECX[0x2d];
      if ((puVar1 != puVar5) && (in_ECX[0x2d] = (int)puVar5, puVar1 != (undefined4 *)0x0)) {
        ppuStack_4c = (undefined **)0x40b8dc;
        (**(code **)*puVar1)();
      }
      local_8 = 0xffffffff;
      FUN_00637c10();
      if (*(int *)(in_ECX[0x2d] + 0x9c) != 0x22) {
        *(undefined4 *)(in_ECX[0x2d] + 0x9c) = 0x22;
        FUN_006e6400(&iStack_54);
        FUN_006ce9f0(1);
      }
      ppuStack_4c = (undefined **)in_ECX[0x33];
      piStack_50 = (int *)0x40b92a;
      FUN_006e89c0();
    }
    FUN_0040cb20();
  }
  else {
    puVar1 = (undefined4 *)in_ECX[0x2d];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x2d] = 0;
      ppuStack_4c = (undefined **)0x40b954;
      (**(code **)*puVar1)();
    }
    puVar1 = (undefined4 *)in_ECX[0x33];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x33] = 0;
      ppuStack_4c = (undefined **)0x40b96e;
      (**(code **)*puVar1)();
    }
  }
  ppuStack_4c = (undefined **)0x40b976;
  FUN_0040c250();
  ppuStack_4c = (undefined **)0x40b97e;
  FUN_0040c5e0();
LAB_0040b9fe:
  FUN_006e9490();
  (**(code **)(*in_ECX + 0x84))();
  iVar4 = 0;
  uVar7 = in_ECX[0xc] - 1;
  if (-1 < (int)uVar7) {
    do {
      if (uVar7 < (uint)in_ECX[0xc]) {
        iVar6 = *(int *)(in_ECX[10] + uVar7 * 4);
      }
      else {
        iVar6 = 0;
      }
      iVar6 = *(int *)(iVar6 + 0x1c) + *(int *)(iVar6 + 0x14);
      if (iVar4 < iVar6) {
        iVar4 = iVar6;
      }
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  ppuStack_4c = (undefined **)in_ECX[6];
  piStack_50 = (int *)in_ECX[5];
  iStack_54 = in_ECX[4];
  FUN_006e9790();
  ExceptionList = local_10;
  return;
}

