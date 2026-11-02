// rea decompile_all
// name: FUN_00548d30
// address: 0x548d30
// body: available
// range: 0x548d30-0x548e1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00548d30(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  undefined1 uVar4;
  int local_24;
  void *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f75a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045cb50("WAV file",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0062b570(".wav .bwf");
  local_8 = 1;
  cVar2 = FUN_00603360((int *)(in_ECX + 8));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(in_ECX + 8);
    piVar3 = (int *)(iVar1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    cVar2 = FUN_005b5020(iVar1);
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_00548dcf;
    }
  }
  uVar4 = 0;
LAB_00548dcf:
  FUN_0040f7f0();
  FID_conflict__free(local_20);
  piVar3 = (int *)(local_24 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return uVar4;
}

