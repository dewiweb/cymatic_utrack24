// rea decompile_all
// name: FUN_006240d0
// address: 0x6240d0
// body: available
// range: 0x6240d0-0x6241b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006240d0(void)

{
  int iVar1;
  bool bVar2;
  undefined4 *in_ECX;
  char *pcVar3;
  int *piVar4;
  undefined4 *in_EDX;
  bool bVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071d516;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar3 = (char *)*in_EDX;
  if (*pcVar3 == '\0') {
    FUN_0045c990("Unknown Error",DAT_00c76070 ^ (uint)&stack0xfffffffc);
    pcVar3 = (char *)0x0;
    bVar2 = true;
    bVar5 = false;
  }
  else {
    piVar4 = (int *)(pcVar3 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    bVar2 = false;
    bVar5 = true;
  }
  *in_ECX = pcVar3;
  piVar4 = (int *)(pcVar3 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  if ((bVar5) && (piVar4 = (int *)(pcVar3 + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (bVar2) {
    LOCK();
    iVar1 = iRamfffffff8 + -1;
    UNLOCK();
    bVar5 = iRamfffffff8 == 0;
    iRamfffffff8 = iVar1;
    if (bVar5) {
      FID_conflict__free((void *)0xfffffff8);
    }
  }
  ExceptionList = local_10;
  return;
}

