// rea decompile_all
// name: FUN_0063d0b0
// address: 0x63d0b0
// body: available
// range: 0x63d0b0-0x63d136 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063d0b0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *_Memory;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 8));
  piVar2 = *(int **)(in_ECX + 0x20);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(in_ECX + 0x20) = 0;
    FUN_00623b80();
    DeleteCriticalSection((LPCRITICAL_SECTION)((int)piVar2 + 0xe));
    _Memory = (int *)(*piVar2 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    FUN_004bfe14(piVar2,0x28);
  }
  iVar1 = *(int *)(in_ECX + 0x24);
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    FUN_00624040();
    FUN_004bfe14(iVar1,0x28);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 8));
  return;
}

