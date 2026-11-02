// rea decompile_all
// name: FUN_00591df0
// address: 0x591df0
// body: available
// range: 0x591df0-0x591f6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00591df0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714758;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_006e85c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_006e86d0(3);
  cVar2 = FUN_005b2750();
  if (cVar2 != '\0') {
    uVar4 = FUN_005bdda0();
    local_8 = 0;
    FUN_006e8760(uVar4,4);
    local_8 = 0xffffffff;
    piVar5 = (int *)(local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  cVar2 = FUN_005b2750();
  if (cVar2 != '\0') {
    uVar4 = FUN_005bdda0();
    local_8 = 1;
    FUN_006e8760(uVar4,3);
    local_8 = 0xffffffff;
    piVar5 = (int *)(local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  cVar2 = FUN_005b2750();
  if (cVar2 != '\0') {
    uVar4 = FUN_005bdda0();
    local_8 = 2;
    FUN_006e8760(uVar4,1);
    local_8 = 0xffffffff;
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  if ((iVar3 == 0) || (cVar2 = FUN_005b2750(), cVar2 == '\0')) {
    iVar3 = FUN_0069b570(0);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
    }
  }
  FUN_006e83a0(iVar3,3);
  ExceptionList = local_10;
  return;
}

