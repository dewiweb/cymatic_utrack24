// rea decompile_all
// name: FUN_005bcc20
// address: 0x5bcc20
// body: available
// range: 0x5bcc20-0x5bcdc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bcc20(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint in_EDX;
  int local_20;
  int local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071a069;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = (int)&DAT_00bfe12c;
  local_8 = 0;
  local_18[1] = 1;
  if (in_EDX < 0xd) {
    piVar2 = (int *)(*(int *)(&DAT_00c8a87c + in_EDX * 4) + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *in_ECX;
    *in_ECX = *(int *)(&DAT_00c8a87c + in_EDX * 4);
    UNLOCK();
    piVar2 = (int *)(iVar1 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)FUN_00633060(local_18,"{file}");
    iVar1 = *in_ECX;
    *in_ECX = *piVar2;
    *piVar2 = iVar1;
    piVar2 = (int *)(local_18[0] + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    uVar3 = FUN_00631190();
    local_8 = 1;
    FUN_00637690(uVar3);
    FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar2 = (int *)FUN_00633060(local_18,"{ctxid}");
    iVar1 = *in_ECX;
    *in_ECX = *piVar2;
    *piVar2 = iVar1;
    piVar2 = (int *)(local_18[0] + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_1c + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_20 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

