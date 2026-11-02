// rea decompile_all
// name: FUN_0062ff70
// address: 0x62ff70
// body: available
// range: 0x62ff70-0x6301ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0062ff70(undefined4 *param_1,int *param_2)

{
  FARPROC pFVar1;
  uint uVar2;
  undefined4 *puVar3;
  HMODULE hModule;
  void *_Memory;
  undefined **ppuVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_64 [4];
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 *local_40;
  int local_3c;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  HMODULE local_1c;
  undefined4 *local_18;
  FARPROC local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e4d7;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("MAPI32.dll",uVar2);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00458890();
  hModule = LoadLibraryW((LPCWSTR)*puVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar6 = (int *)(local_14 + -8);
  local_1c = hModule;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_0045c990("MAPISendMail",uVar2);
  pFVar1 = local_14;
  if (hModule == (HMODULE)0x0) {
    local_14 = (FARPROC)0x0;
  }
  else {
    local_14 = GetProcAddress(hModule,(LPCSTR)local_14);
  }
  piVar6 = (int *)(pFVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (local_14 == (FARPROC)0x0) {
    param_2._3_1_ = false;
  }
  else {
    _memset(local_64,0,0x30);
    puVar3 = (undefined4 *)PTR_DAT_00c7ebc8;
    local_60 = PTR_DAT_00c7ebd0;
    puStack_2c = (undefined4 *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    local_34 = 0;
    local_20 = 0;
    local_5c = *param_1;
    piVar6 = (int *)(PTR_DAT_00c7ebc8 + -8);
    local_30 = 1;
    local_18 = (undefined4 *)PTR_DAT_00c7ebc8;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    local_8._0_1_ = 3;
    if (*(char *)puVar3 == '\0') {
      FUN_0045c990(&DAT_00c01cb8);
      piVar6 = (int *)((int)puVar3 + -8);
      local_18 = param_1;
      puVar3 = param_1;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    local_40 = &local_34;
    local_44 = 1;
    local_8 = CONCAT31(local_8._1_3_,4);
    iVar5 = param_2[2];
    puStack_2c = puVar3;
    FID_conflict__free((void *)0x0);
    _Memory = (void *)FUN_004c5556(iVar5,0x18);
    uVar2 = 0;
    local_3c = param_2[2];
    if (0 < local_3c) {
      puVar7 = (undefined4 *)((int)_Memory + 0xc);
      do {
        puVar7[-1] = 0xffffffff;
        if (uVar2 < (uint)param_2[2]) {
          ppuVar4 = (undefined **)(*param_2 + uVar2 * 4);
        }
        else {
          ppuVar4 = &PTR_DAT_00c7ed68;
        }
        uVar2 = uVar2 + 1;
        *puVar7 = *ppuVar4;
        puVar7 = puVar7 + 6;
        hModule = local_1c;
      } while ((int)uVar2 < param_2[2]);
    }
    local_38 = _Memory;
    iVar5 = (*local_14)(0,0,local_64,9,0);
    param_2._3_1_ = iVar5 == 0;
    FID_conflict__free(_Memory);
    piVar6 = puVar3 + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  ExceptionList = local_10;
  return param_2._3_1_;
}

