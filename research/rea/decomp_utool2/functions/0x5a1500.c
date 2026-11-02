// rea decompile_all
// name: FUN_005a1500
// address: 0x5a1500
// body: available
// range: 0x5a1500-0x5a16fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a1500(void)

{
  int *_Memory;
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined8 uVar5;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007162ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040f2d0();
  local_8 = 0;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    *_Memory = *_Memory + 1;
    UNLOCK();
  }
  cVar2 = FUN_005b5020();
  if (cVar2 == '\0') {
    *(undefined4 *)(in_ECX + 0x1f68) = 0;
    *(undefined4 *)(in_ECX + 0x1f6c) = 0;
    FUN_0045c990();
    piVar3 = &local_18;
    local_8._0_1_ = 2;
  }
  else {
    uVar5 = FUN_00612d20();
    *(undefined8 *)(in_ECX + 0x1f68) = uVar5;
    piVar3 = (int *)FUN_00636d50((int)uVar5);
    local_8._0_1_ = 1;
  }
  FUN_006e4900(piVar3);
  local_8._0_1_ = 0;
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if ((*(int *)(in_ECX + 0x1f64) < 0) ||
     ((*(int *)(in_ECX + 0x1f64) < 1 && (*(int *)(in_ECX + 0x1f60) == 0)))) {
    FUN_0045c990();
    local_8._0_1_ = 4;
    FUN_006e4900(&local_18);
    local_8 = (uint)local_8._1_3_ << 8;
    piVar3 = (int *)(local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  else {
    uVar4 = FUN_00636d50(*(int *)(in_ECX + 0x1f60));
    local_8._0_1_ = 3;
    FUN_006e4900(uVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    piVar3 = (int *)(local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_005a1470(&stack0xffffffd4,*(undefined4 *)(in_ECX + 0x1f68),*(undefined4 *)(in_ECX + 0x1f6c))
    ;
  }
  FUN_006e6170(0x1000281);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}

