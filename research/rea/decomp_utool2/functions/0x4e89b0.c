// rea decompile_all
// name: FUN_004e89b0
// address: 0x4e89b0
// body: available
// range: 0x4e89b0-0x4e8bf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e89b0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  bool bVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704afa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = false;
  local_18 = 0;
  if (*(int *)(in_ECX + 0x80) != 0) {
    uVar1 = FUN_00409fe0();
    local_8 = 0;
    FUN_006e81e0(uVar1);
    local_8 = 0xffffffff;
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  if (*(int *)(in_ECX + 0x88) != 0) {
    piVar5 = (int *)FUN_00409fe0();
    bVar6 = true;
    if ((*(int *)(in_ECX + 0x8c) == *piVar5) ||
       (iVar2 = FUN_00448730(*(undefined4 *)(in_ECX + 0x8c)), iVar2 == 0)) {
      local_11 = '\0';
      goto LAB_004e8a75;
    }
  }
  local_11 = '\x01';
LAB_004e8a75:
  if ((bVar6) && (piVar5 = (int *)(local_18 + -8), piVar5 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (local_11 != '\0') {
    puVar3 = (undefined4 *)FUN_00409fe0();
    uVar1 = *(undefined4 *)(in_ECX + 0x8c);
    *(undefined4 *)(in_ECX + 0x8c) = *puVar3;
    *puVar3 = uVar1;
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x88);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x88) = 0;
      (**(code **)*puVar3)();
    }
    if (*(int *)(in_ECX + 0x80) == 0) {
      uVar7 = 0;
    }
    else {
      iVar2 = FUN_006e85c0();
      uVar7 = iVar2 - 1;
    }
    piVar5 = (int *)FUN_005cef80();
    if ((uVar7 < (uint)piVar5[2]) && (iVar2 = *(int *)(*piVar5 + uVar7 * 4), iVar2 != 0)) {
      local_28 = *(undefined4 *)(in_ECX + 0x78);
      local_24 = *(undefined4 *)(in_ECX + 0x94);
      local_20 = *(undefined4 *)(in_ECX + 0x98);
      local_1c = operator_new(0xd0);
      local_8 = 1;
      piVar4 = (int *)FUN_0040a170(iVar2,&local_28);
      local_8 = 0xffffffff;
      piVar5 = *(int **)(in_ECX + 0x88);
      if ((piVar5 != piVar4) && (*(int **)(in_ECX + 0x88) = piVar4, piVar5 != (int *)0x0)) {
        (**(code **)*piVar5)();
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x28))();
        FUN_006e5050(piVar4);
      }
      FUN_0040b740();
    }
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),
               *(undefined4 *)(in_ECX + 0x18));
  ExceptionList = local_10;
  return;
}

