// rea decompile_all
// name: FUN_006b63b0
// address: 0x6b63b0
// body: available
// range: 0x6b63b0-0x6b652d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b63b0(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  int extraout_ECX;
  bool bVar6;
  int aiStack_60 [2];
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723f6f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = *(char *)(in_ECX + 0xe0) == '\0';
  if (bVar6) {
    uVar3 = FUN_00637250();
  }
  else {
    uVar3 = FUN_00637250();
  }
  local_8 = (uint)bVar6;
  uVar4 = (**(code **)(*(int *)(in_ECX + -0x84) + 0xb0))();
  aiStack_60[1] = 1;
  aiStack_60[0] = in_ECX + 0xe4;
  local_8 = 2;
  FUN_006e1bb0(uVar3,uVar4);
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      aiStack_60[1] = 0x6b647c;
      FID_conflict__free(piVar5);
    }
  }
  if (bVar6) {
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        aiStack_60[1] = 0x6b64a7;
        FID_conflict__free(piVar5);
      }
    }
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  if ((!bVar6) && (piVar5 = (int *)(local_20 + -8), piVar5 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      aiStack_60[1] = 0x6b64d0;
      FID_conflict__free(piVar5);
    }
  }
  if (*(char *)(in_ECX + 0xe0) == '\0') {
    if (*(char *)(in_ECX + 0xe1) == '\0') {
      aiStack_60[1] = 5;
    }
    else {
      aiStack_60[1] = 6;
    }
  }
  else {
    aiStack_60[1] = 9;
  }
  aiStack_60[0] = 0x6b64f8;
  cVar2 = FUN_006b7db0();
  if (cVar2 != '\0') {
    aiStack_60[1] = 1;
    aiStack_60[0] = extraout_ECX;
    FUN_006e19a0(aiStack_60);
    FUN_006b5f20();
  }
  FUN_006e1b20();
  ExceptionList = local_10;
  return;
}

