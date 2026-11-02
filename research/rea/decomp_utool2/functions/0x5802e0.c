// rea decompile_all
// name: FUN_005802e0
// address: 0x5802e0
// body: available
// range: 0x5802e0-0x58042e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005802e0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007127ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_0045c990("A new version of this application is available.\n\nClick here for more information."
               ,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (*(undefined ***)(in_ECX + 0x70) == MainContentComponent::HeadButton::vftable) {
    piVar2 = (int *)(local_14 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *(int *)(in_ECX + 0x74);
    *(int *)(in_ECX + 0x74) = local_14;
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
    *(undefined1 *)(in_ECX + 0xde) = 0;
  }
  else {
    (*(code *)(*(undefined ***)(in_ECX + 0x70))[2])(&local_14);
  }
  local_8 = 0xffffffff;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  *(undefined4 *)(in_ECX + 0xf8) = 100;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (*(int *)(in_ECX + 0xe8) == 0) {
    *(undefined4 *)(in_ECX + 0xe4) = 0x14;
    *(undefined4 *)(in_ECX + 0xe8) = 0x14;
    local_8 = 1;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00(in_ECX + 0xe0);
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = local_10;
  return;
}

