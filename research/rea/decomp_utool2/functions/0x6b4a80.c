// rea decompile_all
// name: FUN_006b4a80
// address: 0x6b4a80
// body: available
// range: 0x6b4a80-0x6b4b86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b4a80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723cd7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0x84);
  if (*piVar1 != *param_1) {
    iVar2 = FUN_0045c1e0(*piVar1);
    if (iVar2 != 0) {
      piVar3 = (int *)(*param_1 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *param_1;
      UNLOCK();
      piVar1 = (int *)(iVar2 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
      if (*(int *)(in_ECX + 0x78) == 0) {
        *(undefined4 *)(in_ECX + 0x74) = 100;
        *(undefined4 *)(in_ECX + 0x78) = 100;
        local_8 = 0;
        if (DAT_00c8a668 == 0) {
          operator_new(0x54);
          DAT_00c8a668 = FUN_004635f0();
        }
        FUN_00463c00();
      }
      else {
        FUN_00463b90();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    }
  }
  ExceptionList = local_10;
  return;
}

