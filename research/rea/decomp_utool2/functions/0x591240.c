// rea decompile_all
// name: FUN_00591240
// address: 0x591240
// body: available
// range: 0x591240-0x5914da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00591240(void)

{
  uint *puVar1;
  uint uVar2;
  void **ppvVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071460c;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar11 = 0;
  local_1c = *(int *)(*(int *)(in_ECX + 0x18) + 0xdc);
  ppvVar3 = &local_10;
  if (*(int *)(local_1c + 0x5c) < 1) {
    return 0;
  }
  do {
    ExceptionList = ppvVar3;
    iVar6 = FUN_0058e1a0(uVar11);
    if (*(int *)(iVar6 + 0xc) == 0) {
      uVar7 = FUN_0058e5c0(&local_20,1);
      local_8 = 0;
      FUN_0053c660(&local_18,uVar11,uVar7);
      local_8._0_1_ = 2;
      piVar8 = (int *)(local_20 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      FUN_00636040(&local_28);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00634890(&local_24);
      piVar8 = (int *)(local_24 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar8 = (int *)(local_28 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar9 = *(int *)(in_ECX + 0x14);
      if (iVar9 != 0) {
        LOCK();
        *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
        UNLOCK();
      }
      cVar4 = FUN_00590680(&local_18,iVar9);
      if (cVar4 == '\0') {
        FUN_0058e710(2,0x401,&local_18);
        piVar8 = (int *)(local_18 + -8);
        if (piVar8 == &DAT_00bfe124) {
          ExceptionList = local_10;
          return 0;
        }
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 != 0) {
          ExceptionList = local_10;
          return 0;
        }
        FID_conflict__free(piVar8);
        ExceptionList = local_10;
        return 0;
      }
      piVar8 = (int *)(local_18 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar8);
        }
      }
    }
    iVar9 = *(int *)(in_ECX + 0x28);
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar6 + 0x10));
    local_8 = 4;
    if (*(int *)(iVar9 + 0x10) == 0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)**(undefined4 **)(iVar9 + 8);
    }
    if (uVar11 < *(uint *)(iVar9 + 0x10)) {
      iVar9 = *(int *)(*(int *)(iVar9 + 8) + uVar11 * 4);
    }
    else {
      iVar9 = 0;
    }
    local_11 = (**(code **)(**(int **)(iVar6 + 0x28) + 4))
                         (*(undefined4 *)(iVar9 + 0xc),*puVar10,uVar5);
    (**(code **)(**(int **)(iVar6 + 0x28) + 8))();
    local_8 = 0xffffffff;
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar6 + 0x10));
    if (*(int *)(*(int *)(in_ECX + 0x28) + 0x10) == 0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)**(undefined4 **)(*(int *)(in_ECX + 0x28) + 8);
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x28) + 0x14);
    uVar12 = __allmul(iVar6,iVar6 >> 0x1f,*puVar10,puVar10[1]);
    iVar6 = *(int *)(in_ECX + 0x18);
    uVar12 = uVar12 >> 3;
    puVar1 = (uint *)(iVar6 + 0x38);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (uint)uVar12;
    *(int *)(iVar6 + 0x3c) =
         *(int *)(iVar6 + 0x3c) + (int)(uVar12 >> 0x20) + (uint)CARRY4(uVar2,(uint)uVar12);
    (**(code **)(**(int **)(*(int *)(iVar6 + 0x10) + 0x28) + 0x10))(uVar12);
    if (local_11 == '\0') {
      FUN_0058e710(5,0x402,&PTR_DAT_00c7ed54);
      ExceptionList = local_10;
      return 0;
    }
    uVar11 = uVar11 + 1;
    ppvVar3 = ExceptionList;
    if (*(int *)(local_1c + 0x5c) <= (int)uVar11) {
      ExceptionList = local_10;
      return 0;
    }
  } while( true );
}

