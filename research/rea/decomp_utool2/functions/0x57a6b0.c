// rea decompile_all
// name: FUN_0057a6b0
// address: 0x57a6b0
// body: available
// range: 0x57a6b0-0x57aa7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0057a8fe) */
/* WARNING: Removing unreachable block (ram,0x0057a90a) */

void FUN_0057a6b0(undefined4 *param_1,undefined1 ***param_2)

{
  undefined1 ***pppuVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 **ppuVar6;
  undefined1 ***pppuStack_78;
  undefined4 uStack_74;
  undefined1 ***pppuStack_70;
  undefined4 **local_28;
  undefined4 local_24;
  undefined1 ***local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 **local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pppuVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712192;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pppuStack_78 = (undefined1 ***)&stack0xffffff94;
  pppuStack_70 = (undefined1 ***)0x0;
  uStack_74 = 0x1000280;
  FUN_006e8e70();
  pppuStack_70 = (undefined1 ***)0x57a6f9;
  FUN_00684a80();
  if (pppuVar1[0x28] == (undefined1 **)0x0) {
    if (((*(byte *)((int)pppuVar1 + 0x69) & 0x10) == 0) && (pppuVar1[3] != (undefined1 **)0x0)) {
      FUN_006e6320();
    }
    pppuStack_70 = (undefined1 ***)&param_2;
    uStack_74 = 0x57a73f;
    FUN_006dbbf0();
    local_8 = 0;
    pppuStack_70 = (undefined1 ***)0x0;
    uStack_74 = 0x1000281;
    pppuStack_78 = (undefined1 ***)&local_18;
    FUN_006e8e70();
    pppuStack_70 = (undefined1 ***)0x57a768;
    FUN_00684d10();
    pppuStack_70 = (undefined1 ***)0x57a777;
    FUN_00684c50();
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    pppuStack_70 = (undefined1 ***)0x57a793;
    (**(code **)(*(int *)*param_1 + 0x68))();
    pppuStack_70 = (undefined1 ***)0x57a7c2;
    FUN_006e6400();
    pppuStack_70 = (undefined1 ***)&local_28;
    uStack_74 = 0x57a7cf;
    FUN_004107c0();
    if (pppuVar1[0x27] == (undefined1 **)0x21) {
      local_18 = &pppuStack_70;
      pppuStack_70 = param_2;
      if (param_2 != (undefined1 ***)0x0) {
        LOCK();
        param_2[1] = (undefined1 **)((int)param_2[1] + 1);
        UNLOCK();
      }
      uStack_74 = 0;
      pppuStack_78 = &local_14;
      local_8._0_1_ = 3;
      FUN_006e25d0();
      local_8._0_1_ = 5;
      uStack_74 = 0x57a843;
      FUN_0057f500();
      local_8._0_1_ = 1;
      ppuVar6 = local_14 + -2;
      if (ppuVar6 != (undefined1 **)&DAT_00bfe124) {
        LOCK();
        puVar2 = *ppuVar6;
        *ppuVar6 = *ppuVar6 + -1;
        UNLOCK();
        if (puVar2 == (undefined1 *)0x0) {
          pppuStack_70 = (undefined1 ***)0x57a86c;
          FID_conflict__free(ppuVar6);
        }
      }
      pppuStack_70 = local_20;
      uStack_74 = local_24;
      pppuStack_78 = (undefined1 ***)local_28;
      cVar3 = FUN_0057e5a0();
      if (cVar3 == '\0') {
        local_14 = (undefined1 **)&DAT_00bfe12c;
        local_8 = CONCAT31(local_8._1_3_,7);
      }
      else {
        pppuStack_70 = &local_14;
        uStack_74 = 0x57a899;
        FUN_006e25d0();
        local_8 = CONCAT31(local_8._1_3_,6);
      }
      pppuStack_70 = (undefined1 ***)0x57a8b6;
      (*(code *)pppuVar1[0x1c][2])();
      ppuVar6 = local_14 + -2;
      if (ppuVar6 != (undefined1 **)&DAT_00bfe124) {
        LOCK();
        puVar2 = *ppuVar6;
        *ppuVar6 = *ppuVar6 + -1;
        UNLOCK();
        if (puVar2 == (undefined1 *)0x0) {
          pppuStack_70 = (undefined1 ***)0x57a8d6;
          FID_conflict__free(ppuVar6);
        }
      }
      local_8 = local_8 & 0xffffff00;
      FUN_00471bf0();
      pppuStack_70 = (undefined1 ***)0x57a8ed;
      FID_conflict__free((void *)0x0);
    }
    else {
      pppuStack_78 = (undefined1 ***)local_28;
      uStack_74 = local_24;
      pppuStack_70 = local_20;
      local_8._0_1_ = 8;
      uVar4 = FUN_006e25d0(&local_14,0);
      iVar5 = 1;
      if (1 < (int)((float)local_1c / (float)param_2[5])) {
        iVar5 = (int)((float)local_1c / (float)param_2[5]);
      }
      local_8._0_1_ = 10;
      FUN_00682290(uVar4,pppuVar1[0x27],iVar5,pppuVar1[0x31]);
      local_8 = (uint)local_8._1_3_ << 8;
      ppuVar6 = local_14 + -2;
      if (ppuVar6 != (undefined1 **)&DAT_00bfe124) {
        LOCK();
        puVar2 = *ppuVar6;
        *ppuVar6 = *ppuVar6 + -1;
        UNLOCK();
        if (puVar2 == (undefined1 *)0x0) {
          pppuStack_70 = (undefined1 ***)0x57aa0a;
          FID_conflict__free(ppuVar6);
        }
      }
    }
    pppuStack_70 = (undefined1 ***)&stack0xffffff94;
    uStack_74 = 0;
    pppuStack_78 = (undefined1 ***)0x1000282;
    FUN_006e8e70(&local_18);
    uStack_74 = 0x57a936;
    FUN_00684d10();
    pppuStack_70 = (undefined1 ***)0x57a93d;
    FUN_00684c50();
    local_8 = 0xffffffff;
    if (param_2 != (undefined1 ***)0x0) {
      LOCK();
      pppuVar1 = param_2 + 1;
      ppuVar6 = *pppuVar1;
      *pppuVar1 = (undefined1 **)((int)*pppuVar1 + -1);
      UNLOCK();
      if (ppuVar6 == (undefined1 **)0x1) {
        pppuStack_70 = (undefined1 ***)0x57a961;
        (*(code *)**param_2)();
      }
    }
  }
  else if (((*(byte *)((int)pppuVar1 + 0x69) & 0x10) == 0) &&
          ((pppuVar1[3] == (undefined1 **)0x0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))) {
    pppuStack_78 = (undefined1 ***)&stack0xffffff94;
    pppuStack_70 = (undefined1 ***)0x0;
    uStack_74 = 0x1000282;
    FUN_006e8e70();
    pppuStack_70 = (undefined1 ***)0x57aa41;
    FUN_00684c50();
  }
  pppuStack_70 = (undefined1 ***)0x57aa4c;
  FUN_006e6400();
  FUN_0040e4d0(&pppuStack_78);
  FUN_00677150();
  ExceptionList = local_10;
  return;
}

