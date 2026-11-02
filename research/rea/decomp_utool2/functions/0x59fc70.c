// rea decompile_all
// name: FUN_0059fc70
// address: 0x59fc70
// body: available
// range: 0x59fc70-0x59fe91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059fc70(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007160d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040ebd0();
  local_8 = 0;
  local_1c = (undefined4 *)0x0;
  local_18 = &DAT_00bfe12c;
  uVar2 = FUN_00410ea0();
  local_8._0_1_ = 2;
  cVar1 = FUN_005a0990(uVar2,in_ECX + 0x8c,&local_1c);
  local_11 = cVar1 == '\0';
  local_8._0_1_ = 1;
  piVar5 = (int *)(local_24 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (local_11 == '\0') {
    FUN_0041cef0();
  }
  else {
    FUN_0059c9c0(local_1c,0x610);
  }
  FUN_0059c7b0();
  if ((*(int *)(in_ECX + 0x40) == 0) && (*(char *)(in_ECX + 0x80) != '\0')) {
    FUN_00636040(&stack0xffffffc8);
    iVar4 = *(int *)(in_ECX + 0x8c);
    piVar5 = (int *)(iVar4 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    puVar3 = (undefined4 *)FUN_0053da90(iVar4);
    local_8._0_1_ = 3;
    local_1c = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00410a10();
      local_8._0_1_ = 5;
      FUN_0059c9c0(7,0x612);
      piVar5 = (int *)(local_24 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    else {
      FUN_0053baf0(in_ECX + 0x88,&PTR_DAT_00c7ed68);
      iVar4 = FUN_005406f0();
      if (iVar4 == 0) {
        FUN_00410a10();
        FUN_0041cef0();
      }
      else {
        FUN_00410a10();
        local_8._0_1_ = 4;
        FUN_0059c9c0(5,0x611);
      }
      FUN_0040ea50();
      (**(code **)*puVar3)();
    }
  }
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_20 + 1;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_20)();
    }
  }
  ExceptionList = local_10;
  return;
}

