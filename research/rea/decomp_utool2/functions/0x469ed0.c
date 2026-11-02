// rea decompile_all
// name: FUN_00469ed0
// address: 0x469ed0
// body: available
// range: 0x469ed0-0x46a1ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469ed0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  FARPROC pFVar4;
  undefined4 *puVar5;
  HMODULE pHVar6;
  FARPROC pFVar7;
  FARPROC in_ECX;
  code *_Memory;
  code *pcVar8;
  FARPROC local_38;
  char local_31;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0070143f;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(int *)in_ECX = 0;
  *(int *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = 0;
  *(int *)(in_ECX + 0xc) = 0;
  *(int *)(in_ECX + 0x10) = 0;
  *(int *)(in_ECX + 0x14) = 0;
  local_8 = 5;
  uStack_7 = 0;
  local_38 = in_ECX;
  FUN_0045c990("d2d1.dll",local_14);
  pcVar8 = FreeLibrary_exref;
  local_8 = 6;
  if (*(HMODULE *)(in_ECX + 0x10) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(in_ECX + 0x10));
    *(int *)(in_ECX + 0x10) = 0;
  }
  puVar5 = (undefined4 *)FUN_00458890();
  pHVar6 = LoadLibraryW((LPCWSTR)*puVar5);
  local_31 = pHVar6 != (HMODULE)0x0;
  _local_8 = CONCAT31(uStack_7,5);
  *(HMODULE *)(in_ECX + 0x10) = pHVar6;
  _Memory = local_38 + -8;
  if (_Memory != (code *)&DAT_00bfe124) {
    LOCK();
    iVar1 = *(int *)_Memory;
    *(int *)_Memory = *(int *)_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if (local_31 != '\0') {
    FUN_0045c990("D2D1CreateFactory");
    pFVar4 = local_38;
    if (*(HMODULE *)(in_ECX + 0x10) == (HMODULE)0x0) {
      local_38 = (FARPROC)0x0;
    }
    else {
      local_38 = GetProcAddress(*(HMODULE *)(in_ECX + 0x10),(LPCSTR)local_38);
    }
    pcVar8 = pFVar4 + -8;
    if (pcVar8 != (code *)&DAT_00bfe124) {
      LOCK();
      iVar1 = *(int *)pcVar8;
      *(int *)pcVar8 = *(int *)pcVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(pcVar8);
      }
    }
    pFVar4 = local_38;
    pcVar8 = FreeLibrary_exref;
    if (local_38 != (FARPROC)0x0) {
      piVar2 = *(int **)in_ECX;
      local_38 = (FARPROC)0x0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(int *)in_ECX = 0;
      (*pFVar4)(0,&DAT_00c17cac,&local_38);
      pcVar8 = FreeLibrary_exref;
    }
  }
  FUN_0045c990("DWrite.dll");
  local_8 = 7;
  if (*(int *)(in_ECX + 0x14) != 0) {
    (*pcVar8)(*(int *)(in_ECX + 0x14));
    *(int *)(in_ECX + 0x14) = 0;
  }
  puVar5 = (undefined4 *)FUN_00458890();
  pHVar6 = LoadLibraryW((LPCWSTR)*puVar5);
  local_31 = pHVar6 != (HMODULE)0x0;
  _local_8 = CONCAT31(uStack_7,5);
  *(HMODULE *)(in_ECX + 0x14) = pHVar6;
  pcVar8 = local_38 + -8;
  if (pcVar8 != (code *)&DAT_00bfe124) {
    LOCK();
    iVar1 = *(int *)pcVar8;
    *(int *)pcVar8 = *(int *)pcVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(pcVar8);
    }
  }
  if (local_31 != '\0') {
    FUN_0045c990("DWriteCreateFactory");
    pFVar4 = local_38;
    if (*(HMODULE *)(in_ECX + 0x14) == (HMODULE)0x0) {
      pFVar7 = (FARPROC)0x0;
    }
    else {
      pFVar7 = GetProcAddress(*(HMODULE *)(in_ECX + 0x14),(LPCSTR)local_38);
    }
    pcVar8 = pFVar4 + -8;
    if (pcVar8 != (code *)&DAT_00bfe124) {
      LOCK();
      iVar1 = *(int *)pcVar8;
      *(int *)pcVar8 = *(int *)pcVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(pcVar8);
      }
    }
    if (pFVar7 != (FARPROC)0x0) {
      piVar2 = *(int **)(in_ECX + 4);
      pcVar8 = in_ECX + 4;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(int *)pcVar8 = 0;
      (*pFVar7)(0,&DAT_00c17da4,pcVar8);
      piVar2 = *(int **)pcVar8;
      if (piVar2 != (int *)0x0) {
        piVar3 = *(int **)(in_ECX + 8);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        *(int *)(in_ECX + 8) = 0;
        (**(code **)(*piVar2 + 0xc))(piVar2,in_ECX + 8,0);
      }
    }
    piVar2 = *(int **)in_ECX;
    if (piVar2 != (int *)0x0) {
      piVar3 = *(int **)(in_ECX + 0xc);
      local_18 = 0;
      local_30 = 1;
      uStack_2c = 0x57;
      uStack_28 = 3;
      uStack_24 = 0;
      local_20 = 0x200000000;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *(int *)(in_ECX + 0xc) = 0;
      (**(code **)(*piVar2 + 0x40))(piVar2,&local_30,in_ECX + 0xc);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

