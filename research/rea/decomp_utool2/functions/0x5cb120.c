// rea decompile_all
// name: FUN_005cb120
// address: 0x5cb120
// body: available
// range: 0x5cb120-0x5cb3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb120(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *_Memory;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  BOOL BVar8;
  int in_ECX;
  void *local_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071aee6;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 0x1b8) == *param_1) {
    return;
  }
  ExceptionList = &local_10;
  iVar5 = FUN_00448730(*(undefined4 *)(in_ECX + 0x1b8));
  if (iVar5 == 0) {
    ExceptionList = local_10;
    return;
  }
  local_8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  iVar5 = *(int *)(in_ECX + 0x9c);
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0xa0);
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  iVar2 = *(int *)(in_ECX + 0xa4);
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  iVar4 = iVar2;
  if (*(int *)(in_ECX + 0x98) != 0) {
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      (**(code **)(**(int **)(iVar5 + iVar4 * 4) + 0xc))();
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x1bc);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x1bc) = 0;
    (**(code **)*puVar3)();
  }
  piVar6 = (int *)(*param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = *(int *)(in_ECX + 0x1b8);
  *(int *)(in_ECX + 0x1b8) = *param_1;
  UNLOCK();
  piVar6 = (int *)(iVar4 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (*(char *)*param_1 != '\0') {
    FUN_005c8000();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0062c730(*param_1,0);
    puVar7 = (undefined4 *)FUN_005c7b10();
    puVar3 = *(undefined4 **)(in_ECX + 0x1bc);
    if ((puVar3 != puVar7) &&
       (*(undefined4 **)(in_ECX + 0x1bc) = puVar7, puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    local_8 = local_8 & 0xffffff00;
    FUN_0040f7f0();
    FID_conflict__free(local_30);
  }
  iVar4 = iVar2;
  if (*(int *)(in_ECX + 0x98) != 0) {
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      (**(code **)(**(int **)(iVar5 + iVar4 * 4) + 8))();
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  _Memory = *(void **)(in_ECX + 0x9c);
  *(int *)(in_ECX + 0x9c) = iVar5;
  *(undefined4 *)(in_ECX + 0xa0) = uVar1;
  *(int *)(in_ECX + 0xa4) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  FUN_005cbd40();
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar6 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar5 = *piVar6;
    if (iVar5 == 0) {
      *piVar6 = 1;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 == 0) {
      puVar3 = *(undefined4 **)(in_ECX + 8);
      if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
        LOCK();
        puVar3[1] = puVar3[1] + 1;
        UNLOCK();
        BVar8 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)puVar3);
        if (BVar8 != 0) goto LAB_005cb395;
      }
      if (puVar3 != (undefined4 *)0x0) {
        piVar6 = puVar3 + 1;
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar3)();
        }
      }
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
LAB_005cb395:
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

