// rea decompile_all
// name: FUN_006b5f20
// address: 0x6b5f20
// body: available
// range: 0x6b5f20-0x6b60ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b5f20(int param_1,char param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00723eab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (**(char **)(in_ECX + 0x16c) != '\0') {
    local_14 = in_ECX;
    piVar3 = (int *)FUN_00632830(&local_14);
    iVar4 = *piVar3;
    *piVar3 = param_1;
    piVar3 = (int *)(local_14 + -8);
    param_1 = iVar4;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  piVar3 = (int *)(in_ECX + 0x158);
  if ((param_1 != *(int *)(in_ECX + 0x158)) && (iVar4 = FUN_00448730(param_1), iVar4 != 0)) {
    piVar1 = (int *)(param_1 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = param_1;
    UNLOCK();
    piVar1 = (int *)(iVar4 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    if (param_2 != '\0') {
      FUN_006b5cb0();
    }
    FUN_006e81e0(piVar3);
    if (param_3 != 0) {
      piVar3 = (int *)(*(int *)(in_ECX + 0x80) + 0xc);
      LOCK();
      iVar4 = *piVar3;
      if (iVar4 == 0) {
        *piVar3 = 1;
        iVar4 = 0;
      }
      UNLOCK();
      if ((iVar4 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(in_ECX + 0x80) + 0xc) = 0;
        UNLOCK();
      }
      if (param_3 == 2) {
        piVar3 = (int *)(*(int *)(in_ECX + 0x80) + 0xc);
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = 0;
        UNLOCK();
        if (iVar4 != 0) {
          (**(code **)(*(int *)(in_ECX + 0x7c) + 4))();
        }
      }
    }
  }
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

